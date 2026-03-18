/*
 * XREFs of ?NotifySurfaceOfSkippedToken@@YAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0077584
 * Callers:
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000DB90 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z @ 0x1C0005A8C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ?CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEAPEAV1@@Z @ 0x1C00765C8 (-CreateFlipToken@CToken@@CAJ_KPEAVCompositionSurfaceObject@@AEBU_D3DKMT_FLIPMODEL_PRESENTHISTORY.c)
 *     ?NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z @ 0x1C0076FAC (-NotifyTokenInFrame@CompositionSurfaceObject@@QEAAJAEBVCToken@@PEA_N@Z.c)
 */

__int64 __fastcall NotifySurfaceOfSkippedToken(const struct _D3DKMT_PRESENTHISTORYTOKEN *a1, __int64 a2, __int64 a3)
{
  int v4; // ebx
  UINT64 CompositionBindingId; // rcx
  struct CToken *v6; // rdi
  CompositionSurfaceObject *v7; // rcx
  struct CToken *v8; // rdx
  struct CToken *v10; // [rsp+30h] [rbp+8h] BYREF
  PVOID Object; // [rsp+38h] [rbp+10h] BYREF

  Object = 0LL;
  v4 = CompositionSurfaceObject::ResolveHandle(
         (void *)a1->Token.Flip.hLogicalSurface,
         2u,
         a3,
         (struct CompositionSurfaceObject **)&Object);
  if ( v4 >= 0 )
  {
    CompositionBindingId = a1->CompositionBindingId;
    v10 = 0LL;
    v4 = CToken::CreateFlipToken(CompositionBindingId, (struct CompositionSurfaceObject *)Object, &a1->Token.Flip, &v10);
    if ( v4 >= 0 )
    {
      v6 = v10;
      v7 = (CompositionSurfaceObject *)Object;
      v8 = v10;
      LOBYTE(v10) = 0;
      *((_BYTE *)v8 + 48) = 1;
      *((_DWORD *)v8 + 6) = 3;
      v4 = CompositionSurfaceObject::NotifyTokenInFrame(v7, v8, (bool *)&v10);
      if ( v6 )
        (**(void (__fastcall ***)(struct CToken *, __int64))v6)(v6, 1LL);
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v4;
}
