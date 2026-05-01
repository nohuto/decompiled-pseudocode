/*
 * XREFs of ?v_IsTabEligible@CWin32ApplicationView@@EEAAJPEA_N@Z @ 0x180313EA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::v_IsTabEligible(CWin32ApplicationView *this, bool *a2)
{
  __int64 v3; // rax
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0;
  *a2 = 0;
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 24LL))(*((_QWORD *)this + 27));
  if ( (int)DwmGetUnmetTabRequirements(v3, &v5) >= 0 )
    *a2 = v5 == 0;
  return 0LL;
}
