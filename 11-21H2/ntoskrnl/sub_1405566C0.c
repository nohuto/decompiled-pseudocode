/*
 * XREFs of sub_1405566C0 @ 0x1405566C0
 * Callers:
 *     sub_14079FC78 @ 0x14079FC78 (sub_14079FC78.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140285C80 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1402A3F30 (KeReleaseQueuedSpinLock.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     IoAllocateErrorLogEntry @ 0x1403A70E0 (IoAllocateErrorLogEntry.c)
 *     IoWriteErrorLogEntry @ 0x1403A7210 (IoWriteErrorLogEntry.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

LONG_PTR sub_1405566C0()
{
  unsigned __int8 CurrentIrql; // bl
  __int64 **v1; // rsi
  KIRQL v2; // al
  __int64 *v3; // rdi
  KIRQL v4; // bp
  unsigned __int8 v5; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v7; // r8
  int v8; // eax
  bool v9; // zf
  LONG_PTR result; // rax
  __int64 *v11; // rax
  __int64 v12; // rcx
  __int64 **v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rax
  void *v16; // rdi
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r10
  __int64 v19; // r8
  int v20; // eax
  _DWORD *ErrorLogEntry; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v1 = (__int64 **)((char *)KeGetCurrentThread() + 1280);
  if ( *v1 == (__int64 *)v1 )
    goto LABEL_4;
  v2 = KeAcquireQueuedSpinLock(0xBuLL);
  v3 = *v1;
  v4 = v2;
  if ( *((char *)*v1 + 35) == *((char *)*v1 + 34) + 2 )
  {
    KeReleaseQueuedSpinLock(0xBuLL, v2);
LABEL_4:
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v5 = KeGetCurrentIrql();
        if ( v5 <= 0xFu && CurrentIrql <= 0xFu && v5 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v7 = *((_QWORD *)CurrentPrcb + 4375);
          v8 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v9 = (v8 & *(_DWORD *)(v7 + 20)) == 0;
          *(_DWORD *)(v7 + 20) &= v8;
          if ( v9 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
    return result;
  }
  ObfReferenceObjectWithTag((PVOID)v3[15], 0x746C6644u);
  v11 = *v1;
  v12 = **v1;
  if ( (__int64 **)(*v1)[1] != v1
    || *(__int64 **)(v12 + 8) != v11
    || (*v1 = (__int64 *)v12,
        *(_QWORD *)(v12 + 8) = v1,
        v3[1] = (__int64)v3,
        *v3 = (__int64)v3,
        v13 = (__int64 **)qword_140C471A8,
        *(__int64 **)qword_140C471A8 != &qword_140C471A0) )
  {
    __fastfail(3u);
  }
  *v11 = (__int64)&qword_140C471A0;
  v11[1] = (__int64)v13;
  *v13 = v11;
  qword_140C471A8 = (__int64)v11;
  if ( *((_BYTE *)v3 + 35) <= *((_BYTE *)v3 + 34)
    && (v15 = v3[20]) != 0
    && (v14 = v3[19], v16 = *(void **)(v14 + 40), *(void **)(v15 + 8) == v16) )
  {
    ObfReferenceObjectWithTag(*(PVOID *)(v14 + 40), 0x746C6644u);
  }
  else
  {
    v16 = 0LL;
  }
  KeReleaseQueuedSpinLock(0xBuLL, v4);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && CurrentIrql <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = *((_QWORD *)v18 + 4375);
        v20 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v9 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= v20;
        if ( v9 )
          sub_140418E4C((__int64)v18);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v16 )
  {
    ErrorLogEntry = IoAllocateErrorLogEntry(v16, 0x30u);
    if ( ErrorLogEntry )
    {
      ErrorLogEntry[3] = -2147221450;
      IoWriteErrorLogEntry(ErrorLogEntry);
    }
    return ObfDereferenceObject(v16);
  }
  return result;
}
