/*
 * XREFs of ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x180029550
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180028C20 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x1800299A4 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x1800C4E64 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z @ 0x18000DFDC (--$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     memset_0 @ 0x180060F40 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ResourceHelper::CreateGeometryFromHRGN(HRGN hrgn, struct CRgnGeometryProxy **a2)
{
  struct _RGNDATA *v4; // rdi
  DWORD RegionData; // r14d
  struct _RGNDATA *v6; // rax
  int v7; // eax
  signed int v8; // r14d
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rax
  int v12; // eax
  signed int LastError; // eax
  int v14; // r9d
  signed int v15; // eax
  unsigned int v16; // [rsp+20h] [rbp-88h]
  CBaseObject *v17; // [rsp+40h] [rbp-68h] BYREF
  _OWORD v18[2]; // [rsp+50h] [rbp-58h] BYREF
  int v19; // [rsp+70h] [rbp-38h]

  v19 = 0;
  v4 = 0LL;
  v17 = *a2;
  memset(v18, 0, sizeof(v18));
  if ( v17 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
  }
  else
  {
    v12 = CCompositor::CreateProxy<CRgnGeometryProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 5), &v17);
    v8 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x8Du);
      goto LABEL_12;
    }
  }
  if ( hrgn )
  {
    SetLastError(0);
    RegionData = GetRegionData(hrgn, 0, 0LL);
    if ( !RegionData )
    {
      LastError = GetLastError();
      v8 = LastError;
      if ( LastError > 0 )
        v8 = (unsigned __int16)LastError | 0x80070000;
      v16 = 146;
      if ( v8 >= 0 )
        v8 = -2003304445;
      v14 = v8;
      goto LABEL_34;
    }
    v6 = (struct _RGNDATA *)(*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                              WPF::g_pProcessHeap,
                              RegionData);
    v4 = v6;
    if ( !v6 )
    {
      v8 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x95u);
      goto LABEL_12;
    }
    memset_0(v6, 0, RegionData);
    SetLastError(0);
    if ( !GetRegionData(hrgn, RegionData, v4) )
    {
      v15 = GetLastError();
      v8 = v15;
      if ( v15 > 0 )
        v8 = (unsigned __int16)v15 | 0x80070000;
      v16 = 157;
      if ( v8 >= 0 )
        v8 = -2003304445;
      v14 = v8;
      goto LABEL_34;
    }
  }
  else
  {
    v4 = (struct _RGNDATA *)v18;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, _QWORD, _DWORD, _DWORD))(**(_QWORD **)(*((_QWORD *)v17 + 2)
                                                                                               + 16LL)
                                                                                 + 1000LL))(
         *(_QWORD *)(*((_QWORD *)v17 + 2) + 16LL),
         *(unsigned int *)(*((_QWORD *)v17 + 2) + 24LL),
         v4->Buffer,
         v4->rdh.nCount,
         0,
         0);
  v8 = v7;
  if ( v7 < 0 )
  {
    v14 = v7;
    v16 = 166;
LABEL_34:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, v16);
    goto LABEL_12;
  }
  v9 = *a2;
  if ( *a2 && _InterlockedExchangeAdd((volatile signed __int32 *)v9 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(CBaseObject *, __int64))v9)(v9, 1LL);
  v10 = v17;
  *a2 = v17;
  _InterlockedIncrement((volatile signed __int32 *)v10 + 2);
LABEL_12:
  if ( v17 && _InterlockedExchangeAdd((volatile signed __int32 *)v17 + 2, 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(CBaseObject *, __int64))v17)(v17, 1LL);
  if ( v4 && v4 != (struct _RGNDATA *)v18 )
    (*(void (__fastcall **)(WPF::HeapBase *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v4);
  return (unsigned int)v8;
}
