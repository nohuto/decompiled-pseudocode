/*
 * XREFs of SeCreateAccessState @ 0x14071F140
 * Callers:
 *     sub_1402022FC @ 0x1402022FC (sub_1402022FC.c)
 *     sub_1406634A0 @ 0x1406634A0 (sub_1406634A0.c)
 *     sub_1406686C8 @ 0x1406686C8 (sub_1406686C8.c)
 *     sub_140671BE0 @ 0x140671BE0 (sub_140671BE0.c)
 *     sub_1406D2920 @ 0x1406D2920 (sub_1406D2920.c)
 *     sub_1406D7150 @ 0x1406D7150 (sub_1406D7150.c)
 *     ObReferenceObjectByName @ 0x14071EEC0 (ObReferenceObjectByName.c)
 *     sub_140782F2C @ 0x140782F2C (sub_140782F2C.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 *     sub_1409C6000 @ 0x1409C6000 (sub_1409C6000.c)
 *     sub_140A03FB4 @ 0x140A03FB4 (sub_140A03FB4.c)
 * Callees:
 *     SeCreateAccessStateEx @ 0x14071F190 (SeCreateAccessStateEx.c)
 */

__int64 __fastcall SeCreateAccessState(int a1, int a2, int a3, __int64 a4)
{
  return SeCreateAccessStateEx(
           (unsigned int)KeGetCurrentThread(),
           *((_QWORD *)KeGetCurrentThread() + 23),
           a1,
           a2,
           a3,
           a4);
}
