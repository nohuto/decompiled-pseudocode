/*
 * XREFs of ?GetDelegateSourceViewId@ContextualProcessorBuffer@@UEAAJPEAK@Z @ 0x1801CE920
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801163A8 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 */

__int64 __fastcall ContextualProcessorBuffer::GetDelegateSourceViewId(
        ContextualProcessorBuffer *this,
        unsigned int *a2)
{
  __int64 v3; // rcx
  __int64 (__fastcall ****v4)(_QWORD, GUID *, __int64 *); // rcx
  unsigned int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  v3 = *((_QWORD *)this + 18);
  if ( v3
    && (v4 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v3 + 16), *v4)
    && (int)Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(v4, &v7) >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v7 + 56LL))(v7, a2);
  }
  else
  {
    v5 = -2147467259;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v7);
  return v5;
}
