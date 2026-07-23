/*
 * XREFs of sub_14081D304 @ 0x14081D304
 * Callers:
 *     sub_14081D0F0 @ 0x14081D0F0 (sub_14081D0F0.c)
 *     sub_140A2F964 @ 0x140A2F964 (sub_140A2F964.c)
 *     sub_140A2FB0C @ 0x140A2FB0C (sub_140A2FB0C.c)
 *     sub_140A2FC40 @ 0x140A2FC40 (sub_140A2FC40.c)
 *     sub_140A2FD74 @ 0x140A2FD74 (sub_140A2FD74.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_1406D5A30 @ 0x1406D5A30 (sub_1406D5A30.c)
 */

NTSTATUS __fastcall sub_14081D304(__int64 a1, void *a2, __int64 a3, int a4, int *a5, ULONG a6)
{
  int v6; // ebx
  int *v8; // r9
  ULONG v9; // eax
  NTSTATUS result; // eax
  const WCHAR *v11; // rdx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  int v13; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  v13 = 0;
  if ( a4 )
  {
    if ( a4 == 5 )
    {
      if ( a6 == 2 )
      {
        v13 = *(unsigned __int16 *)a5;
        goto LABEL_11;
      }
    }
    else
    {
      if ( a4 != 17 )
      {
        v8 = a5;
        v9 = a6;
        return sub_1406D5A30(a2, *(const WCHAR **)(a3 + 16), *(_DWORD *)(a3 + 24), v8, v9);
      }
      if ( a6 == 1 )
      {
        LOBYTE(v6) = *(_BYTE *)a5 == 0xFF;
        v13 = v6;
LABEL_11:
        v9 = 4;
        v8 = &v13;
        return sub_1406D5A30(a2, *(const WCHAR **)(a3 + 16), *(_DWORD *)(a3 + 24), v8, v9);
      }
    }
    return -1073741811;
  }
  else
  {
    v11 = *(const WCHAR **)(a3 + 16);
    DestinationString = 0LL;
    result = RtlInitUnicodeStringEx(&DestinationString, v11);
    if ( result >= 0 )
      result = ZwDeleteValueKey(a2, &DestinationString);
    if ( result == -1073741772 )
      return -1073741275;
  }
  return result;
}
