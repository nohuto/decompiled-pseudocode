/*
 * XREFs of ?_GetFrameByHwnd@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIApplicationFrameProxy@@@Z @ 0x18001DD50
 * Callers:
 *     ?OnTitleBarDrawnByAppUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18001DA50 (-OnTitleBarDrawnByAppUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?OnTitleBarHitTestVisualUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18001DB30 (-OnTitleBarHitTestVisualUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x18001DC10 (-OnTitleBarColorUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?OnDesiredTitlebarOverlayStateUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z @ 0x1802E6210 (-OnDesiredTitlebarOverlayStateUpdated@CApplicationManager@@UEAAJPEAUHWND__@@@Z.c)
 *     ?OnTitleBarIconUpdated@CApplicationManager@@UEAAJPEAUHWND__@@PEAXK@Z @ 0x1802E6360 (-OnTitleBarIconUpdated@CApplicationManager@@UEAAJPEAUHWND__@@PEAXK@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall CApplicationManager::_GetFrameByHwnd(
        CApplicationManager *this,
        HWND a2,
        struct IApplicationFrameProxy **a3)
{
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rbx
  int v11; // r14d
  __int64 v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rcx
  __int64 (__fastcall ***v15)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v16; // rcx
  _QWORD v18[2]; // [rsp+20h] [rbp-30h] BYREF
  HWND v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h]
  char v21; // [rsp+40h] [rbp-10h]
  __int64 v22; // [rsp+90h] [rbp+40h] BYREF
  _QWORD *v23; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v24; // [rsp+A8h] [rbp+58h] BYREF

  v6 = -2147467261;
  *a3 = 0LL;
  if ( *((_QWORD *)this + 76) )
  {
    v22 = 0LL;
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v7 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v22 = 0LL;
    v18[1] = 0LL;
    v8 = 0LL;
    v9 = 0LL;
    if ( *((_QWORD *)this + 80) )
    {
      while ( 1 )
      {
        v18[0] = 0LL;
        v10 = *(_QWORD *)(*((_QWORD *)this + 79) + 8 * v9);
        v24 = v10;
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
        v11 = -1;
        v23 = 0LL;
        if ( (**(int (__fastcall ***)(__int64, GUID *, _QWORD **))v10)(
               v10,
               &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
               &v23) >= 0 )
        {
          v12 = *v23;
          v19 = a2;
          v20 = 0LL;
          v21 = 0;
          v11 = ((*(unsigned __int8 (__fastcall **)(_QWORD *, HWND *, _QWORD))(v12 + 296))(v23, &v19, 0LL) != 0) - 1;
          v13 = v20;
          if ( v20 )
          {
            v20 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
          }
        }
        v14 = v23;
        if ( v23 )
        {
          v23 = 0LL;
          (*(void (__fastcall **)(_QWORD *))(*v14 + 16LL))(v14);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v24);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v18);
        if ( !v11 )
          break;
        if ( (unsigned __int64)++v9 >= *((_QWORD *)this + 80) )
          goto LABEL_21;
      }
      v8 = v9;
      v6 = 0;
    }
    else
    {
LABEL_21:
      v6 = -2147319765;
    }
    if ( v6 >= 0 )
    {
      v15 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 79) + 8 * v8);
      v6 = (**v15)(v15, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v22);
      if ( v6 >= 0 )
        v6 = (*(__int64 (__fastcall **)(__int64, struct IApplicationFrameProxy **))(*(_QWORD *)v22 + 496LL))(v22, a3);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v16 = v22;
    if ( v22 )
    {
      v22 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
    }
  }
  return (unsigned int)v6;
}
