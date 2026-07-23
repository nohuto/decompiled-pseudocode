/*
 * XREFs of RtlCmDecodeMemIoResource @ 0x1403754C0
 * Callers:
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x140512E48 (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     PnpFilterResourceRequirementsList @ 0x1408168D0 (PnpFilterResourceRequirementsList.c)
 *     PnpIsRangeWithin @ 0x140817294 (PnpIsRangeWithin.c)
 *     PnpCmResourcesToIoResources @ 0x140817374 (PnpCmResourcesToIoResources.c)
 *     IopGenericUnpackResource @ 0x14095A080 (IopGenericUnpackResource.c)
 *     PnprAddMemoryResources @ 0x1409657D4 (PnprAddMemoryResources.c)
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
