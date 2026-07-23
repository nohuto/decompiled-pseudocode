/*
 * XREFs of sub_140792CCC @ 0x140792CCC
 * Callers:
 *     sub_14075B48C @ 0x14075B48C (sub_14075B48C.c)
 *     sub_14075BB10 @ 0x14075BB10 (sub_14075BB10.c)
 *     sub_14075C380 @ 0x14075C380 (sub_14075C380.c)
 *     sub_140791640 @ 0x140791640 (sub_140791640.c)
 *     sub_1407ECF00 @ 0x1407ECF00 (sub_1407ECF00.c)
 *     sub_1407ED16C @ 0x1407ED16C (sub_1407ED16C.c)
 *     sub_1407ED1D8 @ 0x1407ED1D8 (sub_1407ED1D8.c)
 *     sub_1407ED53C @ 0x1407ED53C (sub_1407ED53C.c)
 *     sub_1408411FC @ 0x1408411FC (sub_1408411FC.c)
 *     sub_140841428 @ 0x140841428 (sub_140841428.c)
 *     sub_1408414E0 @ 0x1408414E0 (sub_1408414E0.c)
 *     sub_140841610 @ 0x140841610 (sub_140841610.c)
 *     sub_140842864 @ 0x140842864 (sub_140842864.c)
 *     sub_140842978 @ 0x140842978 (sub_140842978.c)
 *     sub_140842F74 @ 0x140842F74 (sub_140842F74.c)
 *     sub_14084328C @ 0x14084328C (sub_14084328C.c)
 *     sub_1408432E0 @ 0x1408432E0 (sub_1408432E0.c)
 *     sub_140843334 @ 0x140843334 (sub_140843334.c)
 *     sub_140843388 @ 0x140843388 (sub_140843388.c)
 *     sub_1408433DC @ 0x1408433DC (sub_1408433DC.c)
 *     sub_1408434E0 @ 0x1408434E0 (sub_1408434E0.c)
 *     sub_1408436C0 @ 0x1408436C0 (sub_1408436C0.c)
 *     sub_1408437A4 @ 0x1408437A4 (sub_1408437A4.c)
 *     sub_140861690 @ 0x140861690 (sub_140861690.c)
 *     sub_1409638AC @ 0x1409638AC (sub_1409638AC.c)
 *     sub_140963CD0 @ 0x140963CD0 (sub_140963CD0.c)
 *     sub_140A10C20 @ 0x140A10C20 (sub_140A10C20.c)
 *     sub_140A10CF0 @ 0x140A10CF0 (sub_140A10CF0.c)
 *     sub_140A11A00 @ 0x140A11A00 (sub_140A11A00.c)
 *     sub_140A11F60 @ 0x140A11F60 (sub_140A11F60.c)
 *     sub_140A122E0 @ 0x140A122E0 (sub_140A122E0.c)
 *     sub_140A12454 @ 0x140A12454 (sub_140A12454.c)
 *     sub_140A124A4 @ 0x140A124A4 (sub_140A124A4.c)
 *     sub_140A126D0 @ 0x140A126D0 (sub_140A126D0.c)
 *     sub_140A12C84 @ 0x140A12C84 (sub_140A12C84.c)
 *     sub_140A12D00 @ 0x140A12D00 (sub_140A12D00.c)
 *     sub_140A1311C @ 0x140A1311C (sub_140A1311C.c)
 *     sub_140A146FC @ 0x140A146FC (sub_140A146FC.c)
 * Callees:
 *     sub_140791910 @ 0x140791910 (sub_140791910.c)
 *     sub_140792D40 @ 0x140792D40 (sub_140792D40.c)
 *     sub_14079499C @ 0x14079499C (sub_14079499C.c)
 */

__int64 __fastcall sub_140792CCC(__int64 a1, __int64 a2, __int16 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // ebp
  unsigned int i; // eax
  unsigned int v8; // ebx

  v3 = 0;
  v5 = a2;
  for ( i = sub_140791910(a1, a2); ; i = sub_140792D40(a1, v5, v8) )
  {
    v8 = i;
    if ( !i )
      break;
    if ( (unsigned __int16)sub_14079499C(a1, i) == a3 )
      return v8;
  }
  return v3;
}
