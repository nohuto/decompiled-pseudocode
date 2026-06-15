/*
 * XREFs of ?GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x1400918E0
 * Callers:
 *     ?GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x140091DE0 (-GetObjectsAvailableForRendering@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?GetGrantedDynamicObjectCount@CSpatialCrossProcessClientEndpoint@@UEAAJPEAI@Z @ 0x1400939B0 (-GetGrantedDynamicObjectCount@CSpatialCrossProcessClientEndpoint@@UEAAJPEAI@Z.c)
 * Callees:
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140090784 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ @ 0x1400930E0 (-ValidateBlockDescriptors@CSpatialCrossProcessBaseEndpoint@@AEAAJXZ.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::GetGrantedDynamicObjectCount(
        CSpatialCrossProcessBaseEndpoint *this,
        unsigned int *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // r9
  unsigned int v6; // edx
  signed __int64 v7; // rax
  unsigned int v8; // ecx

  *a2 = 0;
  v4 = CSpatialCrossProcessBaseEndpoint::ValidateBlockDescriptors(this);
  if ( (v4 & 0x80000000) == 0 )
  {
    while ( 1 )
    {
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 162) + 20LL), 0, 0);
      if ( v6 > *((_DWORD *)this + 73) )
        break;
      if ( (_InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 162) + 64LL), 0, 0) & 0x40) != 0 )
      {
        *a2 = v6;
      }
      else
      {
        v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(*((_QWORD *)this + 162) + 56LL), 0LL, 0LL);
        v8 = v7 + HIDWORD(v7);
        if ( v6 < (int)v7 + HIDWORD(v7) )
          v8 = v6;
        *a2 = v8;
      }
      if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this + 162) + 20LL), 0, 0) )
        return v4;
    }
    v4 = -2005139387;
  }
  SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::GetGrantedDynamicObjectCount", 736, v4, v5);
  return v4;
}
