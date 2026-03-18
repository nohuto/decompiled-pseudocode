/*
 * XREFs of ?_SerializePinnedSourceCofuncPathsModalityFromSource@VIDPN_MGR@@AEBAJQEAVDMMVIDPN@@IAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@QEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C039F0B8
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C039899C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z @ 0x1C00114BC (-FindById@-$IndexedSet@VDMMVIDPNSOURCE@@@@QEBAPEAVDMMVIDPNSOURCE@@I@Z.c)
 *     ?PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C039E2B8 (-PinVidPnSourceMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNSOURCEMODESET@@AEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C03A5958 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 */

__int64 __fastcall VIDPN_MGR::_SerializePinnedSourceCofuncPathsModalityFromSource(
        VIDPN_MGR *this,
        __int64 a2,
        unsigned int a3,
        const struct _D3DKMDT_VIDPN_SOURCE_MODE *a4,
        __int64 a5)
{
  __int64 v5; // rdi
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v12; // rax
  __int64 v13; // rbx
  struct DMMVIDPNSOURCEMODESET *v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rsi
  _QWORD *v19; // rax
  int v20; // eax
  __int64 v21; // rbx
  __int64 v22; // r8
  struct DMMVIDPNSOURCEMODESET *v23; // [rsp+58h] [rbp+10h] BYREF

  v5 = a3;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( (_DWORD)v5 == -1 )
    WdLogSingleEntry0(1LL);
  if ( !a5 )
    WdLogSingleEntry0(1LL);
  v9 = IndexedSet<DMMVIDPNSOURCE>::FindById(*(_QWORD *)(a2 + 304), v5);
  v10 = v9;
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, v5);
    return 3223192324LL;
  }
  v23 = 0LL;
  v12 = *(_QWORD *)(v9 + 104);
  if ( v12 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v12 + 96), 1u);
    v13 = *(_QWORD *)(v10 + 104);
    if ( v13 )
      goto LABEL_13;
  }
  else
  {
    v13 = 0LL;
  }
  WdLogSingleEntry0(1LL);
LABEL_13:
  auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v23, v13);
  v14 = v23;
  v15 = VIDPN_MGR::PinVidPnSourceMode(this, v23, a4);
  v18 = v15;
  if ( v15 >= 0 )
  {
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v23, 0LL);
    v20 = DMMVIDPNTOPOLOGY::SerializeCofuncPathsModalityFromPinnedSource((DMMVIDPNTOPOLOGY *)(a2 + 96), v5);
    v21 = v20;
    if ( v20 >= 0 )
    {
      return 0LL;
    }
    else
    {
      v22 = *((_QWORD *)this + 1);
      if ( !v22 )
      {
        WdLogSingleEntry0(1LL);
        v22 = *((_QWORD *)this + 1);
      }
      WdLogSingleEntry3(2LL, v5, *(_QWORD *)(v22 + 16), v21);
      return (unsigned int)v21;
    }
  }
  else
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16);
    v19[3] = a4;
    v19[4] = v14;
    v19[5] = v18;
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v23, 0LL);
    return (unsigned int)v18;
  }
}
