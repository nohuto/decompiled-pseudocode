/*
 * XREFs of ?UpdateDeferredNotifications_Callback@CompositionIsland@Composition@UI@Windows@@AEAAX_N@Z @ 0x18006B610
 * Callers:
 *     ?SetEnvironment@CompositionIsland@Composition@UI@Windows@@QEAAXPEAVCompositionIslandEnvironment@234@@Z @ 0x18006B2D0 (-SetEnvironment@CompositionIsland@Composition@UI@Windows@@QEAAXPEAVCompositionIslandEnvironment@.c)
 *     ?Invoke@Partner@CompositionIsland@Composition@UI@Windows@@UEAAJI@Z @ 0x180112CD0 (-Invoke@Partner@CompositionIsland@Composition@UI@Windows@@UEAAJI@Z.c)
 *     ?Thunk_NotifyFromSite_DeferTransformChanged_Callback_69@?$ICompositionIslandNotification_Receive@VCompositionIsland@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x180113440 (-Thunk_NotifyFromSite_DeferTransformChanged_Callback_69@-$ICompositionIslandNotification_Receive.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ?InvokeTransformChanged_Callback@CompositionIsland@Composition@UI@Windows@@AEAAXXZ @ 0x18006B500 (-InvokeTransformChanged_Callback@CompositionIsland@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?IsSessionThread@ContextSession@WRL2@Microsoft@@QEBA_NXZ @ 0x18006B72C (-IsSessionThread@ContextSession@WRL2@Microsoft@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall Windows::UI::Composition::CompositionIsland::UpdateDeferredNotifications_Callback(
        Microsoft::WRL2::ContextSession **this,
        char a2)
{
  if ( !*((_DWORD *)this + 106) && !*((_DWORD *)this + 107) && ((_BYTE)this[54] & 1) != 0 )
  {
    if ( Microsoft::WRL2::ContextSession::IsSessionThread(this[3]) && !a2 )
    {
      Windows::UI::Composition::CompositionIsland::InvokeTransformChanged_Callback((Windows::UI::Composition::CompositionIsland *)this);
    }
    else
    {
      Microsoft::WRL2::NestableRuntimeClass::InternalAddRef((Microsoft::WRL2::NestableRuntimeClass *)this);
      (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(void *), Microsoft::WRL2::ContextSession **, __int64))(**((_QWORD **)this[3] + 15) + 152LL))(
        *((_QWORD *)this[3] + 15),
        Windows::UI::Composition::CompositionIsland::Deferred_InvokeTransformChanged,
        this,
        3LL);
    }
  }
}
