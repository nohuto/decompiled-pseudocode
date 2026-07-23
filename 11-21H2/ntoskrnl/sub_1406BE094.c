/*
 * XREFs of sub_1406BE094 @ 0x1406BE094
 * Callers:
 *     sub_1406BD3A8 @ 0x1406BD3A8 (sub_1406BD3A8.c)
 *     sub_140A2B950 @ 0x140A2B950 (sub_140A2B950.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     ZwDeleteValueKey @ 0x14041D2E0 (ZwDeleteValueKey.c)
 *     sub_14077FC64 @ 0x14077FC64 (sub_14077FC64.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 */

__int64 __fastcall sub_1406BE094(__int64 a1, const WCHAR *a2, __int64 a3, _DWORD *a4, __int64 a5, int a6, __int64 a7)
{
  _DWORD *v7; // r15
  unsigned int v8; // ebx
  __int64 v9; // rsi
  int v11; // edi
  int v12; // eax
  unsigned int v13; // ecx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+88h] [rbp+48h] BYREF

  v7 = (_DWORD *)a7;
  v8 = 0;
  v9 = a5;
  KeyHandle = 0LL;
  *a4 = 0;
  *v7 = 0;
  if ( v9 )
    v11 = a6;
  else
    v11 = 0;
  v12 = sub_14078014C(a1, 13LL, &KeyHandle);
  if ( v12 < 0 )
  {
    return (unsigned int)v12;
  }
  else
  {
    LODWORD(a7) = v11;
    v13 = sub_14077FC64(KeyHandle, (__int64)&a7);
    if ( v13 == -1073741772 || v13 == -1073741444 )
    {
      return (unsigned int)-1073741275;
    }
    else if ( !v13 || v13 == -1073741789 )
    {
      DestinationString = 0LL;
      if ( RtlInitUnicodeStringEx(&DestinationString, a2) >= 0 )
        ZwDeleteValueKey(KeyHandle, &DestinationString);
    }
    else
    {
      return v13;
    }
  }
  return v8;
}
