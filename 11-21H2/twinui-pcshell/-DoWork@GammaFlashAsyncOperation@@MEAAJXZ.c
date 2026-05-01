/*
 * XREFs of ?DoWork@GammaFlashAsyncOperation@@MEAAJXZ @ 0x18032E030
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180319934 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall GammaFlashAsyncOperation::DoWork(GammaFlashAsyncOperation *this)
{
  unsigned int v2; // r12d
  HRESULT DXGIFactory; // eax
  unsigned int v4; // ebx
  __int64 v5; // rdx
  unsigned int v6; // r15d
  void *v7; // rbx
  __int64 (__fastcall *v8)(void *, _QWORD, __int64 *); // rdi
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, _QWORD, _QWORD); // rdi
  int v13; // eax
  int v14; // r13d
  wil::details::in1diag3 *v15; // rcx
  unsigned __int64 v16; // r9
  __int64 v17; // rdx
  __int64 (__fastcall ***v18)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v19)(_QWORD, GUID *, __int64 *); // rdi
  int v20; // eax
  int v21; // edi
  const char *v23; // [rsp+28h] [rbp-18h]
  void *ppFactory[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v26; // [rsp+88h] [rbp+48h] BYREF
  __int64 (__fastcall ***v27)(_QWORD, GUID *, __int64 *); // [rsp+90h] [rbp+50h] BYREF
  __int64 v28; // [rsp+98h] [rbp+58h] BYREF

  v2 = 0;
  ppFactory[0] = 0LL;
  v26 = 0LL;
  v28 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)ppFactory);
  DXGIFactory = CreateDXGIFactory(&GUID_7b7166ec_21c7_44ae_b21a_c9ae321ae369, ppFactory);
  v4 = DXGIFactory;
  if ( DXGIFactory >= 0 )
  {
    v6 = 0;
    while ( !v26 )
    {
      v7 = ppFactory[0];
      v8 = *(__int64 (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)ppFactory[0] + 56LL);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
      v9 = v8(v7, v6, &v28);
      v10 = v9;
      if ( v9 >= 0 )
      {
        v27 = 0LL;
        do
        {
          v11 = v28;
          v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v28 + 56LL);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
          v13 = v12(v11, v2, &v27);
          v14 = v13;
          v15 = retaddr;
          if ( v13 >= 0 )
          {
            v18 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v27;
            v19 = **v27;
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
            v20 = v19(v18, &GUID_a6d2316f_af6f_49f0_a8a8_a0c474f10236, &v26);
            v15 = retaddr;
            if ( v20 >= 0 )
              break;
            v16 = (unsigned int)v20;
            v17 = 3670LL;
          }
          else
          {
            v16 = (unsigned int)v13;
            v17 = 3668LL;
          }
          wil::details::in1diag3::_Log_Hr(
            v15,
            (void *)v17,
            (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
            (const char *)v16);
          ++v2;
        }
        while ( v14 != -2005270526 );
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v27);
        ++v6;
        v2 = 0;
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xE4D,
          (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
          (const char *)(unsigned int)v9);
        ++v6;
        if ( v10 == -2005270526 )
        {
          if ( !v26 )
          {
            v4 = -2147467259;
            wil::details::in1diag3::Return_HrMsg(
              retaddr,
              (void *)0xE5F,
              (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
              (const char *)0x80004005LL,
              (int)"Failed to obtain DXGIOutputPartner for gamma flash",
              v23);
            goto LABEL_22;
          }
          break;
        }
      }
    }
    v21 = 0;
    if ( *((_DWORD *)this + 62) )
    {
      while ( !*((_BYTE *)this + 252) )
      {
        DXGIFactory = (*(__int64 (__fastcall **)(__int64, char *, void *))(*(_QWORD *)v26 + 24LL))(
                        v26,
                        (char *)this + 232,
                        &unk_1806D8430);
        v4 = DXGIFactory;
        if ( DXGIFactory < 0 )
        {
          v5 = 3685LL;
          goto LABEL_25;
        }
        Sleep(*((_DWORD *)this + 61));
        DXGIFactory = (*(__int64 (__fastcall **)(__int64, void *, void *))(*(_QWORD *)v26 + 24LL))(
                        v26,
                        &unk_1806D8420,
                        &unk_1806D8430);
        v4 = DXGIFactory;
        if ( DXGIFactory < 0 )
        {
          v5 = 3687LL;
          goto LABEL_25;
        }
        Sleep(*((_DWORD *)this + 61));
        if ( (unsigned int)++v21 >= *((_DWORD *)this + 62) )
          break;
      }
    }
    v4 = 0;
  }
  else
  {
    v5 = 3656LL;
LABEL_25:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\gamingoverlayexperiencemanager.cpp",
      (const char *)(unsigned int)DXGIFactory);
  }
LABEL_22:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v28);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v26);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)ppFactory);
  return v4;
}
