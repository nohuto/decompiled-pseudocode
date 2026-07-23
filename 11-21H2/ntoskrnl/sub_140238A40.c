/*
 * XREFs of sub_140238A40 @ 0x140238A40
 * Callers:
 *     sub_140237230 @ 0x140237230 (sub_140237230.c)
 *     sub_140238330 @ 0x140238330 (sub_140238330.c)
 *     sub_1403795D4 @ 0x1403795D4 (sub_1403795D4.c)
 *     sub_14037EEA8 @ 0x14037EEA8 (sub_14037EEA8.c)
 *     sub_14037FDA0 @ 0x14037FDA0 (sub_14037FDA0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 */

__int64 __fastcall sub_140238A40(__int64 a1)
{
  bool v2; // zf
  int v3; // edi
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_BYTE *)(a1 + 6021) & 4) != 0 )
  {
    v2 = *(_DWORD *)(a1 + 6592) == 0;
    v3 = 20;
    Interval.QuadPart = -150000LL;
    if ( !v2 )
    {
      do
      {
        if ( !v3 )
          break;
        if ( *(_BYTE *)(a1 + 6022) < 3u )
          break;
        KeDelayExecutionThread(0, 0, &Interval);
        --v3;
      }
      while ( *(_DWORD *)(a1 + 6592) );
    }
    CurrentThread = KeGetCurrentThread();
    --*((_WORD *)CurrentThread + 243);
    result = ExAcquirePushLockExclusiveEx(a1 + 6024, 0LL);
    ++*(_DWORD *)(a1 + 6036);
    *(_DWORD *)(a1 + 6032) = 1;
  }
  return result;
}
