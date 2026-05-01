/*
 * XREFs of ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x180104034
 * Callers:
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z @ 0x180103910 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180036AA8 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardCompareHelper@PEAVCOperation@CDelayIAMOperations@@@@V?$CSimpleArrayStandardMergeHelper@PEAVCOperation@CDelayIAMOperations@@@@@@QEAAJ_K0@Z @ 0x18003B1E4 (-_EnsureCapacity@-$CTSimpleArray@PEAVCOperation@CDelayIAMOperations@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x18003C738 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180105040 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@_K@Z @ 0x1802F0AEC (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CClassicWindowManager::_HandleActivation(CClassicWindowManager *this, HWND a2)
{
  _QWORD *v3; // r14
  unsigned __int64 v4; // r13
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r12
  __int64 v7; // rbx
  int v8; // ebx
  struct IUnknown *v9; // rcx
  int active; // esi
  unsigned __int64 v11; // r15
  char v12; // al
  char v13; // r13
  struct IUnknown *v14; // rdi
  CClassicWindowManager *v15; // rsi
  char *v16; // rbx
  CClassicWindowManager *v17; // rbx
  void *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r8
  CClassicWindowManager *v21; // rcx
  __int64 *v23; // rax
  __int64 *v24; // rax
  HWND v25; // rax
  __int64 v26[3]; // [rsp+20h] [rbp-18h] BYREF
  CClassicWindowManager *v27; // [rsp+80h] [rbp+48h] BYREF
  CClassicWindowManager *v28; // [rsp+88h] [rbp+50h] BYREF
  struct IUnknown *v29; // [rsp+90h] [rbp+58h] BYREF
  __int64 v30; // [rsp+98h] [rbp+60h] BYREF

  v27 = this;
  v28 = 0LL;
  v3 = (_QWORD *)((char *)this + 192);
  v26[1] = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v6 = 1LL;
  if ( *((_QWORD *)this + 25) )
  {
    while ( 1 )
    {
      v26[0] = 0LL;
      v7 = *(_QWORD *)(*v3 + 8 * v5);
      v30 = v7;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v29 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, struct IUnknown **))v7)(
             v7,
             &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
             &v29) >= 0
        && ((unsigned __int8 (__fastcall *)(struct IUnknown *, HWND))v29->lpVtbl[8].QueryInterface)(v29, a2) )
      {
        v8 = 0;
      }
      else
      {
        v8 = -1;
      }
      v9 = v29;
      if ( v29 )
      {
        v29 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v30);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v26);
      if ( !v8 )
        break;
      if ( ++v5 >= v3[1] )
        goto LABEL_46;
    }
    v4 = v5;
    active = 0;
  }
  else
  {
LABEL_46:
    active = -2147319765;
  }
  if ( active >= 0 )
  {
    active = (***(__int64 (__fastcall ****)(_QWORD, GUID *, CClassicWindowManager **))(*v3 + 8 * v4))(
               *(_QWORD *)(*v3 + 8 * v4),
               &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
               &v28);
    v11 = v4;
    if ( active >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(CClassicWindowManager *))(*(_QWORD *)v28 + 160LL))(v28);
      v13 = v12;
      v14 = 0LL;
      v29 = 0LL;
      if ( !v11 )
      {
        if ( !v12 )
          goto LABEL_34;
        if ( (*(unsigned __int8 (__fastcall **)(CClassicWindowManager *))(*(_QWORD *)v28 + 168LL))(v28) )
          goto LABEL_34;
        v23 = (__int64 *)(*(__int64 (__fastcall **)(CClassicWindowManager *))(*(_QWORD *)v28 + 96LL))(v28);
        Microsoft::WRL::ComPtr<IAppLayout>::operator=((__int64 *)&v29, v23);
        v14 = v29;
        if ( (unsigned int)SHIsSameObject(v29, *(struct IUnknown **)(*v3 + 8LL)) )
          goto LABEL_34;
      }
      v15 = v27;
      v16 = (char *)v27 + 184;
      v30 = (__int64)v27 + 192;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)v27 + 24) + 152LL))(**((_QWORD **)v27 + 24)) )
      {
        (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)v16 + 16LL))(v16, 0LL);
        --v11;
      }
      if ( !v13 )
        goto LABEL_33;
      if ( !v14 )
      {
        v24 = (__int64 *)(*(__int64 (__fastcall **)(CClassicWindowManager *))(*(_QWORD *)v28 + 96LL))(v28);
        Microsoft::WRL::ComPtr<IAppLayout>::operator=((__int64 *)&v29, v24);
        v14 = v29;
        if ( !v29 )
          goto LABEL_33;
      }
      v25 = (HWND)((__int64 (__fastcall *)(struct IUnknown *))v14->lpVtbl[1].QueryInterface)(v14);
      CClassicWindowManager::_FindClassicWindow(v15, v25, 0LL, (unsigned __int64 *)&v27);
      if ( v11 < (unsigned __int64)v27 )
        ++v11;
      active = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::PositionNewActiveApp(v16, &v29);
      if ( active >= 0 )
      {
LABEL_33:
        v17 = v28;
        v27 = v28;
        if ( v28 )
          (*(void (__fastcall **)(CClassicWindowManager *))(*(_QWORD *)v28 + 8LL))(v28);
        active = 0;
        if ( v11 )
        {
          CTSimpleArray<Microsoft::WRL::ComPtr<IClassicWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IClassicWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::RemoveAt(
            v30,
            v11);
          v19 = v3[1];
          if ( v19 )
            v6 = v19 + 1;
          if ( v6 <= v3[3]
            || (active = CTSimpleArray<CDelayIAMOperations::COperation *,4294967294,CTPolicyCoTaskMem<CDelayIAMOperations::COperation *>,CSimpleArrayStandardCompareHelper<CDelayIAMOperations::COperation *>,CSimpleArrayStandardMergeHelper<CDelayIAMOperations::COperation *>>::_EnsureCapacity(
                           (__int64)v3,
                           v6,
                           v18),
                active >= 0) )
          {
            v20 = v3[1];
            if ( v20 )
              memmove_0((void *)(*v3 + 8LL), (const void *)*v3, 8 * v20);
            v3[1] = v6;
            if ( *v3 )
            {
              *(_QWORD *)*v3 = v17;
              if ( v17 )
                (*(void (__fastcall **)(CClassicWindowManager *))(*(_QWORD *)v17 + 8LL))(v17);
            }
          }
        }
        if ( v17 )
          (*(void (__fastcall **)(CClassicWindowManager *))(*(_QWORD *)v17 + 16LL))(v17);
        if ( active >= 0 )
        {
LABEL_34:
          if ( v14 )
            ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl[3].QueryInterface)(v14);
          (*(void (__fastcall **)(CClassicWindowManager *))(*(_QWORD *)v28 + 72LL))(v28);
        }
      }
      if ( v14 )
        ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
    }
  }
  v21 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(CClassicWindowManager *))(*(_QWORD *)v21 + 16LL))(v21);
  }
  return (unsigned int)active;
}
