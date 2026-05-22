/*
 * XREFs of ?AddInputProvider@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x180034810
 * Callers:
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x1800296EC (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800348D0 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAAPEAV?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180034AA0 (--$_Emplace_reallocate@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@-$vector@V-$ComPtr@UIM.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MPCHolographicInputManager::AddInputProvider(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  char *v4; // rbx
  struct IMPCInputProviderBase **i; // rax
  __int64 *v6; // rdx
  _QWORD *v7; // rcx
  int v9; // ebx
  struct IMPCInputProviderBase *v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = (char *)this + 3304;
  for ( i = (struct IMPCInputProviderBase **)*((_QWORD *)this + 413);
        i != *((struct IMPCInputProviderBase ***)this + 414);
        ++i )
  {
    if ( *i == a2 )
      return 2147942487LL;
  }
  v10 = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 8LL))(a2);
  v6 = (__int64 *)*((_QWORD *)this + 414);
  if ( v6 == *((__int64 **)this + 415) )
  {
    std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::_Emplace_reallocate<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>(
      v4,
      v6,
      &v10);
  }
  else
  {
    *v6 = 0LL;
    if ( v6 != (__int64 *)&v10 )
    {
      *v6 = (__int64)a2;
      v10 = 0LL;
    }
    *((_QWORD *)v4 + 1) += 8LL;
  }
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)&v10);
  v7 = (_QWORD *)*((_QWORD *)this + 450);
  if ( v7 == *((_QWORD **)this + 451)
    || (v9 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 48LL))(*v7),
        v9 == (*(unsigned int (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 48LL))(a2))
    && (*(unsigned __int8 (__fastcall **)(_QWORD))(***((_QWORD ***)this + 450) + 272LL))(**((_QWORD **)this + 450)) )
  {
    MPCHolographicInputManager::AddPrimaryInputProvider(this, a2);
  }
  if ( *((_QWORD *)this + 422) )
    (*(void (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 296LL))(a2);
  return 0LL;
}
