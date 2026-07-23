/*
 * XREFs of sub_140721B68 @ 0x140721B68
 * Callers:
 *     sub_140226200 @ 0x140226200 (sub_140226200.c)
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 *     sub_1406803C0 @ 0x1406803C0 (sub_1406803C0.c)
 *     sub_140720260 @ 0x140720260 (sub_140720260.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x140720E20 (CmCallbackGetKeyObjectIDEx.c)
 *     sub_140721254 @ 0x140721254 (sub_140721254.c)
 *     sub_1407C83F0 @ 0x1407C83F0 (sub_1407C83F0.c)
 *     sub_1407F6698 @ 0x1407F6698 (sub_1407F6698.c)
 *     CmCallbackGetKeyObjectID @ 0x1408812B0 (CmCallbackGetKeyObjectID.c)
 *     sub_14091210C @ 0x14091210C (sub_14091210C.c)
 *     sub_140914324 @ 0x140914324 (sub_140914324.c)
 * Callees:
 *     sub_140721CE0 @ 0x140721CE0 (sub_140721CE0.c)
 *     sub_140AB42D0 @ 0x140AB42D0 (sub_140AB42D0.c)
 */

void __fastcall sub_140721B68(__int64 a1)
{
  unsigned __int16 i; // bx
  __int64 v3; // rax

  for ( i = 0; i <= *(_WORD *)(a1 + 2); ++i )
  {
    v3 = sub_140721CE0(a1, i);
    sub_140AB42D0(v3);
  }
}
