/*
 * XREFs of ?HandleActivation@CClassicWindowManager@@UEAAJPEAUHWND__@@_N@Z @ 0x180103910
 * Callers:
 *     <none>
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z @ 0x180104034 (-_HandleActivation@CClassicWindowManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z @ 0x180104D0C (-_ShouldCheckApartments@@YA_NW4ApartmentCheckEnum@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180104FA0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIClassicWindow@@.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SHCoGetApartmentId@@YAJPEAK@Z @ 0x1802E7750 (-SHCoGetApartmentId@@YAJPEAK@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CClassicWindowManager::HandleActivation(CClassicWindowManager *this, HWND a2, char a3)
{
  unsigned __int64 v6; // r14
  int v7; // esi
  signed int ApartmentId; // edi
  _DWORD *v9; // rcx
  _DWORD *v10; // rax
  _DWORD *v11; // rbx
  _DWORD *v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+38h]
  _DWORD *v15; // [rsp+70h] [rbp+40h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+50h] BYREF

  v6 = ((unsigned __int64)this + 64) & -(__int64)(this != (CClassicWindowManager *)72);
  v7 = 0;
  if ( !(unsigned __int8)_ShouldCheckApartments(*(unsigned int *)(v6 + 0x2C)) || *(_DWORD *)(v6 + 40) == -3 )
    goto LABEL_2;
  ApartmentId = SHCoGetApartmentId(&v16);
  if ( ApartmentId >= 0 && v16 != *(_DWORD *)(v6 + 40) )
    ApartmentId = -2147417842;
  if ( ApartmentId >= 0 )
LABEL_2:
    ApartmentId = !TryEnterCriticalSection((LPCRITICAL_SECTION)v6) ? 0x8001010E : 0;
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC8,
      (__int64)"onecoreuap\\internal\\shell\\inc\\private\\Cowthreadusedetection.h",
      (const char *)(unsigned int)ApartmentId);
  v15 = 0LL;
  if ( !a3
    || GetShellWindow() == a2
    && (*(unsigned __int8 (__fastcall **)(_QWORD, HWND))(***((_QWORD ***)this + 15) + 192LL))(
         **((_QWORD **)this + 15),
         a2) )
  {
    goto LABEL_16;
  }
  v9 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v15 = 0LL;
  v10 = operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    v10[3] = 1;
    *(_QWORD *)v10 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IClassicWindow>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v11 = &CClassicWindow::`vftable';
    *((_QWORD *)v11 + 2) = a2;
    *((_QWORD *)v11 + 3) = 0LL;
    *((_QWORD *)v11 + 5) = 0LL;
    *((_QWORD *)v11 + 6) = 0LL;
    *((_QWORD *)v11 + 7) = 0LL;
    *((_QWORD *)v11 + 8) = 0LL;
    v11[18] = 0;
    *((_QWORD *)v11 + 10) = 0LL;
    *((_QWORD *)v11 + 4) = 0LL;
    v15 = 0LL;
    if ( InlineIsEqualGUID(&GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee, &GUID_71dafe9a_4f1f_4a1b_b6ed_fd273bc0ffee) )
    {
      v15 = v11;
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v11 + 8LL))(v11);
    }
    else
    {
      v7 = -2147467262;
    }
    if ( v11 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IClassicWindow>::Release(v11);
    if ( v7 >= 0 )
    {
      v7 = (*(__int64 (__fastcall **)(char *, _DWORD **))(*((_QWORD *)this + 14) + 8LL))((char *)this + 112, &v15);
      if ( v7 >= 0 )
LABEL_16:
        v7 = CClassicWindowManager::_HandleActivation((CClassicWindowManager *)((char *)this - 72), a2);
    }
  }
  else
  {
    v7 = -2147024882;
  }
  v12 = v15;
  if ( v15 )
  {
    v15 = 0LL;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( ApartmentId >= 0 )
    LeaveCriticalSection((LPCRITICAL_SECTION)v6);
  return (unsigned int)v7;
}
