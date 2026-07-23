/*
 * XREFs of sub_140571A40 @ 0x140571A40
 * Callers:
 *     sub_14057158C @ 0x14057158C (sub_14057158C.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_1402FEC10 @ 0x1402FEC10 (sub_1402FEC10.c)
 *     sub_1402FEDA0 @ 0x1402FEDA0 (sub_1402FEDA0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

ULONG_PTR __fastcall sub_140571A40(__int64 *Argument)
{
  __int64 v1; // rsi
  char v3; // cl
  unsigned __int8 CurrentIrql; // r12
  unsigned int v5; // r15d
  __int64 v6; // r10
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  unsigned __int16 v14; // r9
  __int64 v15; // rbx
  unsigned __int16 v16; // r9
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int8 v18; // al
  struct _KPRCB *v19; // r9
  __int64 v20; // r8
  int v21; // eax
  bool v22; // zf
  ULONG_PTR result; // rax
  signed __int32 v24[12]; // [rsp+0h] [rbp-50h] BYREF
  unsigned __int16 *v25[2]; // [rsp+30h] [rbp-20h] BYREF
  __int16 v26; // [rsp+40h] [rbp-10h]
  int v27; // [rsp+42h] [rbp-Eh]
  __int16 v28; // [rsp+46h] [rbp-Ah]
  unsigned int v29; // [rsp+90h] [rbp+40h] BYREF
  int v30; // [rsp+98h] [rbp+48h] BYREF
  __int64 v31; // [rsp+A0h] [rbp+50h]

  v1 = *Argument;
  v27 = 0;
  v3 = byte_140D0501B;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v31 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8((unsigned __int8)byte_140D0501B);
  v5 = (unsigned __int8)v31 + 1;
  if ( dword_140D06B08
    && ((unsigned __int8)dword_140D06B08 & (unsigned __int8)v5) != 0
    && CurrentIrql <= 0xFu
    && (unsigned __int8)(v3 - 2) <= 0xDu )
  {
    v6 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v6 + 20) |= (-1LL << ((unsigned __int8)v5 + CurrentIrql)) & (((unsigned __int64)v5 << ((unsigned __int8)v5 + v3))
                                                                           - v5) & 0xFFFFFFFC;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Argument + 2, 0xFFFFFFFF) == 1 )
  {
    if ( *(_BYTE *)(v1 + 346) )
    {
      *((_BYTE *)Argument + 288) = 0;
      goto LABEL_9;
    }
    v7 = *(_QWORD *)(v1 + 24);
    v8 = (_QWORD *)(v1 + 8);
    *(_BYTE *)(v1 + 346) = v5;
    if ( v7 )
    {
      v9 = *(_QWORD **)(v7 + 32);
      v10 = v7 + 24;
      if ( *v9 != v10 )
        goto LABEL_30;
      *v8 = v10;
      *(_QWORD *)(v1 + 16) = v9;
      *v9 = v8;
      *(_QWORD *)(v10 + 8) = v8;
    }
    else
    {
      v11 = (_QWORD *)qword_140C2BB88;
      if ( *(__int64 **)qword_140C2BB88 != &qword_140C2BB80 )
        goto LABEL_30;
      *v8 = &qword_140C2BB80;
      *(_QWORD *)(v1 + 16) = v11;
      *v11 = v8;
      qword_140C2BB88 = v1 + 8;
    }
    v12 = qword_140C2BB90;
    if ( (__int64 *)qword_140C2BB90 != &qword_140C2BB90 )
    {
      while ( *(_DWORD *)(v12 + 16) != *(__int16 *)(v1 + 344) )
      {
        v12 = *(_QWORD *)v12;
        if ( (__int64 *)v12 == &qword_140C2BB90 )
          goto LABEL_20;
      }
      goto LABEL_22;
    }
LABEL_20:
    v12 = Argument[35];
    Argument[35] = 0LL;
    *(_DWORD *)(v12 + 16) = *(__int16 *)(v1 + 344);
    *(_QWORD *)(v12 + 24) = 2097153LL;
    memset((void *)(v12 + 32), 0, 0x100uLL);
    v13 = qword_140C2BB90;
    if ( *(__int64 **)(qword_140C2BB90 + 8) == &qword_140C2BB90 )
    {
      *(_QWORD *)v12 = qword_140C2BB90;
      *(_QWORD *)(v12 + 8) = &qword_140C2BB90;
      *(_QWORD *)(v13 + 8) = v12;
      qword_140C2BB90 = v12;
LABEL_22:
      v26 = 0;
      v25[1] = *(unsigned __int16 **)(v1 + 80);
      v25[0] = (unsigned __int16 *)(v1 + 72);
      while ( !(unsigned int)KeEnumerateNextProcessor(&v29, v25) )
        ++*(_DWORD *)(v12 + 4LL * v29 + 288);
      v14 = 0;
      if ( Argument != (__int64 *)-16LL )
        v14 = *((_WORD *)Argument + 9);
      v15 = v12 + 24;
      sub_1402FEDA0((_WORD *)(v1 + 72), (char *)v15, (_BYTE *)Argument + 16, v14);
      _InterlockedOr(v24, 0);
      v16 = 0;
      if ( v15 )
        v16 = *(_WORD *)(v15 + 2);
      sub_1402FEC10((char *)v15, (_WORD *)(v1 + 72), (_BYTE *)v15, v16);
      LOBYTE(v5) = 1;
      *((_BYTE *)Argument + 288) = 1;
      goto LABEL_9;
    }
LABEL_30:
    __fastfail(3u);
  }
LABEL_9:
  _InterlockedAdd((volatile signed __int32 *)Argument + 3, 0xFFFFFFFF);
  while ( *((int *)Argument + 3) > 0 )
    _mm_pause();
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (Argument[*((unsigned __int8 *)CurrentPrcb + 208) + 3] & *((_QWORD *)CurrentPrcb + 25)) != 0 )
  {
    v30 = 1718767691;
    sub_14042A5E0((unsigned int)*(__int16 *)(v1 + 344), &v30);
    v31 = _InterlockedExchange64((volatile __int64 *)(v1 + 336), v31);
  }
  if ( dword_140D06B08 )
  {
    if ( ((unsigned __int8)dword_140D06B08 & (unsigned __int8)v5) != 0 )
    {
      v18 = KeGetCurrentIrql();
      if ( v18 <= 0xFu && CurrentIrql <= 0xFu && v18 >= 2u )
      {
        v19 = KeGetCurrentPrcb();
        v20 = *((_QWORD *)v19 + 4375);
        v21 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + CurrentIrql));
        v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
        *(_DWORD *)(v20 + 20) &= v21;
        if ( v22 )
          sub_140418E4C((__int64)v19);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
