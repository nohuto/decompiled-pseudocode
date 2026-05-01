/*
 * XREFs of ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x18003041C
 * Callers:
 *     ?_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDisappearReason@@@Z @ 0x180030348 (-_TransferAllWindowsToNextGlom@CAppViewManager@@AEAAJPEAUIImmersiveApplication@@0W4ApplicationDi.c)
 *     _lambda_3a58774b2403835eabbd2227e376bc7e_::operator() @ 0x1802F3FBC (_lambda_3a58774b2403835eabbd2227e376bc7e_--operator().c)
 *     ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x1802FC77C (-_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppViewManager::_TransferAllWindowsToNextGlomWorker(
        __int64 a1,
        __int64 a2,
        __int64 (__fastcall ***a3)(_QWORD, GUID *, __int64 *),
        int a4)
{
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, __int64, __int64 *); // rbx
  int v10; // eax
  unsigned int v11; // ebx
  int v13; // eax
  int v14; // eax
  __int64 (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rbx
  int v16; // [rsp+20h] [rbp-30h]
  __int64 v17; // [rsp+30h] [rbp-20h] BYREF
  __int128 v18; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char v20; // [rsp+80h] [rbp+30h] BYREF

  v17 = 0LL;
  if ( a3 )
  {
    v15 = **a3;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
    v10 = v15(a3, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v17);
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 120);
    v9 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v8 + 112LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
    v10 = v9(v8, a2, &v17);
  }
  if ( v10 < 0 || (*(int (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 232LL))(v17, &v20) < 0 || (v20 & 1) != 0 )
    goto LABEL_4;
  v18 = 0LL;
  v13 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
  if ( a4 == 1 )
    v13 = 1;
  DWORD2(v18) = v13;
  v14 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int128 *))(**(_QWORD **)(a1 + 120) + 104LL))(
          *(_QWORD *)(a1 + 120),
          a2,
          v17,
          &v18);
  v11 = v14;
  if ( v14 >= 0 )
LABEL_4:
    v11 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB68,
      (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v14,
      v16);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v17);
  return v11;
}
