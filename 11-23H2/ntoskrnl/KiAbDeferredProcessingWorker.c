/*
 * XREFs of KiAbDeferredProcessingWorker @ 0x1402BBD80
 * Callers:
 *     <none>
 * Callees:
 *     KiDeferredReadySingleThread @ 0x14023A3A0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140252820 (KiFlushSoftwareInterruptBatch.c)
 *     KiAbPropagateBoosts @ 0x1402BC160 (KiAbPropagateBoosts.c)
 *     KiAbProcessThreadLocks @ 0x1402BC5E0 (KiAbProcessThreadLocks.c)
 */

void __fastcall KiAbDeferredProcessingWorker(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        char *SystemArgument1,
        PVOID SystemArgument2)
{
  char *v4; // rbp
  _QWORD **v6; // rbx
  _QWORD *v7; // rcx
  char v8; // si
  _QWORD *v9; // rbx
  volatile signed __int16 *v10; // rsi
  signed __int32 v11[8]; // [rsp+0h] [rbp-48h] BYREF
  _QWORD *v12; // [rsp+60h] [rbp+18h] BYREF

  v12 = 0LL;
  v4 = SystemArgument1 + 35704;
  v6 = (_QWORD **)(SystemArgument1 + 35696);
  do
  {
    while ( 1 )
    {
      v7 = *v6;
      if ( !*v6 )
        break;
      v10 = (volatile signed __int16 *)(v7 - 102);
      *v6 = (_QWORD *)*v7;
      *v7 = 1LL;
      _InterlockedOr(v11, 0);
      if ( *((_BYTE *)v7 + 55) )
        KiAbProcessThreadLocks((_DWORD)v7 - 816, 0, 0, 1, (__int64)&v12, (__int64)v4, 0LL);
      _InterlockedDecrement16(v10 + 434);
    }
    KiAbPropagateBoosts(v4, v6, &v12);
  }
  while ( *v6 );
  *((_QWORD *)SystemArgument1 + 4468) = 0LL;
  v8 = 0;
  v9 = v12;
  if ( v12 )
  {
    v12 = (_QWORD *)*v12;
    do
    {
      KiDeferredReadySingleThread((__int64)SystemArgument1, (unsigned __int64)(v9 - 27), (__int64)&v12);
      v9 = v12;
      ++v8;
      if ( v12 )
        v12 = (_QWORD *)*v12;
      if ( (v8 & 0xF) == 0 )
        KiFlushSoftwareInterruptBatch((unsigned __int8 *)SystemArgument1 + 12760);
    }
    while ( v9 );
  }
  KiFlushSoftwareInterruptBatch((unsigned __int8 *)SystemArgument1 + 12760);
}
