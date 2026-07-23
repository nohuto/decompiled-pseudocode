/*
 * XREFs of sub_14039DC8C @ 0x14039DC8C
 * Callers:
 *     sub_14039DB6C @ 0x14039DB6C (sub_14039DB6C.c)
 * Callees:
 *     HvlInvokeFastExtendedHypercall @ 0x14039DD80 (HvlInvokeFastExtendedHypercall.c)
 *     sub_14039DE18 @ 0x14039DE18 (sub_14039DE18.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140459C44 @ 0x140459C44 (sub_140459C44.c)
 */

void __fastcall sub_14039DC8C(__int128 *a1, char a2, __int64 a3, unsigned int a4, __int64 a5, int a6)
{
  __int64 v8; // xmm1_8
  ULONG v9; // eax
  __int128 v10; // [rsp+40h] [rbp-88h] BYREF
  __int64 v11; // [rsp+50h] [rbp-78h]
  _BYTE v12[88]; // [rsp+58h] [rbp-70h] BYREF

  if ( (_BYTE)a3 )
  {
    v8 = *((_QWORD *)a1 + 2);
    v10 = *a1;
    v11 = v8;
    v9 = (dword_140D0688C >> 13) & 1;
    if ( !v9 )
      *((_QWORD *)&v10 + 1) |= 8uLL;
    LOBYTE(a3) = v9;
    sub_14039DE18(a4, a5, a3, v12);
    HvlInvokeFastExtendedHypercall(65539, (unsigned int)&v10, 8 * a6 + 24, 0, 0);
  }
  if ( a2 )
    sub_140459C44(a5, a4);
}
