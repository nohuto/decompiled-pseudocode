/*
 * XREFs of sub_1409D59E8 @ 0x1409D59E8
 * Callers:
 *     sub_1409D4090 @ 0x1409D4090 (sub_1409D4090.c)
 *     sub_1409D7F04 @ 0x1409D7F04 (sub_1409D7F04.c)
 * Callees:
 *     IoSetThreadHardErrorMode @ 0x1402A0800 (IoSetThreadHardErrorMode.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407103B0 @ 0x1407103B0 (sub_1407103B0.c)
 */

__int64 __fastcall sub_1409D59E8(__int64 a1, void *a2, unsigned int a3)
{
  __int64 v4; // rdi
  BOOLEAN v6; // bp
  int v7; // ebx
  unsigned int v8; // eax
  _DWORD v10[4]; // [rsp+30h] [rbp-248h] BYREF
  void *v11[66]; // [rsp+40h] [rbp-238h] BYREF

  v10[0] = 0;
  v4 = a3;
  memset(v11, 0, sizeof(v11));
  v6 = IoSetThreadHardErrorMode(0);
  v7 = sub_1407103B0(*(char **)(a1 + 8), (__int64)v11, 0x210u, v10);
  if ( v7 >= 0 )
  {
    memset(a2, 0, (unsigned int)v4);
    v8 = LOWORD(v11[0]);
    if ( LOWORD(v11[0]) >= (unsigned __int64)(v4 - 2) )
      v8 = v4 - 2;
    memmove(a2, v11[1], v8);
    v7 = 0;
  }
  IoSetThreadHardErrorMode(v6);
  return (unsigned int)v7;
}
