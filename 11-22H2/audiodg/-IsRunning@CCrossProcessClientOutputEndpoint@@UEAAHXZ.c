/*
 * XREFs of ?IsRunning@CCrossProcessClientOutputEndpoint@@UEAAHXZ @ 0x14003A3F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessClientOutputEndpoint::IsRunning(CCrossProcessClientOutputEndpoint *this)
{
  return _InterlockedCompareExchange((volatile signed __int32 *)(*((_QWORD *)this - 53) + 164LL), 0, 0) & 1;
}
