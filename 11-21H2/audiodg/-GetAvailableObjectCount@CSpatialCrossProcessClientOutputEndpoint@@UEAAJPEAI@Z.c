/*
 * XREFs of ?GetAvailableObjectCount@CSpatialCrossProcessClientOutputEndpoint@@UEAAJPEAI@Z @ 0x140093DF0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140090784 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetFramesPerPacket@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z @ 0x140091870 (-GetFramesPerPacket@CSpatialCrossProcessBaseEndpoint@@UEAAJPEAI@Z.c)
 *     ?GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x140091DE0 (-GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?GetState@PingPongState@@AEBA?AW4State@1@XZ @ 0x140092168 (-GetState@PingPongState@@AEBA-AW4State@1@XZ.c)
 */

__int64 __fastcall CSpatialCrossProcessClientOutputEndpoint::GetAvailableObjectCount(
        CSpatialCrossProcessClientOutputEndpoint *this,
        unsigned int *a2,
        __int64 a3,
        __int64 a4)
{
  int ObjectsAvailableForRendering; // edi
  unsigned int *v7; // r14
  unsigned int v8; // edx
  void *v9; // rcx
  unsigned __int32 State; // eax
  unsigned __int32 v11; // r8d
  int v13; // [rsp+48h] [rbp+10h] BYREF
  int v14; // [rsp+50h] [rbp+18h] BYREF

  ObjectsAvailableForRendering = 0;
  if ( !a2 )
  {
    ObjectsAvailableForRendering = -2147467261;
LABEL_18:
    SpatialCPTraceLoggingErrorHelper(
      "CSpatialCrossProcessClientOutputEndpoint::GetAvailableObjectCount",
      83,
      (unsigned int)ObjectsAvailableForRendering,
      a4);
    return (unsigned int)ObjectsAvailableForRendering;
  }
  *a2 = 0;
  if ( !*((_BYTE *)this + 80) )
  {
    ObjectsAvailableForRendering = -2005139437;
    goto LABEL_18;
  }
  v7 = (unsigned int *)((char *)this + 1452);
  if ( *((_BYTE *)this + 1464) )
  {
    *a2 = *v7;
  }
  else
  {
    ObjectsAvailableForRendering = CSpatialCrossProcessBaseEndpoint::GetObjectsAvailableForRendering(
                                     (CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 16),
                                     (unsigned int *)this + 362,
                                     (unsigned int *)this + 363);
    if ( ObjectsAvailableForRendering < 0 )
      goto LABEL_18;
    ObjectsAvailableForRendering = (*(__int64 (__fastcall **)(CSpatialCrossProcessClientOutputEndpoint *, int *, int *))(*(_QWORD *)this + 64LL))(
                                     this,
                                     &v13,
                                     &v14);
    if ( ObjectsAvailableForRendering < 0
      || (ObjectsAvailableForRendering = CSpatialCrossProcessBaseEndpoint::GetFramesPerPacket(
                                           (CSpatialCrossProcessClientOutputEndpoint *)((char *)this - 16),
                                           (unsigned int *)this + 365),
          ObjectsAvailableForRendering < 0) )
    {
      State = PingPongState::GetState((__int64)this + 560);
      if ( State != 17 )
      {
        do
        {
          if ( State > 0x10 )
            break;
          v11 = State;
          State = _InterlockedCompareExchange(
                    *((volatile signed __int32 **)this + 87),
                    `PingPongState::AbortWrite'::`2'::nextState[State],
                    State);
        }
        while ( v11 != State );
      }
      goto LABEL_18;
    }
    v8 = v14 + v13;
    v9 = (void *)*((_QWORD *)this + 169);
    if ( v9 )
    {
      if ( v8 <= *((_DWORD *)this + 336) )
      {
        *((_DWORD *)this + 333) = 0;
        *((_DWORD *)this + 332) = v8;
        if ( v8 )
          memset_0(v9, 0, 4LL * v8);
      }
    }
    *a2 = *v7;
    *((_BYTE *)this + 1464) = 1;
  }
  return (unsigned int)ObjectsAvailableForRendering;
}
