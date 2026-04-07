/*
 * XREFs of ?CheckDXGIAdapter@CGraphicsDeviceManager@@IEAAJPEA_N@Z @ 0x18003E734
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18002E930 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 *     ?ModeChange@CDesktopManager@@QEAAJXZ @ 0x18003EA04 (-ModeChange@CDesktopManager@@QEAAJXZ.c)
 *     ?ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ @ 0x1800A1648 (-ValidateGraphicsDevice@CAccentAcrylicBlurBehind@@AEAAJXZ.c)
 * Callees:
 *     ?EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ @ 0x180018730 (-EnsureGraphicsDeviceCreated@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ??1?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180041C18 (--1-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ @ 0x1800C1B98 (-ReleaseGraphicsDevice@CGraphicsDeviceManager@@IEAAJXZ.c)
 *     ?OnGraphicsDeviceRecreated@CWindowData@@QEAAJXZ @ 0x1801084EC (-OnGraphicsDeviceRecreated@CWindowData@@QEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall CGraphicsDeviceManager::CheckDXGIAdapter(CGraphicsDeviceManager *this, bool *a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rax
  int v6; // eax
  unsigned int v7; // ebx
  HRESULT v8; // eax
  __int64 v9; // rax
  bool v10; // bl
  __int64 v12; // rdx
  __int64 v13; // rsi
  CWindowData *v14; // rdi
  CWindowData *i; // rbx
  _QWORD *v16; // rax
  int v17; // [rsp+20h] [rbp-E0h]
  void *ppFactory; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  PVOID RestartKey; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v22[296]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+178h] [rbp+78h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  if ( a2 )
    *a2 = 0;
  v19 = 0LL;
  v4 = (__int64 *)*((_QWORD *)this + 4);
  v5 = *v4;
  v19 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, GUID *, __int64 *))(v5 + 48))(
         v4,
         &GUID_770aae78_f26f_4dba_a829_253c83d1b387,
         &v19);
  v7 = v6;
  if ( v6 < 0 )
  {
    v12 = 154LL;
    goto LABEL_15;
  }
  if ( (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 312LL))(*((_QWORD *)this + 6)) < 0 )
    goto LABEL_17;
  if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v19 + 104LL))(v19) )
  {
    memset_0(v22, 0, 0x130uLL);
    v6 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 4) + 64LL))(*((_QWORD *)this + 4), v22);
    v7 = v6;
    if ( v6 >= 0 )
    {
      ppFactory = 0LL;
      v8 = CreateDXGIFactory(&GUID_1bc6ea02_ef36_464f_bf0c_21ca39e5168a, &ppFactory);
      v7 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA5,
          (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
          (const char *)(unsigned int)v8,
          v17);
        wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(&ppFactory);
        goto LABEL_12;
      }
      v20 = 0LL;
      v9 = *(_QWORD *)ppFactory;
      v20 = 0LL;
      v10 = (*(int (__fastcall **)(void *, __int64, GUID *, __int64 *))(v9 + 208))(
              ppFactory,
              v23,
              &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
              &v20) >= 0;
      wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(&v20);
      wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(&ppFactory);
      if ( v10 )
        goto LABEL_9;
LABEL_17:
      CGraphicsDeviceManager::ReleaseGraphicsDevice(this);
      CGraphicsDeviceManager::EnsureGraphicsDeviceCreated(this);
      v13 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 54);
      RestartKey = 0LL;
      while ( 1 )
      {
        v16 = RtlEnumerateGenericTableWithoutSplaying((PRTL_GENERIC_TABLE)(v13 + 8), &RestartKey);
        if ( !v16 )
          break;
        v14 = (CWindowData *)(v16 + 10);
        for ( i = (CWindowData *)v16[10]; i != v14; i = *(CWindowData **)i )
        {
          if ( *((_DWORD *)i + 42) == 4 )
            CWindowData::OnGraphicsDeviceRecreated(i);
        }
      }
      goto LABEL_11;
    }
    v12 = 162LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\graphicsdevicemanager.cpp",
      (const char *)(unsigned int)v6,
      v17);
    goto LABEL_12;
  }
LABEL_9:
  if ( a2 )
    *a2 = 1;
LABEL_11:
  v7 = 0;
LABEL_12:
  wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(&v19);
  return v7;
}
