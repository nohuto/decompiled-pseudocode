/*
 * XREFs of KeInitializeApc @ 0x1402F47B0
 * Callers:
 *     sub_1402B59D0 @ 0x1402B59D0 (sub_1402B59D0.c)
 *     sub_1402E33D0 @ 0x1402E33D0 (sub_1402E33D0.c)
 *     sub_140347E10 @ 0x140347E10 (sub_140347E10.c)
 *     sub_14037AF3C @ 0x14037AF3C (sub_14037AF3C.c)
 *     sub_140417DE0 @ 0x140417DE0 (sub_140417DE0.c)
 *     IoRaiseHardError @ 0x140557690 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x140557960 (IoRaiseInformationalHardError.c)
 *     sub_14059CFBC @ 0x14059CFBC (sub_14059CFBC.c)
 *     sub_1406314E0 @ 0x1406314E0 (sub_1406314E0.c)
 *     sub_1406330FC @ 0x1406330FC (sub_1406330FC.c)
 *     sub_1406362D0 @ 0x1406362D0 (sub_1406362D0.c)
 *     sub_1406A1F70 @ 0x1406A1F70 (sub_1406A1F70.c)
 *     sub_1406A4C58 @ 0x1406A4C58 (sub_1406A4C58.c)
 *     sub_140701B0C @ 0x140701B0C (sub_140701B0C.c)
 *     sub_1407043D0 @ 0x1407043D0 (sub_1407043D0.c)
 *     sub_1407045D0 @ 0x1407045D0 (sub_1407045D0.c)
 *     sub_14079D948 @ 0x14079D948 (sub_14079D948.c)
 *     sub_1407E5600 @ 0x1407E5600 (sub_1407E5600.c)
 *     sub_1407FFFE4 @ 0x1407FFFE4 (sub_1407FFFE4.c)
 *     sub_14092B264 @ 0x14092B264 (sub_14092B264.c)
 *     sub_140962BA0 @ 0x140962BA0 (sub_140962BA0.c)
 *     sub_1409AD99C @ 0x1409AD99C (sub_1409AD99C.c)
 *     sub_140A48020 @ 0x140A48020 (sub_140A48020.c)
 * Callees:
 *     <none>
 */

char __fastcall KeInitializeApc(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  char result; // al

  *(_BYTE *)a1 = 18;
  *(_BYTE *)(a1 + 2) = 88;
  if ( a3 == 2 )
    LOBYTE(a3) = *(_BYTE *)(a2 + 586);
  *(_BYTE *)(a1 + 80) = a3;
  *(_QWORD *)(a1 + 40) = a5;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 48) = a6;
  *(_QWORD *)(a1 + 32) = a4;
  result = a6 != 0 ? a7 : 0;
  *(_BYTE *)(a1 + 81) = result;
  *(_QWORD *)(a1 + 56) = a8 & -(__int64)(a6 != 0);
  *(_BYTE *)(a1 + 82) = 0;
  *(_BYTE *)(a1 + 1) = 0;
  return result;
}
