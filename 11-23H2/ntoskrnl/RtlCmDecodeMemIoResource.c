/*
 * XREFs of RtlCmDecodeMemIoResource @ 0x140375320
 * Callers:
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x1405128F8 (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     PnpFilterResourceRequirementsList @ 0x140816600 (PnpFilterResourceRequirementsList.c)
 *     PnpIsRangeWithin @ 0x140816FC4 (PnpIsRangeWithin.c)
 *     PnpCmResourcesToIoResources @ 0x1408170A4 (PnpCmResourcesToIoResources.c)
 *     IopGenericUnpackResource @ 0x140959E80 (IopGenericUnpackResource.c)
 *     PnprAddMemoryResources @ 0x1409655D4 (PnprAddMemoryResources.c)
 * Callees:
 *     <none>
 */

ULONGLONG __stdcall RtlCmDecodeMemIoResource(PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor, PULONGLONG Start)
{
  ULONGLONG Length; // r8
  USHORT Flags; // ax

  Length = 0LL;
  if ( ((Descriptor->Type - 1) & 0xFD) != 0 )
  {
    Flags = Descriptor->Flags;
    if ( (Flags & 0x200) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Generic.Length << 8;
    }
    else if ( (Flags & 0x400) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Generic.Length << 16;
    }
    else if ( (Flags & 0x800) != 0 )
    {
      Length = (unsigned __int64)Descriptor->u.Generic.Length << 32;
    }
  }
  else
  {
    Length = Descriptor->u.Generic.Length;
  }
  if ( Start )
    *Start = Descriptor->u.Generic.Start.QuadPart;
  return Length;
}
