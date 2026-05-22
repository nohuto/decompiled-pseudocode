/*
 * XREFs of ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x18010B01C
 * Callers:
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x180109C3C (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x18010B108 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z @ 0x18010B428 (-UpdateFocusedInputTarget3D@MPCInputRouter@@AEAAXPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002BA4 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x180002D48 (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180040694 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009BA10 (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z @ 0x1800B6D28 (-OnTargetWithFocus3dChanged@MPCHolographicInputManager@@QEAAXPEAUIMPCFocusTarget@@0@Z.c)
 *     ??$MPCInputRouter_Set3DFocusTarget@PEAUIMPCFocusTarget@@PEAU1@@ISMTracing@@SAX$$QEAPEAUIMPCFocusTarget@@0@Z @ 0x180107B60 (--$MPCInputRouter_Set3DFocusTarget@PEAUIMPCFocusTarget@@PEAU1@@ISMTracing@@SAX$$QEAPEAUIMPCFocus.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x18010B1FC (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 */

void __fastcall MPCInputRouter::Set3DFocusTarget(MPCInputRouter *this, struct IMPCFocusTarget *a2)
{
  struct IMPCFocusTarget **v2; // rbx
  struct IMPCFocusTarget **v5; // r14
  MPCHolographicInputManager *Instance; // rax
  struct IMPCFocusTarget *v7; // [rsp+40h] [rbp+8h] BYREF
  struct IMPCFocusTarget *v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = (struct IMPCFocusTarget **)((char *)this + 792);
  if ( *((struct IMPCFocusTarget **)this + 99) != a2 )
  {
    v5 = (struct IMPCFocusTarget **)((char *)this + 800);
    Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)this + 100, (__int64 *)this + 99);
    if ( *v2 != a2 )
    {
      v7 = a2;
      Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef((__int64 *)&v7);
      v7 = *v2;
      *v2 = a2;
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)&v7);
    }
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::OnTargetWithFocus3dChanged(Instance, *v5, *v2);
    MPCInputRouter::Update3DFocusWNF(this);
    v7 = *v2;
    v8 = *v5;
    ISMTracing::MPCInputRouter_Set3DFocusTarget<IMPCFocusTarget *,IMPCFocusTarget *>(&v8, &v7);
  }
  if ( *v2
    && *((_BYTE *)this + 888)
    && *((_QWORD *)this + 112) == (*(__int64 (__fastcall **)(struct IMPCFocusTarget *))(*(_QWORD *)*v2 + 56LL))(*v2) )
  {
    Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)this + 98, (__int64 *)v2);
  }
}
