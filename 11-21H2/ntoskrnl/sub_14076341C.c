/*
 * XREFs of sub_14076341C @ 0x14076341C
 * Callers:
 *     sub_14076308C @ 0x14076308C (sub_14076308C.c)
 *     sub_140860758 @ 0x140860758 (sub_140860758.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     sub_140563F5C @ 0x140563F5C (sub_140563F5C.c)
 *     IoSetDeviceInterfaceState @ 0x140769100 (IoSetDeviceInterfaceState.c)
 *     sub_14077DE70 @ 0x14077DE70 (sub_14077DE70.c)
 *     sub_140788E8C @ 0x140788E8C (sub_140788E8C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14076341C(__int64 a1, __int64 a2, char a3)
{
  WCHAR *v3; // rbx
  __int64 v5; // rax
  NTSTATUS v6; // edi
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  PCWSTR SourceString; // [rsp+70h] [rbp+8h] BYREF

  v3 = 0LL;
  SourceString = 0LL;
  DestinationString = 0LL;
  v5 = *(_QWORD *)(a1 + 120);
  v6 = 0;
  if ( !v5 || (v9 = *(_QWORD *)(v5 + 64)) == 0 || (*(_DWORD *)(v9 + 8) & 1) == 0 || *(_BYTE *)(a2 + 36) == a3 )
  {
LABEL_10:
    *(_BYTE *)(a2 + 36) = a3;
    goto LABEL_11;
  }
  v10 = sub_14077DE70(*(_QWORD *)(a2 + 16), 0x7FFFFFFFLL, 1466986064LL, &SourceString);
  v3 = (WCHAR *)SourceString;
  v6 = v10;
  if ( v10 >= 0 )
  {
    LOBYTE(v12) = 1;
    v6 = sub_140788E8C(v11, SourceString, v12);
    if ( v6 >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, v3);
      v6 = IoSetDeviceInterfaceState(&DestinationString, a3);
      if ( v6 >= 0 )
      {
        if ( (byte_140C0DD4C & 2) != 0 )
          sub_140563F5C(v14, v13, v15, *(const wchar_t **)(a1 + 8), *(const wchar_t **)(a1 + 16), v3, a3);
        goto LABEL_10;
      }
    }
  }
LABEL_11:
  if ( v3 )
    ExFreePoolWithTag(v3, 0x57706E50u);
  return (unsigned int)v6;
}
