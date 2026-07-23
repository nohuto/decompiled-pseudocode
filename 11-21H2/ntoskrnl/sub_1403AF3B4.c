/*
 * XREFs of sub_1403AF3B4 @ 0x1403AF3B4
 * Callers:
 *     sub_1403AEB58 @ 0x1403AEB58 (sub_1403AEB58.c)
 *     sub_14056EE94 @ 0x14056EE94 (sub_14056EE94.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14035BE00 (KeRevertToUserGroupAffinityThread.c)
 *     sub_1403AF4FC @ 0x1403AF4FC (sub_1403AF4FC.c)
 *     sub_1403AF9E8 @ 0x1403AF9E8 (sub_1403AF9E8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045A41A @ 0x14045A41A (sub_14045A41A.c)
 *     sub_14056EFD8 @ 0x14056EFD8 (sub_14056EFD8.c)
 *     sub_14057657C @ 0x14057657C (sub_14057657C.c)
 */

__int64 __fastcall sub_1403AF3B4(int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *v4; // rcx
  char v7; // r15
  KSPIN_LOCK *v8; // rdi
  unsigned int v9; // esi
  unsigned __int8 v10; // bl
  __int64 v11; // rdx
  unsigned __int8 v13; // al
  unsigned __int8 v14; // bl
  struct _KPRCB *v15; // r10
  __int64 v16; // r8
  int v17; // eax
  bool v18; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v21; // r8
  int v22; // eax
  _BYTE v23[8]; // [rsp+20h] [rbp-50h] BYREF
  __int128 v24; // [rsp+28h] [rbp-48h] BYREF
  char *v25; // [rsp+38h] [rbp-38h]
  _QWORD v26[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+50h] [rbp-20h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+58h] [rbp-18h] BYREF

  v26[1] = a3;
  v26[0] = 0LL;
  v25 = 0LL;
  v27 = 0LL;
  v4 = *(struct _KTHREAD **)(a2 + 152);
  v24 = 0LL;
  v23[0] = 0;
  v7 = 0;
  PreviousAffinity = 0LL;
  if ( v4 != KeGetCurrentThread() )
  {
    LOWORD(v24) = 1;
    v25 = (char *)&v24 + 8;
    *((_QWORD *)&v24 + 1) = (char *)&v24 + 8;
    v26[0] = &v24;
    BYTE2(v24) = 6;
    DWORD1(v24) = 0;
  }
  if ( a1 )
  {
    v8 = (KSPIN_LOCK *)(qword_140C2B0D8 + 48LL * (unsigned int)(*(_DWORD *)(a2 + 88) - 256));
    sub_14045A41A(v8);
  }
  else
  {
    v8 = 0LL;
    sub_1403AF9E8(*(unsigned int *)(a2 + 96), v23, &PreviousAffinity);
  }
  if ( *(_BYTE *)(a2 + 95) && (*(_DWORD *)(a2 + 104) & 2) == 0 )
  {
    if ( !*(_WORD *)(a2 + 102) )
    {
      if ( !a1 )
      {
        v9 = sub_1403AF4FC(a2, a3);
        goto LABEL_10;
      }
      v9 = sub_14056EFD8(a2);
      goto LABEL_20;
    }
    _InterlockedOr((volatile signed __int32 *)(a2 + 104), 2u);
    v7 = 1;
    *(_QWORD *)(a2 + 144) = v26;
  }
  v9 = -1073741585;
  if ( !a1 )
  {
LABEL_10:
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v10 = v23[0];
      if ( v23[0] <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v21 = *((_QWORD *)CurrentPrcb + 4375);
        v10 = v23[0];
        v22 = ~(unsigned __int16)(-1LL << (v23[0] + 1));
        v18 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
        *(_DWORD *)(v21 + 20) &= v22;
        if ( v18 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    else
    {
      v10 = v23[0];
    }
    __writecr8(v10);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    goto LABEL_13;
  }
LABEL_20:
  KeReleaseSpinLockFromDpcLevel(v8);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v13 = KeGetCurrentIrql(), v13 <= 0xFu) )
  {
    v14 = v23[0];
    if ( v23[0] <= 0xFu && v13 >= 2u )
    {
      v15 = KeGetCurrentPrcb();
      v16 = *((_QWORD *)v15 + 4375);
      v14 = v23[0];
      v17 = ~(unsigned __int16)(-1LL << (v23[0] + 1));
      v18 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
      v11 = (unsigned int)v17 & *(_DWORD *)(v16 + 20);
      *(_DWORD *)(v16 + 20) = v11;
      if ( v18 )
        sub_140418E4C(v15);
    }
  }
  else
  {
    v14 = v23[0];
  }
  __writecr8(v14);
LABEL_13:
  if ( v26[0] && v7 )
  {
    LOBYTE(v11) = 1;
    sub_14057657C(v26[0], v11);
    return (unsigned int)v27;
  }
  return v9;
}
