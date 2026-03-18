/*
 * XREFs of ?DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource@@YAJPEAXPEAI_KPEAUD3DKMDT_HVIDPN__@@1@Z @ 0x1C039A6D8
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C01D31C8 (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C000F13C (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0010C68 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C01AA0E0 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01AA388 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C01BB920 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z @ 0x1C039E358 (-RemovePathFromVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIE@Z.c)
 *     ?UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z @ 0x1C039EE30 (-UnpinPathModalityFromSource@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@I@Z.c)
 */

__int64 __fastcall DmmConvertDWMCloneToUnpinnedHardwareCloneOnSource(
        DXGADAPTER *a1,
        unsigned int *a2,
        unsigned __int64 a3,
        struct D3DKMDT_HVIDPN__ *a4,
        unsigned int *a5)
{
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  VIDPN_MGR *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rbp
  DMMVIDPNTOPOLOGY *v15; // r15
  unsigned __int64 v16; // rbx
  unsigned int v17; // eax
  int NumPathsFromSource; // eax
  unsigned __int64 v19; // r8
  int v20; // eax
  unsigned __int64 v21; // r14
  int v22; // eax
  unsigned __int64 v23; // rdx
  struct DMMVIDPNPRESENTPATH *Path; // rax
  int v25; // eax
  unsigned __int64 v27; // rdx
  enum _D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE v28; // [rsp+40h] [rbp-58h]
  unsigned __int64 v29; // [rsp+48h] [rbp-50h] BYREF
  __int64 v30[9]; // [rsp+50h] [rbp-48h] BYREF
  struct DMMVIDPNPRESENTPATH *v31; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int *v32; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v33; // [rsp+B0h] [rbp+18h]

  v33 = a3;
  v32 = a2;
  LODWORD(v8) = -1;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) || (v9 = *((_QWORD *)a1 + 349)) == 0 )
  {
    WdLogSingleEntry0(1LL);
    v9 = *((_QWORD *)a1 + 349);
  }
  v10 = *(VIDPN_MGR **)(v9 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v30, (__int64)v10);
  v11 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)a4);
  v12 = v11;
  if ( v11 && *(VIDPN_MGR **)(v11 + 48) == v10 )
  {
    v14 = 0LL;
    v15 = (DMMVIDPNTOPOLOGY *)(v11 + 96);
    if ( a3 )
    {
      while ( 1 )
      {
        v29 = 0LL;
        LODWORD(v31) = 0;
        v16 = v32[v14];
        v17 = v32[v14];
        if ( v14 )
          v17 = v8;
        v8 = v17;
        NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v15, v32[v14], &v29);
        if ( NumPathsFromSource < 0 )
        {
          if ( NumPathsFromSource == -1071774919 )
          {
            v23 = v16;
            v13 = -1073741811LL;
            goto LABEL_22;
          }
          WdLogSingleEntry0(1LL);
        }
        v19 = v29;
        if ( v29 > 1 )
          break;
        v20 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource((DMMVIDPNTOPOLOGY **)v15, v16, 0LL, (unsigned int *)&v31);
        v21 = (unsigned int)v31;
        if ( v20 < 0 || (_DWORD)v31 == -1 )
          WdLogSingleEntry0(1LL);
        if ( a5 )
          a5[v14] = v21;
        if ( v14 )
        {
          Path = DMMVIDPNTOPOLOGY::FindPath(v15, v16, v21);
          v31 = Path;
          if ( !Path )
          {
            WdLogSingleEntry0(1LL);
            Path = v31;
          }
          v28 = *((_DWORD *)Path + 26);
          LOWORD(v31) = *((_WORD *)Path + 54);
          if ( (int)VIDPN_MGR::RemovePathFromVidPnTopology(v10, v15, v16, v21, 0) < 0 )
            WdLogSingleEntry0(1LL);
          v25 = VIDPN_MGR::AddPathToVidPnTopology(v10, v15, v8, v21, v28, (unsigned __int16)v31, 1, D3DKMDT_MCC_ENFORCE);
          v13 = v25;
          if ( v25 < 0 )
          {
            v19 = v8;
            v27 = v21;
            goto LABEL_34;
          }
        }
        else
        {
          v22 = VIDPN_MGR::UnpinPathModalityFromSource(v10, v15, v8);
          v13 = v22;
          if ( v22 < 0 )
          {
            v23 = v8;
LABEL_22:
            WdLogSingleEntry3(2LL, v23, v12, v13);
            goto LABEL_30;
          }
        }
        if ( ++v14 >= v33 )
          goto LABEL_29;
      }
      v27 = v16;
      v13 = -1073741811LL;
LABEL_34:
      WdLogSingleEntry4(2LL, v27, v19, v12, v13);
    }
    else
    {
LABEL_29:
      LODWORD(v13) = 0;
    }
  }
  else
  {
    LODWORD(v13) = -1073741811;
    WdLogSingleEntry2(2LL, a4, -1073741811LL);
  }
LABEL_30:
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v30[0] + 40));
  return (unsigned int)v13;
}
