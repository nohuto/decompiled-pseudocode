/*
 * XREFs of sub_1402E0200 @ 0x1402E0200
 * Callers:
 *     sub_1405D6E84 @ 0x1405D6E84 (sub_1405D6E84.c)
 *     CarCopyRuleViolationDetails @ 0x1406033F0 (CarCopyRuleViolationDetails.c)
 *     sub_140605280 @ 0x140605280 (sub_140605280.c)
 *     sub_1406498D0 @ 0x1406498D0 (sub_1406498D0.c)
 *     sub_14075B1B8 @ 0x14075B1B8 (sub_14075B1B8.c)
 *     sub_14075B270 @ 0x14075B270 (sub_14075B270.c)
 *     sub_14075CF70 @ 0x14075CF70 (sub_14075CF70.c)
 *     sub_14075EF9C @ 0x14075EF9C (sub_14075EF9C.c)
 *     sub_140765C60 @ 0x140765C60 (sub_140765C60.c)
 *     sub_14076CE48 @ 0x14076CE48 (sub_14076CE48.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14080B5F0 (DbgkWerCaptureLiveKernelDump.c)
 *     sub_14080E438 @ 0x14080E438 (sub_14080E438.c)
 *     sub_14083E410 @ 0x14083E410 (sub_14083E410.c)
 *     sub_14083E6C0 @ 0x14083E6C0 (sub_14083E6C0.c)
 *     sub_1408411FC @ 0x1408411FC (sub_1408411FC.c)
 *     sub_140841F20 @ 0x140841F20 (sub_140841F20.c)
 *     sub_140854E78 @ 0x140854E78 (sub_140854E78.c)
 *     sub_14098D0C0 @ 0x14098D0C0 (sub_14098D0C0.c)
 *     TtmNotifyDeviceArrival @ 0x1409A1660 (TtmNotifyDeviceArrival.c)
 *     sub_1409A29D4 @ 0x1409A29D4 (sub_1409A29D4.c)
 *     sub_140A15B1C @ 0x140A15B1C (sub_140A15B1C.c)
 *     sub_140A15ECC @ 0x140A15ECC (sub_140A15ECC.c)
 *     sub_140A17ABC @ 0x140A17ABC (sub_140A17ABC.c)
 *     sub_140A17D10 @ 0x140A17D10 (sub_140A17D10.c)
 *     sub_140A18114 @ 0x140A18114 (sub_140A18114.c)
 *     sub_140A28700 @ 0x140A28700 (sub_140A28700.c)
 *     sub_140A2F0F0 @ 0x140A2F0F0 (sub_140A2F0F0.c)
 *     sub_140B0E88C @ 0x140B0E88C (sub_140B0E88C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402E0200(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r10
  __int16 v5; // ax
  _WORD *v6; // rax
  __int64 result; // rax

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    v3 = 2147483646 - a2;
    v4 = a3 - (_QWORD)a1;
    do
    {
      if ( !(v3 + a2) )
        break;
      v5 = *(_WORD *)((char *)a1 + v4);
      if ( !v5 )
        break;
      *a1++ = v5;
      --a2;
    }
    while ( a2 );
    v6 = a1 - 1;
    if ( a2 )
      v6 = a1;
    *v6 = 0;
    return a2 == 0 ? 0x80000005 : 0;
  }
  return result;
}
