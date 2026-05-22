/*
 * XREFs of ?RuntimeClassInitialize@HotkeyClientRegistration@@QEAAJPEAUIMessageProxy@@_NU_GUID@@@Z @ 0x1801D4CB4
 * Callers:
 *     ??$MakeAndInitialize@VHotkeyClientRegistration@@V1@PEAUIMessageProxy@@AEA_NAEAU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAVHotkeyClientRegistration@@$$QEAPEAUIMessageProxy@@AEA_NAEAU_GUID@@@Z @ 0x1801D01DC (--$MakeAndInitialize@VHotkeyClientRegistration@@V1@PEAUIMessageProxy@@AEA_NAEAU_GUID@@@Details@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFastWithHR@@YAXJ_K0@Z @ 0x1801D3450 (-FailFastWithHR@@YAXJ_K0@Z.c)
 */

__int64 __fastcall HotkeyClientRegistration::RuntimeClassInitialize(
        HotkeyClientRegistration *this,
        struct IMessageProxy *a2,
        char a3,
        struct _GUID *a4)
{
  unsigned int v8; // ebx
  ULONG_PTR v9; // r8
  int v10; // eax
  int v11; // eax
  __int128 v12; // xmm0
  __int64 (__fastcall *v13)(struct IMessageProxy *, GUID *, char *); // rdi
  int v14; // eax
  ULONG_PTR retaddr; // [rsp+38h] [rbp+0h]

  if ( !a2 )
  {
    v8 = -2147024809;
    v9 = 35LL;
LABEL_15:
    FailFastWithHR(v8, retaddr, v9);
    return v8;
  }
  v10 = (*(__int64 (__fastcall **)(struct IMessageProxy *, char *))(*(_QWORD *)a2 + 48LL))(a2, (char *)this + 40);
  v8 = v10;
  if ( v10 < 0 )
  {
    if ( v10 == -2147024882 )
      TerminateProcessOnMemoryExhaustion(0LL);
    v9 = 37LL;
    goto LABEL_15;
  }
  v11 = (*(__int64 (__fastcall **)(struct IMessageProxy *, char *))(*(_QWORD *)a2 + 24LL))(a2, (char *)this + 24);
  v8 = v11;
  if ( v11 < 0 )
  {
    if ( v11 == -2147024882 )
      TerminateProcessOnMemoryExhaustion(0LL);
    v9 = 38LL;
    goto LABEL_15;
  }
  v12 = (__int128)*a4;
  *((_DWORD *)this + 4) = *((_DWORD *)this + 10);
  *((_DWORD *)this + 5) = *((_DWORD *)this + 11);
  *((_BYTE *)this + 80) = a3;
  *(_OWORD *)((char *)this + 84) = v12;
  v13 = **(__int64 (__fastcall ***)(struct IMessageProxy *, GUID *, char *))a2;
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 13);
  v14 = v13(a2, &GUID_f17ab79d_12a5_4878_ac23_c0eb1c6e1572, (char *)this + 104);
  v8 = v14;
  if ( v14 < 0 )
  {
    if ( v14 == -2147024882 )
      TerminateProcessOnMemoryExhaustion(0LL);
    v9 = 44LL;
    goto LABEL_15;
  }
  return v8;
}
