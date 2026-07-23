/*
 * XREFs of sub_14020EC24 @ 0x14020EC24
 * Callers:
 *     sub_14020E6EC @ 0x14020E6EC (sub_14020E6EC.c)
 *     sub_14020E9E8 @ 0x14020E9E8 (sub_14020E9E8.c)
 *     sub_1403DAC1C @ 0x1403DAC1C (sub_1403DAC1C.c)
 * Callees:
 *     sub_14020EE7C @ 0x14020EE7C (sub_14020EE7C.c)
 *     sub_14020EFEC @ 0x14020EFEC (sub_14020EFEC.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_14022BA48 @ 0x14022BA48 (sub_14022BA48.c)
 *     sub_140291EB8 @ 0x140291EB8 (sub_140291EB8.c)
 *     sub_140292818 @ 0x140292818 (sub_140292818.c)
 *     sub_140292884 @ 0x140292884 (sub_140292884.c)
 *     sub_140292A04 @ 0x140292A04 (sub_140292A04.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     sub_140344DD0 @ 0x140344DD0 (sub_140344DD0.c)
 *     KeFirstGroupAffinityEx @ 0x14035C9C0 (KeFirstGroupAffinityEx.c)
 *     sub_14035D0F8 @ 0x14035D0F8 (sub_14035D0F8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14062DAE4 @ 0x14062DAE4 (sub_14062DAE4.c)
 *     sub_14062E5D0 @ 0x14062E5D0 (sub_14062E5D0.c)
 */

int __fastcall sub_14020EC24(__int64 a1, __int64 a2, _WORD *a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v4; // rsi
  int v7; // r13d
  __int64 v8; // rcx
  __int64 v9; // r14
  unsigned int v10; // r12d
  __int64 v11; // rbx
  char v12; // r12
  int v13; // r8d
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  int result; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // eax
  int v23; // eax
  __int64 v24; // rax
  unsigned int v25; // [rsp+30h] [rbp-30h]
  unsigned int v26; // [rsp+34h] [rbp-2Ch]
  __int64 v27; // [rsp+38h] [rbp-28h] BYREF
  __int64 v28; // [rsp+40h] [rbp-20h] BYREF
  __int128 v29; // [rsp+48h] [rbp-18h] BYREF
  __int16 v30; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v31; // [rsp+A8h] [rbp+48h]
  int v32; // [rsp+B8h] [rbp+58h] BYREF

  v31 = a2;
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v30 = 0;
  v32 = 0;
  v29 = 0LL;
  v7 = 0;
  while ( 1 )
  {
    v8 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v8 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v22 = *(_DWORD *)(v8 + 24);
        *(_DWORD *)(v8 + 24) = v22 + 1;
        if ( v22 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
      break;
    v21 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v21 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v23 = *(_DWORD *)(v21 + 24) - 1;
        *(_DWORD *)(v21 + 24) = v23;
        if ( !v23 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    do
      sub_1402F32E0(&v32);
    while ( *(_QWORD *)(a1 + 64) );
  }
  v25 = *(_DWORD *)(a1 + 588);
  v26 = *(_DWORD *)(a1 + 196);
  sub_140300030(*(_QWORD *)(a1 + 552), *(unsigned __int16 *)(*(_QWORD *)(a1 + 552) + 2LL), a3);
  v9 = *(unsigned int *)(a1 + 196);
  v10 = *(_DWORD *)(a1 + 196);
  v11 = qword_140D088C0[v9];
  if ( !(unsigned __int8)sub_140291EB8(a3, v11) )
  {
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0);
    KeFirstGroupAffinityEx(&v29, a3);
    v30 = *(unsigned __int8 *)(v11 + 209);
    v9 = (unsigned __int16)sub_14020EFEC(a1, &v29, v11, &v30);
    *(_DWORD *)(a1 + 196) = v9;
    v10 = v9;
    v11 = qword_140D088C0[v9];
    *(_WORD *)(a1 + 560) = *(unsigned __int8 *)(v11 + 208);
  }
  if ( (*(_DWORD *)(a1 + 116) & 8) != 0 )
  {
    v14 = v27;
  }
  else
  {
    v12 = sub_140344DD0(a1, &v27, &v28);
    sub_140300030(*(_QWORD *)(a1 + 576), *(unsigned __int16 *)(*(_QWORD *)(a1 + 576) + 2LL), a3);
    if ( !(unsigned int)sub_140292884(a1) )
    {
      *(_DWORD *)(a1 + 588) = v9;
      *(_WORD *)(a1 + 584) = *(unsigned __int8 *)(v11 + 208);
      sub_140292A04(a1);
      sub_140292818(v11, a1);
    }
    LOBYTE(v13) = v12;
    v14 = v27;
    v15 = v28;
    v7 = sub_14020EE7C(a1, *(_QWORD *)(a1 + 576), v13, v27, v28, v31);
    sub_14035D0F8(v16, v14, v15);
    v10 = *(_DWORD *)(a1 + 196);
  }
  v17 = *(_DWORD *)(a1 + 588);
  result = sub_140224100(a1);
  if ( v7 )
  {
    v20 = *(unsigned int *)(v14 + 36);
    result = HIDWORD(KeGetPcr()[1].LockArray);
    if ( result != (_DWORD)v20 )
    {
      LOBYTE(v19) = 2;
      result = sub_14022BA48(v20, v19);
    }
  }
  if ( _bittest((const signed __int32 *)&xmmword_140D06910, 0x1Bu) )
    result = sub_14062DAE4(a1, 1350LL, v25, v17);
  if ( _bittest((const signed __int32 *)&xmmword_140D06910, 0x1Bu) )
    result = sub_14062DAE4(a1, 1351LL, v26, v10);
  if ( (WORD2(xmmword_140D06900) & 0x1000) != 0 )
  {
    v24 = *(unsigned __int16 *)(a1 + 560);
    WORD4(v29) = v24;
    if ( (unsigned __int16)v24 < *a3 )
      v4 = *(_QWORD *)&a3[4 * v24 + 4];
    *(_QWORD *)&v29 = v4;
    return sub_14062E5D0(a1, &v29);
  }
  return result;
}
