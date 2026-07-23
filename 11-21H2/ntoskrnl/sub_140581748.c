/*
 * XREFs of sub_140581748 @ 0x140581748
 * Callers:
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_1402393FC @ 0x1402393FC (sub_1402393FC.c)
 *     sub_140241980 @ 0x140241980 (sub_140241980.c)
 *     sub_14027D8DC @ 0x14027D8DC (sub_14027D8DC.c)
 *     sub_14027D9E8 @ 0x14027D9E8 (sub_14027D9E8.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x140311930 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14056C540 @ 0x14056C540 (sub_14056C540.c)
 */

__int64 __fastcall sub_140581748(volatile signed __int32 *BugCheckParameter1, int a2)
{
  __int64 v3; // rsi
  unsigned int v5; // edi
  _QWORD *v6; // r13
  int v7; // r15d
  unsigned __int64 OldIrql; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  volatile LONG *v14; // rbx
  KIRQL v15; // cl
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 Object; // [rsp+38h] [rbp-39h] BYREF
  _QWORD v22[2]; // [rsp+40h] [rbp-31h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-21h] BYREF
  _OWORD v24[3]; // [rsp+68h] [rbp-9h] BYREF

  Object = 393216LL;
  v22[1] = v22;
  v3 = (__int64)(BugCheckParameter1 + 416);
  v22[0] = v22;
  memset(v24, 0, sizeof(v24));
  v5 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = sub_140282AD0((__int64)(BugCheckParameter1 + 416));
  if ( (*(_BYTE *)(v3 + 187) & 0x60) == 0x40 )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140C53340, &LockHandle);
    v7 = sub_14027D9E8((__int64)BugCheckParameter1, v3);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    OldIrql = LockHandle.OldIrql;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && LockHandle.OldIrql <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v11 = *((_QWORD *)CurrentPrcb + 4375);
          v12 = ~(unsigned __int16)(-1LL << (LockHandle.OldIrql + 1));
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(OldIrql);
    if ( v7 )
    {
      sub_1402393FC((ULONG_PTR)BugCheckParameter1, (__int64)v24);
      v14 = (volatile LONG *)sub_140282AD0(v3);
      v15 = ExAcquireSpinLockExclusive(v14);
      *((_DWORD *)v14 + 1) = 0;
      if ( (*(_BYTE *)(v3 + 187) & 0x60) == 0x40 )
      {
        v16 = v6[4];
        if ( !*(_QWORD *)(v16 + 40) )
        {
          *(_QWORD *)(v16 + 40) = &Object;
          *(_DWORD *)(v16 + 48) = *(_DWORD *)(v16 + 48) & 0xFFFFFFFE | (a2 != 0);
          sub_14030FA80(v3, v15);
          sub_14056C540(BugCheckParameter1, v17, v18, v19);
          sub_140241980(v24, 0);
          sub_14027D8DC(v3);
          KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
          return v5;
        }
        v5 = -1073740682;
      }
      else
      {
        v5 = -1073741431;
      }
      if ( v15 != 17 )
        sub_14030FA80(v3, v15);
      sub_140241980(v24, 0);
      sub_14027D8DC(v3);
    }
    else
    {
      return (unsigned int)-1073700861;
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return v5;
}
