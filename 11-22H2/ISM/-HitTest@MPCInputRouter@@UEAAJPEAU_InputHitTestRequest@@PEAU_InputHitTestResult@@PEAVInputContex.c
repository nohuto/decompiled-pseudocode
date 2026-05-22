/*
 * XREFs of ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180020490
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180020500 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18003FC64 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall MPCInputRouter::HitTest(
        MPCInputRouter *this,
        struct _InputHitTestRequest *a2,
        struct _InputHitTestResult *a3,
        struct InputContext *a4,
        struct IInputBuffer *a5,
        struct IInputTarget **a6)
{
  int v9; // eax
  unsigned int v10; // r14d
  __int64 v12; // rcx
  __int64 v13; // rax
  int (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // rbx
  int (__fastcall *v15)(_QWORD, GUID *, __int64 *); // rdi
  void *v16; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v18; // rax
  const char *v19; // r9
  __int64 v20; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v22; // [rsp+70h] [rbp+8h] BYREF

  v9 = DWMInputRouter::HitTest(this, a2, a3, a4, a5, a6);
  v10 = v9;
  if ( *((_BYTE *)this + 872)
    && *((_DWORD *)a2 + 15)
    && (v9 < 0 || !*(_QWORD *)a3 && !*((_QWORD *)a3 + 1))
    && !*((_BYTE *)MPCHolographicInputManager::GetInstance() + 3365) )
  {
    v12 = *((_QWORD *)this + 100);
    if ( v12 )
    {
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 112LL))(v12) )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 100) + 112LL))(*((_QWORD *)this + 100));
        v14 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v13;
        v20 = v13;
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        v22 = 0LL;
        v15 = **v14;
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v22);
        if ( v15(v14, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v22) >= 0 )
        {
          v16 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 100) + 120LL))(*((_QWORD *)this + 100));
          if ( v16 )
          {
            CurrentProcess = GetCurrentProcess();
            v18 = GetCurrentProcess();
            if ( !DuplicateHandle(v18, v16, CurrentProcess, (LPHANDLE)a3 + 1, 0, 0, 2u) )
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0xE0,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
                v19);
          }
          *((_DWORD *)a3 + 25) = 1;
          *(_QWORD *)a3 = (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 100) + 56LL))(*((_QWORD *)this + 100));
          v10 = 0;
        }
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v22);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v20);
      }
    }
  }
  return v10;
}
