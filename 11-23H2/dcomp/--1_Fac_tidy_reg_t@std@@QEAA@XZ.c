/*
 * XREFs of ??1_Fac_tidy_reg_t@std@@QEAA@XZ @ 0x180095950
 * Callers:
 *     std::_dynamic_atexit_destructor_for___Fac_tidy_reg___0 @ 0x1800B2300 (std--_dynamic_atexit_destructor_for___Fac_tidy_reg___0.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180095B64 (--3@YAXPEAX_K@Z.c)
 *     ??1_Fac_node@std@@QEAA@XZ @ 0x1801B224C (--1_Fac_node@std@@QEAA@XZ.c)
 */

void __fastcall std::_Fac_tidy_reg_t::~_Fac_tidy_reg_t(std::_Fac_tidy_reg_t *this)
{
  std::_Fac_node *v1; // rcx
  std::_Fac_node *v2; // rbx

  while ( 1 )
  {
    v2 = qword_18021CCE0;
    if ( !qword_18021CCE0 )
      break;
    v1 = qword_18021CCE0;
    qword_18021CCE0 = *(std::_Fac_node **)qword_18021CCE0;
    std::_Fac_node::~_Fac_node(v1);
    operator delete(v2, 0x10uLL);
  }
}
