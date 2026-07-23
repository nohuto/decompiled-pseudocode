/*
 * XREFs of EtwpReenableCompression @ 0x140602F04
 * Callers:
 *     EtwpPrepareDirtyBuffer @ 0x140227C98 (EtwpPrepareDirtyBuffer.c)
 * Callees:
 *     ObGetCurrentIrql @ 0x14020B9A0 (ObGetCurrentIrql.c)
 *     EtwpUnlockBufferList @ 0x14022818C (EtwpUnlockBufferList.c)
 *     EtwpLockBufferList @ 0x1402281D8 (EtwpLockBufferList.c)
 *     EtwpQueryUsedProcessorCount @ 0x140228234 (EtwpQueryUsedProcessorCount.c)
 */

void __fastcall EtwpReenableCompression(__int64 a1)
{
  bool v1; // zf
  __int64 *v3; // rdi
  int i; // eax
  __int64 *j; // rcx
  unsigned __int8 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(a1 + 1180) == 2;
  v6 = 0;
  if ( !v1 && ObGetCurrentIrql() < 2u && _InterlockedExchange((volatile __int32 *)(a1 + 1168), 1) != 1 )
  {
    EtwpLockBufferList(a1, &v6);
    v3 = *(__int64 **)(a1 + 72);
    for ( i = EtwpQueryUsedProcessorCount(a1); i && v3; --i )
    {
      if ( *((_DWORD *)v3 + 3) == 4 )
        *((_WORD *)v3 + 10) |= 0x80u;
      v3 = (__int64 *)*v3;
    }
    for ( j = *(__int64 **)(a1 + 56); i && j; j = (__int64 *)*j )
    {
      --i;
      if ( *((_DWORD *)j + 3) == 4 )
        *((_WORD *)j + 10) |= 0x80u;
    }
    EtwpUnlockBufferList(a1, &v6);
  }
}
