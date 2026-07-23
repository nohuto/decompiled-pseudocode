/*
 * XREFs of sub_1405C4B8C @ 0x1405C4B8C
 * Callers:
 *     sub_1402206C0 @ 0x1402206C0 (sub_1402206C0.c)
 *     sub_14022CBE0 @ 0x14022CBE0 (sub_14022CBE0.c)
 *     sub_14022CE0C @ 0x14022CE0C (sub_14022CE0C.c)
 *     sub_14023F9CC @ 0x14023F9CC (sub_14023F9CC.c)
 *     sub_140250924 @ 0x140250924 (sub_140250924.c)
 *     sub_14026E564 @ 0x14026E564 (sub_14026E564.c)
 *     sub_1402700FC @ 0x1402700FC (sub_1402700FC.c)
 *     sub_140273390 @ 0x140273390 (sub_140273390.c)
 *     sub_140274860 @ 0x140274860 (sub_140274860.c)
 *     sub_14027F360 @ 0x14027F360 (sub_14027F360.c)
 *     sub_140283DF0 @ 0x140283DF0 (sub_140283DF0.c)
 *     sub_1402867DC @ 0x1402867DC (sub_1402867DC.c)
 *     sub_140286DE0 @ 0x140286DE0 (sub_140286DE0.c)
 *     sub_1402875B0 @ 0x1402875B0 (sub_1402875B0.c)
 *     sub_140287660 @ 0x140287660 (sub_140287660.c)
 *     sub_1402ED0C4 @ 0x1402ED0C4 (sub_1402ED0C4.c)
 *     sub_140311CC0 @ 0x140311CC0 (sub_140311CC0.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_140335870 @ 0x140335870 (sub_140335870.c)
 *     sub_1403885EC @ 0x1403885EC (sub_1403885EC.c)
 *     sub_14058A4E8 @ 0x14058A4E8 (sub_14058A4E8.c)
 *     sub_14058A6D4 @ 0x14058A6D4 (sub_14058A6D4.c)
 *     sub_14058B0C8 @ 0x14058B0C8 (sub_14058B0C8.c)
 *     sub_14058B540 @ 0x14058B540 (sub_14058B540.c)
 *     sub_14058B784 @ 0x14058B784 (sub_14058B784.c)
 *     sub_14058C0E4 @ 0x14058C0E4 (sub_14058C0E4.c)
 *     sub_14058C1D4 @ 0x14058C1D4 (sub_14058C1D4.c)
 *     sub_14058C330 @ 0x14058C330 (sub_14058C330.c)
 *     sub_140592278 @ 0x140592278 (sub_140592278.c)
 *     sub_140597C48 @ 0x140597C48 (sub_140597C48.c)
 *     sub_1406A3A68 @ 0x1406A3A68 (sub_1406A3A68.c)
 *     sub_1406A4140 @ 0x1406A4140 (sub_1406A4140.c)
 *     sub_1406F4904 @ 0x1406F4904 (sub_1406F4904.c)
 * Callees:
 *     sub_14028CE10 @ 0x14028CE10 (sub_14028CE10.c)
 *     sub_1405BF468 @ 0x1405BF468 (sub_1405BF468.c)
 */

LONG __fastcall sub_1405C4B8C(__int64 a1, int a2, unsigned __int64 a3)
{
  char v4; // si
  unsigned __int64 v6; // r8
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v8; // rdx
  bool v9; // zf
  signed __int32 v10; // eax

  v4 = a2;
  if ( a2 )
    sub_14028CE10(a1, a3);
  v6 = a3;
  if ( (ULONG_PTR *)a1 == &StartContext )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    v8 = *((int *)CurrentPrcb + 8615);
    if ( (_DWORD)v8 != -1 )
    {
      if ( a3 + v8 <= 0x100 )
      {
        do
        {
          if ( a3 >= 0x80000 )
            break;
          v10 = _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, v8 + a3, v8);
          v9 = (_DWORD)v8 == v10;
          LODWORD(v8) = v10;
          if ( v9 )
            return sub_1405BF468(a1, 0, v4, a3);
        }
        while ( v10 != -1 && a3 + v10 <= 0x100 );
      }
      if ( (int)v8 > 192
        && (_DWORD)v8 == _InterlockedCompareExchange((volatile signed __int32 *)CurrentPrcb + 8615, 192, v8) )
      {
        v6 = a3 + (int)v8 - 192;
      }
    }
  }
  if ( v6 )
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 16960), v6);
  return sub_1405BF468(a1, 0, v4, a3);
}
