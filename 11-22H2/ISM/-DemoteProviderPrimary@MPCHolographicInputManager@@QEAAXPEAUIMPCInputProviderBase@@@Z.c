/*
 * XREFs of ?DemoteProviderPrimary@MPCHolographicInputManager@@QEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800C5EE0
 * Callers:
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801ECA90 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180003198 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?InternalRelease@?$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ @ 0x1800182F0 (-InternalRelease@-$ComPtr@UIRawInputProvider@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x1800C5E74 (-DemotePrimaryProviderInternal@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 *     ?SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z @ 0x1800C94CC (-SetProviderPrimary@MPCHolographicInputManager@@QEAAJPEAUIMPCInputProviderBase@@@Z.c)
 *     ?erase@?$vector@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@V?$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@@std@@@std@@@2@@Z @ 0x1800C9F60 (-erase@-$vector@V-$ComPtr@UIMPCInputProviderBase@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIMPCIn.c)
 */

void __fastcall MPCHolographicInputManager::DemoteProviderPrimary(
        MPCHolographicInputManager *this,
        struct IMPCInputProviderBase *a2)
{
  __int64 *v2; // rbp
  _QWORD *v3; // r14
  __int64 *i; // rdi
  struct IMPCInputProviderBase *v7; // rbx
  struct IMPCInputProviderBase *v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 451);
  v3 = (_QWORD *)((char *)this + 3600);
  for ( i = (__int64 *)*((_QWORD *)this + 450); i != v2; ++i )
  {
    v8 = (struct IMPCInputProviderBase *)*i;
    v7 = v8;
    Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v8);
    Microsoft::WRL::ComPtr<IRawInputProvider>::InternalRelease((__int64 *)&v8);
    if ( a2 == v7 )
      break;
  }
  if ( i != *((__int64 **)this + 414) )
  {
    MPCHolographicInputManager::DemotePrimaryProviderInternal((MPCCursorManager **)this, a2);
    std::vector<Microsoft::WRL::ComPtr<IMPCInputProviderBase>>::erase(v3, &v8, i);
    if ( ((v3[1] - *v3) & 0xFFFFFFFFFFFFFFF8uLL) == 0 )
      MPCHolographicInputManager::SetProviderPrimary(this, *((struct IMPCInputProviderBase **)this + 418));
  }
}
