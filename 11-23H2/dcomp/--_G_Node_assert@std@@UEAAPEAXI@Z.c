/*
 * XREFs of ??_G_Node_assert@std@@UEAAPEAXI@Z @ 0x18014F0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1_Node_assert@std@@UEAA@XZ @ 0x18014EEBC (--1_Node_assert@std@@UEAA@XZ.c)
 */

struct std::_Node_base **__fastcall std::_Node_assert::`scalar deleting destructor'(
        struct std::_Node_base **this,
        char a2)
{
  std::_Node_assert::~_Node_assert(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
