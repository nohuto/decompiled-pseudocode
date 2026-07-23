/*
 * XREFs of sub_1403B423C @ 0x1403B423C
 * Callers:
 *     sub_14081AA90 @ 0x14081AA90 (sub_14081AA90.c)
 *     sub_1409DE1A0 @ 0x1409DE1A0 (sub_1409DE1A0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14081AB2C @ 0x14081AB2C (sub_14081AB2C.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1403B423C(int a1, _QWORD *a2, unsigned int *a3)
{
  KIRQL v6; // al
  unsigned int v7; // ebp
  unsigned __int64 v8; // rsi
  PVOID PoolWithTag; // rax
  void *v10; // rdi
  _UNKNOWN **v11; // rdx
  _DWORD *v12; // r8
  unsigned int v13; // ebx
  int v14; // r9d
  unsigned int v15; // ebx
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  __int64 v19; // r8
  int v20; // eax
  bool v21; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v24; // r8
  int v25; // eax

  KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  v6 = KeAcquireSpinLockRaiseToDpc(&qword_140C16660);
  v7 = dword_140C547BC;
  v8 = v6;
  if ( dword_140C547BC )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * (unsigned int)dword_140C547BC, 0x70696D57u);
    v10 = PoolWithTag;
    if ( PoolWithTag )
    {
      v11 = (_UNKNOWN **)off_140C04398;
      v12 = PoolWithTag;
      v13 = 0;
      while ( v11 != &off_140C04398 )
      {
        v14 = (*((int *)v11 + 12) >> 4) & 0xF00000;
        if ( (v14 & a1) != 0 && ((_DWORD)v11[6] & 0x40000000) != 0 && v11[2] && v13 < v7 )
        {
          _InterlockedIncrement((volatile signed __int32 *)v11 + 12);
          *(_QWORD *)v12 = v11;
          v12[2] = v14;
          v12 += 4;
          ++v13;
        }
        v11 = (_UNKNOWN **)*v11;
      }
      KeReleaseSpinLockFromDpcLevel(&qword_140C16660);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v24 = *((_QWORD *)CurrentPrcb + 4375);
            v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
            v21 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
            *(_DWORD *)(v24 + 20) &= v25;
            if ( v21 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v8);
      KeReleaseMutex(&Object, 0);
      if ( v13 )
      {
        *a3 = v13;
        v15 = 0;
        *a2 = v10;
      }
      else
      {
        v15 = -1073741632;
        sub_14081AB2C(v10);
      }
      return v15;
    }
    v15 = -1073741670;
  }
  else
  {
    v15 = -1073741632;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C16660);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = *((_QWORD *)v18 + 4375);
        v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= v20;
        if ( v21 )
          sub_140418E4C(v18);
      }
    }
  }
  __writecr8(v8);
  KeReleaseMutex(&Object, 0);
  return v15;
}
