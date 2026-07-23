/*
 * XREFs of sub_14029394C @ 0x14029394C
 * Callers:
 *     sub_140293600 @ 0x140293600 (sub_140293600.c)
 *     sub_1402939BC @ 0x1402939BC (sub_1402939BC.c)
 *     sub_140304CE0 @ 0x140304CE0 (sub_140304CE0.c)
 *     sub_1403051E0 @ 0x1403051E0 (sub_1403051E0.c)
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 *     sub_140387A68 @ 0x140387A68 (sub_140387A68.c)
 *     sub_140397424 @ 0x140397424 (sub_140397424.c)
 *     sub_140399210 @ 0x140399210 (sub_140399210.c)
 *     sub_14039AD4C @ 0x14039AD4C (sub_14039AD4C.c)
 *     sub_1403B65EC @ 0x1403B65EC (sub_1403B65EC.c)
 *     sub_1403CEDC4 @ 0x1403CEDC4 (sub_1403CEDC4.c)
 *     sub_1403D1F00 @ 0x1403D1F00 (sub_1403D1F00.c)
 *     sub_1403D81D0 @ 0x1403D81D0 (sub_1403D81D0.c)
 *     sub_14045E870 @ 0x14045E870 (sub_14045E870.c)
 *     sub_1405C7D34 @ 0x1405C7D34 (sub_1405C7D34.c)
 *     sub_1405C8ECC @ 0x1405C8ECC (sub_1405C8ECC.c)
 *     sub_1405D1548 @ 0x1405D1548 (sub_1405D1548.c)
 *     sub_1405D73F0 @ 0x1405D73F0 (sub_1405D73F0.c)
 *     sub_1405D7630 @ 0x1405D7630 (sub_1405D7630.c)
 *     sub_1407FDC18 @ 0x1407FDC18 (sub_1407FDC18.c)
 *     sub_1408052DC @ 0x1408052DC (sub_1408052DC.c)
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 *     sub_140849690 @ 0x140849690 (sub_140849690.c)
 *     sub_140A48CA4 @ 0x140A48CA4 (sub_140A48CA4.c)
 *     sub_140A529EC @ 0x140A529EC (sub_140A529EC.c)
 *     sub_140B25110 @ 0x140B25110 (sub_140B25110.c)
 *     sub_140B29B34 @ 0x140B29B34 (sub_140B29B34.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14029394C(unsigned __int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9

  v3 = a1;
  if ( a1 && a2 && a2 != a3 )
  {
    if ( is_mul_ok(a1, a3) )
      return a1 * (unsigned __int128)a3 / a2;
    else
      return a3 * (a1 / a2) + a3 * (a1 % a2) / a2;
  }
  return v3;
}
