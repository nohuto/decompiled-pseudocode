/*
 * XREFs of ?HitTest@MPCInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180017350
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x1800173C0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180029D70 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
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
  int v9; // edi
  __int64 v11; // rcx
  __int64 v12; // rax
  int (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rbx
  int (__fastcall *v14)(_QWORD, GUID *, __int64 *); // rsi
  void *v15; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v17; // rax
  const char *v18; // r9
  __int64 v19[5]; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF

  v9 = DWMInputRouter::HitTest(this, a2, a3, a4, a5, a6);
  if ( *((_BYTE *)this + 864)
    && *((_DWORD *)a2 + 15)
    && (v9 < 0 || !*(_QWORD *)a3 && !*((_QWORD *)a3 + 1))
    && !*((_BYTE *)MPCHolographicInputManager::GetInstance() + 3365) )
  {
    v11 = *((_QWORD *)this + 99);
    if ( v11 )
    {
      if ( (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 112LL))(v11) )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 99) + 112LL))(*((_QWORD *)this + 99));
        v13 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v12;
        v19[0] = v12;
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
        v21 = 0LL;
        v14 = **v13;
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v21);
        if ( v14(v13, &GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631, &v21) >= 0 )
        {
          v15 = (void *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 99) + 120LL))(*((_QWORD *)this + 99));
          if ( v15 )
          {
            CurrentProcess = GetCurrentProcess();
            v17 = GetCurrentProcess();
            if ( !DuplicateHandle(v17, v15, CurrentProcess, (LPHANDLE)a3 + 1, 0, 0, 2u) )
              wil::details::in1diag3::_FailFast_Unexpected(
                retaddr,
                (void *)0xE0,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
                v18);
          }
          *((_DWORD *)a3 + 25) = 1;
          *(_QWORD *)a3 = (*(int (__fastcall **)(_QWORD))(**((_QWORD **)this + 99) + 56LL))(*((_QWORD *)this + 99));
          v9 = 0;
        }
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v21);
        Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v19);
      }
    }
  }
  return (unsigned int)v9;
}
