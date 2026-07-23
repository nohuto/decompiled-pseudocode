/*
 * XREFs of sub_1407635A4 @ 0x1407635A4
 * Callers:
 *     sub_1406619F8 @ 0x1406619F8 (sub_1406619F8.c)
 *     sub_140763800 @ 0x140763800 (sub_140763800.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140563F5C @ 0x140563F5C (sub_140563F5C.c)
 *     IoSetDeviceInterfaceState @ 0x140769100 (IoSetDeviceInterfaceState.c)
 *     sub_14077DE70 @ 0x14077DE70 (sub_14077DE70.c)
 *     sub_140788E8C @ 0x140788E8C (sub_140788E8C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407635A4(__int64 a1, char a2)
{
  __int64 *v2; // r14
  __int64 *v4; // rdi
  WCHAR *v5; // rbx
  NTSTATUS v6; // esi
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  PCWSTR SourceString; // [rsp+70h] [rbp+8h] BYREF

  v2 = (__int64 *)(a1 + 184);
  v4 = *(__int64 **)(a1 + 184);
  v5 = 0LL;
  v6 = 0;
  SourceString = 0LL;
  DestinationString = 0LL;
  if ( v4 == (__int64 *)(a1 + 184) )
    return (unsigned int)v6;
  while ( !*((_BYTE *)v4 + 36) )
  {
LABEL_10:
    v4 = (__int64 *)*v4;
    if ( v4 == v2 )
      goto LABEL_11;
  }
  v9 = sub_14077DE70(v4[2], 0x7FFFFFFFLL, 1466986064LL, &SourceString);
  v5 = (WCHAR *)SourceString;
  v6 = v9;
  if ( v9 >= 0 )
  {
    LOBYTE(v11) = 1;
    v6 = sub_140788E8C(v10, SourceString, v11);
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, v5);
      v6 = IoSetDeviceInterfaceState(&DestinationString, a2);
      if ( v6 >= 0 )
      {
        if ( (byte_140C0DD4C & 2) != 0 )
          sub_140563F5C(v13, v12, v14, *(const wchar_t **)(a1 + 8), *(const wchar_t **)(a1 + 16), v5, a2);
        ExFreePoolWithTag(v5, 0x57706E50u);
        v5 = 0LL;
        SourceString = 0LL;
        goto LABEL_10;
      }
    }
  }
LABEL_11:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x57706E50u);
  return (unsigned int)v6;
}
