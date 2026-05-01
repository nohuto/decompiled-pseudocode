/*
 * XREFs of ?HandleActivation@CCharmsWindowManager@@UEAAXPEAUHWND__@@@Z @ 0x1802F21E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$GetAppPosition@VCTaskWindowFinder@@@?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@QEBAJAEBVCTaskWindowFinder@@_KPEA_K@Z @ 0x1802F20F0 (--$GetAppPosition@VCTaskWindowFinder@@@-$CActivationBasedCollection@V-$ComPtr@UITaskWindow@@@WRL.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@_K@Z @ 0x1802F25C4 (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@QEA.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CCharmsWindowManager::HandleActivation(CCharmsWindowManager *this, unsigned __int64 a2)
{
  char v4; // r14
  char v5; // r15
  __int64 v6; // rbx
  __int64 v7; // r8
  bool v8; // di
  __int64 v9; // r12
  char v10; // di
  __int64 v11; // rax
  bool v12; // r13
  __int64 v13; // rdi
  bool v14; // sf
  int v15; // eax
  unsigned __int64 v16; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 v17; // [rsp+28h] [rbp-18h] BYREF
  char v18; // [rsp+30h] [rbp-10h]
  __int64 v19; // [rsp+80h] [rbp+40h] BYREF
  __int64 v20; // [rsp+90h] [rbp+50h] BYREF

  if ( *((_QWORD *)this + 4) )
  {
    v4 = *((_BYTE *)this + 56) & 1;
    v5 = 0;
    v6 = **((_QWORD **)this + 3);
    v20 = v6;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v20);
    v16 = a2;
    v17 = 0LL;
    v18 = 0;
    v8 = (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::GetAppPosition<CTaskWindowFinder>(
                (__int64)this + 16,
                (__int64)&v16,
                v7,
                &v19) >= 0;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
    v9 = v19;
    if ( v8 )
    {
      if ( v19 || (*((_BYTE *)this + 56) & 1) == 0 )
      {
        v5 = 1;
        if ( v19 )
          goto LABEL_8;
      }
      else
      {
        v5 = 0;
      }
      v4 = 0;
      v10 = 1;
      if ( v5 )
      {
LABEL_8:
        v10 = 1;
        if ( !v4 )
        {
          v11 = 0LL;
LABEL_13:
          v16 = v11;
          v17 = a2 & -(__int64)(v10 != 0);
          v12 = (*(int (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 8) + 56LL))(
                  *((_QWORD *)this + 8),
                  &v16) >= 0;
          if ( v5 )
          {
            v19 = *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v9);
            v13 = v19;
            Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v19);
            v14 = (*(int (__fastcall **)(__int64))(*(_QWORD *)v13 + 120LL))(v13) < 0;
            v15 = 2;
            if ( !v14 )
              v15 = 3;
            *((_DWORD *)this + 14) |= v15;
            CActivationBasedCollection<Microsoft::WRL::ComPtr<ITaskWindow>>::PositionNewActiveApp(
              (char *)this + 16,
              &v19,
              v9);
            Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v19);
          }
          if ( v4 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 112LL))(v6);
            if ( !v5 )
              *((_DWORD *)this + 14) = 0;
          }
          if ( v12 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 64LL))(*((_QWORD *)this + 8));
          goto LABEL_22;
        }
LABEL_12:
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 32LL))(v6);
        goto LABEL_13;
      }
    }
    else
    {
      v10 = 0;
    }
    if ( !v4 )
    {
LABEL_22:
      *((_DWORD *)this + 14) &= ~8u;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v20);
      return;
    }
    goto LABEL_12;
  }
}
