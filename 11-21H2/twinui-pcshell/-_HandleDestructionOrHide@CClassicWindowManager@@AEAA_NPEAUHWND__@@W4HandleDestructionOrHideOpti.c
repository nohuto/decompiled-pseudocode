/*
 * XREFs of ?_HandleDestructionOrHide@CClassicWindowManager@@AEAA_NPEAUHWND__@@W4HandleDestructionOrHideOptions@1@@Z @ 0x180104700
 * Callers:
 *     ?HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180103770 (-HandleHide@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 *     ?HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z @ 0x180104390 (-HandleDestruction@CClassicWindowManager@@UEAA_NPEAUHWND__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Compare@CClassicWindowFinderByHWND@@QEBAHAEBV?$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z @ 0x18010386C (-Compare@CClassicWindowFinderByHWND@@QEBAHAEBV-$ComPtr@UIUnknown@@@WRL@Microsoft@@0@Z.c)
 *     ?RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW_OPTIONS@@@Z @ 0x1801051D8 (-RemoveApplicationView@CClassicWindowManager@@AEAAXPEAUIClassicWindow@@W4REMOVE_APPLICATION_VIEW.c)
 *     CClassicWindowManager::ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___ @ 0x180105B18 (CClassicWindowManager--ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CClassicWindowManager::_HandleDestructionOrHide(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  int v10; // r15d
  __int64 v11; // rbx
  int v12; // ebx
  __int64 v13; // rcx
  int v14; // eax
  unsigned __int8 v15; // di
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  __int64 v18; // rcx
  __int64 v20; // rcx
  bool v21; // bl
  int (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // [rsp+20h] [rbp-20h] BYREF
  __int64 *v26; // [rsp+28h] [rbp-18h] BYREF
  _QWORD v27[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v28; // [rsp+80h] [rbp+40h] BYREF
  __int64 v29; // [rsp+88h] [rbp+48h] BYREF
  __int64 v30; // [rsp+98h] [rbp+58h] BYREF

  v6 = 0LL;
  v28 = 0LL;
  v7 = a1 + 23;
  v27[0] = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = -2147319765;
  if ( a1[25] )
  {
    while ( 1 )
    {
      v25 = 0LL;
      v11 = *(_QWORD *)(a1[24] + 8 * v9);
      v30 = v11;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      v29 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v11)(
             v11,
             &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
             &v29) >= 0
        && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 192LL))(v29, a2) )
      {
        v12 = 0;
      }
      else
      {
        v12 = -1;
      }
      v13 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v25);
      if ( !v12 )
        break;
      ++v9;
      v6 = 0LL;
      if ( v9 >= a1[25] )
      {
        v8 = 0LL;
        goto LABEL_12;
      }
    }
    v8 = v9;
    v6 = 0LL;
    v14 = 0;
  }
  else
  {
LABEL_12:
    v14 = -2147319765;
  }
  if ( v14 >= 0 )
  {
    v22 = *(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1[24] + 8 * v8);
    if ( (**v22)(v22, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &v28) >= 0 )
    {
      v15 = 1;
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v28 + 136LL))(v28) )
      {
        v29 = v28;
        v30 = v28;
        v26 = &v29;
        v27[0] = &v30;
        v27[1] = &v26;
        CClassicWindowManager::ForEachWindow__lambda_1e9daa8d67d28b835187142b6b9a88ad___(a1, v27);
      }
      if ( a3 || (*(int (__fastcall **)(_QWORD *, __int64 *))(a1[28] + 8LL))(a1 + 28, &v28) < 0 )
      {
        (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*v7 + 16LL))(a1 + 23, v8);
        CClassicWindowManager::RemoveApplicationView(v24, v28, 0LL);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD *, unsigned __int64))(*v7 + 16LL))(a1 + 23, v8);
        CClassicWindowManager::RemoveApplicationView(v23, v28, 1LL);
      }
      goto LABEL_18;
    }
    v6 = 0LL;
  }
  v15 = 0;
  if ( a3 == 1 )
  {
    v30 = a2;
    v27[0] = 0LL;
    v16 = 0LL;
    v17 = 0LL;
    if ( a1[30] )
    {
      while ( 1 )
      {
        v26 = 0LL;
        v20 = *(_QWORD *)(a1[29] + 8 * v17);
        v29 = v20;
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
        v21 = (unsigned int)CClassicWindowFinderByHWND::Compare(&v30, &v29) == 0;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v29);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v26);
        if ( v21 )
          break;
        ++v17;
        v6 = 0LL;
        if ( v17 >= a1[30] )
          goto LABEL_16;
      }
      v16 = v17;
      v10 = 0;
    }
LABEL_16:
    if ( v10 >= 0 )
    {
      v15 = 1;
      CClassicWindowManager::RemoveApplicationView(v6, *(_QWORD *)(a1[29] + 8 * v16), 0LL);
      (*(void (__fastcall **)(_QWORD *, unsigned __int64))(a1[28] + 16LL))(a1 + 28, v16);
    }
    else
    {
      v15 = 0;
    }
  }
LABEL_18:
  v18 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return v15;
}
