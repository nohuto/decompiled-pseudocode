/*
 * XREFs of ?GetSize@?$EventSource@U?$ITypedEventHandler@PEAVCompositionIsland@Composition@UI@Windows@@PEAVCompositionIslandEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEBA_KXZ @ 0x180067E40
 * Callers:
 *     ?remove_Changed@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJUEventRegistrationToken@@@Z @ 0x1800119D0 (-remove_Changed@Api@CompositionCapabilities@Composition@UI@Windows@@UEAAJUEventRegistrationToken.c)
 *     ?add_Changed@CompositionCapabilities@Composition@UI@Windows@@QEAAJPEAU?$ITypedEventHandler@PEAVCompositionCapabilities@Composition@UI@Windows@@PEAUIInspectable@@@Foundation@4@PEAUEventRegistrationToken@@@Z @ 0x180067D64 (-add_Changed@CompositionCapabilities@Composition@UI@Windows@@QEAAJPEAU-$ITypedEventHandler@PEAVC.c)
 *     ?NotifyFromAnchor_Updated_Callback@CompositionIsland@Composition@UI@Windows@@IEAAXMUfloat3@Numerics@Foundation@4@@Z @ 0x18006AFA8 (-NotifyFromAnchor_Updated_Callback@CompositionIsland@Composition@UI@Windows@@IEAAXMUfloat3@Numer.c)
 *     ?SetEnvironment@CompositionIsland@Composition@UI@Windows@@QEAAXPEAVCompositionIslandEnvironment@234@@Z @ 0x18006B2D0 (-SetEnvironment@CompositionIsland@Composition@UI@Windows@@QEAAXPEAVCompositionIslandEnvironment@.c)
 *     ?InvokeTransformChanged_Callback@CompositionIsland@Composition@UI@Windows@@AEAAXXZ @ 0x18006B500 (-InvokeTransformChanged_Callback@CompositionIsland@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?Thunk_NotifyFromSite_Closed_Callback_62@?$ICompositionIslandNotification_Receive@VCompositionIsland@Composition@UI@Windows@@@@SAJPEAXPEAPEAX@Z @ 0x1801133C0 (-Thunk_NotifyFromSite_Closed_Callback_62@-$ICompositionIslandNotification_Receive@VCompositionIs.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::CompositionIsland *,Windows::UI::Composition::CompositionIslandEventArgs *>,Microsoft::WRL::InvokeModeOptions<-2>>::GetSize(
        RTL_SRWLOCK *a1)
{
  RTL_SRWLOCK *v2; // rdi
  __int64 v3; // rbx

  if ( !a1->Ptr )
    return 0LL;
  v2 = a1 + 1;
  AcquireSRWLockExclusive(a1 + 1);
  if ( a1->Ptr )
    v3 = (__int64)(*((_QWORD *)a1->Ptr + 3) - *((_QWORD *)a1->Ptr + 2)) >> 3;
  else
    v3 = 0LL;
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v3;
}
