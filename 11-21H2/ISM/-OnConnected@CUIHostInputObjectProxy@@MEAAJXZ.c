/*
 * XREFs of ?OnConnected@CUIHostInputObjectProxy@@MEAAJXZ @ 0x180127920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetInstance@CUIHierarchy@@SAAEAV1@XZ @ 0x180084EB0 (-GetInstance@CUIHierarchy@@SAAEAV1@XZ.c)
 *     ?ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z @ 0x1800852D4 (-ModifyInputDisabledStateAndPropagate@CUIHierarchy@@AEAAX_KW4InputDisabledState@@_N@Z.c)
 */

__int64 __fastcall CUIHostInputObjectProxy::OnConnected(CUIHostInputObjectProxy *this)
{
  CUIHierarchy *Instance; // rsi
  char v3; // bl
  unsigned __int64 v4; // rax

  Instance = CUIHierarchy::GetInstance();
  v3 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8);
  v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8);
  CUIHierarchy::ModifyInputDisabledStateAndPropagate(Instance, v4, 1, v3);
  return 0LL;
}
