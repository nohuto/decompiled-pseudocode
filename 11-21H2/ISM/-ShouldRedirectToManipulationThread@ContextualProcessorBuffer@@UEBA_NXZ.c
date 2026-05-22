/*
 * XREFs of ?ShouldRedirectToManipulationThread@ContextualProcessorBuffer@@UEBA_NXZ @ 0x1801A4700
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x18004D1CC (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall ContextualProcessorBuffer::ShouldRedirectToManipulationThread(ContextualProcessorBuffer *this)
{
  char v1; // bl
  __int64 v2; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  v4 = 0LL;
  v2 = *((_QWORD *)this + 19);
  if ( v2
    && *(_QWORD *)(v2 + 16)
    && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v2 + 16),
              &v4) >= 0 )
  {
    v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v4);
  return v1;
}
