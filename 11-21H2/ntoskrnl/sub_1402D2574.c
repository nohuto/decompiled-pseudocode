/*
 * XREFs of sub_1402D2574 @ 0x1402D2574
 * Callers:
 *     sub_140749DA0 @ 0x140749DA0 (sub_140749DA0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A91784 @ 0x140A91784 (sub_140A91784.c)
 *     sub_140A917D8 @ 0x140A917D8 (sub_140A917D8.c)
 */

__int64 __fastcall sub_1402D2574(struct _DEVICE_OBJECT *a1, struct _DRIVER_OBJECT *a2)
{
  unsigned int v5; // ebx

  if ( !byte_140D01124 )
    return sub_14042A5E0(a2, a1);
  sub_140A917D8(a1, a2);
  v5 = sub_14042A5E0(a2, a1);
  sub_140A91784(a1, a2, v5);
  return v5;
}
