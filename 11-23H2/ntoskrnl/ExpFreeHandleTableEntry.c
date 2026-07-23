/*
 * XREFs of ExpFreeHandleTableEntry @ 0x140740588
 * Callers:
 *     ObpCreateHandle @ 0x1406E4540 (ObpCreateHandle.c)
 *     ObDuplicateObject @ 0x1406FBB00 (ObDuplicateObject.c)
 *     ExDestroyHandle @ 0x14073FC8C (ExDestroyHandle.c)
 *     ExCreateHandleEx @ 0x140740654 (ExCreateHandleEx.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     ExpGetHandleExtraInfo @ 0x1408AB71A (ExpGetHandleExtraInfo.c)
 */

signed __int32 __fastcall ExpFreeHandleTableEntry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r10
  char v6; // si
  unsigned int Number; // eax
  ULONG_PTR v8; // rbx
  __int64 v9; // rax
  __int64 v11; // rax
  _DWORD *HandleExtraInfo; // rax
  __int64 v13; // [rsp+38h] [rbp+10h]

  HIDWORD(v13) = HIDWORD(a2);
  v5 = a1;
  if ( *(_DWORD *)(a1 + 4) )
  {
    LODWORD(v13) = a2 & 0xFFFFFFFC;
    HandleExtraInfo = (_DWORD *)ExpGetHandleExtraInfo(a1, v13, a3, a4);
    if ( HandleExtraInfo )
    {
      *HandleExtraInfo = 0;
      HandleExtraInfo[1] = 0;
    }
  }
  *(_QWORD *)(a3 + 8) = 0LL;
  v6 = *(_BYTE *)(v5 + 44) & 1;
  if ( v6 )
    Number = 0;
  else
    Number = KeGetPcr()->Prcb.Number;
  v8 = v5 + ((Number + 1LL) << 6);
  ExAcquirePushLockExclusiveEx(v8, 0LL);
  if ( v6 )
  {
    v9 = *(_QWORD *)(v8 + 16);
    if ( v9 )
      *(_QWORD *)(v9 + 8) = a3;
    else
      *(_QWORD *)(v8 + 8) = a3;
    *(_QWORD *)(v8 + 16) = a3;
  }
  else
  {
    v11 = *(_QWORD *)(v8 + 8);
    *(_QWORD *)(a3 + 8) = v11;
    if ( !v11 )
      *(_QWORD *)(v8 + 16) = a3;
    *(_QWORD *)(v8 + 8) = a3;
  }
  --*(_DWORD *)(v8 + 24);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v8);
  return KeAbPostRelease(v8);
}
