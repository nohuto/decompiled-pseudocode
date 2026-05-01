/*
 * XREFs of ?DoWork@GammaFlashAsyncOperation@@MEAAJXZ @ 0x1803FB200
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1803E8414 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GammaFlashAsyncOperation::DoWork(GammaFlashAsyncOperation *this)
{
  HRESULT DXGIFactory; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  unsigned int v5; // r14d
  void *v6; // rbx
  __int64 (__fastcall *v7)(void *, _QWORD, __int64 *); // rdi
  int v8; // eax
  int v9; // ebx
  unsigned int i; // r13d
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, _QWORD); // rdi
  int v13; // eax
  int v14; // ebx
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v16)(_QWORD, GUID *, __int64 *); // rdi
  int v17; // eax
  int v18; // edi
  const char *v20; // [rsp+28h] [rbp-18h]
  void *ppFactory[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v23; // [rsp+88h] [rbp+48h] BYREF
  __int64 (__fastcall ***v24)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp+50h] BYREF
  __int64 v25; // [rsp+98h] [rbp+58h] BYREF

  ppFactory[0] = 0LL;
  v23 = 0LL;
  v25 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)ppFactory);
  DXGIFactory = CreateDXGIFactory(&GUID_7b7166ec_21c7_44ae_b21a_c9ae321ae369, ppFactory);
  v3 = DXGIFactory;
  if ( DXGIFactory >= 0 )
  {
    v5 = 0;
    while ( !v23 )
    {
      v6 = ppFactory[0];
      v7 = *(__int64 (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)ppFactory[0] + 56LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
      v8 = v7(v6, v5, &v25);
      v9 = v8;
      if ( v8 >= 0 )
      {
        v24 = 0LL;
        for ( i = 0; ; ++i )
        {
          while ( 1 )
          {
            v11 = v25;
            v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v25 + 56LL);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
            v13 = v12(v11, i, &v24);
            v14 = v13;
            if ( v13 >= 0 )
              break;
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xEF0,
              (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
              (const char *)(unsigned int)v13);
            ++i;
            if ( v14 == -2005270526 )
              goto LABEL_12;
          }
          v15 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v24;
          v16 = **v24;
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
          v17 = v16(v15, &GUID_a6d2316f_af6f_49f0_a8a8_a0c474f10236, &v23);
          if ( v17 >= 0 )
            break;
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xEF2,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
            (const char *)(unsigned int)v17);
        }
LABEL_12:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v24);
        ++v5;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xEE9,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
          (const char *)(unsigned int)v8);
        ++v5;
        if ( v9 == -2005270526 )
        {
          if ( !v23 )
          {
            v3 = -2147467259;
            wil::details::in1diag3::Return_HrMsg(
              retaddr,
              (void *)0xEFB,
              (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
              (const char *)0x80004005LL,
              (int)"Failed to obtain DXGIOutputPartner for gamma flash",
              v20);
            goto LABEL_21;
          }
          break;
        }
      }
    }
    v18 = 0;
    if ( *((_DWORD *)this + 62) )
    {
      while ( !*((_BYTE *)this + 252) )
      {
        DXGIFactory = (*(__int64 (__fastcall **)(__int64, char *, void *))(*(_QWORD *)v23 + 24LL))(
                        v23,
                        (char *)this + 232,
                        &unk_18088A4B0);
        v3 = DXGIFactory;
        if ( DXGIFactory < 0 )
        {
          v4 = 3841LL;
          goto LABEL_24;
        }
        Sleep(*((_DWORD *)this + 61));
        DXGIFactory = (*(__int64 (__fastcall **)(__int64, void *, void *))(*(_QWORD *)v23 + 24LL))(
                        v23,
                        &unk_18088A4C0,
                        &unk_18088A4B0);
        v3 = DXGIFactory;
        if ( DXGIFactory < 0 )
        {
          v4 = 3843LL;
          goto LABEL_24;
        }
        Sleep(*((_DWORD *)this + 61));
        if ( (unsigned int)++v18 >= *((_DWORD *)this + 62) )
          break;
      }
    }
    v3 = 0;
  }
  else
  {
    v4 = 3812LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)DXGIFactory);
  }
LABEL_21:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v25);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v23);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)ppFactory);
  return v3;
}
