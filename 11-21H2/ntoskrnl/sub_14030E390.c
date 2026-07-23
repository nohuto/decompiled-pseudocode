/*
 * XREFs of sub_14030E390 @ 0x14030E390
 * Callers:
 *     sub_140213398 @ 0x140213398 (sub_140213398.c)
 *     sub_1402ED194 @ 0x1402ED194 (sub_1402ED194.c)
 *     sub_14030DA80 @ 0x14030DA80 (sub_14030DA80.c)
 *     sub_1403D5614 @ 0x1403D5614 (sub_1403D5614.c)
 *     sub_1406BF9AC @ 0x1406BF9AC (sub_1406BF9AC.c)
 *     sub_1406F9990 @ 0x1406F9990 (sub_1406F9990.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_14070A1B8 @ 0x14070A1B8 (sub_14070A1B8.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 *     sub_140978F40 @ 0x140978F40 (sub_140978F40.c)
 *     sub_140980DD8 @ 0x140980DD8 (sub_140980DD8.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402EE0E0 @ 0x1402EE0E0 (sub_1402EE0E0.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14030EC40 @ 0x14030EC40 (sub_14030EC40.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 *     sub_14063D8B0 @ 0x14063D8B0 (sub_14063D8B0.c)
 *     sub_14097C814 @ 0x14097C814 (sub_14097C814.c)
 */

char __fastcall sub_14030E390(__int64 a1, __int64 a2, char a3)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v7; // r9
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  int v10; // ecx
  unsigned __int64 v11; // r14
  __int64 v12; // rax
  unsigned __int64 v13; // r9
  __int64 v14; // r8
  int v15; // r15d
  unsigned __int8 CurrentIrql; // bp
  __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // rcx
  __int64 **v20; // rdx
  _QWORD *v21; // rax
  __int64 v22; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v24; // rdx
  int v25; // eax
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r10
  __int64 v28; // r9
  int v29; // eax
  bool v30; // zf
  _QWORD *v31; // r14
  __int64 *v32; // rax
  __int64 v33; // rsi
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v35; // rdi
  __int64 v36; // rcx
  _QWORD *v37; // rax
  struct _KTHREAD *v38; // rsi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0LL;
  v7 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v8 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  v9 = *(unsigned int *)(a1 + 24);
  v10 = *(_DWORD *)(a1 + 48);
  v11 = v9 | v8;
  if ( (v10 & 0x180000) == 0x80000 )
  {
    v12 = *(_QWORD *)(a2 + 1680);
    if ( (v10 & 0x200000) != 0 )
      ++*(_QWORD *)(v12 + 408);
    else
      ++*(_QWORD *)(v12 + 416);
  }
  if ( v7 <= *(_QWORD *)(a2 + 1496) >> 12 && (a3 & 2) == 0 )
  {
    v13 = *(_QWORD *)(a2 + 1176) + ((v7 - v11 + 1) << 12);
    *(_QWORD *)(a2 + 1176) = v13;
    if ( *(_QWORD *)(a2 + 1168) < v13 )
      *(_QWORD *)(a2 + 1168) = v13;
  }
  v14 = *(unsigned int *)(a1 + 48);
  if ( (*(_BYTE *)(a1 + 48) & 0x70) == 0x30 )
  {
    if ( (v14 & 0x200000) != 0 && (v14 & 0x2000000) == 0 && (v14 & 0x4000000) != 0 )
      goto LABEL_15;
    v4 = sub_1402EE0E0(a1, 256) + 8;
  }
  if ( (v14 & 0x200000) == 0 )
    goto LABEL_17;
LABEL_15:
  if ( (v14 & 0x800000) == 0 )
  {
    v14 &= 0x180000u;
    if ( (unsigned int)v14 < 0x100000 )
    {
LABEL_17:
      if ( !(unsigned int)sub_14030EC40(a1) )
        goto LABEL_20;
    }
  }
  if ( (unsigned __int64)qword_1400161D0[(*(_DWORD *)(a1 + 48) >> 19) & 3] >= 0x200 )
    ++*(_DWORD *)(a2 + 2140);
