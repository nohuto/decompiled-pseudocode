/*
 * XREFs of sub_140247FBC @ 0x140247FBC
 * Callers:
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_1403CB264 @ 0x1403CB264 (sub_1403CB264.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140247FBC(ULONG_PTR *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdi
  int v11; // eax
  unsigned __int64 v12; // rax
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r10
  __int64 v15; // r9
  int v16; // eax
  bool v17; // zf
  int v18; // esi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v21; // r8
  int v22; // eax
  unsigned __int64 v23; // [rsp+48h] [rbp+10h] BYREF

  v23 = a2;
  v4 = a2;
  if ( dword_140C4F514 && a1 == &StartContext )
  {
    v7 = qword_140C4F518;
    if ( (qword_140C4F520 & 1) != 0 )
    {
      if ( !qword_140C4F518 )
        return 1LL;
      v7 = (unsigned __int64)&qword_140C4F518 ^ qword_140C4F518;
    }
    if ( !v7 )
      return 1LL;
    v8 = ExAcquireSpinLockShared(&dword_140C4F510);
    if ( dword_140C4F514 )
    {
      v9 = qword_140C4F538;
      if ( qword_140C4F538 )
      {
        if ( !(unsigned int)sub_1403CB264(&v23, qword_140C4F538) )
          goto LABEL_16;
        v9 = 0LL;
      }
      v10 = v4 & 0xFFFFFFFFFFFFFE00uLL;
      if ( qword_140C4F540 != v10 )
      {
        v9 = qword_140C4F518;
        if ( (qword_140C4F520 & 1) != 0 && qword_140C4F518 )
          v9 = (unsigned __int64)&qword_140C4F518 ^ qword_140C4F518;
        v18 = qword_140C4F520 & 1;
        while ( v9 )
        {
          v11 = sub_1403CB264(&v23, v9);
          if ( v11 >= 0 )
          {
            if ( v11 <= 0 )
              break;
            v12 = *(_QWORD *)(v9 + 8);
          }
          else
          {
            v12 = *(_QWORD *)v9;
          }
          if ( v18 && v12 )
            v9 ^= v12;
          else
            v9 = v12;
        }
        if ( v9 )
          qword_140C4F538 = v9;
        else
          qword_140C4F540 = v10;
      }
LABEL_16:
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4F510);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v21 = *((_QWORD *)CurrentPrcb + 4375);
            v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v17 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
            *(_DWORD *)(v21 + 20) &= v22;
            if ( v17 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v8);
      return !v9;
    }
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4F510);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v13 = KeGetCurrentIrql();
        if ( v13 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v13 >= 2u )
        {
          v14 = KeGetCurrentPrcb();
          v15 = *((_QWORD *)v14 + 4375);
          v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v17 = (v16 & *(_DWORD *)(v15 + 20)) == 0;
          *(_DWORD *)(v15 + 20) &= v16;
          if ( v17 )
            sub_140418E4C(v14);
          v4 = v23;
        }
      }
    }
    __writecr8(v8);
  }
  if ( a3 == -1LL )
    return v4 < qword_140C4F5D0;
  else
    return v4 < a3;
}
