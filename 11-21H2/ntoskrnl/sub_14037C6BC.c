/*
 * XREFs of sub_14037C6BC @ 0x14037C6BC
 * Callers:
 *     sub_14037A5F0 @ 0x14037A5F0 (sub_14037A5F0.c)
 *     sub_14037A8BC @ 0x14037A8BC (sub_14037A8BC.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_14037ADB8 @ 0x14037ADB8 (sub_14037ADB8.c)
 *     sub_14037C880 @ 0x14037C880 (sub_14037C880.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14037C6BC(__int64 a1, __int64 a2, KIRQL a3, int a4)
{
  __int64 **v4; // rbx
  volatile LONG *v6; // rbp
  KIRQL v7; // si
  int v9; // r14d
  __int64 *v10; // rdx
  __int64 *v11; // rdi
  __int64 result; // rax
  int v13; // esi
  unsigned __int64 v14; // rsi
  __int64 v15; // rdx
  unsigned __int64 *v16; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // r9
  int v20; // eax
  bool v21; // zf
  __int64 *v22; // rcx
  __int64 v23; // r8
  struct _EX_RUNDOWN_REF *v24; // rax
  struct _KPRCB *v25; // r9
  __int64 v26; // r8

  v4 = (__int64 **)(a1 + 96);
  v6 = (volatile LONG *)(a1 + 112);
  v7 = a3;
  if ( a3 == 0xFF )
    v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 112));
  while ( 1 )
  {
    v9 = 0;
    if ( !a4 && (*v4[1] & 0xFFFFFFFFFFFFFFF8uLL) < 0x80 )
      v9 = 4;
    v10 = v4[1];
    if ( v10 == (__int64 *)v4 )
    {
      v11 = 0LL;
    }
    else
    {
      v11 = *v4;
      *v4 = (__int64 *)(**v4 & 0xFFFFFFFFFFFFFFF8uLL);
      if ( v11 == v10 )
      {
        *v4 = 0LL;
        v4[1] = (__int64 *)v4;
      }
      else
      {
        *v10 = *v10 & 7 | (8 * (((unsigned __int64)*v10 >> 3) - 1));
      }
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v19 = *((_QWORD *)CurrentPrcb + 4375);
          v20 = ~(unsigned __int16)(-1LL << (v7 + 1));
          v21 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
          *(_DWORD *)(v19 + 20) &= v20;
          if ( v21 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    result = v7;
    __writecr8(v7);
    if ( !v11 )
      break;
    v13 = sub_14037C880(a2, (int)v11 + 24, 1, *(_DWORD *)(v11[13] + 6016) & 0x3FF, (__int64)v11, v11[4], v9);
    if ( v13 < 0 )
    {
      if ( v13 == -1073741739 )
      {
        v14 = ExAcquireSpinLockExclusive(v6);
        v15 = ((unsigned __int64)*v4[1] >> 3) + 1;
        *v11 = (unsigned __int64)*v4 | *(_DWORD *)v11 & 7;
        v16 = (unsigned __int64 *)v4[1];
        *v4 = v11;
        if ( v16 == (unsigned __int64 *)v4 )
        {
          v4[1] = v11;
          v16 = (unsigned __int64 *)v11;
        }
        *v16 = *(_DWORD *)v16 & 7 | (unsigned __int64)(8 * v15);
        ExReleaseSpinLockExclusiveFromDpcLevel(v6);
        result = (unsigned int)dword_140D06B08;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            result = KeGetCurrentIrql();
            if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v14 <= 0xFu && (unsigned __int8)result >= 2u )
            {
              v25 = KeGetCurrentPrcb();
              result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v14 + 1));
              v26 = *((_QWORD *)v25 + 4375);
              v21 = ((unsigned int)result & *(_DWORD *)(v26 + 20)) == 0;
              *(_DWORD *)(v26 + 20) &= result;
              if ( v21 )
                result = sub_140418E4C(v25);
            }
          }
        }
        __writecr8(v14);
        return result;
      }
      MmUnmapLockedPages(*(PVOID *)(*(_QWORD *)v11[2] + 24LL), *(PMDL *)v11[2]);
      v22 = (__int64 *)v11[4];
      v23 = *v22;
      *(_DWORD *)v22 = v13;
      *(_QWORD *)(v11[4] + 8) = 0LL;
      sub_14037ADB8((__int64)v22, v11, v23, v11[4]);
      v24 = (struct _EX_RUNDOWN_REF *)sub_14035F5E8(a2, *(_DWORD *)(v11[13] + 6016) & 0x3FF);
      sub_1402AD030(v24 + 1);
      ExFreePoolWithTag(v11, 0);
    }
    v7 = ExAcquireSpinLockExclusive(v6);
  }
  return result;
}
