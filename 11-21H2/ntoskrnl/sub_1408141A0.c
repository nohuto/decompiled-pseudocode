/*
 * XREFs of sub_1408141A0 @ 0x1408141A0
 * Callers:
 *     sub_1406ECE0C @ 0x1406ECE0C (sub_1406ECE0C.c)
 *     sub_1406EE2AC @ 0x1406EE2AC (sub_1406EE2AC.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406EFB84 @ 0x1406EFB84 (sub_1406EFB84.c)
 *     sub_140814244 @ 0x140814244 (sub_140814244.c)
 */

__int64 __fastcall sub_1408141A0(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // rax
  __int64 v4; // r10
  unsigned __int16 v5; // cx
  int v7; // eax
  _OWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF

  memset(v8, 0, sizeof(v8));
  if ( !a2 )
    return sub_140814244(a1, v8);
  v3 = sub_1406EFB84(a2, 1);
  if ( !v3 )
  {
    v7 = v8[0];
    if ( *(int *)(v4 + 72) >= 0 )
      v7 = *(_DWORD *)(v4 + 72);
    LODWORD(v8[0]) = v7;
    return sub_140814244(a1, v8);
  }
  v5 = 4 * *v3 - 4;
  if ( v5 <= 0x20u )
  {
    memmove(v8, v3 + 2, v5);
    return sub_140814244(a1, v8);
  }
  return 3221225485LL;
}
