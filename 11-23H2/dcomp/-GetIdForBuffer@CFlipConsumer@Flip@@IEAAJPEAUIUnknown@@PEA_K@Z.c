/*
 * XREFs of ?GetIdForBuffer@CFlipConsumer@Flip@@IEAAJPEAUIUnknown@@PEA_K@Z @ 0x1801AB244
 * Callers:
 *     ?HoldPoolBuffer@CFlipConsumer@Flip@@UEAAJPEAUIUnknown@@@Z @ 0x1801AB300 (-HoldPoolBuffer@CFlipConsumer@Flip@@UEAAJPEAUIUnknown@@@Z.c)
 *     ?ReturnPoolBuffer@CFlipConsumer@Flip@@UEAAJPEAUIUnknown@@_K0@Z @ 0x1801ABDB0 (-ReturnPoolBuffer@CFlipConsumer@Flip@@UEAAJPEAUIUnknown@@_K0@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18007EC48 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Flip::CFlipConsumer::GetIdForBuffer(
        Flip::CFlipConsumer *this,
        struct IUnknown *a2,
        unsigned __int64 *a3)
{
  struct IUnknownVtbl *lpVtbl; // rax
  int v6; // eax
  unsigned int v7; // ebx
  unsigned int v8; // edx
  __int64 v9; // r8
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  *a3 = 0LL;
  lpVtbl = a2->lpVtbl;
  v11 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a2,
         &GUID_00000000_0000_0000_c000_000000000046,
         &v11);
  v7 = v6;
  if ( v6 < 0 )
  {
    DoStackCaptureDirect(v6, 0x24Bu);
  }
  else
  {
    v8 = 0;
    if ( *((_DWORD *)this + 14) )
    {
      v9 = *((_QWORD *)this + 4);
      while ( *(_QWORD *)(v9 + 16LL * v8 + 8) != v11 )
      {
        if ( ++v8 >= *((_DWORD *)this + 14) )
          goto LABEL_9;
      }
      v7 = 0;
      *a3 = *(_QWORD *)(v9 + 16LL * v8);
    }
  }
LABEL_9:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v11);
  return v7;
}
