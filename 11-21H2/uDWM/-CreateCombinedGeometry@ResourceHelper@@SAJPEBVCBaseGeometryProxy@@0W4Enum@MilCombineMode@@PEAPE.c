/*
 * XREFs of ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPEAVCCombinedGeometryProxy@@@Z @ 0x1800D1860
 * Callers:
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800299A4 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$CreateProxy@VCCombinedGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCCombinedGeometryProxy@@@Z @ 0x1800A8424 (--$CreateProxy@VCCombinedGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCCombinedGeometryProxy@@@Z.c)
 */

__int64 __fastcall ResourceHelper::CreateCombinedGeometry(__int64 a1, __int64 a2, __int64 a3, CBaseObject **a4)
{
  CBaseObject *v4; // rax
  volatile signed __int32 *v8; // rbx
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  __int64 v12; // r9
  int v13; // eax
  CBaseObject *v15; // [rsp+68h] [rbp+20h] BYREF

  v4 = *a4;
  v15 = v4;
  if ( v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v4 + 2);
  }
  else
  {
    v10 = CCompositor::CreateProxy<CCombinedGeometryProxy>(
            *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5),
            &v15);
    v11 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x71u);
      goto LABEL_16;
    }
  }
  v8 = (volatile signed __int32 *)v15;
  if ( a2 )
    v9 = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
  else
    v9 = 0;
  if ( a1 )
    v12 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 24LL);
  else
    v12 = 0LL;
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int))(**(_QWORD **)(*((_QWORD *)v15 + 2) + 16LL)
                                                                         + 992LL))(
          *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL),
          *(unsigned int *)(*((_QWORD *)v15 + 2) + 24LL),
          1LL,
          v12,
          v9);
  v11 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x74u);
    goto LABEL_17;
  }
  if ( *a4 )
    CBaseObject::Release(*a4);
  *a4 = (CBaseObject *)v8;
  _InterlockedIncrement(v8 + 2);
LABEL_16:
  v8 = (volatile signed __int32 *)v15;
LABEL_17:
  if ( v8 )
    CBaseObject::Release((CBaseObject *)v8);
  return v11;
}
