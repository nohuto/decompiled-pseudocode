/*
 * XREFs of ?RegisterClassObject@_ATL_OBJMAP_ENTRY30@ATL@@QEAAJKK@Z @ 0x140051CC8
 * Callers:
 *     ?PreMessageLoop@?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z @ 0x140051908 (-PreMessageLoop@-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAAJH@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall ATL::_ATL_OBJMAP_ENTRY30::RegisterClassObject(
        ATL::_ATL_OBJMAP_ENTRY30 *this,
        __int64 a2,
        DWORD a3))(_QWORD, GUID *, LPUNKNOWN *)
{
  __int64 (__fastcall *result)(_QWORD, GUID *, LPUNKNOWN *); // rax
  HRESULT v6; // edi
  LPUNKNOWN pUnk; // [rsp+40h] [rbp+8h] BYREF

  pUnk = 0LL;
  result = (__int64 (__fastcall *)(_QWORD, GUID *, LPUNKNOWN *))*((_QWORD *)this + 2);
  if ( result )
  {
    v6 = result(*((_QWORD *)this + 3), &GUID_00000000_0000_0000_c000_000000000046, &pUnk);
    if ( v6 >= 0 )
      v6 = CoRegisterClassObject(*(const IID *const *)this, pUnk, 4u, a3, (LPDWORD)this + 10);
    if ( pUnk )
      ((void (__fastcall *)(LPUNKNOWN))pUnk->lpVtbl->Release)(pUnk);
    return (__int64 (__fastcall *)(_QWORD, GUID *, LPUNKNOWN *))(unsigned int)v6;
  }
  return result;
}
