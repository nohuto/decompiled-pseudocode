/*
 * XREFs of ?DmmEscape@@YAJQEAVDXGADAPTER@@QEAU_D3DKMT_DMM_ESCAPE_INTERNAL@@@Z @ 0x1C039AABC
 * Callers:
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ?IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ @ 0x1C02BC3EC (-IsDiagnosticAllowed@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C039899C (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA?AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z @ 0x1C039D648 (-MapEscapeCodeToDiagInfoType@VIDPN_MGR@@SA-AW4DIAGINFO_TYPE@1@W4_D3DKMT_DMMESCAPETYPE@@@Z.c)
 */

__int64 __fastcall DmmEscape(struct DXGADAPTER *const this, struct _D3DKMT_DMM_ESCAPE_INTERNAL *const a2)
{
  struct _LUID *v4; // rdx
  __int64 v5; // r9
  unsigned int v6; // edi
  __int64 v7; // rax
  struct VIDPN_MGR *v9; // r15
  int v10; // eax
  __int64 v11; // rbx
  char *v12; // r14
  int v13; // eax
  __int128 v14; // xmm3
  __int64 v15; // xmm0_8
  __int64 v16; // rcx
  unsigned int CurrentProcessSessionId; // eax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax

  v6 = 0;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    WdLogSingleEntry0(1LL);
  v7 = *((_QWORD *)this + 349);
  if ( !v7 )
  {
    WdLogSingleEntry1(2LL, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v9 = *(struct VIDPN_MGR **)(v7 + 104);
  if ( !v9 )
  {
    WdLogSingleEntry1(2LL, this);
    return 3223192373LL;
  }
  v10 = *(_DWORD *)a2;
  v11 = 0LL;
  if ( *(int *)a2 <= 0 || v10 > 9 && (unsigned int)(v10 - 12) > 2 )
  {
    v11 = operator new[](0x2CuLL, 0x4E506456u, 256LL, v5);
    if ( !v11 )
    {
      WdLogSingleEntry1(6LL, 44LL);
      v13 = -1073741801;
      goto LABEL_24;
    }
    operator delete(0LL);
    v4 = (struct _LUID *)*(int *)a2;
    if ( *(_DWORD *)a2 == 10 )
    {
      v12 = (char *)a2 + 24;
      *(_DWORD *)v11 = *((_DWORD *)a2 + 6);
    }
    else
    {
      if ( *(_DWORD *)a2 != 11 )
      {
        WdLogSingleEntry1(2LL, v4);
        v13 = -1073741811;
LABEL_24:
        v6 = v13;
        goto LABEL_25;
      }
      v12 = (char *)a2 + 24;
      *(_DWORD *)v11 = *((_DWORD *)a2 + 6);
      v14 = *(_OWORD *)((char *)a2 + 44);
      v15 = *(_QWORD *)((char *)a2 + 60);
      *(_OWORD *)(v11 + 4) = *(_OWORD *)((char *)a2 + 28);
      *(_OWORD *)(v11 + 20) = v14;
      *(_QWORD *)(v11 + 36) = v15;
    }
  }
  else
  {
    v12 = (char *)a2 + 24;
  }
  if ( !DXGADAPTER::IsDiagnosticAllowed(this, v4) )
  {
    CurrentProcessSessionId = PsGetCurrentProcessSessionId(v16);
    WdLogSingleEntry2(3LL, *(int *)a2, CurrentProcessSessionId);
    v13 = -1073741790;
    goto LABEL_24;
  }
  v18 = VIDPN_MGR::MapEscapeCodeToDiagInfoType(*(unsigned int *)a2);
  v13 = VIDPN_MGR::AcquireDiagInfo(v9, v12, *((_QWORD *)a2 + 1), v18, (int *)v11, (size_t *)a2 + 2);
  if ( v13 == -2147483643 )
  {
    WdLogSingleEntry2(3LL, *((_QWORD *)a2 + 1), *(int *)a2);
    v13 = 1075707914;
    goto LABEL_24;
  }
  if ( v13 < 0 )
    goto LABEL_24;
  v21 = WdLogNewEntry5_WdTrace(v20, v19);
  *(_QWORD *)(v21 + 24) = *((_QWORD *)a2 + 1);
  *(_QWORD *)(v21 + 32) = *(int *)a2;
LABEL_25:
  operator delete((void *)v11);
  return v6;
}
