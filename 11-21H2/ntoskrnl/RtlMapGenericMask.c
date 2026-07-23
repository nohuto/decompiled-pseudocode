/*
 * XREFs of RtlMapGenericMask @ 0x140728CB0
 * Callers:
 *     sub_140347A20 @ 0x140347A20 (sub_140347A20.c)
 *     sub_140668294 @ 0x140668294 (sub_140668294.c)
 *     sub_14066B04C @ 0x14066B04C (sub_14066B04C.c)
 *     sub_1406B6444 @ 0x1406B6444 (sub_1406B6444.c)
 *     sub_1407227B0 @ 0x1407227B0 (sub_1407227B0.c)
 *     sub_140727F00 @ 0x140727F00 (sub_140727F00.c)
 *     sub_140728450 @ 0x140728450 (sub_140728450.c)
 *     sub_1407288D0 @ 0x1407288D0 (sub_1407288D0.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 *     sub_1407CE760 @ 0x1407CE760 (sub_1407CE760.c)
 *     IoCheckDesiredAccess @ 0x1409360B0 (IoCheckDesiredAccess.c)
 *     sub_140A03FB4 @ 0x140A03FB4 (sub_140A03FB4.c)
 *     sub_140A04204 @ 0x140A04204 (sub_140A04204.c)
 * Callees:
 *     <none>
 */

void __stdcall RtlMapGenericMask(PACCESS_MASK AccessMask, PGENERIC_MAPPING GenericMapping)
{
  ACCESS_MASK v2; // eax

  v2 = *AccessMask;
  if ( (*AccessMask & 0x80000000) != 0 )
  {
    v2 |= GenericMapping->GenericRead;
    *AccessMask = v2;
  }
  if ( (v2 & 0x40000000) != 0 )
  {
    v2 |= GenericMapping->GenericWrite;
    *AccessMask = v2;
  }
  if ( (v2 & 0x20000000) != 0 )
  {
    v2 |= GenericMapping->GenericExecute;
    *AccessMask = v2;
  }
  if ( (v2 & 0x10000000) != 0 )
    v2 |= GenericMapping->GenericAll;
  *AccessMask = v2 & 0xFFFFFFF;
}
