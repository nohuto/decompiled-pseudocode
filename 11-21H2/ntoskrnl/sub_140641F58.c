/*
 * XREFs of sub_140641F58 @ 0x140641F58
 * Callers:
 *     sub_1403497C0 @ 0x1403497C0 (sub_1403497C0.c)
 * Callees:
 *     sub_140212E00 @ 0x140212E00 (sub_140212E00.c)
 *     sub_14021491C @ 0x14021491C (sub_14021491C.c)
 *     sub_1402501E8 @ 0x1402501E8 (sub_1402501E8.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     sub_14034FED0 @ 0x14034FED0 (sub_14034FED0.c)
 *     sub_140366FB0 @ 0x140366FB0 (sub_140366FB0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14062DEE4 @ 0x14062DEE4 (sub_14062DEE4.c)
 *     sub_14063BDD0 @ 0x14063BDD0 (sub_14063BDD0.c)
 *     sub_1406423A4 @ 0x1406423A4 (sub_1406423A4.c)
 */

unsigned __int64 __fastcall sub_140641F58(int a1, ULONG_PTR a2, unsigned int a3)
{
  int v3; // edi
  __int64 v4; // r15
  int v6; // ecx
  unsigned __int8 CurrentIrql; // dl
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  char v10; // bl
  size_t v11; // rbp
  unsigned __int64 v12; // rsi
  unsigned int v13; // eax
  unsigned int v14; // r12d
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // edi
  unsigned int v20; // r10d
  __int64 v21; // rbx
  int v22; // edx
  __int64 v23; // rcx
  __int64 v24; // r13
  __int64 v25; // rax
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 v27; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v29; // r9
  int v30; // eax
  bool v31; // zf
  unsigned int v32; // r15d
  __int64 v33; // rax
  __int64 v34; // r13
  unsigned __int64 v35; // r9
  signed __int64 v36; // r14
  signed __int64 v37; // rdi
  unsigned __int64 v38; // rax
  unsigned __int64 v40; // [rsp+30h] [rbp-78h]
  __int64 v41; // [rsp+38h] [rbp-70h]
  __int64 v42; // [rsp+40h] [rbp-68h]
  __int64 v43; // [rsp+48h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-58h] BYREF
  unsigned int v45; // [rsp+B0h] [rbp+8h]
  int v46; // [rsp+C8h] [rbp+20h]

  v3 = a1;
  v4 = a3;
  v6 = a1 & 1;
  if ( !v6 && (_bittest(&dword_140D069E8, 0xAu) & ((v3 & 0x200) == 0)) != 0 )
    v3 |= 0x200u;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > (unsigned __int8)(2 - (v6 != 0)) )
    KeBugCheckEx(0xC1u, CurrentIrql, v3, a2, 0x30uLL);
  v43 = sub_14021491C(v3, 0x80000000, 1);
  v8 = sub_14034FED0(v43 + 320, 4096LL, 4096LL, 4096LL, 4u);
  v9 = v8;
  if ( !v8 )
    return 0LL;
  v10 = MEMORY[0xFFFFF78000000320];
  memset((void *)(v8 + 16), MEMORY[0xFFFFF78000000320] | 1, 0xFF0uLL);
  v11 = a2 - 8;
  if ( (v3 & 0x40) == 0 )
    v11 = a2;
  *(_QWORD *)(v9 + 8) = 0LL;
  *(_DWORD *)v9 = v11;
  *(_BYTE *)(v9 + 2) = v10 | 1;
  *(_DWORD *)(v9 + 4) = v4;
  if ( (v3 & 0x40) != 0 )
    *(_DWORD *)v9 |= 0x4000u;
  v12 = (v9 - v11 + 4096) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (v3 & 0x400) != 0 )
    memset((void *)((v9 - v11 + 4096) & 0xFFFFFFFFFFFFFFF0uLL), 0, v11);
  v13 = sub_140366FB0(v9);
  v14 = 0;
  LockHandle.LockQueue = 0LL;
  if ( v13 != 32 )
    v14 = v13;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v40 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (_DWORD)v4 == dword_140D05128 )
    __debugbreak();
  v15 = DWORD1(xmmword_140D06900);
  if ( (BYTE4(xmmword_140D06900) & 0x41) != 0 )
    sub_14062DEE4(0xE20u, v14, v4, v9, (v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  if ( (v14 & 0x20) != 0 )
  {
    v16 = qword_140C11760;
    v17 = qword_140C11768;
    v18 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 896LL);
  }
  else
  {
    LODWORD(v15) = HIDWORD(KeGetPcr()[1].LockArray);
    v16 = qword_140C157A0;
    v17 = qword_140C157C8;
    v18 = (__int64)*(&qword_140C117A0 + v15);
  }
  v41 = v17;
  v46 = v16;
  v42 = v18;
  v19 = v16 & ((40543 * v4) ^ ((unsigned __int64)(40543 * v4) >> 32));
  v20 = v19;
  v45 = v19;
  while ( 1 )
  {
    v21 = v18 + 80LL * v19;
    if ( *(_DWORD *)v21 == (_DWORD)v4 )
      break;
    if ( *(_DWORD *)v21 )
    {
LABEL_43:
      v19 = v16 & (v19 + 1);
      if ( v19 == v20 )
      {
        sub_140212E00(v4, v40, v14);
        return v12;
      }
    }
    else
    {
      if ( (v14 & 0x20) != 0 )
        goto LABEL_30;
      v22 = *(_DWORD *)(qword_140C157D0 + 80LL * v19);
      if ( v22 )
      {
        *(_DWORD *)v21 = v22;
        v16 = v46;
        v23 = *(_QWORD *)(qword_140C157D0 + 80LL * v19 + 72);
        if ( v23 )
          *(_QWORD *)(v21 + 72) = v23;
      }
      else
      {
        v16 = v46;
LABEL_30:
        if ( v19 == v17 - 1 )
          goto LABEL_43;
        if ( (v14 & 0x20) != 0 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)v21, v4, 0);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&qword_140C11778, &LockHandle);
          v24 = qword_140C157D0;
          if ( !*(_DWORD *)(qword_140C157D0 + 80LL * v19) )
          {
            v25 = sub_1402501E8(v4);
            *(_QWORD *)(v24 + 80LL * v19 + 72) = v25;
            *(_QWORD *)(v21 + 72) = v25;
            *(_DWORD *)(qword_140C157D0 + 80LL * v19) = v4;
            *(_DWORD *)v21 = v4;
          }
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
          OldIrql = LockHandle.OldIrql;
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              v27 = KeGetCurrentIrql();
              if ( v27 <= 0xFu && LockHandle.OldIrql <= 0xFu && v27 >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v29 = *((_QWORD *)CurrentPrcb + 4375);
                v30 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
                v31 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
                *(_DWORD *)(v29 + 20) &= v30;
                if ( v31 )
                  sub_140418E4C((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(OldIrql);
          v16 = v46;
          v17 = v41;
          v18 = v42;
          v20 = v45;
        }
      }
    }
  }
  if ( (v14 & 1) != 0 )
  {
    v32 = 0;
    v33 = 40LL;
    v34 = 32LL;
  }
  else
  {
    v32 = 1;
    v33 = 16LL;
    v34 = 8LL;
  }
  _InterlockedAdd64((volatile signed __int64 *)(v21 + v33), 1uLL);
  v35 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v36 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + v34), v40);
  if ( *(_QWORD *)(v21 + 72) )
  {
    v37 = *(_QWORD *)(v21 + 8LL * v32 + 56);
    while ( (v37 & 1) == 0 && v37 < v36 )
    {
      v38 = sub_14063BDD0(*(_QWORD *)(v21 + 72), v35, v32);
      if ( !v38 )
      {
        sub_1406423A4(v43, v12);
        return 0LL;
      }
      if ( v38 == 1 )
      {
        if ( v37 == _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 8LL * v32 + 56), 1LL, v37) )
          return v12;
        v37 = *(_QWORD *)(v21 + 8LL * v32 + 56);
      }
      else
      {
        v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v21 + 8LL * v32 + 56), v38);
        v36 = *(_QWORD *)(v21 + v34);
      }
      v35 = (v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
    }
  }
  return v12;
}
