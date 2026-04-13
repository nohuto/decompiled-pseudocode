/*
 * XREFs of ?Release@?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x180070B80
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F9F8 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        __int64 a1,
        volatile int *a2)
{
  unsigned int v2; // eax
  _DWORD *v3; // r11
  unsigned int v4; // edi
  int v5; // ebx
  struct Microsoft::WRL::Details::ModuleBase *v6; // rcx

  v2 = Microsoft::WRL::Details::SafeUnknownDecrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
  v4 = v2;
  if ( v2 )
  {
    if ( (v3[5] & 6) == 0 && v2 == 1 )
    {
      v6 = Microsoft::WRL::Details::ModuleBase::module_;
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_10:
        (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 16LL))(v6);
    }
  }
  else
  {
    v5 = v3[5] & 5;
    if ( v3 )
      (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v3 + 40LL))(v3, v2 + 1);
    if ( v5 == 5 )
    {
      v6 = Microsoft::WRL::Details::ModuleBase::module_;
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        goto LABEL_10;
    }
  }
  return v4;
}
