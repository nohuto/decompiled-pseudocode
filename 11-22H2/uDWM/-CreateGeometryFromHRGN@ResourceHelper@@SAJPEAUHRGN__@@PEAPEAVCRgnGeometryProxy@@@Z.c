/*
 * XREFs of ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x18001B25C
 * Callers:
 *     ?SetCaptionRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z @ 0x18001AFC4 (-SetCaptionRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z.c)
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180050D9C (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 *     ?SetBorderRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z @ 0x1800C62BC (-SetBorderRegion@CLegacyNonClientBackground@@QEAAJPEAUHRGN__@@@Z.c)
 *     ?_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z @ 0x1800C9654 (-_UpdateResourcesForMonitor@CLivePreview@@AEAAJPEAULivePreviewResource@@@Z.c)
 * Callees:
 *     ??$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z @ 0x1800388DC (--$CreateProxy@VCRgnGeometryProxy@@@CCompositor@@IEAAJPEAPEAVCRgnGeometryProxy@@@Z.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     memset_0 @ 0x18005D340 (memset_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ResourceHelper::CreateGeometryFromHRGN(HRGN hrgn, struct CRgnGeometryProxy **a2)
{
  struct _RGNDATA *v2; // rdi
  __int64 v3; // rax
  DWORD RegionData; // ebx
  struct _RGNDATA *v7; // rax
  int v8; // eax
  signed int v9; // ebx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v13; // r9d
  signed int v14; // eax
  signed int LastError; // eax
  unsigned int v16; // [rsp+20h] [rbp-78h]
  __int64 v17; // [rsp+40h] [rbp-58h] BYREF
  _OWORD v18[2]; // [rsp+50h] [rbp-48h] BYREF
  int v19; // [rsp+70h] [rbp-28h]

  v19 = 0;
  v2 = 0LL;
  v3 = (__int64)*a2;
  v17 = v3;
  memset(v18, 0, sizeof(v18));
  if ( v3 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  }
  else
  {
    v8 = CCompositor::CreateProxy<CRgnGeometryProxy>(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6), &v17);
    v9 = v8;
    if ( v8 < 0 )
    {
      v16 = 141;
LABEL_22:
      v13 = v8;
LABEL_27:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, v16, 0LL);
      goto LABEL_12;
    }
  }
  if ( hrgn )
  {
    SetLastError(0);
    RegionData = GetRegionData(hrgn, 0, 0LL);
    if ( RegionData )
    {
      v7 = (struct _RGNDATA *)(*(__int64 (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                WPF::g_pProcessHeap,
                                RegionData);
      v2 = v7;
      if ( v7 )
      {
        memset_0(v7, 0, RegionData);
        SetLastError(0);
        if ( GetRegionData(hrgn, RegionData, v2) )
          goto LABEL_7;
        LastError = GetLastError();
        v9 = LastError;
        if ( LastError > 0 )
          v9 = (unsigned __int16)LastError | 0x80070000;
        if ( v9 >= 0 )
          v9 = -2003304445;
        v16 = 157;
      }
      else
      {
        v9 = -2147024882;
        v16 = 149;
      }
    }
    else
    {
      v14 = GetLastError();
      v9 = v14;
      if ( v14 > 0 )
        v9 = (unsigned __int16)v14 | 0x80070000;
      if ( v9 >= 0 )
        v9 = -2003304445;
      v16 = 146;
    }
    v13 = v9;
    goto LABEL_27;
  }
  v2 = (struct _RGNDATA *)v18;
LABEL_7:
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *, _QWORD, _DWORD, _DWORD))(**(_QWORD **)(*(_QWORD *)(v17 + 16)
                                                                                               + 16LL)
                                                                                 + 928LL))(
         *(_QWORD *)(*(_QWORD *)(v17 + 16) + 16LL),
         *(unsigned int *)(*(_QWORD *)(v17 + 16) + 24LL),
         v2->Buffer,
         v2->rdh.nCount,
         0,
         0);
  v9 = v8;
  if ( v8 < 0 )
  {
    v16 = 166;
    goto LABEL_22;
  }
  v10 = (__int64)*a2;
  if ( *a2 && _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v10)(v10, 1LL);
  v11 = v17;
  *a2 = (struct CRgnGeometryProxy *)v17;
  _InterlockedIncrement((volatile signed __int32 *)(v11 + 8));
LABEL_12:
  if ( v17 && _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 8), 0xFFFFFFFF) == 1 )
    (**(void (__fastcall ***)(__int64, __int64))v17)(v17, 1LL);
  if ( v2 && v2 != (struct _RGNDATA *)v18 )
    (*(void (__fastcall **)(WPF::HeapBase *, struct _RGNDATA *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v2);
  return (unsigned int)v9;
}
