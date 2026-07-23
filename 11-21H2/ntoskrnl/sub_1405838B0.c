/*
 * XREFs of sub_1405838B0 @ 0x1405838B0
 * Callers:
 *     MmRemovePhysicalMemory @ 0x140969D90 (MmRemovePhysicalMemory.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     sub_14058DED4 @ 0x14058DED4 (sub_14058DED4.c)
 */

__int64 __fastcall sub_1405838B0(unsigned __int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v5; // rax
  unsigned int v6; // edi
  bool v7; // zf

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 243);
  ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C55040, 0LL);
  if ( a1 <= qword_140C50840 && ((*(_QWORD *)(48 * a1 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
  {
    v5 = sub_14058DED4(48 * a1 - 0x220000000000LL, 0LL);
    if ( v5 )
    {
      *a2 = v5;
      v6 = 0;
    }
    else
    {
      v6 = -1073741558;
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C55040, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C55040);
  sub_1402AFC00((ULONG_PTR)&qword_140C55040);
  v7 = (*((_WORD *)CurrentThread + 243))++ == 0xFFFF;
  if ( v7 && *((struct _KTHREAD **)CurrentThread + 19) != (struct _KTHREAD *)((char *)CurrentThread + 152) )
    KiCheckForKernelApcDelivery();
  return v6;
}
