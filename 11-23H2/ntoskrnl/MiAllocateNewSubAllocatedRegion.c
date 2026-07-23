/*
 * XREFs of MiAllocateNewSubAllocatedRegion @ 0x1407CCE34
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x1406AB290 (MiAllocateFromSubAllocatedRegion.c)
 * Callees:
 *     MiInsertVad @ 0x140287F20 (MiInsertVad.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140289E04 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiUnlockVad @ 0x140289F30 (MiUnlockVad.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x14028A2D0 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiLockVad @ 0x14029CA60 (MiLockVad.c)
 *     MiUpdateVadStartVpn @ 0x14029CB98 (MiUpdateVadStartVpn.c)
 *     MiAllocatePool @ 0x1402DF430 (MiAllocatePool.c)
 *     MiLocateVadEvent @ 0x14030B69C (MiLocateVadEvent.c)
 *     ExGenRandom @ 0x140317860 (ExGenRandom.c)
 *     MiInsertVadCharges @ 0x1406FAAC0 (MiInsertVadCharges.c)
 *     MiAdvanceVadHint @ 0x14071FB60 (MiAdvanceVadHint.c)
 *     MiSelectUserAddress @ 0x14071FEC0 (MiSelectUserAddress.c)
 *     MiGetUserReservationHighestAddress @ 0x1407221D0 (MiGetUserReservationHighestAddress.c)
 *     MiAddSecureEntry @ 0x140745F74 (MiAddSecureEntry.c)
 *     MiCreateVadEventBitmap @ 0x1407CD0D4 (MiCreateVadEventBitmap.c)
 *     MiFreeVadEventBitmap @ 0x140A321B8 (MiFreeVadEventBitmap.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAllocateNewSubAllocatedRegion(int a1, unsigned __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v3; // rbp
  struct _KPROCESS *Process; // rdi
  _DWORD *Pool; // rax
  __int64 v6; // rbx
  int v7; // ecx
  unsigned __int64 UserReservationHighestAddress; // rax
  __int64 v9; // r15
  unsigned int v10; // ecx
  unsigned __int64 v11; // r13
  int VadEventBitmap; // esi
  __int64 v13; // r13
  unsigned __int64 v14; // r12
  __int64 v15; // rdx
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rbp
  int v19; // edx
  _QWORD *v20; // r15
  int v21; // edx
  __int64 v22; // r8
  _DWORD *v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v27; // [rsp+50h] [rbp-68h]
  unsigned __int64 v28; // [rsp+58h] [rbp-60h]
  __int64 v29; // [rsp+58h] [rbp-60h]
  unsigned __int64 v30; // [rsp+60h] [rbp-58h]
  unsigned __int64 v32; // [rsp+C8h] [rbp+10h] BYREF
  unsigned __int64 v33; // [rsp+D0h] [rbp+18h]
  _QWORD *v34; // [rsp+D8h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v3 = 512LL;
  v32 = 0LL;
  Process = CurrentThread->ApcState.Process;
  v30 = Process[1].ActiveProcessors.StaticBitmap[28];
  if ( a2 > 0x10 )
    return 3221225495LL;
  Pool = MiAllocatePool(64, 0x40uLL, 0x53646156u);
  v6 = (__int64)Pool;
  if ( !Pool )
    return 3221225495LL;
  v7 = Pool[12];
  *((_QWORD *)Pool + 5) = 0LL;
  *((_QWORD *)Pool + 2) = -2LL;
  Pool[12] = v7 & 0xFFDFF07F | 0x200200;
  UserReservationHighestAddress = MiGetUserReservationHighestAddress((__int64)Process, 0LL);
  v28 = UserReservationHighestAddress;
  v9 = 0x200000LL;
  while ( 1 )
  {
    v10 = *(_DWORD *)(v6 + 48);
    v34 = 0LL;
    v11 = v3;
    v33 = v3;
    v27 = v9;
    VadEventBitmap = MiSelectUserAddress(
                       0,
                       0LL,
                       UserReservationHighestAddress,
                       v3 << 12,
                       v9,
                       0LL,
                       (v10 >> 7) & 0x1F,
                       0x80000000,
                       &v34,
                       &v32);
    if ( VadEventBitmap >= 0 )
      break;
    if ( v9 != 0x10000 )
      v9 = 0x10000LL;
    v3 >>= 1;
    UserReservationHighestAddress = v28;
    if ( v27 != 0x10000 )
      v3 = v11;
    if ( v3 < 0x10 )
      goto LABEL_24;
  }
  v13 = v32;
  v14 = v32 >> 12;
  v15 = v32 >> 12;
  v32 = (v3 << 12) + v32 - 1;
  MiUpdateVadStartVpn(v6, v15);
  v16 = v33;
  v18 = v17 >> 12;
  *(_DWORD *)(v6 + 28) = v17 >> 12;
  *(_BYTE *)(v6 + 33) = v17 >> 44;
  VadEventBitmap = MiCreateVadEventBitmap(Process, v6, v16, 64LL);
  if ( VadEventBitmap < 0 )
  {
LABEL_24:
    ExFreePoolWithTag((PVOID)v6, 0);
    return (unsigned int)VadEventBitmap;
  }
  v29 = MiLocateVadEvent(v6, 64LL) + 8;
  v20 = (_QWORD *)(v29 + 16);
  v21 = (unsigned int)ExGenRandom(v19 - 63) % v33;
  *(_DWORD *)(v29 + 44) = v33;
  v22 = v32;
  *(_QWORD *)(v29 + 32) = v6;
  *(_DWORD *)(v29 + 48) = a1 & 3 ^ (4 * v21);
  *(_QWORD *)(v29 + 16) = 0LL;
  *(_QWORD *)(v29 + 24) = 0LL;
  *(_DWORD *)(v29 + 40) = 0;
  v23 = MiAddSecureEntry(v6, v13, v22, -2147483647, 0);
  if ( !v23 )
  {
    VadEventBitmap = -1073741670;
    goto LABEL_20;
  }
  VadEventBitmap = MiInsertVadCharges(v6, Process);
  if ( VadEventBitmap < 0 )
  {
LABEL_20:
    if ( v29 )
      MiFreeVadEventBitmap(Process, v6, 64LL);
    if ( v23 )
      ExFreePoolWithTag(v23, 0);
    goto LABEL_24;
  }
  MiLockVad((__int64)CurrentThread, v6);
  MiInsertVad(v6, (__int64)Process, 0);
  MiUnlockVad((__int64)CurrentThread, v6);
  if ( v34 )
    MiAdvanceVadHint(v14, v18, v34);
  LOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)Process);
  v24 = 16LL * a1 + v30 + 312;
  v25 = *(_QWORD *)v24;
  if ( *(_QWORD *)(*(_QWORD *)v24 + 8LL) != v24 )
    __fastfail(3u);
  *(_QWORD *)(v29 + 24) = v24;
  *v20 = v25;
  *(_QWORD *)(v25 + 8) = v20;
  *(_QWORD *)v24 = v20;
  UNLOCK_PAGE_TABLE_COMMITMENT((__int64)CurrentThread, (__int64)Process);
  return (unsigned int)VadEventBitmap;
}
