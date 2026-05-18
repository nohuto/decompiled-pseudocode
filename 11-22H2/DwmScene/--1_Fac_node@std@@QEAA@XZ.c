/*
 * XREFs of ??1_Fac_node@std@@QEAA@XZ @ 0x1800DBB54
 * Callers:
 *     ??1_Fac_tidy_reg_t@std@@QEAA@XZ @ 0x1800DBBA8 (--1_Fac_tidy_reg_t@std@@QEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall std::_Fac_node::~_Fac_node(std::_Fac_node *this)
{
  void (__fastcall ***v1)(_QWORD, __int64); // rax

  v1 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 1) + 16LL))(*((_QWORD *)this + 1));
  if ( v1 )
    (**v1)(v1, 1LL);
}
