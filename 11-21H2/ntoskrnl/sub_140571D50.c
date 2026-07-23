/*
 * XREFs of sub_140571D50 @ 0x140571D50
 * Callers:
 *     sub_1405716A4 @ 0x1405716A4 (sub_1405716A4.c)
 * Callees:
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     sub_1402FEDA0 @ 0x1402FEDA0 (sub_1402FEDA0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

ULONG_PTR __fastcall sub_140571D50(__int64 *Argument)
{
  __int64 v1; // r14
  char v3; // cl
  unsigned __int8 CurrentIrql; // r15
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rdi
  int v11; // edx
  bool v12; // zf
  unsigned __int16 v13; // r9
  __int64 v14; // rcx
  _QWORD *v15; // rax
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  __int64 v19; // r8
  int v20; // eax
  ULONG_PTR result; // rax
  signed __int32 v22[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int16 *v23[2]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v24; // [rsp+30h] [rbp-38h]
  int v25; // [rsp+32h] [rbp-36h]
  __int16 v26; // [rsp+36h] [rbp-32h]
  unsigned int v27; // [rsp+70h] [rbp+8h] BYREF

  v1 = *Argument;
  v25 = 0;
  v3 = byte_140D0501B;
  v26 = 0;
  v27 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8((unsigned __int8)byte_140D0501B);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)(v3 - 2) <= 0xDu )
  {
    v5 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v5 + 20) |= (-1LL << (CurrentIrql + 1)) & ((1LL << (v3 + 1)) - 1) & 0xFFFFFFFC;
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)Argument + 2, 0xFFFFFFFF) == 1 && *(_BYTE *)(v1 + 346) )
  {
    v6 = v1 + 8;
    *(_BYTE *)(v1 + 346) = 0;
    v7 = *(_QWORD *)(v1 + 8);
    if ( v7 != v1 + 8 )
    {
      v8 = *(_QWORD **)(v1 + 16);
      if ( *(_QWORD *)(v7 + 8) != v6 || *v8 != v6 )
        goto LABEL_28;
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
    }
    v9 = (_QWORD *)qword_140C2BB90;
    do
    {
      v10 = v9;
      v9 = (_QWORD *)*v9;
    }
    while ( *((_DWORD *)v10 + 4) != *(__int16 *)(v1 + 344) );
    v24 = 0;
    v23[1] = *(unsigned __int16 **)(v1 + 80);
    v23[0] = (unsigned __int16 *)(v1 + 72);
    while ( !(unsigned int)KeEnumerateNextProcessor(&v27, v23) )
    {
      v11 = v27;
      v12 = (*((_DWORD *)v10 + v27 + 72))-- == 1;
      if ( v12 )
        KeAddProcessorAffinityEx((unsigned __int16 *)Argument + 8, v11);
    }
    _InterlockedOr(v22, 0);
    v13 = 0;
    if ( v10 != (_QWORD *)-24LL )
      v13 = *((_WORD *)v10 + 13);
    sub_1402FEDA0((_WORD *)v10 + 12, (char *)Argument + 16, (_BYTE *)v10 + 24, v13);
    if ( !(unsigned int)KeIsEmptyAffinityEx((_WORD *)v10 + 12) )
      goto LABEL_24;
    v14 = *v10;
    v15 = (_QWORD *)v10[1];
    if ( *(_QWORD **)(*v10 + 8LL) == v10 && (_QWORD *)*v15 == v10 )
    {
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      Argument[35] = (__int64)v10;
LABEL_24:
      *((_BYTE *)Argument + 288) = 1;
      goto LABEL_25;
    }
LABEL_28:
    __fastfail(3u);
  }
LABEL_25:
  _InterlockedAdd((volatile signed __int32 *)Argument + 3, 0xFFFFFFFF);
  while ( *((int *)Argument + 3) > 0 )
    _mm_pause();
  CurrentPrcb = KeGetCurrentPrcb();
  if ( (Argument[*((unsigned __int8 *)CurrentPrcb + 208) + 3] & *((_QWORD *)CurrentPrcb + 25)) != 0 )
    sub_14042A5E0((unsigned int)*(__int16 *)(v1 + 344), 0LL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = *((_QWORD *)v18 + 4375);
        v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= v20;
        if ( v12 )
          sub_140418E4C((__int64)v18);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
