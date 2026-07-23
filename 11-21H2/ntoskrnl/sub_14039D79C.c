/*
 * XREFs of sub_14039D79C @ 0x14039D79C
 * Callers:
 *     sub_14039DB6C @ 0x14039DB6C (sub_14039DB6C.c)
 * Callees:
 *     sub_14039D8F0 @ 0x14039D8F0 (sub_14039D8F0.c)
 *     sub_14039DE18 @ 0x14039DE18 (sub_14039DE18.c)
 *     HvlInvokeHypercall @ 0x14039DF00 (HvlInvokeHypercall.c)
 *     sub_14039DF90 @ 0x14039DF90 (sub_14039DF90.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14054E120 @ 0x14054E120 (sub_14054E120.c)
 *     sub_14054F91C @ 0x14054F91C (sub_14054F91C.c)
 */

__int64 __fastcall sub_14039D79C(__int64 a1, char a2, char a3, unsigned int a4, __int64 a5, unsigned int a6)
{
  char v9; // bp
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // r8
  __int64 v14; // xmm1_8
  __int64 v16; // xmm1_8
  char v17; // [rsp+20h] [rbp-98h]
  __int64 v18; // [rsp+28h] [rbp-90h]
  __int128 v19; // [rsp+30h] [rbp-88h] BYREF
  __int64 v20; // [rsp+40h] [rbp-78h]
  __int64 v21; // [rsp+48h] [rbp-70h]
  __int64 v22; // [rsp+50h] [rbp-68h] BYREF

  v9 = 1;
  v10 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  LODWORD(v21) = 0;
  v11 = sub_14039DF90(&v19, 1LL, &v22, 24LL, a2);
  v12 = v11;
  if ( a6 > 0x1FD || (v19 & 2) != 0 )
  {
    if ( a3 )
    {
      v10 = 2LL;
      v16 = *(_QWORD *)(a1 + 16);
      *(_OWORD *)v11 = *(_OWORD *)a1;
      *(_QWORD *)(v11 + 16) = v16;
    }
  }
  else
  {
    v13 = dword_140D0688C >> 13;
    LOBYTE(v13) = (dword_140D0688C & 0x2000) != 0;
    sub_14039DE18(a4, a5, v13, v11 + 24);
    if ( a3 )
    {
      v14 = *(_QWORD *)(a1 + 16);
      *(_OWORD *)v12 = *(_OWORD *)a1;
      LODWORD(v18) = 3;
      *(_QWORD *)(v12 + 16) = v14;
      HIDWORD(v18) = a6 & 0xFFF;
      v10 = v18;
      if ( (dword_140D0688C & 0x2000) == 0 )
        *(_QWORD *)(v12 + 8) |= 8uLL;
    }
    v9 = 0;
  }
  if ( v17 )
  {
    if ( v9 )
      sub_14054E120();
    else
      sub_14054F91C(v21, v12, a6, 24LL);
  }
  if ( a3 )
    HvlInvokeHypercall(v10, v21, 0LL);
  return sub_14039D8F0(&v19);
}