LABEL_20:
  if ( (*(_DWORD *)(a1 + 48) & 0x70) == 0x10 )
    ++*(_QWORD *)(*(_QWORD *)(a2 + 1680) + 296LL);
  ++*(_QWORD *)(a2 + 2024);
  v15 = a3 & 1;
  if ( v15 )
  {
    CurrentIrql = 17;
  }
  else
  {
    v17 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v18 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v18 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v19 = v17 + 284;
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      sub_140461A66(v19, CurrentIrql);
    else
      sub_14030F870(v19, CurrentIrql);
  }
  *(_QWORD *)(a2 + 2016) = a1;
  LOBYTE(v14) = 0;
  v20 = *(__int64 ***)(a2 + 2008);
  if ( v20 )
  {
    while ( 1 )
    {
      while ( v11 <= (*((unsigned int *)v20 + 7) | ((unsigned __int64)*((unsigned __int8 *)v20 + 33) << 32))
           && v11 < (*((unsigned int *)v20 + 6) | ((unsigned __int64)*((unsigned __int8 *)v20 + 32) << 32)) )
      {
        if ( !*v20 )
          goto LABEL_39;
        v20 = (__int64 **)*v20;
      }
      if ( !v20[1] )
        break;
      v20 = (__int64 **)v20[1];
    }
    LOBYTE(v14) = 1;
  }
LABEL_39:
  LOBYTE(v21) = RtlAvlInsertNodeEx(a2 + 2008, v20, v14, a1);
  if ( CurrentIrql != 17 )
  {
    v22 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL);
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
      sub_14063D8B0(v22 + 284, retaddr);
    else
      *(_DWORD *)(v22 + 284) = 0;
    CurrentPrcb = KeGetCurrentPrcb();
    v24 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v24 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v25 = *(_DWORD *)(v24 + 24) - 1;
        *(_DWORD *)(v24 + 24) = v25;
        if ( !v25 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v26 = KeGetCurrentIrql();
        if ( v26 <= 0xFu && CurrentIrql <= 0xFu && v26 >= 2u )
        {
          v27 = KeGetCurrentPrcb();
          v28 = *((_QWORD *)v27 + 4375);
          v29 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v30 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
          *(_DWORD *)(v28 + 20) &= v29;
          if ( v30 )
            sub_140418E4C(v27);
        }
      }
    }
    LOBYTE(v21) = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  if ( !v15 )
  {
    if ( (*(_DWORD *)(a1 + 48) & 0x200000) == 0 )
    {
      v31 = (_QWORD *)(a1 + 96);
      v32 = *(__int64 **)(a1 + 72);
      *(_QWORD *)(a1 + 112) = *((_QWORD *)KeGetCurrentThread() + 23) | 1LL;
      v33 = *v32;
      CurrentThread = KeGetCurrentThread();
      --*((_WORD *)CurrentThread + 243);
      v35 = (volatile signed __int64 *)(v33 + 104);
      ExAcquirePushLockExclusiveEx(v33 + 104, 0LL);
      if ( (*(_DWORD *)(v33 + 56) & 0x400) == 0 )
      {
        v36 = *(_QWORD *)(v33 + 8);
        v37 = (_QWORD *)(v33 + 8);
        if ( *(_QWORD *)(v36 + 8) != v33 + 8 )
          __fastfail(3u);
        *v31 = v36;
        v31[1] = v37;
        *(_QWORD *)(v36 + 8) = v31;
        *v37 = v31;
      }
      v38 = KeGetCurrentThread();
      if ( (_InterlockedExchangeAdd64(v35, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v35);
      LOBYTE(v21) = sub_1402AFC00((ULONG_PTR)v35);
      v30 = (*((_WORD *)v38 + 243))++ == 0xFFFF;
      if ( v30 )
      {
        v21 = (_QWORD *)((char *)v38 + 152);
        if ( (_QWORD *)*v21 != v21 )
          LOBYTE(v21) = KiCheckForKernelApcDelivery();
      }
    }
    if ( v4 )
      LOBYTE(v21) = sub_14097C814(*((_QWORD *)KeGetCurrentThread() + 23), v4);
  }
  return (char)v21;
}
