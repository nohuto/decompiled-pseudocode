/*
 * XREFs of sub_14055802C @ 0x14055802C
 * Callers:
 *     IoGetSfioStreamIdentifier @ 0x140459D40 (IoGetSfioStreamIdentifier.c)
 *     IoAllocateSfioStreamIdentifier @ 0x1405573D0 (IoAllocateSfioStreamIdentifier.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_1402A38B4 @ 0x1402A38B4 (sub_1402A38B4.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14055802C(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, char a5)
{
  unsigned int v5; // ebx
  __int64 result; // rax
  _QWORD *v10; // rdi
  KSPIN_LOCK *v11; // r15
  unsigned __int64 v12; // r14
  _QWORD *v13; // rax
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  __int64 v16; // r9
  int v17; // eax
  bool v18; // zf
  _QWORD *Pool2; // r14
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v22; // r8
  int v23; // eax
  unsigned __int8 v24; // al
  struct _KPRCB *v25; // r10
  __int64 v26; // r9
  int v27; // edx
  unsigned __int64 v28; // r12
  _QWORD *v29; // rax
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  int v32; // eax
  __int64 v33; // r8
  _QWORD *v34; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v35[8]; // [rsp+38h] [rbp-40h] BYREF

  v5 = 0;
  v35[0] = 0LL;
  v34 = 0LL;
  result = sub_1402A38B4(a1, 4u, 0x10u, a5, &v34, v35);
  if ( (int)result < 0 )
    goto LABEL_47;
  v10 = v34;
  if ( !v34 )
  {
LABEL_46:
    result = 0LL;
LABEL_47:
    *a4 = 0LL;
    return result;
  }
  v11 = (KSPIN_LOCK *)(a1 + 184);
  v12 = KeAcquireSpinLockRaiseToDpc(v11);
  v13 = (_QWORD *)*v10;
  if ( !*v10 )
  {
    v10[1] = v10;
    v13 = v10;
    *v10 = v10;
  }
  while ( v13 != v10 )
  {
    if ( v13[3] == a3 )
    {
      if ( a5 )
      {
        *a4 = 0LL;
        KeReleaseSpinLockFromDpcLevel(v11);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v22 = *((_QWORD *)CurrentPrcb + 4375);
              v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
              v18 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
              *(_DWORD *)(v22 + 20) &= v23;
              if ( v18 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        v5 = -1073741791;
      }
      else
      {
        *a4 = v13[2];
        KeReleaseSpinLockFromDpcLevel(v11);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v24 = KeGetCurrentIrql();
            if ( v24 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v24 >= 2u )
            {
              v25 = KeGetCurrentPrcb();
              v26 = *((_QWORD *)v25 + 4375);
              v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
              v18 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
              *(_DWORD *)(v26 + 20) &= v27;
              if ( v18 )
                sub_140418E4C((__int64)v25);
            }
          }
        }
      }
      __writecr8(v12);
      return v5;
    }
    v13 = (_QWORD *)*v13;
  }
  KeReleaseSpinLockFromDpcLevel(v11);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v14 = KeGetCurrentIrql();
      if ( v14 <= 0xFu && (unsigned __int8)v12 <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = *((_QWORD *)v15 + 4375);
        v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
        v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
        *(_DWORD *)(v16 + 20) &= v17;
        if ( v18 )
          sub_140418E4C((__int64)v15);
        v10 = v34;
      }
    }
  }
  __writecr8(v12);
  if ( !a5 )
    goto LABEL_46;
  Pool2 = (_QWORD *)ExAllocatePool2(64LL, a2 + 32LL, 1951625033LL);
  if ( !Pool2 )
  {
    result = 3221225626LL;
    goto LABEL_47;
  }
  v28 = KeAcquireSpinLockRaiseToDpc(v11);
  v29 = (_QWORD *)v10[1];
  if ( (_QWORD *)*v29 != v10 )
    __fastfail(3u);
  Pool2[1] = v29;
  *Pool2 = v10;
  *v29 = Pool2;
  v10[1] = Pool2;
  Pool2[3] = a3;
  Pool2[2] = Pool2 + 4;
  *a4 = Pool2 + 4;
  KeReleaseSpinLockFromDpcLevel(v11);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v30 = KeGetCurrentIrql();
      if ( v30 <= 0xFu && (unsigned __int8)v28 <= 0xFu && v30 >= 2u )
      {
        v31 = KeGetCurrentPrcb();
        v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v28 + 1));
        v33 = *((_QWORD *)v31 + 4375);
        v18 = (v32 & *(_DWORD *)(v33 + 20)) == 0;
        *(_DWORD *)(v33 + 20) &= v32;
        if ( v18 )
          sub_140418E4C((__int64)v31);
      }
    }
  }
  __writecr8(v28);
  return 0LL;
}
