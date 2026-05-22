/*
 * XREFs of ?GetRoutingInfo@ContextualProcessorBuffer@@UEBA?AUtagMsgRoutingInfo@@XZ @ 0x1801CEB80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x18010553C (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 */

__int64 __fastcall ContextualProcessorBuffer::GetRoutingInfo(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 (__fastcall ****v4)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v3 = *(_QWORD *)(a1 + 152);
  if ( v3
    && (v4 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v3 + 16), *v4)
    && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(v4, &v6) >= 0 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 72LL))(v6, a2);
  }
  else
  {
    *(_OWORD *)a2 = 0LL;
    *(_OWORD *)(a2 + 16) = 0LL;
    *(_QWORD *)(a2 + 32) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v6);
  return a2;
}
