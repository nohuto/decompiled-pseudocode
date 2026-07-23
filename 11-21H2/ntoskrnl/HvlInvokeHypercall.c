/*
 * XREFs of HvlInvokeHypercall @ 0x14039DF00
 * Callers:
 *     sub_140398488 @ 0x140398488 (sub_140398488.c)
 *     sub_14039D79C @ 0x14039D79C (sub_14039D79C.c)
 *     sub_14039D930 @ 0x14039D930 (sub_14039D930.c)
 *     HvlUpdatePerformanceStateCountersForLp @ 0x14039DAE0 (HvlUpdatePerformanceStateCountersForLp.c)
 *     sub_14039DE70 @ 0x14039DE70 (sub_14039DE70.c)
 *     sub_1403DEDD0 @ 0x1403DEDD0 (sub_1403DEDD0.c)
 *     sub_140543148 @ 0x140543148 (sub_140543148.c)
 *     sub_1405432A8 @ 0x1405432A8 (sub_1405432A8.c)
 *     sub_1405433C0 @ 0x1405433C0 (sub_1405433C0.c)
 *     sub_1405436CC @ 0x1405436CC (sub_1405436CC.c)
 *     HvlQueryNumaDistance @ 0x140543B40 (HvlQueryNumaDistance.c)
 *     sub_140543EB0 @ 0x140543EB0 (sub_140543EB0.c)
 *     sub_140544258 @ 0x140544258 (sub_140544258.c)
 *     sub_14054455C @ 0x14054455C (sub_14054455C.c)
 *     sub_140544670 @ 0x140544670 (sub_140544670.c)
 *     sub_1405448D4 @ 0x1405448D4 (sub_1405448D4.c)
 *     sub_1405454FC @ 0x1405454FC (sub_1405454FC.c)
 *     sub_1405456C0 @ 0x1405456C0 (sub_1405456C0.c)
 *     sub_140545750 @ 0x140545750 (sub_140545750.c)
 *     sub_1405458A0 @ 0x1405458A0 (sub_1405458A0.c)
 *     sub_14054599C @ 0x14054599C (sub_14054599C.c)
 *     sub_140545C94 @ 0x140545C94 (sub_140545C94.c)
 *     sub_140546200 @ 0x140546200 (sub_140546200.c)
 *     sub_140546300 @ 0x140546300 (sub_140546300.c)
 *     sub_1405465C0 @ 0x1405465C0 (sub_1405465C0.c)
 *     sub_140546900 @ 0x140546900 (sub_140546900.c)
 *     sub_140546AE0 @ 0x140546AE0 (sub_140546AE0.c)
 *     sub_140547040 @ 0x140547040 (sub_140547040.c)
 *     sub_1405471A0 @ 0x1405471A0 (sub_1405471A0.c)
 *     sub_1405472A0 @ 0x1405472A0 (sub_1405472A0.c)
 *     sub_1405473F0 @ 0x1405473F0 (sub_1405473F0.c)
 *     sub_1405474E0 @ 0x1405474E0 (sub_1405474E0.c)
 *     sub_140547570 @ 0x140547570 (sub_140547570.c)
 *     sub_140547850 @ 0x140547850 (sub_140547850.c)
 *     sub_1405478E0 @ 0x1405478E0 (sub_1405478E0.c)
 *     sub_1405479B0 @ 0x1405479B0 (sub_1405479B0.c)
 *     sub_140547A48 @ 0x140547A48 (sub_140547A48.c)
 *     sub_140547BD0 @ 0x140547BD0 (sub_140547BD0.c)
 *     sub_140547D00 @ 0x140547D00 (sub_140547D00.c)
 *     sub_140547F80 @ 0x140547F80 (sub_140547F80.c)
 *     sub_1405481F0 @ 0x1405481F0 (sub_1405481F0.c)
 *     sub_140548398 @ 0x140548398 (sub_140548398.c)
 *     sub_140548430 @ 0x140548430 (sub_140548430.c)
 *     sub_140548560 @ 0x140548560 (sub_140548560.c)
 *     sub_140548600 @ 0x140548600 (sub_140548600.c)
 *     sub_140548C30 @ 0x140548C30 (sub_140548C30.c)
 *     sub_140548D80 @ 0x140548D80 (sub_140548D80.c)
 *     sub_140549100 @ 0x140549100 (sub_140549100.c)
 *     sub_140549558 @ 0x140549558 (sub_140549558.c)
 *     sub_14054961C @ 0x14054961C (sub_14054961C.c)
 *     sub_1405496F8 @ 0x1405496F8 (sub_1405496F8.c)
 *     sub_140549B18 @ 0x140549B18 (sub_140549B18.c)
 *     sub_140549B84 @ 0x140549B84 (sub_140549B84.c)
 *     sub_140549C24 @ 0x140549C24 (sub_140549C24.c)
 *     sub_140549FDC @ 0x140549FDC (sub_140549FDC.c)
 *     sub_14054A050 @ 0x14054A050 (sub_14054A050.c)
 *     sub_14054A3D8 @ 0x14054A3D8 (sub_14054A3D8.c)
 *     sub_14054A9B4 @ 0x14054A9B4 (sub_14054A9B4.c)
 *     sub_14054B670 @ 0x14054B670 (sub_14054B670.c)
 *     sub_14054B7FC @ 0x14054B7FC (sub_14054B7FC.c)
 *     sub_14054BC60 @ 0x14054BC60 (sub_14054BC60.c)
 *     sub_14054C1A4 @ 0x14054C1A4 (sub_14054C1A4.c)
 *     sub_14054C770 @ 0x14054C770 (sub_14054C770.c)
 *     sub_14054CAE0 @ 0x14054CAE0 (sub_14054CAE0.c)
 *     sub_14054CE04 @ 0x14054CE04 (sub_14054CE04.c)
 *     sub_14054CEAC @ 0x14054CEAC (sub_14054CEAC.c)
 *     sub_14054CFC4 @ 0x14054CFC4 (sub_14054CFC4.c)
 *     sub_14054D374 @ 0x14054D374 (sub_14054D374.c)
 *     sub_140653C40 @ 0x140653C40 (sub_140653C40.c)
 *     sub_140653D68 @ 0x140653D68 (sub_140653D68.c)
 *     sub_140653EC4 @ 0x140653EC4 (sub_140653EC4.c)
 *     sub_140654038 @ 0x140654038 (sub_140654038.c)
 *     sub_14065416C @ 0x14065416C (sub_14065416C.c)
 *     sub_1409311AC @ 0x1409311AC (sub_1409311AC.c)
 *     sub_140B4E934 @ 0x140B4E934 (sub_140B4E934.c)
 * Callees:
 *     sub_140223A20 @ 0x140223A20 (sub_140223A20.c)
 *     sub_1403731B0 @ 0x1403731B0 (sub_1403731B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14045FBE2 @ 0x14045FBE2 (sub_14045FBE2.c)
 */

__int64 __fastcall HvlInvokeHypercall(int a1)
{
  char v2; // si
  __int64 v3; // rdi
  int v5; // [rsp+30h] [rbp-48h] BYREF
  char v6; // [rsp+34h] [rbp-44h]
  __int16 v7; // [rsp+35h] [rbp-43h]
  char v8; // [rsp+37h] [rbp-41h]
  _OWORD v9[2]; // [rsp+38h] [rbp-40h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( (BYTE4(xmmword_140D06910) & 0x10) != 0 )
  {
    v2 = 1;
    sub_140223A20((unsigned __int64)v9, 0xA0000010uLL);
  }
  else
  {
    v2 = 0;
  }
  v3 = off_140E01860();
  if ( v2 )
  {
    v8 = 0;
    v5 = (unsigned __int16)a1;
    v6 = BYTE2(a1) & 1;
    v7 = a1 < 0;
    sub_14045FBE2(3954, -1610612720, (unsigned int)&v5, 8, 4200962, (__int64)v9);
  }
  return v3;
}
