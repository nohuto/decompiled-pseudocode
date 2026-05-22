/*
 * XREFs of ?IsSameAsTarget@ContextualProcessorBuffer@@UEBA_NAEBUtagMsgRoutingInfo@@PEAX@Z @ 0x1801CEE40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x18010553C (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall ContextualProcessorBuffer::IsSameAsTarget(
        ContextualProcessorBuffer *this,
        const struct tagMsgRoutingInfo *a2,
        void *a3)
{
  __int64 v5; // rcx
  __int64 (__fastcall ****v6)(_QWORD, GUID *, __int64 *); // rcx
  char v7; // bl
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v5 = *((_QWORD *)this + 19);
  if ( v5
    && (v6 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v5 + 16), *v6)
    && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(v6, &v9) >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64, const struct tagMsgRoutingInfo *, void *))(*(_QWORD *)v9 + 24LL))(
           v9,
           a2,
           a3);
  }
  else
  {
    v7 = 0;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v9);
  return v7;
}
