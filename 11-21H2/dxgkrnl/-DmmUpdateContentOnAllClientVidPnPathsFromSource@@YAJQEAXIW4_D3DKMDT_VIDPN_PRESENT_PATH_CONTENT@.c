/*
 * XREFs of ?DmmUpdateContentOnAllClientVidPnPathsFromSource@@YAJQEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C039D314
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C0384354 (DxgkHandleVideoParameters.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C000F08C (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C006981C (-SetContentType@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01AA388 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C01BCB6C (-UpdateActiveVidPnPresentPath@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 *     ?SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ @ 0x1C03A83F8 (-SetTargetContentType@DMMVIDPNPRESENTPATH@@QEBAJXZ.c)
 */

__int64 __fastcall DmmUpdateContentOnAllClientVidPnPathsFromSource(DXGADAPTER *a1, unsigned int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // r14
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  DMMVIDPNTOPOLOGY **v12; // rbp
  __int64 i; // rsi
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // rdi
  int updated; // eax
  _QWORD *v19; // rax
  __int64 v20[7]; // [rsp+50h] [rbp-38h] BYREF
  unsigned int v21; // [rsp+90h] [rbp+8h] BYREF
  __int64 v22; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a2;
  v6 = (__int64)a1;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v7 = *(_QWORD *)(v6 + 2792);
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL, v6);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v8 = *(_QWORD *)(v7 + 104);
  if ( v8 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v20, v8);
    v10 = *(_QWORD *)(v8 + 128);
    v22 = 0LL;
    if ( v10 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 32));
      v11 = *(_QWORD *)(v8 + 128);
    }
    else
    {
      v11 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v22, v11);
    if ( v22 )
    {
      v12 = (DMMVIDPNTOPOLOGY **)(v22 + 96);
      for ( i = 0LL; ; ++i )
      {
        v21 = -1;
        v14 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v12, v4, i, &v21);
        v6 = v14;
        if ( v14 < 0 )
          break;
        if ( v21 == -1 )
          goto LABEL_25;
        Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v12, v4, v21);
        if ( !Path )
          WdLogSingleEntry0(1LL);
        DMMVIDPNPRESENTPATH::SetContentType(Path, a3);
        if ( *((_BYTE *)Path + 110) )
          updated = DMMVIDPNPRESENTPATH::SetTargetContentType(Path);
        else
          updated = DMMVIDPNPRESENTPATH::UpdateActiveVidPnPresentPath(Path, 0LL);
        LODWORD(v6) = updated;
        if ( updated < 0 )
          goto LABEL_24;
      }
      v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v16, v15);
      v19[3] = i;
      v19[4] = v4;
      v19[5] = v12;
      v19[6] = v6;
    }
    else
    {
      WdLogSingleEntry1(2LL, v6);
      LODWORD(v6) = -1071774884;
    }
LABEL_24:
    v3 = v6;
LABEL_25:
    auto_rc<DMMVIDPN const>::reset(&v22, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v20[0] + 40));
    return v3;
  }
  else
  {
    WdLogSingleEntry1(2LL, v6);
    return 3223192373LL;
  }
}
