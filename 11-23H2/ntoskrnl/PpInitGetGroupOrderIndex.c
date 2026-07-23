/*
 * XREFs of PpInitGetGroupOrderIndex @ 0x140B3E124
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x14068C35C (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopInitializeBootDrivers @ 0x140B3CEB4 (IopInitializeBootDrivers.c)
 * Callees:
 *     IopGetRegistryValue @ 0x14068CE78 (IopGetRegistryValue.c)
 *     RtlEqualUnicodeString @ 0x1406DA320 (RtlEqualUnicodeString.c)
 *     PnpRegSzToString @ 0x1407C248C (PnpRegSzToString.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int16 __fastcall PpInitGetGroupOrderIndex(void *a1)
{
  _WORD *v1; // rbx
  unsigned int v2; // edx
  _WORD *v3; // rcx
  unsigned __int16 v4; // si
  wchar_t *v5; // rax
  UNICODE_STRING String1; // [rsp+20h] [rbp-18h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)(&String1.MaximumLength + 1) = 0;
  P = 0LL;
  if ( !PiInitGroupOrderTable )
    return -1;
  if ( !a1 )
    return PiInitGroupOrderTableCount + 1;
  if ( IopGetRegistryValue(a1, L"Group", 0, &P) < 0 )
    return PiInitGroupOrderTableCount;
  v1 = P;
  if ( *((_DWORD *)P + 1) != 1 || (v2 = *((_DWORD *)P + 3)) == 0 )
  {
    ExFreePoolWithTag(P, 0);
    return PiInitGroupOrderTableCount;
  }
  v3 = (char *)P + *((unsigned int *)P + 2);
  LODWORD(P) = 0;
  PnpRegSzToString(v3, v2, (int *)&P);
  v4 = 0;
  String1.MaximumLength = v1[6];
  v5 = (_WORD *)((char *)v1 + *((unsigned int *)v1 + 2));
  String1.Length = (unsigned __int16)P;
  for ( String1.Buffer = v5; v4 < (unsigned __int16)PiInitGroupOrderTableCount; ++v4 )
  {
    if ( RtlEqualUnicodeString(&String1, (PCUNICODE_STRING)PiInitGroupOrderTable + v4, 1u) )
      break;
  }
  ExFreePoolWithTag(v1, 0);
  return v4;
}
