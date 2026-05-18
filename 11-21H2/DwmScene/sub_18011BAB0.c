/*
 * XREFs of sub_18011BAB0 @ 0x18011BAB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18011BAB0()
{
  __int64 v0; // rcx

  v0 = qword_1801FAD18;
  if ( qword_1801FAD18 )
  {
    qword_1801FAD18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v0 + 16LL))(v0);
  }
}
