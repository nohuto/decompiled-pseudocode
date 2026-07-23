/*
 * XREFs of sub_14091D3F0 @ 0x14091D3F0
 * Callers:
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 * Callees:
 *     sub_14020AEB4 @ 0x14020AEB4 (sub_14020AEB4.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_140689A8C @ 0x140689A8C (sub_140689A8C.c)
 */

void __fastcall sub_14091D3F0(ULONG_PTR a1)
{
  unsigned __int64 v1; // rsi
  __int64 v3; // r14
  volatile signed __int64 *v4; // rdi
  int v5; // ebp

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 1696) )
  {
    v3 = *(unsigned int *)(a1 + 1688);
    v4 = (volatile signed __int64 *)(a1 + 80);
    ExAcquirePushLockExclusiveEx(a1 + 80, 0LL);
    if ( (_DWORD)v3 )
    {
      v5 = 8;
      do
      {
        if ( _bittest64(*(const signed __int64 **)(a1 + 1696), v1) == 1 )
          sub_14020AEB4(a1);
        ++v1;
        v5 += 512;
        --v3;
      }
      while ( v3 );
    }
    if ( (_InterlockedExchangeAdd64(v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v4);
    sub_1402AFC00((ULONG_PTR)v4);
  }
  sub_140689A8C(a1);
}
