/*
 * XREFs of sub_140A18E64 @ 0x140A18E64
 * Callers:
 *     sub_140A19614 @ 0x140A19614 (sub_140A19614.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140A14988 @ 0x140A14988 (sub_140A14988.c)
 *     sub_140A19B28 @ 0x140A19B28 (sub_140A19B28.c)
 */

__int64 __fastcall sub_140A18E64(wchar_t **a1, __int64 a2)
{
  int v4; // eax
  int v5; // ebx
  CHAR v7[256]; // [rsp+30h] [rbp-118h] BYREF

  memset(v7, 0, sizeof(v7));
  v4 = sub_140A19B28(v7, a2);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v5 = sub_140A14988(a1, v7);
    if ( v5 >= 0 )
      return 0;
    goto LABEL_4;
  }
  if ( v4 != -1073741275 && v4 != -1073741701 )
LABEL_4:
    sub_1406E0C3C(1LL, (__int64)"AslpFileGetExportName");
  return (unsigned int)v5;
}
