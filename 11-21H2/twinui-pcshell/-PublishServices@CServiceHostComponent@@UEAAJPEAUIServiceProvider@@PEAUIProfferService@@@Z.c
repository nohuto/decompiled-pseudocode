/*
 * XREFs of ?PublishServices@CServiceHostComponent@@UEAAJPEAUIServiceProvider@@PEAUIProfferService@@@Z @ 0x18017EBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CServiceHostComponent::PublishServices(
        CServiceHostComponent *this,
        struct IServiceProvider *a2,
        struct IProfferService *a3)
{
  int v5; // ebx
  unsigned __int64 v6; // rbp
  __int64 v7; // rsi
  void (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v5 = (*(__int64 (__fastcall **)(CServiceHostComponent *, struct IServiceProvider *))(*(_QWORD *)this + 80LL))(
         this,
         a2);
  if ( v5 >= 0 )
  {
    v6 = 0LL;
    v7 = 0LL;
    do
    {
      if ( v6 >= *((_QWORD *)this + 4) )
        break;
      v11 = 0LL;
      v9 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(*((_QWORD *)this + 3) + v7 + 16);
      if ( v9 )
      {
        (**v9)(v9, &GUID_6d5140c1_7436_11ce_8034_00aa006009fa, &v11);
        v10 = v11;
        if ( v11 )
          continue;
      }
      v12 = (__int64)this + 8;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v12);
      v12 = v11;
      v11 = (__int64)this + 8;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v12);
      v10 = v11;
      v5 = ((__int64 (__fastcall *)(struct IProfferService *, __int64, __int64, __int64))a3->lpVtbl->ProfferService)(
             a3,
             v7 + *((_QWORD *)this + 3),
             v10,
             v7 + *((_QWORD *)this + 3) + 24);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v11);
      ++v6;
      v7 += 32LL;
    }
    while ( v5 >= 0 );
  }
  return (unsigned int)v5;
}
