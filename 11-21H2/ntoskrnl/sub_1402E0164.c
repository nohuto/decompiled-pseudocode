/*
 * XREFs of sub_1402E0164 @ 0x1402E0164
 * Callers:
 *     sub_1403A5AF0 @ 0x1403A5AF0 (sub_1403A5AF0.c)
 *     sub_1406932C0 @ 0x1406932C0 (sub_1406932C0.c)
 *     sub_14069A660 @ 0x14069A660 (sub_14069A660.c)
 *     sub_1406C81D4 @ 0x1406C81D4 (sub_1406C81D4.c)
 *     IoWMIRegistrationControl @ 0x1406C8220 (IoWMIRegistrationControl.c)
 *     sub_1406C82F8 @ 0x1406C82F8 (sub_1406C82F8.c)
 *     sub_1406DAF30 @ 0x1406DAF30 (sub_1406DAF30.c)
 *     sub_1406E5154 @ 0x1406E5154 (sub_1406E5154.c)
 *     sub_140783A9C @ 0x140783A9C (sub_140783A9C.c)
 *     sub_140810420 @ 0x140810420 (sub_140810420.c)
 *     sub_14081AB2C @ 0x14081AB2C (sub_14081AB2C.c)
 * Callees:
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 */

LONG __fastcall sub_1402E0164(__int64 a1)
{
  LONG result; // eax

  result = _InterlockedDecrement((volatile signed __int32 *)(a1 + 48));
  if ( (result & 0xFFFFFF) == 0 )
    return KeSetEvent(*(PRKEVENT *)(a1 + 40), 0, 0);
  return result;
}
