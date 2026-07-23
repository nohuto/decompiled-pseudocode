/*
 * XREFs of IoFreeAdapterChannelV3Internal @ 0x1405107A4
 * Callers:
 *     HalpContinueProcessingWaitQueue @ 0x140510134 (HalpContinueProcessingWaitQueue.c)
 *     IoFreeAdapterChannelV3 @ 0x140510750 (IoFreeAdapterChannelV3.c)
 * Callees:
 *     IoFreeMapRegistersV3 @ 0x140510820 (IoFreeMapRegistersV3.c)
 *     HalpFreeDmaChannels @ 0x1405177AC (HalpFreeDmaChannels.c)
 */

__int64 __fastcall IoFreeAdapterChannelV3Internal(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 248) )
  {
    result = IoFreeMapRegistersV3(a1, *(_QWORD *)(a1 + 240));
    *(_DWORD *)(a1 + 248) = 0;
  }
  if ( !*(_BYTE *)(a1 + 441) )
  {
    if ( *(_DWORD *)(a1 + 392) )
      return HalpFreeDmaChannels(a1);
  }
  return result;
}
