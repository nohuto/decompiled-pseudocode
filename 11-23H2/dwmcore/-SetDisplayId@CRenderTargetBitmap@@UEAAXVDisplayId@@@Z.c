/*
 * XREFs of ?SetDisplayId@CRenderTargetBitmap@@UEAAXVDisplayId@@@Z @ 0x1800AFC70
 * Callers:
 *     ?GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x1800AF214 (-GetCachedTargetBitmap@CRenderTargetBitmapCache@@IEAAJAEBVCResourceTag@@UD2D_SIZE_U@@AEBUPixelFo.c)
 *     ?EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x1802B485C (-EnsureTargetBitmap@CDecodeBitmap@@QEAAJAEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInf.c)
 *     ?SetDisplayId@CStereoRenderTargetBitmap@@UEAAXVDisplayId@@@Z @ 0x1802B5990 (-SetDisplayId@CStereoRenderTargetBitmap@@UEAAXVDisplayId@@@Z.c)
 * Callees:
 *     ?ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ @ 0x1800AE3F4 (-ResetBitmapCache@CRenderTargetBitmap@@IEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B6B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CRenderTargetBitmap::SetDisplayId(__int64 a1, unsigned int a2)
{
  __int64 v4; // rcx
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 16LL) + *(_QWORD *)(a1 + 16) + 8LL;
  if ( a2 != *(_DWORD *)(*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 8LL))(v4, &v5) )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 16) + 32LL))(*(_QWORD *)(a1 + 16), a2);
    CRenderTargetBitmap::ResetBitmapCache((CRenderTargetBitmap *)(a1 - 120));
  }
}
