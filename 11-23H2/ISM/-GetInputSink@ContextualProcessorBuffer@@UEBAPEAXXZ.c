/*
 * XREFs of ?GetInputSink@ContextualProcessorBuffer@@UEBAPEAXXZ @ 0x1801C1180
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIDCompInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIDCompInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F6ABC (--$As@UIDCompInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContextualProcessorBuffer::GetInputSink(ContextualProcessorBuffer *this)
{
  __int64 v1; // rbx
  __int64 v2; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v4 = 0LL;
  v2 = *((_QWORD *)this + 19);
  if ( v2
    && *(_QWORD *)(v2 + 16)
    && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IDCompInputTarget>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v2 + 16),
              &v4) >= 0 )
  {
    v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v4);
  return v1;
}
