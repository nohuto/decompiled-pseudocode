/*
 * XREFs of sub_14023BD3C @ 0x14023BD3C
 * Callers:
 *     sub_14067DE90 @ 0x14067DE90 (sub_14067DE90.c)
 *     sub_140714980 @ 0x140714980 (sub_140714980.c)
 *     sub_14071FAA0 @ 0x14071FAA0 (sub_14071FAA0.c)
 *     sub_1407C0160 @ 0x1407C0160 (sub_1407C0160.c)
 *     sub_14090EF60 @ 0x14090EF60 (sub_14090EF60.c)
 * Callees:
 *     sub_1406B67A0 @ 0x1406B67A0 (sub_1406B67A0.c)
 */

bool __fastcall sub_14023BD3C(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx

  if ( !byte_140C097BD )
    return 0;
  v3 = a1;
  LOBYTE(a1) = *((_BYTE *)KeGetCurrentThread() + 562);
  return (unsigned __int8)sub_1406B67A0(a1, v3, a2) == 0;
}
