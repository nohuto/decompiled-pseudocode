/*
 * XREFs of ?UpdateRenderData@CRenderDataVisual@@UEAAJXZ @ 0x18000B780
 * Callers:
 *     ?ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ @ 0x1800C2980 (-ValidateVisualPostSubgraph@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCRenderDataProxy@@@CCompositor@@IEAAJPEAPEAVCRenderDataProxy@@@Z @ 0x180026880 (--$CreateProxy@VCRenderDataProxy@@@CCompositor@@IEAAJPEAPEAVCRenderDataProxy@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderDataVisual::UpdateRenderData(CRenderDataVisual *this)
{
  __int64 v2; // rsi
  int v3; // eax
  unsigned int v4; // ebp
  __int64 v5; // rax
  int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // eax
  __int64 v15; // [rsp+60h] [rbp+8h] BYREF

  v15 = 0LL;
  if ( !*((_QWORD *)this + 31) )
  {
    v11 = CCompositor::CreateProxy<CRenderDataProxy>(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
            (char *)this + 248);
    v4 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x67u);
      goto LABEL_6;
    }
    v12 = *((_QWORD *)this + 31);
    if ( v12 )
      v13 = *(unsigned int *)(*(_QWORD *)(v12 + 16) + 24LL);
    else
      v13 = 0LL;
    v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                           + 16LL)
                                                             + 432LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 24LL),
            v13);
    v4 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x68u);
      goto LABEL_6;
    }
  }
  v2 = *((int *)this + 70);
  if ( (int)v2 > 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                      + 5)
                                                                    + 16LL)
                                                      + 128LL))(
           *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5) + 16LL),
           &v15);
    v4 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x71u);
    }
    else
    {
      v8 = 0LL;
      while ( 1 )
      {
        v9 = *(_QWORD *)(*((_QWORD *)this + 32) + 8 * v8);
        v10 = (*(__int64 (__fastcall **)(__int64, __int64, CRenderDataVisual *))(*(_QWORD *)v9 + 8LL))(v9, v15, this);
        v4 = v10;
        if ( v10 < 0 )
          break;
        if ( ++v8 >= v2 )
          goto LABEL_3;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x75u);
    }
  }
  else
  {
LABEL_3:
    v3 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 31) + 16LL)
                                                                          + 16LL)
                                                            + 328LL))(
           *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 31) + 16LL) + 16LL),
           *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 31) + 16LL) + 24LL),
           v15);
    v4 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x7Cu);
    }
    else
    {
      v5 = *(_QWORD *)this;
      if ( (int)v2 > 0 )
        (*(void (__fastcall **)(CRenderDataVisual *, _QWORD))(v5 + 40))(this, *((_QWORD *)this + 31));
      else
        (*(void (__fastcall **)(CRenderDataVisual *, _QWORD))(v5 + 40))(this, 0LL);
    }
  }
LABEL_6:
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return v4;
}
