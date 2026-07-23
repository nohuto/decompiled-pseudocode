/*
 * XREFs of sub_1402DBCA8 @ 0x1402DBCA8
 * Callers:
 *     sub_1402DBA28 @ 0x1402DBA28 (sub_1402DBA28.c)
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_140761A2C @ 0x140761A2C (sub_140761A2C.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 *__fastcall sub_1402DBCA8(ULONG_PTR BugCheckParameter2, int a2)
{
  PVOID *v3; // rsi
  KIRQL v5; // al
  __int64 *v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 *v9; // rax
  unsigned __int8 v11; // al
  struct _KPRCB *v12; // rax
  __int64 v13; // r9
  int v14; // edx
  bool v15; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v18; // r8
  int v19; // eax

  v3 = 0LL;
  v5 = ExAcquireSpinLockExclusive(&dword_140C4F4A4);
  v6 = (__int64 *)qword_140C4F480;
  v7 = v5;
  while ( 1 )
  {
    if ( v6 == &qword_140C4F480 )
      goto LABEL_9;
    v3 = (PVOID *)v6;
    if ( BugCheckParameter2 == v6[2] )
      break;
    v6 = (__int64 *)*v6;
  }
  if ( a2 )
  {
    v8 = *v6;
    v9 = (__int64 *)v6[1];
    if ( *(__int64 **)(*v6 + 8) != v6 || (__int64 *)*v9 != v6 )
      __fastfail(3u);
    *v9 = v8;
    *(_QWORD *)(v8 + 8) = v9;
LABEL_9:
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F4A4);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = *((_QWORD *)CurrentPrcb + 4375);
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
          v15 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
          *(_DWORD *)(v18 + 20) &= v19;
          if ( v15 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    if ( a2 )
    {
      if ( v6 == &qword_140C4F480 )
        KeBugCheckEx(0x1Au, 0x1011uLL, BugCheckParameter2, 0LL, 0LL);
      ExFreePoolWithTag(v3[5], 0);
      ExFreePoolWithTag(v3, 0);
    }
    return 0LL;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F4A4);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v11 = KeGetCurrentIrql();
      if ( v11 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v11 >= 2u )
      {
        v12 = KeGetCurrentPrcb();
        v13 = *((_QWORD *)v12 + 4375);
        v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        v15 = (v14 & *(_DWORD *)(v13 + 20)) == 0;
        *(_DWORD *)(v13 + 20) &= v14;
        if ( v15 )
          sub_140418E4C(v12);
      }
    }
  }
  __writecr8(v7);
  return v6;
}
