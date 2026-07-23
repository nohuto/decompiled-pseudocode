/*
 * XREFs of sub_140636A64 @ 0x140636A64
 * Callers:
 *     sub_140635B80 @ 0x140635B80 (sub_140635B80.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140460E30 @ 0x140460E30 (sub_140460E30.c)
 *     sub_140460FAC @ 0x140460FAC (sub_140460FAC.c)
 *     sub_140636A30 @ 0x140636A30 (sub_140636A30.c)
 */

__int64 __fastcall sub_140636A64(__int64 a1, __int16 a2, __int64 *a3)
{
  unsigned __int64 v4; // r10
  unsigned int v5; // eax
  unsigned int v6; // ecx
  __int64 v7; // r8
  __int64 v8; // r12
  __int16 v9; // r11
  __int64 v10; // rsi
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // r14
  int v16; // eax
  unsigned __int8 v17; // al
  unsigned __int8 v18; // r14
  struct _KPRCB *v19; // r10
  __int64 v20; // r9
  int v21; // eax
  bool v22; // zf
  unsigned __int8 v23; // al
  unsigned __int8 v24; // bl
  struct _KPRCB *v25; // r10
  __int64 v26; // r9
  int v27; // eax
  PSLIST_ENTRY v28; // rax
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v30; // bl
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v32; // r8
  int v33; // eax
  unsigned __int8 v34; // al
  unsigned __int8 v35; // di
  struct _KPRCB *v36; // r9
  __int64 v37; // r8
  int v38; // eax
  __int64 *v39; // rax
  unsigned __int8 v41; // [rsp+70h] [rbp+48h] BYREF
  unsigned __int16 v42; // [rsp+78h] [rbp+50h]
  __int64 *v43; // [rsp+80h] [rbp+58h]
  int v44; // [rsp+88h] [rbp+60h]

  v43 = a3;
  v4 = (unsigned int)*(_QWORD *)(a1 + 8);
  v5 = ((unsigned int)v4 >> 13) & 0x3FFFF;
  _BitScanReverse(&v6, v5);
  v7 = *((_QWORD *)KeGetCurrentPrcb() + 4310);
  v8 = 0LL;
  v9 = a2 + 8;
  v41 = 0;
  v10 = 0LL;
  v11 = 1 << v6;
  v12 = v6 - 2;
  v44 = v12;
  v13 = *(_QWORD *)(*(_QWORD *)(v7 + 8 * v12) + 8LL * (v5 ^ v11) + 8) + 8 * ((v4 >> 4) & 0x1FF);
  v42 = 7 - ((v9 - 1) & 7) + v9;
  while ( (unsigned int)sub_140460FAC((volatile signed __int32 *)v13, &v41) )
  {
    v14 = *(_QWORD *)(v13 + 8);
    if ( v14 )
      goto LABEL_7;
    if ( v10 )
    {
      if ( !*(_DWORD *)(v13 + 120) )
      {
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v13);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
        {
          v30 = v41;
          if ( v41 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v32 = *((_QWORD *)CurrentPrcb + 4375);
            v30 = v41;
            v33 = ~(unsigned __int16)(-1LL << (v41 + 1));
            v22 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
            *(_DWORD *)(v32 + 20) &= v33;
            if ( v22 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
        else
        {
          v30 = v41;
        }
        __writecr8(v30);
        goto LABEL_49;
      }
      *(_QWORD *)(v13 + 8) = v10;
      v14 = v10;
      v10 = 0LL;
LABEL_7:
      v15 = *(int *)(v14 + 60);
      v16 = v15 + v42;
      if ( v16 <= *(_DWORD *)(v14 + 64) )
      {
        *(_DWORD *)(v14 + 60) = v16;
        ++*(_DWORD *)(v14 + 56);
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 + 48)) <= 1 )
          __fastfail(0xEu);
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v13);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v34 = KeGetCurrentIrql(), v34 <= 0xFu) )
        {
          v35 = v41;
          if ( v41 <= 0xFu && v34 >= 2u )
          {
            v36 = KeGetCurrentPrcb();
            v37 = *((_QWORD *)v36 + 4375);
            v35 = v41;
            v38 = ~(unsigned __int16)(-1LL << (v41 + 1));
            v22 = (v38 & *(_DWORD *)(v37 + 20)) == 0;
            *(_DWORD *)(v37 + 20) &= v38;
            if ( v22 )
              sub_140418E4C((__int64)v36);
          }
        }
        else
        {
          v35 = v41;
        }
        __writecr8(v35);
        v8 = v15 + v14 + 72;
        *(_WORD *)(v8 + 4) = v42;
        v39 = v43;
        *(_DWORD *)v8 = v15;
        *v39 = v14;
        break;
      }
      *(_QWORD *)(v13 + 8) = 0LL;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v13);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v17 = KeGetCurrentIrql(), v17 <= 0xFu) )
      {
        v18 = v41;
        if ( v41 <= 0xFu && v17 >= 2u )
        {
          v19 = KeGetCurrentPrcb();
          v20 = *((_QWORD *)v19 + 4375);
          v18 = v41;
          v21 = ~(unsigned __int16)(-1LL << (v41 + 1));
          v22 = (v21 & *(_DWORD *)(v20 + 20)) == 0;
          *(_DWORD *)(v20 + 20) &= v21;
          if ( v22 )
            sub_140418E4C((__int64)v19);
        }
      }
      else
      {
        v18 = v41;
      }
      __writecr8(v18);
      sub_140636A30(a1, v14);
    }
    else
    {
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v13);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v23 = KeGetCurrentIrql(), v23 <= 0xFu) )
      {
        v24 = v41;
        if ( v41 <= 0xFu && v23 >= 2u )
        {
          v25 = KeGetCurrentPrcb();
          v26 = *((_QWORD *)v25 + 4375);
          v24 = v41;
          v27 = ~(unsigned __int16)(-1LL << (v41 + 1));
          v22 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
          *(_DWORD *)(v26 + 20) &= v27;
          if ( v22 )
            sub_140418E4C((__int64)v25);
        }
      }
      else
      {
        v24 = v41;
      }
      __writecr8(v24);
      v28 = sub_140460E30(a1, a1 + 624);
      v10 = (__int64)v28;
      if ( !v28 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v13 + 316));
        return v8;
      }
      *((_DWORD *)&v28[3].Next + 3) = 0;
      *((_DWORD *)&v28[3].Next + 2) = 0;
      v28[3].Next = (_SLIST_ENTRY *)1;
    }
  }
  if ( !v10 )
    return v8;
LABEL_49:
  sub_140636A30(a1, v10);
  return v8;
}
