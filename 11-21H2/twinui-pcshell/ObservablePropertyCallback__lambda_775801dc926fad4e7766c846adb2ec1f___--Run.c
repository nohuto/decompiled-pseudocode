/*
 * XREFs of ObservablePropertyCallback__lambda_775801dc926fad4e7766c846adb2ec1f___::Run @ 0x180234860
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_RenderLabel@CSwitchItemElement@@IEAAXXZ @ 0x1804B8BF4 (-_RenderLabel@CSwitchItemElement@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall ObservablePropertyCallback__lambda_775801dc926fad4e7766c846adb2ec1f___::Run(__int64 a1)
{
  CSwitchItemElement *v1; // rbx

  v1 = *(CSwitchItemElement **)(*(_QWORD *)(a1 + 16) + 16LL);
  if ( v1 )
  {
    (*(void (__fastcall **)(CSwitchItemElement *))(*(_QWORD *)v1 + 8LL))(v1);
    CSwitchItemElement::_RenderLabel(v1);
    (*(void (__fastcall **)(CSwitchItemElement *))(*(_QWORD *)v1 + 16LL))(v1);
  }
}
