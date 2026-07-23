/*
 * XREFs of sub_14081ACB4 @ 0x14081ACB4
 * Callers:
 *     sub_140808958 @ 0x140808958 (sub_140808958.c)
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 *     sub_140849690 @ 0x140849690 (sub_140849690.c)
 *     sub_140849940 @ 0x140849940 (sub_140849940.c)
 * Callees:
 *     sub_140293A88 @ 0x140293A88 (sub_140293A88.c)
 *     sub_1402FEC10 @ 0x1402FEC10 (sub_1402FEC10.c)
 *     sub_1403B488C @ 0x1403B488C (sub_1403B488C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int16 __fastcall sub_14081ACB4(_WORD *a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rax
  __int64 *v5; // r14
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 *v8; // rsi
  unsigned int i; // ebx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  _DWORD v16[4]; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v17[68]; // [rsp+30h] [rbp-D0h] BYREF

  v16[0] = 0;
  memset(&v17[2], 0, 0x100uLL);
  LOWORD(CurrentPrcb) = dword_140C23B14 & *a1;
  v5 = &off_140C03040[534 * dword_140C232CC];
  LOWORD(v16[0]) = (_WORD)CurrentPrcb;
  if ( !a2 && (v16[0] & 0x400) != 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    if ( _bittest64((const signed __int64 *)CurrentPrcb + 4404, 0x27u) )
    {
      v13 = __readmsr(0xDB0u);
      v14 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( *((_BYTE *)v5 + 160) )
        v14 = v13 | 1;
      LOWORD(CurrentPrcb) = v14;
      __writemsr(0xDB0u, v14);
    }
  }
  v16[0] &= ~0x400u;
  if ( LOWORD(v16[0]) )
  {
    v6 = (unsigned int)(10000 * *((_DWORD *)v5 + 15));
    if ( v6 <= DesiredTime )
    {
      v7 = 0LL;
    }
    else
    {
      v6 -= DesiredTime;
      v7 = v6 / 0x2710;
    }
    dword_140C23AB0 = v7;
    if ( !qword_140C23B20 || (LODWORD(CurrentPrcb) = sub_14042A5E0(v6, v7), (int)CurrentPrcb >= 0) )
    {
      if ( a2 )
      {
        v8 = *(__int64 **)a2;
      }
      else
      {
        a2 = qword_140D06970;
        v8 = &qword_140D06970;
      }
      v17[0] = 2097153;
      memset(&v17[1], 0, 0x104uLL);
      while ( (__int64 *)a2 != v8 )
      {
        sub_1402FEC10((char *)(a2 + 24), v17, v17, HIWORD(v17[0]));
        for ( i = 0; i < *(_DWORD *)(a2 + 296); ++i )
        {
          v10 = *(_QWORD *)(a2 + 312) + 136LL * i;
          if ( !*(_DWORD *)(v10 + 16) )
            sub_1403B488C(a2, (_QWORD *)v10, v16, (__int64)(v5 + 5));
        }
        a2 = *(_QWORD *)a2;
      }
      sub_140293A88((__int64)&unk_140C0BBF0, (__int64)sub_1403B4860, (__int64)v16, (__int64)(v5 + 5));
      LOWORD(CurrentPrcb) = qword_140C23B30;
      if ( qword_140C23B30 )
        LOWORD(CurrentPrcb) = sub_14042A5E0(v12, v11);
    }
  }
  return (__int16)CurrentPrcb;
}
