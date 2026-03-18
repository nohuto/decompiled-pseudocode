/*
 * XREFs of ?ClearAllDisplayState@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C01E8DF4
 * Callers:
 *     ?SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01868E4 (-SetPartOfDesktop@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?Destroy@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1C02BBE10 (-Destroy@ADAPTER_DISPLAY@@QEAAXXZ.c)
 *     ?Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C02BF958 (-Reset@DISPLAY_SOURCE@@AEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     memset @ 0x1C0028640 (memset.c)
 *     ?GetNextConfigIndex@@YAHH@Z @ 0x1C01726F8 (-GetNextConfigIndex@@YAHH@Z.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0172A8C (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z @ 0x1C0172AB8 (-IsPostCompositionConfigQueueEmpty@@YAEPEAU_POST_COMPOSITION_CONFIG_QUEUE@@@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C0173DFC (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     ?IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z @ 0x1C01E8EF0 (-IsDisplayPlaneConfigQueueEmpty@@YAEPEAU_DISPLAY_PLANE_CONFIG_QUEUE@@@Z.c)
 *     ?GetPreviousConfigIndex@@YAHH@Z @ 0x1C01E8F1C (-GetPreviousConfigIndex@@YAHH@Z.c)
 *     ?RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z @ 0x1C02BF1D0 (-RemovePostCompositionConfig@@YAXPEAU_POST_COMPOSITION_CONFIG_QUEUE@@H@Z.c)
 */

void __fastcall DISPLAY_SOURCE::ClearAllDisplayState(DISPLAY_SOURCE *this)
{
  unsigned int i; // ebp
  struct _DISPLAY_PLANE_CONFIG_QUEUE *v3; // rdi
  __int64 v4; // rsi
  int v5; // eax
  struct DXGGLOBAL *Global; // rax
  __int64 v7; // r8
  __int64 v8; // r9

  for ( i = 0; i < *((_DWORD *)this + 940); ++i )
  {
    while ( 1 )
    {
      v3 = (DISPLAY_SOURCE *)((char *)this + 168 * i + 1144);
      if ( IsDisplayPlaneConfigQueueEmpty(v3) )
        break;
      v4 = *(int *)v3;
      if ( (_DWORD)v4 == -1 )
      {
        WdLogSingleEntry1(1LL, 9085LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pQueue->HeadIndex != CONFIG_INDEX_INVALID",
          9085LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( *((_DWORD *)v3 + 1) == -1 )
      {
        WdLogSingleEntry1(1LL, 9086LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pQueue->TailIndex != CONFIG_INDEX_INVALID",
          9086LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      memset((char *)v3 + 80 * v4 + 8, 0, 0x50uLL);
      v5 = *((_DWORD *)v3 + 1);
      if ( *(_DWORD *)v3 == (_DWORD)v4 )
      {
        if ( v5 == (_DWORD)v4 )
        {
          *((_DWORD *)v3 + 1) = -1;
          *(_DWORD *)v3 = -1;
        }
        else
        {
          *(_DWORD *)v3 = GetPreviousConfigIndex(v4);
        }
      }
      else if ( v5 == (_DWORD)v4 )
      {
        *((_DWORD *)v3 + 1) = GetNextConfigIndex(v4);
      }
    }
  }
  *((_DWORD *)this + 940) = 0;
  *((_BYTE *)this + 3768) = 0;
  while ( !IsPostCompositionConfigQueueEmpty((DISPLAY_SOURCE *)((char *)this + 2824)) )
    RemovePostCompositionConfig((DISPLAY_SOURCE *)((char *)this + 2824), *((_DWORD *)this + 706));
  DISPLAY_SOURCE::ClearAllQueryStateUnsafe(this);
  Global = DXGGLOBAL::GetGlobal();
  QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 187), 0LL, v7, v8);
}
