/*
 * XREFs of sub_140692ACC @ 0x140692ACC
 * Callers:
 *     sub_140692980 @ 0x140692980 (sub_140692980.c)
 *     PsInsertSiloContext @ 0x140692A50 (PsInsertSiloContext.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140692BA8 @ 0x140692BA8 (sub_140692BA8.c)
 */

__int64 __fastcall sub_140692ACC(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v7; // esi
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v9; // rbx
  __int64 v10; // rax
  char v11; // di
  unsigned int v12; // [rsp+20h] [rbp-18h] BYREF
  __int64 v13; // [rsp+28h] [rbp-10h] BYREF

  v12 = 0;
  v13 = 0LL;
  result = sub_140692BA8(a1, a2, &v12, &v13);
  v7 = result;
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 242);
    v9 = v13 + 16LL * v12;
    ExAcquirePushLockExclusiveEx(v9, 0LL);
    if ( *(_QWORD *)(v9 + 8) )
    {
      v7 = -1073741637;
    }
    else
    {
      ObfReferenceObject((PVOID)a4);
      v10 = a4 | 1;
      if ( !a3 )
        v10 = a4;
      *(_QWORD *)(v9 + 8) = v10;
    }
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)v9, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
      ExfTryToWakePushLock(v9);
    sub_1402AFC00(v9);
    sub_1402F9540((__int64)KeGetCurrentThread());
    return v7;
  }
  return result;
}
