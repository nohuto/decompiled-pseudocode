/*
 * XREFs of sub_1405F58AC @ 0x1405F58AC
 * Callers:
 *     sub_140219130 @ 0x140219130 (sub_140219130.c)
 * Callees:
 *     sub_140204B30 @ 0x140204B30 (sub_140204B30.c)
 *     sub_1402058C0 @ 0x1402058C0 (sub_1402058C0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405F55D8 @ 0x1405F55D8 (sub_1405F55D8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1405F58AC(__int64 a1, _QWORD *a2)
{
  int v3; // esi
  _DWORD *Pool2; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rax
  unsigned int v7; // ecx
  __int64 v8; // rbp
  unsigned __int64 v9; // rdi
  unsigned __int8 v10; // al
  struct _KPRCB *v11; // r10
  __int64 v12; // r8
  int v13; // eax
  bool v14; // zf
  __int64 v15; // rcx
  int v16; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v19; // r8
  int v20; // eax
  unsigned int v22; // [rsp+48h] [rbp+10h] BYREF
  __int64 v23; // [rsp+50h] [rbp+18h] BYREF

  *a2 = 0LL;
  v22 = 0;
  v23 = 0LL;
  v3 = sub_1405F55D8(a1, &v22, &v23);
  if ( v3 >= 0 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 48LL, 1950442835LL);
    v5 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 0;
      Pool2[6] = 0;
      v6 = Pool2 + 2;
      v7 = v22;
      v6[1] = v6;
      *v6 = v6;
      v5[5] = v5 + 4;
      v5[4] = v5 + 4;
      v8 = sub_1402058C0(v7);
      v9 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)v8);
      if ( *(_QWORD *)(v8 + 8) == v23 )
      {
        v15 = *(_QWORD *)(v8 + 16);
        if ( v15 )
        {
          v16 = sub_140204B30(v15, v5, 0);
          *a2 = v5;
          v3 = v16;
          v5 = 0LL;
        }
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v8);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v19 = *((_QWORD *)CurrentPrcb + 4375);
              v20 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v14 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
              *(_DWORD *)(v19 + 20) &= v20;
              if ( v14 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
      }
      else
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v8);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v10 = KeGetCurrentIrql();
            if ( v10 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v10 >= 2u )
            {
              v11 = KeGetCurrentPrcb();
              v12 = *((_QWORD *)v11 + 4375);
              v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
              *(_DWORD *)(v12 + 20) &= v13;
              if ( v14 )
                sub_140418E4C((__int64)v11);
            }
          }
        }
        v3 = -1073741275;
      }
      __writecr8(v9);
      if ( v5 )
        ExFreePoolWithTag(v5, 0x74416553u);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)v3;
}
