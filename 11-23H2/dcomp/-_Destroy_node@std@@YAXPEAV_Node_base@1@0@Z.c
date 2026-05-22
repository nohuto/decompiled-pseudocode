/*
 * XREFs of ?_Destroy_node@std@@YAXPEAV_Node_base@1@0@Z @ 0x18007D530
 * Callers:
 *     ??_E_Node_if@std@@UEAAPEAXI@Z @ 0x1800438F0 (--_E_Node_if@std@@UEAAPEAXI@Z.c)
 *     ??1?$_Tidy_guard@V?$_Builder@PEBGGV?$regex_traits@G@std@@@std@@@std@@QEAA@XZ @ 0x18007D480 (--1-$_Tidy_guard@V-$_Builder@PEBGGV-$regex_traits@G@std@@@std@@@std@@QEAA@XZ.c)
 *     ?_Tidy@?$basic_regex@GV?$regex_traits@G@std@@@std@@AEAAXXZ @ 0x18007D4A0 (-_Tidy@-$basic_regex@GV-$regex_traits@G@std@@@std@@AEAAXXZ.c)
 *     ??1_Node_assert@std@@UEAA@XZ @ 0x18014EEBC (--1_Node_assert@std@@UEAA@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall std::_Destroy_node(struct std::_Node_base *a1, struct std::_Node_base *a2)
{
  struct std::_Node_base *v3; // rbx
  _QWORD *v4; // rax
  struct std::_Node_base *v5; // rcx

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( !v3 )
        break;
      v4 = (_QWORD *)((char *)v3 + 16);
      v5 = v3;
      v3 = (struct std::_Node_base *)*((_QWORD *)v3 + 2);
      *v4 = 0LL;
      (**(void (__fastcall ***)(struct std::_Node_base *, __int64))v5)(v5, 1LL);
    }
    while ( v3 != a2 );
  }
}
