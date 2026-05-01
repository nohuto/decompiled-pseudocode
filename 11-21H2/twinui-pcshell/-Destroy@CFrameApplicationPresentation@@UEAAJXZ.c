/*
 * XREFs of ?Destroy@CFrameApplicationPresentation@@UEAAJXZ @ 0x180158F20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_2647a080773a9fa4ef6a91f024d7dfff___ @ 0x180158FA0 (Windows--Internal--ComTaskPool--QueueTask__lambda_2647a080773a9fa4ef6a91f024d7dfff___.c)
 */

__int64 __fastcall CFrameApplicationPresentation::Destroy(CFrameApplicationPresentation *this)
{
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // edi
  __int64 v7[5]; // [rsp+20h] [rbp-28h] BYREF
  CFrameApplicationPresentation *v8; // [rsp+50h] [rbp+8h] BYREF

  *((_DWORD *)this + 14) = 1;
  v8 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v8);
  v7[0] = (__int64)this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v7);
  v2 = *((unsigned int *)this + 12);
  v7[1] = (__int64)this;
  v7[2] = (__int64)this;
  v5 = Windows::Internal::ComTaskPool::QueueTask__lambda_2647a080773a9fa4ef6a91f024d7dfff___(v4, v3, v2, v7);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v7);
  if ( v5 >= 0 )
    ++*((_DWORD *)this + 53);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v8);
  return (unsigned int)v5;
}
