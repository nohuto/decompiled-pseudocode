/*
 * XREFs of ?OnAppViewUniversalPropertyChanged@WindowManagerBridge@@AEAAJPEAUIAppViewWatcher@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppViewUniversalPropertyChangedEventArgs@3456@@Z @ 0x1800879F0
 * Callers:
 *     <none>
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c68ac11b8db8875b63f43e7957a0e413____long_&__lambda_c68ac11b8db8875b63f43e7957a0e413___ @ 0x180087930 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_c68ac11.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180126630 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIComPoolTask@Int.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowManagerBridge::OnAppViewUniversalPropertyChanged(
        WindowManagerBridge *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewWatcher *a2,
        struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs *a3)
{
  DWORD CurrentThreadId; // esi
  unsigned int v4; // edi
  __int64 *v5; // rax
  __int64 v6; // rbx
  int v7; // edi
  APTTYPEQUALIFIER pAptQualifier; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h] BYREF
  __int128 v11; // [rsp+40h] [rbp-10h] BYREF
  unsigned int v12; // [rsp+70h] [rbp+20h] BYREF
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewUniversalPropertyChangedEventArgs *v13; // [rsp+80h] [rbp+30h] BYREF
  APTTYPE pAptType; // [rsp+88h] [rbp+38h] BYREF

  v13 = a3;
  *(_QWORD *)&v11 = this;
  *((_QWORD *)&v11 + 1) = &v13;
  CurrentThreadId = GetCurrentThreadId();
  if ( CoGetApartmentType(&pAptType, &pAptQualifier) < 0 || pAptType == APTTYPE_STA || pAptType == APTTYPE_MAINSTA )
    v4 = 0;
  else
    v4 = 4;
  v12 = 0;
  v5 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_c68ac11b8db8875b63f43e7957a0e413____long____lambda_c68ac11b8db8875b63f43e7957a0e413___(
         &v10,
         (__int64)&v12,
         &v11);
  v6 = *v5;
  *v5 = 0LL;
  if ( v10 )
  {
    v10 = 0LL;
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Internal::IComPoolTask>::Release();
  }
  v7 = SHTaskPoolQueueTask(v4, 32LL, CurrentThreadId, 0LL, v6, 0LL);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 >= 0 )
    return v12;
  return (unsigned int)v7;
}
