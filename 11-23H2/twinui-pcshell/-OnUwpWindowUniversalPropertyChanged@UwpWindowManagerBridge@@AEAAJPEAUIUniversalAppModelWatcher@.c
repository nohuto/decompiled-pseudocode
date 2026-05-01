/*
 * XREFs of ?OnUwpWindowUniversalPropertyChanged@UwpWindowManagerBridge@@AEAAJPEAUIUniversalAppModelWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIUniversalPropertyChangedEventArgs@3456@@Z @ 0x180154560
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801484D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9e72222c57eb1177d20aad97c3927c2f____long_&__lambda_9e72222c57eb1177d20aad97c3927c2f___ @ 0x180154650 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_9e72222.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowManagerBridge::OnUwpWindowUniversalPropertyChanged(
        UwpWindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModelWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs *a3)
{
  DWORD CurrentThreadId; // esi
  unsigned int v4; // edi
  __int64 *v5; // rax
  __int64 v6; // rbx
  volatile signed __int32 *v7; // rcx
  int v8; // edi
  APTTYPEQUALIFIER pAptQualifier; // [rsp+30h] [rbp-20h] BYREF
  volatile signed __int32 *v11; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v13; // [rsp+70h] [rbp+20h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IUniversalPropertyChangedEventArgs *v14; // [rsp+80h] [rbp+30h] BYREF
  APTTYPE pAptType; // [rsp+88h] [rbp+38h] BYREF

  v14 = a3;
  v12[0] = this;
  v12[1] = &v14;
  CurrentThreadId = GetCurrentThreadId();
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
    v4 = 0;
  else
    v4 = 4;
  v13 = 0;
  v5 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_9e72222c57eb1177d20aad97c3927c2f____long____lambda_9e72222c57eb1177d20aad97c3927c2f___(
                    &v11,
                    &v13,
                    v12);
  v6 = *v5;
  *v5 = 0LL;
  v7 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release(v7);
  }
  v8 = SHTaskPoolQueueTask(v4, 32LL, CurrentThreadId);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v8 >= 0 )
    return v13;
  return (unsigned int)v8;
}
