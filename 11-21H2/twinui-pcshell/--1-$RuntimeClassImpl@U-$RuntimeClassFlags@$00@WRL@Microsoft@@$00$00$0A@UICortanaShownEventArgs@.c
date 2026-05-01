/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800328FC
 * Callers:
 *     ??_GCCortanaShownEventArgs@@UEAAPEAXI@Z @ 0x1800328C0 (--_GCCortanaShownEventArgs@@UEAAPEAXI@Z.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$00@WRL@Microsoft@@UICortanaShownEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180357F10 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$00@WRL@Microsoft@@UICortanaShownEventArgs@Experience@Sh.c)
 *     _SearchAppExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs::_scalar_deleting_destructor_ @ 0x180358020 (_SearchAppExperienceManagerNotification--OnShown_--_2_--CCortanaShownEventArgs--_scalar_deleting.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>(
        __int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 24);
  result = (unsigned __int64)v1 >> 63;
  if ( v1 < 0 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAsyncCallbackDispatcher>::Release(2 * v1);
  return result;
}
