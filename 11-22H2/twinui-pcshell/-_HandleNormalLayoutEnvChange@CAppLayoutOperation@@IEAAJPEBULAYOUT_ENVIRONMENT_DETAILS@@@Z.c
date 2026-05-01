/*
 * XREFs of ?_HandleNormalLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180793E10
 * Callers:
 *     ?_HandleLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@0W4FinalizeLayoutFlags@@@Z @ 0x180793D7C (-_HandleLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@0W4FinalizeLay.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveApplication@@XZ @ 0x18004CF9C (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveApplication@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveAp.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180746164 (-ComputeLayoutEnvMaxApps@ImmersiveApplicationLayout@@YAIPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

__int64 __fastcall CAppLayoutOperation::_HandleNormalLayoutEnvChange(
        CAppLayoutOperation *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  int v4; // r14d
  const struct LAYOUT_ENVIRONMENT_DETAILS *v5; // rdx
  unsigned int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // ebx
  LANGID ThreadUILanguage; // ax
  __int64 v10; // r13
  unsigned int v11; // r12d
  __int64 v12; // rsi
  int (__fastcall *v13)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v14; // rbx
  __int64 v15; // rbx
  int (__fastcall *v16)(__int64, __int64 *); // rdi
  __int64 **v17; // rax
  __int64 *AddressOf; // rax
  bool v19; // al
  int v20; // eax
  __int64 v22; // [rsp+30h] [rbp-20h] BYREF
  __int64 v23; // [rsp+38h] [rbp-18h] BYREF
  __int64 v24; // [rsp+40h] [rbp-10h] BYREF
  __int64 v25; // [rsp+48h] [rbp-8h] BYREF
  int v26; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v27; // [rsp+A0h] [rbp+50h] BYREF
  unsigned int v28; // [rsp+A8h] [rbp+58h]

  v4 = 0;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 216LL))(*((_QWORD *)this + 5));
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 264LL))(*((_QWORD *)this + 5), 2LL);
  v6 = ImmersiveApplicationLayout::ComputeLayoutEnvMaxApps(a2, v5);
  v7 = *((_QWORD *)this + 5);
  v8 = v6;
  v28 = v6;
  if ( (*(unsigned int (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 80LL))(v7, 5LL) <= v6
    || (*(int (__fastcall **)(_QWORD, _QWORD, unsigned int *))(**((_QWORD **)this + 5) + 168LL))(
         *((_QWORD *)this + 5),
         0LL,
         &v27) < 0
    || (v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 5) + 256LL))(*((_QWORD *)this + 5), v27),
        v4 >= 0) )
  {
    ThreadUILanguage = GetThreadUILanguage();
    if ( (unsigned int)IsBiDiLocale(ThreadUILanguage) )
    {
      v10 = 1LL;
      v11 = 0;
    }
    else
    {
      v10 = -1LL;
      v11 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5)) - 1;
    }
    while ( (*(unsigned int (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 80LL))(
              *((_QWORD *)this + 5),
              1LL) > v8 )
    {
      if ( v4 < 0 )
        return (unsigned int)v4;
      v12 = *((_QWORD *)this + 5);
      v26 = 0;
      v23 = 0LL;
      v13 = *(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v12 + 96LL);
      v14 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v23, &v24);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v14);
      if ( v13(v12, v11, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v14) >= 0 )
      {
        v15 = v23;
        v22 = 0LL;
        v16 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v23 + 40LL);
        v17 = (__int64 **)Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v22, &v25);
        AddressOf = Microsoft::WRL::ComPtr<IImmersiveApplication>::ReleaseAndGetAddressOf(*v17);
        if ( v16(v15, AddressOf) >= 0 )
          (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v22 + 72LL))(v22, &v26);
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v22);
      }
      v19 = 0;
      if ( !v26 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 5) + 256LL))(*((_QWORD *)this + 5), v11);
        v19 = v4 >= 0;
      }
      if ( v10 == -1 || !v19 )
      {
        v20 = 1;
        if ( v10 != 1 )
          v20 = -1;
        v11 += v20;
      }
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v23);
      v8 = v28;
    }
    if ( v4 >= 0 && !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5)) )
      return (unsigned int)(*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 5) + 240LL))(
                             *((_QWORD *)this + 5),
                             0LL,
                             0LL,
                             0LL);
  }
  return (unsigned int)v4;
}
