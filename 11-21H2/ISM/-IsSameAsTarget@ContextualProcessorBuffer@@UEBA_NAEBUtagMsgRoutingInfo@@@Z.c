/*
 * XREFs of ?IsSameAsTarget@ContextualProcessorBuffer@@UEBA_NAEBUtagMsgRoutingInfo@@@Z @ 0x1801A3660
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004D1CC (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ContextualProcessorBuffer::IsSameAsTarget(
        ContextualProcessorBuffer *this,
        const struct tagMsgRoutingInfo *a2)
{
  char v3; // bl
  __int64 v4; // rcx
  __int64 (__fastcall ****v5)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v7 = 0LL;
  v4 = *((_QWORD *)this + 19);
  if ( v4 )
  {
    v5 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v4 + 16);
    if ( *v5 )
    {
      if ( (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(v5, &v7) >= 0 )
        v3 = (*(__int64 (__fastcall **)(__int64, const struct tagMsgRoutingInfo *))(*(_QWORD *)v7 + 32LL))(v7, a2);
    }
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v7);
  return v3;
}
