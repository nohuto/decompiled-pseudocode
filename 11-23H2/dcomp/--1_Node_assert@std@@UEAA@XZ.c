/*
 * XREFs of ??1_Node_assert@std@@UEAA@XZ @ 0x18014EEBC
 * Callers:
 *     ??_G_Node_assert@std@@UEAAPEAXI@Z @ 0x18014F0E0 (--_G_Node_assert@std@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Destroy_node@std@@YAXPEAV_Node_base@1@0@Z @ 0x18007D530 (-_Destroy_node@std@@YAXPEAV_Node_base@1@0@Z.c)
 */

void __fastcall std::_Node_assert::~_Node_assert(struct std::_Node_base **this)
{
  *this = (struct std::_Node_base *)&std::_Node_assert::`vftable';
  std::_Destroy_node(this[4], 0LL);
  *this = (struct std::_Node_base *)&std::_Node_endif::`vftable';
}
