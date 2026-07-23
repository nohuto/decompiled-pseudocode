/*
 * XREFs of sub_14070F57C @ 0x14070F57C
 * Callers:
 *     PsGetSiloContext @ 0x1402A0E60 (PsGetSiloContext.c)
 *     PsFreeSiloContextSlot @ 0x1409AB6D0 (PsFreeSiloContextSlot.c)
 * Callees:
 *     sub_1402A0EDC @ 0x1402A0EDC (sub_1402A0EDC.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall sub_14070F57C(__int64 a1, unsigned int a2, unsigned __int64 *a3)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v6; // rbx
  unsigned __int64 v7; // rdi
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF
  unsigned int v9; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0;
  v8[0] = 0LL;
  result = sub_1402A0EDC(a1, a2, &v9, v8);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v6 = (signed __int64 *)(v8[0] + 16LL * v9);
    ExAcquirePushLockSharedEx((ULONG_PTR)v6, 0LL);
    v7 = v6[1] & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v7 )
      ObfReferenceObject((PVOID)(v6[1] & 0xFFFFFFFFFFFFFFFEuLL));
    if ( _InterlockedCompareExchange64(v6, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v6);
    sub_1402AFC00((ULONG_PTR)v6);
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( v7 )
    {
      *a3 = v7;
      return 0LL;
    }
    else
    {
      return 3221226021LL;
    }
  }
  return result;
}
