/*
 * XREFs of ?GetInputSiteForContainer@@YA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x18013842C
 * Callers:
 *     ?OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801384B0 (-OnHitTest@CursorSuppressionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualPro.c)
 *     ?OnHitTest@CursorProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180139330 (-OnHitTest@CursorProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorIniti.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAXXZ @ 0x18004905C (-InternalAddRef@-$ComPtr@UIAsyncActionCompletedHandler@Foundation@Windows@@@WRL@Microsoft@@IEBAX.c)
 *     ??$GetAttachedObject@UIContainerInfoInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x180137FD8 (--$GetAttachedObject@UIContainerInfoInputObjectProxy@@@InputSite@@QEAA-AV-$ComPtr@UIContainerInf.c)
 */

__int64 *__fastcall GetInputSiteForContainer(__int64 *a1, __int64 **a2)
{
  __int64 *v2; // rdi
  __int64 *v4; // rsi
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  v4 = a2[1];
  while ( 1 )
  {
    if ( v2 == v4 )
    {
      *a1 = 0LL;
      return a1;
    }
    InputSite::GetAttachedObject<IContainerInfoInputObjectProxy>(*v2, &v6);
    if ( v6 )
      break;
    Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v6);
    ++v2;
  }
  *a1 = *v2;
  Microsoft::WRL::ComPtr<Windows::Foundation::IAsyncActionCompletedHandler>::InternalAddRef(a1);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease(&v6);
  return a1;
}
