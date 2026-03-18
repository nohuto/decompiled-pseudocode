/*
 * XREFs of ?GetDevice@CRenderTargetBitmap@@UEBAPEAVCD3DDevice@@XZ @ 0x1800BA594
 * Callers:
 *     ?FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ @ 0x1800BA490 (-FinalRelease@CScratchRenderTargetBitmap@@UEAAXXZ.c)
 *     ?GetDevice@CRenderTargetBitmap@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ @ 0x18010BCF0 (-GetDevice@CRenderTargetBitmap@@$4PPPPPPPM@A@EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CRenderTargetBitmap@@$4PPPPPPPM@7EBAPEAVCD3DDevice@@XZ @ 0x18010C990 (-GetDevice@CRenderTargetBitmap@@$4PPPPPPPM@7EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBAPEAVCD3DDevice@@XZ @ 0x18010CE50 (-GetDevice@CRenderTargetBitmap@@$4PPPPPPPM@BI@EBAPEAVCD3DDevice@@XZ.c)
 *     ?GetDevice@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBAPEAVCD3DDevice@@XZ @ 0x18010D1D0 (-GetDevice@CRenderTargetBitmap@@$4PPPPPPPM@CA@EBAPEAVCD3DDevice@@XZ.c)
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CRenderTargetBitmap::GetDevice(CRenderTargetBitmap *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx

  v1 = *((_QWORD *)this - 7);
  if ( !v1 )
    return 0LL;
  v2 = v1 + 8 + *(int *)(*(_QWORD *)(v1 + 8) + 8LL);
  return (struct CD3DDevice *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
}
