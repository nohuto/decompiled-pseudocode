/*
 * XREFs of sub_140343BA0 @ 0x140343BA0
 * Callers:
 *     sub_140343B00 @ 0x140343B00 (sub_140343B00.c)
 *     sub_14045E1C0 @ 0x14045E1C0 (sub_14045E1C0.c)
 * Callees:
 *     sub_1402D990C @ 0x1402D990C (sub_1402D990C.c)
 *     sub_1402FEDA0 @ 0x1402FEDA0 (sub_1402FEDA0.c)
 *     sub_1402FF090 @ 0x1402FF090 (sub_1402FF090.c)
 *     sub_140345190 @ 0x140345190 (sub_140345190.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeFindFirstSetRightAffinityEx @ 0x14056C1B0 (KeFindFirstSetRightAffinityEx.c)
 */

__int64 sub_140343BA0()
{
  __int64 v0; // rbx
  int v2; // eax
  __int64 *v3; // rcx
  _DWORD v4[68]; // [rsp+30h] [rbp-128h] BYREF

  memset(&v4[2], 0, 0x100uLL);
  sub_1402FF090((unsigned __int16 *)&qword_140C1C9A0, qword_140C1CAA8);
  v0 = *((unsigned int *)KeGetCurrentPrcb() + 9);
  if ( !(unsigned int)KeCheckProcessorAffinityEx(&qword_140C1C9A0, v0) )
  {
    v4[0] = 2097153;
    memset(&v4[1], 0, 0x104uLL);
    sub_1402D990C((unsigned __int16 *)v4);
    v2 = sub_1402FEDA0(&qword_140C1C9A0, (char *)v4, v4, HIWORD(v4[0]));
    v3 = (__int64 *)v4;
    if ( !v2 )
      v3 = &qword_140C1C9A0;
    LOWORD(v0) = KeFindFirstSetRightAffinityEx(v3);
  }
  if ( !qword_140C20438 )
    word_140C20402 = v0 + 2048;
  return sub_140345190((ULONG_PTR)&unk_140C20400, 0);
}
