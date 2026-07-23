/*
 * XREFs of sub_140292884 @ 0x140292884
 * Callers:
 *     sub_14020E464 @ 0x14020E464 (sub_14020E464.c)
 *     sub_14020EC24 @ 0x14020EC24 (sub_14020EC24.c)
 *     sub_14020F360 @ 0x14020F360 (sub_14020F360.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_14035C1C0 @ 0x14035C1C0 (sub_14035C1C0.c)
 *     sub_1403D3170 @ 0x1403D3170 (sub_1403D3170.c)
 * Callees:
 *     sub_14020EFEC @ 0x14020EFEC (sub_14020EFEC.c)
 *     sub_140292818 @ 0x140292818 (sub_140292818.c)
 *     sub_140292A04 @ 0x140292A04 (sub_140292A04.c)
 *     KeIsEqualAffinityEx @ 0x140292B10 (KeIsEqualAffinityEx.c)
 *     sub_140292B8C @ 0x140292B8C (sub_140292B8C.c)
 *     sub_140292BA4 @ 0x140292BA4 (sub_140292BA4.c)
 *     sub_1402FF140 @ 0x1402FF140 (sub_1402FF140.c)
 *     KeCountSetBitsAffinityEx @ 0x1402FFAC0 (KeCountSetBitsAffinityEx.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     KeCheckProcessorAffinityEx @ 0x140345D30 (KeCheckProcessorAffinityEx.c)
 *     KeFirstGroupAffinityEx @ 0x14035C9C0 (KeFirstGroupAffinityEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140292884(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // r15
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rcx
  __int128 v11; // [rsp+28h] [rbp-E0h] BYREF
  _DWORD v12[68]; // [rsp+38h] [rbp-D0h] BYREF

  v11 = 0LL;
  memset(&v12[2], 0, 0x100uLL);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 544);
  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    v5 = sub_140292B8C(&qword_140D06A00);
  }
  else
  {
    do
    {
      v4 = sub_140292B8C(&qword_140D06A00);
      v12[0] = 2097153;
      v5 = v4;
      memset(&v12[1], 0, 0x104uLL);
      sub_140300030(v12, 32LL, *(_QWORD *)(a1 + 552));
      if ( (unsigned int)KeCountSetBitsAffinityEx(v12) > 1 )
      {
        sub_140292BA4(a1, v12);
        if ( !(unsigned int)sub_1402FF140(*(_QWORD *)(a1 + 552), v12, v12, HIWORD(v12[0])) )
          sub_140300030(v12, HIWORD(v12[0]), *(_QWORD *)(a1 + 552));
      }
      v6 = *(_QWORD *)(a1 + 576);
      if ( !(unsigned int)KeIsEqualAffinityEx(v6, v12) )
      {
        sub_140300030(v6, *(unsigned __int16 *)(v6 + 2), v12);
        v8 = *(unsigned int *)(a1 + 196);
        v9 = qword_140D088C0[v8];
        if ( !(unsigned int)KeCheckProcessorAffinityEx(*(_QWORD *)(a1 + 576), v8) )
        {
          KeFirstGroupAffinityEx(&v11, v12);
          v8 = (unsigned __int16)sub_14020EFEC(a1, (__int64)&v11, v9, v3 + 2 * (WORD4(v11) + 322LL));
        }
        v10 = qword_140D088C0[v8];
        *(_DWORD *)(a1 + 588) = v8;
        *(_WORD *)(a1 + 584) = *(unsigned __int8 *)(v10 + 208);
        *(_WORD *)(a1 + 560) = *(unsigned __int8 *)(v10 + 208);
        sub_140292818(v10, a1);
        sub_140292A04(a1);
        v2 = 1;
      }
    }
    while ( qword_140D06A00 != v5 );
  }
  *(_QWORD *)(a1 + 568) = v5;
  return v2;
}
