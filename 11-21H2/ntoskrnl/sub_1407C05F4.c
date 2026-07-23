/*
 * XREFs of sub_1407C05F4 @ 0x1407C05F4
 * Callers:
 *     sub_140226200 @ 0x140226200 (sub_140226200.c)
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_140680100 @ 0x140680100 (sub_140680100.c)
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 *     sub_140690978 @ 0x140690978 (sub_140690978.c)
 *     sub_14069E98C @ 0x14069E98C (sub_14069E98C.c)
 *     sub_14069EF78 @ 0x14069EF78 (sub_14069EF78.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_14071A6D4 @ 0x14071A6D4 (sub_14071A6D4.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140720E20 (CmCallbackGetKeyObjectIDEx.c)
 *     sub_140721254 @ 0x140721254 (sub_140721254.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407F6698 @ 0x1407F6698 (sub_1407F6698.c)
 *     sub_1407F7AD0 @ 0x1407F7AD0 (sub_1407F7AD0.c)
 *     sub_14085BE8C @ 0x14085BE8C (sub_14085BE8C.c)
 *     CmCallbackGetKeyObjectID @ 0x1408812B0 (CmCallbackGetKeyObjectID.c)
 *     sub_14090E160 @ 0x14090E160 (sub_14090E160.c)
 *     sub_14091210C @ 0x14091210C (sub_14091210C.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140913964 @ 0x140913964 (sub_140913964.c)
 *     sub_140913E28 @ 0x140913E28 (sub_140913E28.c)
 *     sub_140914324 @ 0x140914324 (sub_140914324.c)
 *     sub_140916918 @ 0x140916918 (sub_140916918.c)
 * Callees:
 *     sub_1407C063C @ 0x1407C063C (sub_1407C063C.c)
 *     sub_1407C07F4 @ 0x1407C07F4 (sub_1407C07F4.c)
 */

__int64 __fastcall sub_1407C05F4(__int64 a1, __int64 a2)
{
  int v4; // ebx

  v4 = sub_1407C07F4(a1, *(unsigned __int16 *)(a2 + 66));
  if ( v4 >= 0 )
    sub_1407C063C(a1, a2);
  return (unsigned int)v4;
}
