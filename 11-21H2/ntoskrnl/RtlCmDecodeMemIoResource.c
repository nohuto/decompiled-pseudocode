/*
 * XREFs of RtlCmDecodeMemIoResource @ 0x140388BD0
 * Callers:
 *     sub_140514F70 @ 0x140514F70 (sub_140514F70.c)
 *     sub_140821D18 @ 0x140821D18 (sub_140821D18.c)
 *     sub_1408314C4 @ 0x1408314C4 (sub_1408314C4.c)
 *     sub_14083C0F4 @ 0x14083C0F4 (sub_14083C0F4.c)
 *     sub_140948130 @ 0x140948130 (sub_140948130.c)
 *     sub_140951944 @ 0x140951944 (sub_140951944.c)
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
