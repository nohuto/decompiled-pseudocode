/*
 * XREFs of sub_140A8D338 @ 0x140A8D338
 * Callers:
 *     sub_140A8CDBC @ 0x140A8CDBC (sub_140A8CDBC.c)
 * Callees:
 *     IoInitializeIrp @ 0x140229D70 (IoInitializeIrp.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     PsChargeProcessNonPagedPoolQuota @ 0x14030B700 (PsChargeProcessNonPagedPoolQuota.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 *     sub_140A90660 @ 0x140A90660 (sub_140A90660.c)
 *     sub_140A9BFC0 @ 0x140A9BFC0 (sub_140A9BFC0.c)
 */

__int64 __fastcall sub_140A8D338(CCHAR a1, int a2, __int64 a3)
{
  __int64 v4; // rbx
  unsigned int v5; // ebp
  void *v6; // rsi
  USHORT v8; // r15
  __int64 Pool2; // rax
  IRP *v10; // rdi
  __int64 v11; // rax

  v4 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v8 = 72 * a1 + 208;
  if ( (qword_140D01450 & 1) != 0 )
    Pool2 = sub_140A90660(NonPagedPool, LowPoolPriority, (__int64)&byte_140C5B0E0, 1, a3);
  else
    Pool2 = ExAllocatePool2(64LL, (unsigned __int16)(72 * a1 + 208), 0x2B707249u);
  v10 = (IRP *)Pool2;
  if ( Pool2 )
  {
    if ( a2
      && (v5 = 4096,
          v6 = (void *)*((_QWORD *)KeGetCurrentThread() + 23),
          (int)PsChargeProcessNonPagedPoolQuota((__int64)v6, 0x1000uLL) < 0) )
    {
      ExFreePoolWithTag(v10, 0);
    }
    else
    {
      IoInitializeIrp(v10, v8, a1);
      v11 = sub_140A9BFC0(v10);
      v4 = v11;
      if ( v11 )
      {
        *(_DWORD *)(v11 + 56) |= 0x200008u;
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 20));
        ++*(_DWORD *)(v11 + 24);
        v10->Flags |= 0x40000000u;
        if ( a2 )
        {
          v10->AllocationFlags |= 1u;
          *(_DWORD *)(v11 + 84) = v5;
          *(_QWORD *)(v11 + 88) = v6;
          ObfReferenceObjectWithTag(v6, 0x49667256u);
        }
      }
      else
      {
        ExFreePoolWithTag(v10, 0);
        if ( a2 )
          PsReturnProcessNonPagedPoolQuota((__int64)v6, v5);
      }
    }
  }
  return v4;
}
