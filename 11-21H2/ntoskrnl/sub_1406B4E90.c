/*
 * XREFs of sub_1406B4E90 @ 0x1406B4E90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402AC800 @ 0x1402AC800 (sub_1402AC800.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1407D80A4 @ 0x1407D80A4 (sub_1407D80A4.c)
 *     sub_1409B18CC @ 0x1409B18CC (sub_1409B18CC.c)
 */

__int64 __fastcall sub_1406B4E90(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r14
  signed __int32 v7; // ebp
  volatile signed __int64 *v8; // rsi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  if ( a4 > 1 || (result = *(unsigned int *)(a2 + 1520), (_DWORD)result) )
  {
    if ( (*(_DWORD *)(a2 + 2172) & 0x8000) == 0 )
    {
      result = *(_QWORD *)(a2 + 1352);
      if ( *(_QWORD *)(a1 + 1088) == result )
      {
        result = *(unsigned int *)(a1 + 1124);
        if ( (result & 0x40000008) != 0 )
          return sub_1407D80A4(a2, 3221225738LL);
      }
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v7 = 0x2000000;
    --*((_WORD *)CurrentThread + 242);
    v8 = (volatile signed __int64 *)(a2 + 1080);
    ExAcquirePushLockExclusiveEx(a2 + 1080, 0LL);
    if ( !*(_DWORD *)(a2 + 1520) )
    {
      _m_prefetchw((const void *)(a2 + 1124));
      v7 = _InterlockedOr((volatile signed __int32 *)(a2 + 1124), 8u);
    }
    if ( (_InterlockedExchangeAdd64(v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v8);
    sub_1402AFC00((ULONG_PTR)v8);
    result = (__int64)sub_1402AC800((__int64)CurrentThread);
    if ( (v7 & 0x2000000) == 0 )
      return sub_1409B18CC((PVOID)a2);
  }
  return result;
}
