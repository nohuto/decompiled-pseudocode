/*
 * XREFs of sub_140849690 @ 0x140849690
 * Callers:
 *     sub_140849940 @ 0x140849940 (sub_140849940.c)
 *     sub_1409893F0 @ 0x1409893F0 (sub_1409893F0.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     sub_14029394C @ 0x14029394C (sub_14029394C.c)
 *     sub_140293A88 @ 0x140293A88 (sub_140293A88.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_1402FEC10 @ 0x1402FEC10 (sub_1402FEC10.c)
 *     sub_1402FEDA0 @ 0x1402FEDA0 (sub_1402FEDA0.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_1403CE6F8 @ 0x1403CE6F8 (sub_1403CE6F8.c)
 *     sub_1403CF1A0 @ 0x1403CF1A0 (sub_1403CF1A0.c)
 *     KeQueryActiveProcessorAffinity2 @ 0x1403CF350 (KeQueryActiveProcessorAffinity2.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140543480 @ 0x140543480 (sub_140543480.c)
 *     sub_14081A3AC @ 0x14081A3AC (sub_14081A3AC.c)
 *     sub_14081ACB4 @ 0x14081ACB4 (sub_14081ACB4.c)
 *     sub_140848BE8 @ 0x140848BE8 (sub_140848BE8.c)
 *     sub_14084983C @ 0x14084983C (sub_14084983C.c)
 */

void __fastcall sub_140849690(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rax
  unsigned int v6; // edx
  unsigned int v7; // [rsp+20h] [rbp-E0h] BYREF
  int v8; // [rsp+24h] [rbp-DCh] BYREF
  unsigned __int16 *v9[2]; // [rsp+28h] [rbp-D8h] BYREF
  __int16 v10; // [rsp+38h] [rbp-C8h]
  int v11; // [rsp+3Ah] [rbp-C6h]
  __int16 v12; // [rsp+3Eh] [rbp-C2h]
  unsigned __int16 *v13[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v14; // [rsp+50h] [rbp-B0h]
  int v15; // [rsp+52h] [rbp-AEh]
  __int16 v16; // [rsp+56h] [rbp-AAh]
  _QWORD v17[34]; // [rsp+60h] [rbp-A0h] BYREF

  v11 = 0;
  v12 = 0;
  v7 = 0;
  v8 = 0;
  LODWORD(v17[0]) = 2097153;
  memset((char *)v17 + 4, 0, 0x104uLL);
  if ( a1
    || (sub_140224E90((struct _KTHREAD **)&qword_140C22FE0),
        KeQueryActiveProcessorAffinity2((__int64)v17),
        (unsigned __int8)sub_1402FEDA0(v17, (char *)word_140C0B8E0, v17, WORD1(v17[0]))) )
  {
    sub_1402FEC10((char *)word_140C0B8E0, v17, word_140C0B8E0, word_140C0B8E2);
    if ( !(unsigned int)KeIsEmptyAffinityEx(v17) )
    {
      v9[1] = (unsigned __int16 *)v17[1];
      v9[0] = (unsigned __int16 *)v17;
      v10 = 0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v7, v9) )
      {
        v2 = sub_140348800(v7);
        sub_14084983C(v2 + 33968, v3, v4);
      }
      sub_140293A88((__int64)v17, (__int64)sub_1403C1E30, 0LL, 0LL);
    }
    sub_1403CE6F8();
    if ( _bittest64((const signed __int64 *)KeGetCurrentPrcb() + 4404, 0x27u) )
    {
      dword_140C23B14 |= 0x400u;
      v8 |= 0x400u;
      sub_14081ACB4(&v8, 0LL);
    }
    sub_14081A3AC();
    sub_1403CF1A0();
    v15 = 0;
    v16 = 0;
    v7 = 0;
    if ( *((_DWORD *)KeGetCurrentPrcb() + 8456) == 1 && sub_140543480() && !byte_140D06990 )
    {
      sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
      v13[1] = (unsigned __int16 *)qword_140C0B8E8[0];
      v14 = 0;
      v13[0] = (unsigned __int16 *)word_140C0B8E0;
      while ( !(unsigned int)KeEnumerateNextProcessor(&v7, v13) )
      {
        v5 = sub_140348800(v7);
        v6 = dword_140D05044;
        if ( dword_140D05044 == -1 )
          v6 = dword_140D05068;
        *(_QWORD *)(v5 + 34104) = sub_14029394C(v6, 0xF4240uLL, 1000000LL * *(unsigned int *)(v5 + 68));
      }
      dword_140D050C0 = 0;
      byte_140D06990 = 1;
      sub_140848BE8(1);
    }
  }
  else
  {
    sub_140224C00(&qword_140C22FE0);
  }
}
