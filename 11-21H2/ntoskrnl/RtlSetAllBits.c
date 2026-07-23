/*
 * XREFs of RtlSetAllBits @ 0x140262CA0
 * Callers:
 *     sub_140262938 @ 0x140262938 (sub_140262938.c)
 *     sub_140313DE0 @ 0x140313DE0 (sub_140313DE0.c)
 *     sub_14037717C @ 0x14037717C (sub_14037717C.c)
 *     sub_14059BFB0 @ 0x14059BFB0 (sub_14059BFB0.c)
 *     sub_140761188 @ 0x140761188 (sub_140761188.c)
 *     sub_1407621C0 @ 0x1407621C0 (sub_1407621C0.c)
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 *     sub_14083200C @ 0x14083200C (sub_14083200C.c)
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 *     NaptrDnsRecordConvert_2 @ 0x14084B698 (NaptrDnsRecordConvert_2.c)
 *     sub_140908F2C @ 0x140908F2C (sub_140908F2C.c)
 *     sub_140952F10 @ 0x140952F10 (sub_140952F10.c)
 *     sub_140976880 @ 0x140976880 (sub_140976880.c)
 *     sub_1409D8588 @ 0x1409D8588 (sub_1409D8588.c)
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 *     sub_140B04E44 @ 0x140B04E44 (sub_140B04E44.c)
 *     sub_140B0DBD4 @ 0x140B0DBD4 (sub_140B0DBD4.c)
 *     sub_140B1D9DC @ 0x140B1D9DC (sub_140B1D9DC.c)
 *     sub_140B236AC @ 0x140B236AC (sub_140B236AC.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlSetAllBits(PRTL_BITMAP BitMapHeader)
{
  PULONG Buffer; // r8
  unsigned __int64 v2; // rdx

  Buffer = BitMapHeader->Buffer;
  v2 = (unsigned __int64)(4 * (((BitMapHeader->SizeOfBitMap & 0x1F) != 0) + (BitMapHeader->SizeOfBitMap >> 5))) >> 2;
  if ( v2 )
  {
    if ( ((unsigned __int8)Buffer & 4) != 0 )
    {
      *Buffer = -1;
      if ( !--v2 )
        return;
      ++Buffer;
    }
    memset(Buffer, 0xFFu, 8 * (v2 >> 1));
    if ( (v2 & 1) != 0 )
      Buffer[v2 - 1] = -1;
  }
}
