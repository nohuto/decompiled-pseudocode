/*
 * XREFs of KiIntSteerDistributeInterrupts @ 0x140221568
 * Callers:
 *     KeIntSteerPeriodic @ 0x140221440 (KeIntSteerPeriodic.c)
 * Callees:
 *     KiIntSteerUpdateDeviceInterruptMask @ 0x140320280 (KiIntSteerUpdateDeviceInterruptMask.c)
 *     KiIntSteerSetDestination @ 0x140320330 (KiIntSteerSetDestination.c)
 */

__int64 KiIntSteerDistributeInterrupts()
{
  __int64 v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 i; // rbx
  _QWORD *v4; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v0 = KiIntTrackRootList;
  v8 = 0LL;
  while ( (__int64 *)v0 != &KiIntTrackRootList )
  {
    if ( *(_BYTE *)(v0 + 132) )
    {
      v1 = *(_QWORD *)(v0 + 176);
      v2 = *(_QWORD *)(v0 + 160);
      if ( v1 != v2 )
      {
        WORD4(v8) = *(_WORD *)(v0 + 184);
        if ( WORD4(v8) == *(_WORD *)(v0 + 168) )
          v6 = v1 & ~v2;
        else
          v6 = v1;
        *(_QWORD *)&v8 = v6;
        KiIntSteerUpdateDeviceInterruptMask(&v8, 0LL);
      }
    }
    v0 = *(_QWORD *)v0;
  }
  for ( i = KiIntTrackRootList; (__int64 *)i != &KiIntTrackRootList; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 132) )
    {
      v4 = (_QWORD *)(i + 176);
      if ( *(_QWORD *)(i + 176) != *(_QWORD *)(i + 160) )
      {
        KiIntSteerSetDestination(i, i + 176);
        WORD4(v8) = *(_WORD *)(i + 184);
        if ( *(_WORD *)(i + 168) == WORD4(v8) )
          v7 = *(_QWORD *)(i + 160) & ~*v4;
        else
          v7 = *(_QWORD *)(i + 160);
        *(_QWORD *)&v8 = v7;
        KiIntSteerUpdateDeviceInterruptMask(&v8, 1LL);
        *(_WORD *)(i + 168) = *(_WORD *)(i + 184);
        *(_QWORD *)(i + 160) = *v4;
      }
    }
  }
  return 0LL;
}
