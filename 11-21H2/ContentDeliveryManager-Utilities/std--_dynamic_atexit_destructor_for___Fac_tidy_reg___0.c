/*
 * XREFs of std::_dynamic_atexit_destructor_for___Fac_tidy_reg___0 @ 0x1800F7740
 * Callers:
 *     <none>
 * Callees:
 *     ??_G_Fac_node@std@@QEAAPEAXI@Z @ 0x180004D80 (--_G_Fac_node@std@@QEAAPEAXI@Z.c)
 */

std::_Fac_node *std::_dynamic_atexit_destructor_for___Fac_tidy_reg___0()
{
  std::_Fac_node *result; // rax
  std::_Fac_node *v1; // rcx

  while ( 1 )
  {
    v1 = qword_1801AE440;
    if ( !qword_1801AE440 )
      break;
    qword_1801AE440 = *(std::_Fac_node **)qword_1801AE440;
    result = std::_Fac_node::`scalar deleting destructor'(v1, 1);
  }
  return result;
}
