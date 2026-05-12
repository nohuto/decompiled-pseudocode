/*
 * XREFs of sub_1C0063710 @ 0x1C0063710
 * Callers:
 *     sub_1C0004DF0 @ 0x1C0004DF0 (sub_1C0004DF0.c)
 *     sub_1C005EA40 @ 0x1C005EA40 (sub_1C005EA40.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C0004C64 @ 0x1C0004C64 (sub_1C0004C64.c)
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0008424 @ 0x1C0008424 (sub_1C0008424.c)
 *     sub_1C0008B84 @ 0x1C0008B84 (sub_1C0008B84.c)
 *     sub_1C0019E4C @ 0x1C0019E4C (sub_1C0019E4C.c)
 *     sub_1C00437A0 @ 0x1C00437A0 (sub_1C00437A0.c)
 *     sub_1C005AA9C @ 0x1C005AA9C (sub_1C005AA9C.c)
 *     sub_1C005FDF0 @ 0x1C005FDF0 (sub_1C005FDF0.c)
 */

__int64 __fastcall sub_1C0063710(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  PIO_SECURITY_CONTEXT SecurityContext; // r14
  ULONG FullCreateOptions; // eax
  __int64 v7; // rax
  __int128 v8; // xmm1
  KIRQL CurrentIrql; // al
  __int64 v10; // rcx
  __int64 v11; // r8
  KSPIN_LOCK *v12; // rcx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  KIRQL v16; // bl
  unsigned int v17; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-40h] BYREF
  __int128 v20; // [rsp+58h] [rbp-28h] BYREF
  __int128 v21; // [rsp+68h] [rbp-18h]

  *(_QWORD *)&v21 = 0LL;
  DWORD2(v21) = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v20 = 0LL;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  CurrentStackLocation->Control |= 1u;
  FullCreateOptions = BYTE2(SecurityContext->SecurityQos);
  BYTE3(SecurityContext->SecurityQos) = 0;
  if ( (_BYTE)FullCreateOptions == 40 )
    FullCreateOptions = SecurityContext->FullCreateOptions;
  if ( FullCreateOptions == 16 )
  {
    v7 = sub_1C0008424(
           ((*(_DWORD *)(*(_QWORD *)(a1 + 24) + 484LL) + 7) & 0xFFFFFFF8) + 1104,
           (__int64)a2,
           *(_QWORD *)(a1 + 24));
    if ( v7 )
    {
      *(_QWORD *)&v21 = v7 + 48;
      *((_QWORD *)&v21 + 1) = v7 + 848;
      *((_QWORD *)&v20 + 1) = v7 + 1104;
      sub_1C0004C64(v7 + 48, v7 + 848, 0, 0LL);
      LODWORD(v20) = -1;
      goto LABEL_8;
    }
LABEL_23:
    BYTE3(SecurityContext->SecurityQos) = sub_1C005AA9C(-1073741670);
    a2->IoStatus.Information = 0LL;
    sub_1C0003440(a2, 0, v17);
    return 259LL;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1776), 1, 0) )
    goto LABEL_23;
  v8 = *(_OWORD *)(a1 + 1760);
  v20 = *(_OWORD *)(a1 + 1744);
  v21 = v8;
LABEL_8:
  if ( (qword_1C0093468 & 0x20) != 0 )
    sub_1C0019E4C(
      *(_QWORD *)(a1 + 24),
      3,
      (__int64)a2,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) | (unsigned __int64)((((unsigned __int8)*(_DWORD *)(a1 + 96) << 8) | (unsigned int)(unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96))) << 8),
      0LL,
      0LL,
      0LL);
  if ( (*(_BYTE *)(a1 + 449) & 1) != 0 || *(char *)(a1 + 448) < 0 )
    goto LABEL_22;
  CurrentIrql = KeGetCurrentIrql();
  v10 = a1;
  if ( CurrentIrql < 2u )
  {
    v11 = 1LL;
LABEL_21:
    sub_1C00437A0(v10, (__int64)a2, v11);
    goto LABEL_22;
  }
  if ( !sub_1C0008B84(a1) )
  {
LABEL_22:
    v16 = KfRaiseIrql(2u);
    sub_1C005FDF0(*(_QWORD *)(a1 + 8), a2, (__int64)&v20);
    KeLowerIrql(v16);
    return 259LL;
  }
  v12 = (KSPIN_LOCK *)(*(_QWORD *)(a1 + 1792) + 96LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock(v12, &LockHandle);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 1792) + 32LL) & 2) != 0
    || (v13 = (_QWORD *)sub_1C0007CF4(64LL, 32LL, 1330667858LL, *(_QWORD *)(a1 + 8))) == 0LL )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
    v11 = 0LL;
    v10 = a1;
    goto LABEL_21;
  }
  v13[2] = a2;
  v14 = *(_QWORD *)(a1 + 1792) + 80LL;
  v15 = *(_QWORD *)v14;
  if ( *(_QWORD *)(*(_QWORD *)v14 + 8LL) != v14 )
    __fastfail(3u);
  *v13 = v15;
  v13[1] = v14;
  *(_QWORD *)(v15 + 8) = v13;
  *(_QWORD *)v14 = v13;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  sub_1C00437A0(a1, (__int64)a2, 0LL);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1784));
  return 259LL;
}
