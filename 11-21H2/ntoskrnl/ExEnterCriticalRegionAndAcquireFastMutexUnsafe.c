/*
 * XREFs of ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x140359B80
 * Callers:
 *     <none>
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_14029EF4C @ 0x14029EF4C (sub_14029EF4C.c)
 *     sub_14029F6A8 @ 0x14029F6A8 (sub_14029F6A8.c)
 */

__int64 __fastcall ExEnterCriticalRegionAndAcquireFastMutexUnsafe(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // rcx
  int v6; // eax

  result = (__int64)KeGetCurrentThread();
  --*(_WORD *)(result + 484);
  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  _disable();
  LODWORD(result) = *((unsigned __int8 *)CurrentThread + 792);
  if ( *((_BYTE *)CurrentThread + 792) || (result = sub_14029F6A8(a1, (__int64)CurrentThread), (_DWORD)result) )
  {
    _BitScanForward((unsigned int *)&v5, result);
    *((_BYTE *)CurrentThread + 792) = result & ~(1 << v5);
    _enable();
    v3 = (__int64)CurrentThread + 96 * v5 + 1696;
    if ( (unsigned __int64)(a1 - qword_140C50630) < 0x8000000000LL )
      v6 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
    else
      v6 = -1;
    *(_DWORD *)(v3 + 8) = v6;
    result = a1 & 0x7FFFFFFFFFFFFFFCLL;
    *(_QWORD *)v3 = a1 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( !_interlockedbittestandreset((volatile signed __int32 *)a1, 0) )
    result = sub_14029EF4C(a1, v3);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  *(_QWORD *)(a1 + 8) = CurrentThread;
  return result;
}
