/*
 * XREFs of LdrpEnclaveAddForwarderModules @ 0x1800D8CA4
 * Callers:
 *     LdrpLoadEnclaveModule @ 0x1800D8F64 (LdrpLoadEnclaveModule.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x18003C720 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrpParseForwarderDescription @ 0x18007A3C8 (LdrpParseForwarderDescription.c)
 *     LdrpEnclaveAddDependentModule @ 0x1800D8B6C (LdrpEnclaveAddDependentModule.c)
 */

__int64 __fastcall LdrpEnclaveAddForwarderModules(_QWORD *a1)
{
  int v2; // edi
  unsigned __int64 v3; // r14
  NTSTATUS v4; // eax
  char *v5; // rsi
  unsigned int *v6; // rbx
  unsigned int *v7; // rbp
  unsigned __int64 v8; // r15
  ANSI_STRING v10[4]; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v11; // [rsp+80h] [rbp+8h] BYREF
  char *v12; // [rsp+88h] [rbp+10h] BYREF

  v2 = 0;
  v3 = *(_QWORD *)(a1[7] + 48LL);
  v4 = RtlpImageDirectoryEntryToDataEx(v3, 1, 0, &v11, (PIMAGE_NT_HEADERS)&v12);
  v5 = v12;
  if ( v4 < 0 )
    v5 = 0LL;
  if ( v5 )
  {
    v6 = (unsigned int *)(v3 + *((unsigned int *)v5 + 7));
    v7 = &v6[*((unsigned int *)v5 + 5)];
    if ( v6 < v7 )
    {
      v8 = v11;
      do
      {
        if ( v3 + *v6 - (unsigned __int64)v5 < v8 )
        {
          v2 = LdrpParseForwarderDescription((const char *)(v3 + *v6), (__int64)v10, &v12, &v11);
          if ( v2 < 0 )
            break;
          v2 = LdrpEnclaveAddDependentModule(a1, v10);
          if ( v2 < 0 )
            break;
        }
        ++v6;
      }
      while ( v6 < v7 );
    }
  }
  return (unsigned int)v2;
}
