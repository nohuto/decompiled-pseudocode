/*
 * XREFs of ?WindowOccludedChanged@CApplicationViewManager@@UEAAJPEAUHWND__@@E@Z @ 0x1800814A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x1801264D0 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18013E64C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CApplicationViewManager::WindowOccludedChanged(RTL_SRWLOCK *this, HWND a2, unsigned __int8 a3)
{
  RTL_SRWLOCK *v5; // rdi
  __int64 v6; // r14
  int (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rsi
  char v8; // bl
  int (__fastcall *v10)(_QWORD, GUID *, __int64 *); // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, __int64); // r15
  __int64 AddressOf; // rax
  int v15; // eax
  int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-30h] BYREF
  __int64 v18; // [rsp+28h] [rbp-28h] BYREF
  int (__fastcall ***v19)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-20h] BYREF
  _QWORD v20[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  int v22; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int8 v23; // [rsp+A0h] [rbp+50h]
  __int64 v24; // [rsp+A8h] [rbp+58h] BYREF

  v23 = a3;
  v5 = this + 58;
  v20[1] = this + 58;
  AcquireSRWLockShared(this + 58);
  v6 = 0LL;
  if ( !this[60].Ptr )
    goto LABEL_9;
  while ( 1 )
  {
    v19 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this[59].Ptr + v6);
    v7 = v19;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v19);
    v22 = 0;
    v18 = 0LL;
    v24 = 0LL;
    if ( (**v7)(v7, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v18) < 0 )
    {
      v10 = **v7;
      v11 = v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      if ( v10(v7, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, &v24) >= 0 )
      {
        v17 = 0LL;
        v12 = v24;
        v13 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 24LL);
        AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(&v17);
        v15 = v13(v12, AddressOf);
        if ( v15 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x3D,
            (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\util.cpp",
            (const char *)(unsigned int)v15,
            v17);
        else
          (*(void (__fastcall **)(__int64, HWND, int *))(*(_QWORD *)v17 + 96LL))(v17, a2, &v22);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
      }
LABEL_18:
      if ( !v22 )
        goto LABEL_6;
      goto LABEL_21;
    }
    if ( (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v18 + 24LL))(v18, v20) < 0 )
      goto LABEL_18;
    if ( a2 != (HWND)v20[0] )
    {
      v22 = 0;
LABEL_6:
      v8 = 0;
      goto LABEL_7;
    }
    v22 = 1;
LABEL_21:
    v8 = 1;
LABEL_7:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v18);
    if ( v8 )
      break;
    Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
    if ( (PVOID)++v6 >= this[60].Ptr )
      goto LABEL_9;
  }
  v16 = ((__int64 (__fastcall *)(int (__fastcall ***)(_QWORD, GUID *, __int64 *), _QWORD))(*v7)[57])(v7, v23);
  if ( v16 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x370,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v16,
      v17);
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v19);
LABEL_9:
  if ( v5 )
    ReleaseSRWLockShared(v5);
  return 0LL;
}
