/*
 * XREFs of sub_140721BAC @ 0x140721BAC
 * Callers:
 *     sub_140226200 @ 0x140226200 (sub_140226200.c)
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 *     sub_140690978 @ 0x140690978 (sub_140690978.c)
 *     sub_140714E58 @ 0x140714E58 (sub_140714E58.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140720E20 (CmCallbackGetKeyObjectIDEx.c)
 *     sub_140721254 @ 0x140721254 (sub_140721254.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_1407C83F0 @ 0x1407C83F0 (sub_1407C83F0.c)
 *     sub_1407F6698 @ 0x1407F6698 (sub_1407F6698.c)
 *     sub_14085BE8C @ 0x14085BE8C (sub_14085BE8C.c)
 *     CmCallbackGetKeyObjectID @ 0x1408812B0 (CmCallbackGetKeyObjectID.c)
 *     sub_14090E160 @ 0x14090E160 (sub_14090E160.c)
 *     sub_14091210C @ 0x14091210C (sub_14091210C.c)
 *     sub_140913964 @ 0x140913964 (sub_140913964.c)
 *     sub_140913E28 @ 0x140913E28 (sub_140913E28.c)
 *     sub_140914324 @ 0x140914324 (sub_140914324.c)
 *     sub_140916918 @ 0x140916918 (sub_140916918.c)
 *     sub_1409226E0 @ 0x1409226E0 (sub_1409226E0.c)
 * Callees:
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 *     sub_140AB4300 @ 0x140AB4300 (sub_140AB4300.c)
 */

void __fastcall sub_140721BAC(__int64 a1)
{
  unsigned __int16 i; // bx
  __int64 v3; // rax

  for ( i = 0; i <= *(_WORD *)(a1 + 2); ++i )
  {
    v3 = sub_140721CE0(a1, i);
    sub_140AB4300(v3);
  }
}
