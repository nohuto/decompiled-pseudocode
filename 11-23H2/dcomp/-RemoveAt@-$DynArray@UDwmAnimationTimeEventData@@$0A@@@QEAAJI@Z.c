/*
 * XREFs of ?RemoveAt@?$DynArray@UDwmAnimationTimeEventData@@$0A@@@QEAAJI@Z @ 0x1800E9094
 * Callers:
 *     ?AddTimeEvent@CAnimationInstance@DirectComposition@@UEAAJNP6AXPEAX@Z0@Z @ 0x1800E8900 (-AddTimeEvent@CAnimationInstance@DirectComposition@@UEAAJNP6AXPEAX@Z0@Z.c)
 *     ?Message_TimeEvent@CAnimationInstance@DirectComposition@@QEAAJII@Z @ 0x1800E8EB8 (-Message_TimeEvent@CAnimationInstance@DirectComposition@@QEAAJII@Z.c)
 *     ?InsertPoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAXU_LUID@@IPEAUFlipPropertyItem@@@Z @ 0x1801AC5FC (-InsertPoolBuffer@CFlipBufferPool@Flip@@QEAAJPEAXU_LUID@@IPEAUFlipPropertyItem@@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 */

__int64 __fastcall DynArray<DwmAnimationTimeEventData,0>::RemoveAt(__int64 *a1, unsigned int a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v4; // r9d
  __int64 v6; // r11
  __int64 v7; // rax
  __int64 v8; // rcx

  v2 = *((_DWORD *)a1 + 6);
  v3 = 0;
  v4 = a2;
  if ( a2 < v2 )
  {
    v6 = *a1;
    if ( a2 < v2 - 1 )
    {
      do
      {
        v7 = 2LL * v4;
        v8 = 2LL * ++v4;
        *(_OWORD *)(v6 + 8 * v7) = *(_OWORD *)(v6 + 8 * v8);
        v2 = *((_DWORD *)a1 + 6);
      }
      while ( v4 < v2 - 1 );
    }
    *((_DWORD *)a1 + 6) = v2 - 1;
  }
  else
  {
    v3 = -2147024809;
    DoStackCaptureDirect(-2147024809, 0x19Cu);
  }
  return v3;
}
