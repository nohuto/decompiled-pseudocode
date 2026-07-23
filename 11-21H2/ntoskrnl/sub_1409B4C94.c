/*
 * XREFs of sub_1409B4C94 @ 0x1409B4C94
 * Callers:
 *     PsReplaceSiloContext @ 0x1409AB820 (PsReplaceSiloContext.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140692BA8 @ 0x140692BA8 (sub_140692BA8.c)
 */

__int64 __fastcall sub_1409B4C94(__int64 a1, unsigned int a2, void *a3, _QWORD *a4)
{
  __int64 result; // rax
  unsigned int v7; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v9; // rbp
  void *v10; // rdi
  void *v11; // rcx
  unsigned int v12; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v13[4]; // [rsp+28h] [rbp-20h] BYREF

  v12 = 0;
  v13[0] = 0LL;
  result = sub_140692BA8(a1, a2, &v12, v13);
  v7 = result;
  if ( (int)result >= 0 )
  {
    ObfReferenceObject(a3);
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v9 = v13[0] + 16LL * v12;
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    v10 = *(void **)(v9 + 8);
    if ( ((unsigned __int8)v10 & 1) != 0 )
    {
      v10 = 0LL;
      v7 = -1073741637;
    }
    else
    {
      *(_QWORD *)(v9 + 8) = a3;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v9);
    sub_1402AFC00(v9);
    sub_1402F9540((__int64)KeGetCurrentThread());
    if ( (v7 & 0x80000000) != 0 )
    {
      v11 = a3;
    }
    else
    {
      if ( !v10 )
      {
        if ( a4 )
          *a4 = 0LL;
        return v7;
      }
      if ( a4 )
      {
        *a4 = v10;
        return v7;
      }
      v11 = v10;
    }
    ObfDereferenceObject(v11);
    return v7;
  }
  return result;
}
