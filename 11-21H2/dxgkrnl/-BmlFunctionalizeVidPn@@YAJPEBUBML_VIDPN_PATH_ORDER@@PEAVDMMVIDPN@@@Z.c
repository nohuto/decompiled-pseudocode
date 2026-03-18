/*
 * XREFs of ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x1C01BD718
 * Callers:
 *     _BmlGetPathModalityForAdapter @ 0x1C01BD268 (_BmlGetPathModalityForAdapter.c)
 *     _BmlGetPathModeListForAdapter @ 0x1C03ABC44 (_BmlGetPathModeListForAdapter.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000FD8C (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C0010B98 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x1C00123E4 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     BmlIsSecondaryHardwareClonePath @ 0x1C01B205C (BmlIsSecondaryHardwareClonePath.c)
 *     BmlFunctionalizePath @ 0x1C01BD8FC (BmlFunctionalizePath.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x1C03AB2AC (BmlGetRecommendedContentSizeForPath.c)
 */

__int64 __fastcall BmlFunctionalizeVidPn(const struct BML_VIDPN_PATH_ORDER *a1, struct DMMVIDPN *a2)
{
  __int64 v4; // r15
  unsigned __int16 v5; // si
  unsigned __int16 v6; // ax
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int16 v14; // si
  __int64 v15; // rbp
  __int64 v16; // rcx
  struct DMMVIDPNPRESENTPATH *v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r14d
  unsigned __int16 v21; // si
  __int64 v22; // r14
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  _QWORD *v27; // rax
  struct DMMVIDPNPRESENTPATH *v28; // rbp
  __int64 v29; // [rsp+70h] [rbp+8h] BYREF
  struct DMMVIDPNPRESENTPATH *Path; // [rsp+78h] [rbp+10h]

  if ( !a1 )
    WdLogSingleEntry0(1LL);
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v4 = *((_QWORD *)a2 + 6);
  if ( !v4 )
    WdLogSingleEntry0(1LL);
  v5 = 0;
  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = a2;
  LOBYTE(v6) = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 )
  {
    while ( 1 )
    {
      v7 = 120LL * v5;
      v8 = *(_QWORD *)((char *)a1 + v7 + 16);
      *(_WORD *)((char *)a1 + v7 + 64) = 0;
      *(_WORD *)((char *)a1 + v7 + 68) = 0;
      v9 = *(unsigned int *)(v8 + 28);
      v10 = *(unsigned int *)(v8 + 24);
      Path = DMMVIDPNTOPOLOGY::FindPath(
               (struct DMMVIDPN *)((char *)a2 + 96),
               *(_DWORD *)(v8 + 24),
               *(_DWORD *)(v8 + 28));
      if ( !Path )
        break;
      if ( BmlIsSecondaryHardwareClonePath((__int64)a1, v5, 0LL) )
      {
        if ( *(_WORD *)((char *)a1 + v7 + 66) )
        {
          v24 = *((_QWORD *)a1 + 15 * v5 + 2);
          WdLogSingleEntry5(3LL, v5, a2, *(unsigned int *)(v24 + 24), *(unsigned int *)(v24 + 28), a1);
          return 3223192345LL;
        }
      }
      else
      {
        v11 = *((_QWORD *)Path + 11);
        v12 = *(_QWORD *)(v11 + 104);
        if ( v12 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v12 + 96));
          v13 = *(_QWORD *)(v11 + 104);
        }
        else
        {
          v13 = 0LL;
        }
        v29 = v13;
        if ( *(_QWORD *)(v13 + 144) )
        {
          if ( *(_WORD *)((char *)a1 + v7 + 66) )
            goto LABEL_31;
        }
        else if ( !*(_WORD *)((char *)a1 + v7 + 66) )
        {
LABEL_31:
          v25 = *((_QWORD *)a1 + 15 * v5 + 2);
          WdLogSingleEntry5(3LL, v5, a2, *(unsigned int *)(v25 + 24), *(unsigned int *)(v25 + 28), a1);
          auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v29, 0LL);
          return 3223192328LL;
        }
        auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v29, 0LL);
      }
      v6 = *(unsigned __int8 *)a1;
      if ( ++v5 >= v6 )
        goto LABEL_16;
    }
    WdLogSingleEntry5(3LL, a1, v5, v10, v9, a2);
    return 3223192345LL;
  }
LABEL_16:
  v14 = 0;
  if ( (_BYTE)v6 )
  {
    do
    {
      v15 = v14;
      v16 = *((_QWORD *)a1 + 15 * v14 + 2);
      v17 = DMMVIDPNTOPOLOGY::FindPath(
              (struct DMMVIDPN *)((char *)a2 + 96),
              *(_DWORD *)(v16 + 24),
              *(_DWORD *)(v16 + 28));
      if ( !v17 )
        WdLogSingleEntry0(1LL);
      v20 = BmlFunctionalizePath(a1, a2, v14, v17);
      if ( v20 < 0 )
      {
        if ( v20 != -1071774970 )
        {
          v27 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18);
          v27[3] = a2;
          v27[4] = a1;
          v27[5] = v14;
          return (unsigned int)v20;
        }
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18) + 24) = v14;
        v26 = *(_QWORD *)(v4 + 8);
        if ( !v26 )
        {
          WdLogSingleEntry0(1LL);
          v26 = *(_QWORD *)(v4 + 8);
        }
        DxgkLogCodePointPacket(0x11u, v14, 0, 0, *(_QWORD *)(*(_QWORD *)(v26 + 16) + 404LL));
        if ( !v14 )
          return 3223192326LL;
        --v14;
      }
      else
      {
        ++v14;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v19, v18) + 24) = v15;
      }
      v6 = *(unsigned __int8 *)a1;
    }
    while ( v14 < v6 );
  }
  v21 = 0;
  if ( (_BYTE)v6 )
  {
    do
    {
      v22 = *((_QWORD *)a1 + 15 * v21 + 2);
      if ( (*(_QWORD *)v22 & 0x20000000000000LL) != 0 )
      {
        if ( (*(_QWORD *)v22 & 0x20200LL) != 0x20200 )
          WdLogSingleEntry0(1LL);
        v28 = DMMVIDPNTOPOLOGY::FindPath(
                (struct DMMVIDPN *)((char *)a2 + 96),
                *(_DWORD *)(v22 + 24),
                *(_DWORD *)(v22 + 28));
        if ( !v28 )
          WdLogSingleEntry0(1LL);
        if ( (int)BmlGetRecommendedContentSizeForPath(a1, v21, v28, v22) < 0 )
          WdLogSingleEntry0(1LL);
      }
      ++v21;
    }
    while ( v21 < *(unsigned __int8 *)a1 );
  }
  return 0LL;
}
