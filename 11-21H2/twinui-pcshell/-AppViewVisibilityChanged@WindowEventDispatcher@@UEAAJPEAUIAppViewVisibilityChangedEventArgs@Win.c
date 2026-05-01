/*
 * XREFs of ?AppViewVisibilityChanged@WindowEventDispatcher@@UEAAJPEAUIAppViewVisibilityChangedEventArgs@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180048C70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAW4AppModelKind@2345@PEAPEAUIAppModel@2345@@Z @ 0x180049008 (-IsComponentAppViewAndGetKindAndModel@@YAEPEAUIAppView@WindowManagement@ApplicationModel@Interna.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdateAudioState@WindowEventDispatcher@@AEAAXPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@W4HOSTED_APP_CHANGED@@@Z @ 0x1803E704C (-UpdateAudioState@WindowEventDispatcher@@AEAAXPEAUIAppView@WindowManagement@ApplicationModel@Int.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall WindowEventDispatcher::AppViewVisibilityChanged(
        RTL_SRWLOCK *this,
        __int64 (__fastcall ***a2)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewVisibilityChangedEventArgs *, GUID *, __int64 **))
{
  __int64 (__fastcall **v4)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewVisibilityChangedEventArgs *, GUID *, __int64 **); // rax
  int v5; // eax
  __int64 v6; // rax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  RTL_SRWLOCK *v10; // rdi
  int v11; // esi
  __int64 v12; // rbx
  _QWORD *Ptr; // r14
  _QWORD *v14; // r12
  __int64 v15; // rcx
  unsigned int v16; // r14d
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 (__fastcall *v19)(__int64, _QWORD, __int64, __int64 *); // r15
  __int64 v20; // rcx
  int v21; // eax
  int v23; // [rsp+20h] [rbp-68h]
  struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *v24; // [rsp+30h] [rbp-58h] BYREF
  __int64 *v25; // [rsp+38h] [rbp-50h] BYREF
  __int64 v26; // [rsp+40h] [rbp-48h] BYREF
  __int64 v27; // [rsp+48h] [rbp-40h]
  RTL_SRWLOCK *v28; // [rsp+50h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v30; // [rsp+98h] [rbp+10h] BYREF
  int v31; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+20h] BYREF

  LODWORD(v32) = 0;
  v4 = *a2;
  v25 = 0LL;
  v5 = (*v4)(
         (struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewVisibilityChangedEventArgs *)a2,
         &GUID_a5447aa8_063b_4ddc_8b81_021591a43bf1,
         &v25);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3BD,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v5,
      v23);
  v24 = 0LL;
  v6 = *v25;
  v24 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64 *, struct Windows::Internal::ApplicationModel::WindowManagement::IAppView **))(v6 + 48))(
         v25,
         &v24);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3C0,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v7,
      v23);
  v8 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppViewVisibilityChangedEventArgs *, GUID *, __int64 **), int *))(*a2)[6])(
         a2,
         &v30);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3C3,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v8,
      v23);
  if ( IsComponentAppViewAndGetKindAndModel(v24, 0LL, 0LL) )
  {
    WindowEventDispatcher::UpdateAudioState(&this[-2], v24, (unsigned int)(v30 != 1) + 2);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IAppView *, int *))(*(_QWORD *)v24 + 48LL))(
           v24,
           &v31);
    if ( v9 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3C8,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)(unsigned int)v9,
        v23);
    v27 = 0LL;
    v10 = this + 57;
    AcquireSRWLockShared(this + 57);
    v28 = this + 57;
    v11 = v31;
    v12 = 0LL;
    v26 = 0LL;
    LODWORD(v32) = 2;
    Ptr = this[44].Ptr;
    v14 = this[45].Ptr;
    while ( Ptr != v14 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(*(_QWORD *)*Ptr + 288LL))(*Ptr) == v11 )
      {
        v15 = *Ptr;
        v12 = v15;
        v26 = *Ptr;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
        break;
      }
      ++Ptr;
    }
    v27 = v12;
    if ( !v12 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3CE,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
        (const char *)0x80070490LL,
        v23);
    v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 256LL))(v12);
    if ( v16 && v30 == 1 )
    {
      v32 = 0LL;
      v17 = (*(__int64 (__fastcall **)(PVOID, __int64 *))(*(_QWORD *)this[37].Ptr + 48LL))(this[37].Ptr, &v26);
      v18 = *(_QWORD *)v17;
      v19 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(**(_QWORD **)v17 + 136LL);
      v20 = v32;
      v32 = 0LL;
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      v21 = v19(v18, v16, 1LL, &v32);
      if ( v21 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x3D5,
          (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
          (const char *)(unsigned int)v21,
          v23);
      if ( v26 )
        (*(void (**)(void))(*(_QWORD *)v26 + 16LL))();
      if ( v32 )
        (*(void (**)(void))(*(_QWORD *)v32 + 16LL))();
    }
    if ( v10 )
      ReleaseSRWLockShared(v10);
    (*(void (__fastcall **)(__int64, __int64, bool))(*(_QWORD *)v12 + 320LL))(v12, 1LL, v30 == 1);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v24 )
    (*(void (**)(void))(*(_QWORD *)v24 + 16LL))();
  if ( v25 )
    (*(void (__fastcall **)(__int64 *))(*v25 + 16))(v25);
  return 0LL;
}
