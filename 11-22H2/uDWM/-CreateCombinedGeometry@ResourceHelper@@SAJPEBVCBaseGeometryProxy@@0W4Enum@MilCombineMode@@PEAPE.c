/*
 * XREFs of ?CreateCombinedGeometry@ResourceHelper@@SAJPEBVCBaseGeometryProxy@@0W4Enum@MilCombineMode@@PEAPEAVCCombinedGeometryProxy@@@Z @ 0x180015F1C
 * Callers:
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180050D9C (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ??$CreateProxy@VCCombinedGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCCombinedGeometryProxy@@@Z @ 0x1800155BC (--$CreateProxy@VCCombinedGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCCombinedGeometryProxy@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ResourceHelper::CreateCombinedGeometry(__int64 a1, __int64 a2, __int64 a3, CBaseObject **a4)
{
  int v7; // eax
  unsigned int v8; // edi
  volatile signed __int32 *v9; // rbx
  int v10; // eax
  __int64 v11; // r9
  int v12; // eax
  CBaseObject *v14; // [rsp+68h] [rbp+20h] BYREF

  v14 = *a4;
  if ( v14 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v14 + 2);
  }
  else
  {
    v7 = CCompositor::CreateProxy<CCombinedGeometryProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
           &v14);
    v8 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x71u, 0LL);
LABEL_11:
      v9 = (volatile signed __int32 *)v14;
      goto LABEL_12;
    }
  }
  v9 = (volatile signed __int32 *)v14;
  if ( a2 )
    v10 = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 24LL);
  else
    v10 = 0;
  if ( a1 )
    v11 = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 24LL);
  else
    v11 = 0LL;
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, int))(**(_QWORD **)(*((_QWORD *)v14 + 2) + 16LL)
                                                                         + 920LL))(
          *(_QWORD *)(*((_QWORD *)v14 + 2) + 16LL),
          *(unsigned int *)(*((_QWORD *)v14 + 2) + 24LL),
          1LL,
          v11,
          v10);
  v8 = v12;
  if ( v12 >= 0 )
  {
    if ( *a4 )
      CBaseObject::Release(*a4);
    *a4 = (CBaseObject *)v9;
    _InterlockedIncrement(v9 + 2);
    goto LABEL_11;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x74u, 0LL);
LABEL_12:
  if ( v9 )
    CBaseObject::Release((CBaseObject *)v9);
  return v8;
}
