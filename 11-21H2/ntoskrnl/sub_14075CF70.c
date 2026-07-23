/*
 * XREFs of sub_14075CF70 @ 0x14075CF70
 * Callers:
 *     sub_14075B270 @ 0x14075B270 (sub_14075B270.c)
 * Callees:
 *     sub_1402D88AC @ 0x1402D88AC (sub_1402D88AC.c)
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     wcsrchr @ 0x1403E34B0 (wcsrchr.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 */

__int64 __fastcall sub_14075CF70(const wchar_t *a1, _WORD *a2, unsigned int a3, _WORD *a4, __int64 a5, _WORD *a6)
{
  wchar_t *v10; // rax
  int v11; // ebx
  const wchar_t *v12; // r11
  __int64 v13; // r8
  wchar_t *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // r11
  wchar_t Str[264]; // [rsp+30h] [rbp-258h] BYREF

  *a2 = 0;
  Str[0] = 0;
  *a6 = 0;
  *a4 = 0;
  v10 = wcsrchr(a1, 0x5Cu);
  if ( v10 )
  {
    v11 = sub_1402D88AC(a2, a3, (__int64)a1, v10 - a1 + 1);
    if ( v11 < 0 )
      goto LABEL_12;
  }
  else
  {
    v12 = a1;
  }
  v13 = (__int64)(v12 + 1);
  if ( *v12 != 92 )
    v13 = (__int64)v12;
  v11 = sub_1402E0200(Str, 261LL, v13);
  if ( v11 < 0 )
    goto LABEL_12;
  v14 = wcsrchr(Str, 0x2Eu);
  v15 = (__int64)v14;
  if ( v14 )
  {
    v11 = sub_1402D88AC(a4, 260LL, (__int64)Str, v14 - Str);
    if ( v11 >= 0 )
    {
      a4[v16] = 0;
      v11 = sub_1402E0200(a6, 260LL, v15);
      if ( v11 >= 0 )
        return 0;
    }
LABEL_12:
    sub_1406E0C3C(1LL, (__int64)"AslPathSplit");
    return (unsigned int)v11;
  }
  v11 = sub_1402E0200(a4, 260LL, (__int64)Str);
  if ( v11 < 0 )
    goto LABEL_12;
  return 0;
}
