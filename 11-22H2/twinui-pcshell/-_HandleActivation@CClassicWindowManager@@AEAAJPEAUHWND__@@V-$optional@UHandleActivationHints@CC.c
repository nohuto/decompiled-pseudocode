/*
 * XREFs of ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@V?$optional@UHandleActivationHints@CClassicWindowManager@@@std@@@Z @ 0x1800CE750
 * Callers:
 *     ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z @ 0x1800D2FF0 (-HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@W4ClassicWindowActivationOptions@@@Z.c)
 * Callees:
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000E158 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x180024560 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z @ 0x18004D928 (-_FindClassicWindow@CClassicWindowManager@@AEAAJPEAUHWND__@@PEAPEAUIClassicWindow@@PEA_K@Z.c)
 *     ?PositionNewActiveApp@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEAAJAEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@_K@Z @ 0x180073984 (-PositionNewActiveApp@-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x1800DF498 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUHWND__@@@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@V?$CSimpleArrayStandardMergeHelper@PEAUHWND__@@@@@@QEAAJ_K0@Z @ 0x1800EE03C (-_EnsureCapacity@-$CTSimpleArray@PEAUHWND__@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUHWND__@@@@V-$CS.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180132F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1801753D0 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTas.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=15
__int64 __fastcall CClassicWindowManager::_HandleActivation(__int64 **a1, __int64 a2, __int64 a3)
{
  int active; // esi
  __int64 **v5; // r14
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  __int64 v9; // rbx
  int v10; // ebx
  struct IUnknown *v11; // rcx
  unsigned __int64 v12; // r15
  char v13; // al
  char v14; // di
  struct IUnknown *v15; // rbx
  __int64 v16; // rdi
  __int64 *v17; // rcx
  __int64 *v18; // r8
  __int64 *v19; // rcx
  __int64 v20; // rcx
  __int64 *v22; // rax
  HWND v23; // rax
  char v24; // al
  __int64 *v25; // rax
  struct IUnknown *v26; // [rsp+20h] [rbp-38h] BYREF
  __int64 v27; // [rsp+28h] [rbp-30h] BYREF
  _QWORD *v28; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v29[4]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+60h] BYREF

  v32 = 0LL;
  active = 0;
  v5 = a1 + 24;
  v6 = 1LL;
  if ( *(_BYTE *)(a3 + 16) )
  {
    Microsoft::WRL::ComPtr<IClassicWindow>::operator=(&v32, (__int64 *)a3);
    v12 = *(_QWORD *)(a3 + 8);
    goto LABEL_17;
  }
  v32 = 0LL;
  v29[1] = 0LL;
  v7 = 0LL;
  v29[0] = 0LL;
  v8 = 0LL;
  if ( a1[25] )
  {
    while ( 1 )
    {
      v28 = 0LL;
      v9 = (*v5)[v8];
      v27 = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v26 = 0LL;
      if ( (**(int (__fastcall ***)(__int64, GUID *, struct IUnknown **))v9)(
             v9,
             &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
             &v26) >= 0
        && ((unsigned __int8 (__fastcall *)(struct IUnknown *, __int64))v26->lpVtbl[8].QueryInterface)(v26, a2) )
      {
        v10 = 0;
      }
      else
      {
        v10 = -1;
      }
      v11 = v26;
      if ( v26 )
      {
        v26 = 0LL;
        ((void (__fastcall *)(struct IUnknown *))v11->lpVtbl->Release)(v11);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v27);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v28);
      if ( !v10 )
        break;
      if ( ++v8 >= (unsigned __int64)v5[1] )
      {
        v7 = v29[0];
        goto LABEL_52;
      }
    }
    v7 = v8;
    active = 0;
  }
  else
  {
LABEL_52:
    active = -2147319765;
  }
  if ( active >= 0 )
  {
    active = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))(*v5)[v7])(
               (*v5)[v7],
               &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee,
               &v32);
    v12 = v7;
    if ( active >= 0 )
    {
LABEL_17:
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 160LL))(v32);
      v14 = v13;
      v15 = 0LL;
      v26 = 0LL;
      if ( v12
        || v13
        && (v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 168LL))(v32),
            !v24
         && (v25 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 96LL))(v32),
             Microsoft::WRL::ComPtr<IAppLayout>::operator=((__int64 *)&v26, v25),
             v15 = v26,
             !(unsigned int)SHIsSameObject(v26, (struct IUnknown *)(*v5)[1]))) )
      {
        v28 = a1 + 24;
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a1[24] + 152LL))(*a1[24]) )
        {
          ((void (__fastcall *)(__int64 **, _QWORD))a1[23][2])(a1 + 23, 0LL);
          --v12;
        }
        if ( v14 )
        {
          if ( v15
            || (v22 = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v32 + 96LL))(v32),
                Microsoft::WRL::ComPtr<IAppLayout>::operator=((__int64 *)&v26, v22),
                (v15 = v26) != 0LL) )
          {
            v23 = (HWND)((__int64 (__fastcall *)(struct IUnknown *))v15->lpVtbl[1].QueryInterface)(v15);
            CClassicWindowManager::_FindClassicWindow((CClassicWindowManager *)a1, v23, 0LL, v29);
            if ( v12 < v29[0] )
              ++v12;
            active = CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::PositionNewActiveApp(
                       (__int64)(a1 + 23),
                       (__int64 *)&v26,
                       v29[0]);
          }
        }
        if ( active < 0 )
          goto LABEL_37;
        v16 = v32;
        v27 = v32;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v27);
        active = 0;
        if ( v12 )
        {
          CTSimpleArray<Microsoft::WRL::ComPtr<IClassicWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IClassicWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::RemoveAt(
            v28,
            v12);
          v17 = v5[1];
          if ( v17 )
            v6 = (unsigned __int64)v17 + 1;
          if ( v6 <= (unsigned __int64)v5[3]
            || (active = CTSimpleArray<HWND__ *,4294967294,CTPolicyCoTaskMem<HWND__ *>,CSimpleArrayStandardCompareHelper<HWND__ *>,CSimpleArrayStandardMergeHelper<HWND__ *>>::_EnsureCapacity(
                           v5,
                           v6),
                active >= 0) )
          {
            v18 = v5[1];
            if ( v18 )
              memmove_0(*v5 + 1, *v5, 8LL * (_QWORD)v18);
            v5[1] = (__int64 *)v6;
          }
          if ( active >= 0 )
          {
            v19 = *v5;
            if ( *v5 )
            {
              *v19 = v16;
              Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v19);
            }
          }
        }
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v27);
      }
      if ( active >= 0 )
      {
        if ( v15 )
          ((void (__fastcall *)(struct IUnknown *))v15->lpVtbl[3].QueryInterface)(v15);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 72LL))(v32);
      }
LABEL_37:
      if ( v15 )
        ((void (__fastcall *)(struct IUnknown *))v15->lpVtbl->Release)(v15);
    }
  }
  v20 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  if ( *(_BYTE *)(a3 + 16) )
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)a3);
  return (unsigned int)active;
}
