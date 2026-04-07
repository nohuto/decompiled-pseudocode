/*
 * XREFs of ?EnsureSecondaryWindowRepresentation@CThumbnailVisual@@QEAAJPEAPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001C5E4
 * Callers:
 *     ?EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ @ 0x1800080BC (-EnsureSecondaryWindowVisual@CThumbnailVisual@@QEAAJXZ.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x180019D90 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 *     ?EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ @ 0x18001C938 (-EnsureVisualBrush@CThumbnailVisual@@QEAAJXZ.c)
 *     ?QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z @ 0x18004BBC8 (-QueryThumbnailType@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILTYPE@@@Z.c)
 *     ?QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE@@@Z @ 0x18006ADA6 (-QueryThumbnailSourceSize@CWindowList@@AEAAJKPEAUMILCMD_DWM_REDIRECTION_QUERYTHUMBNAILSOURCESIZE.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x180011518 (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001DA74 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800209A4 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 */

__int64 __fastcall CThumbnailVisual::EnsureSecondaryWindowRepresentation(
        CThumbnailVisual *this,
        struct CSecondaryWindowRepresentation **a2)
{
  unsigned int v2; // edi
  struct CSecondaryWindowRepresentation **v3; // rsi
  __int64 v7; // rcx
  CWindowData *v8; // rcx
  enum DEVICE_SCALE_FACTOR v9; // edi
  __int64 v10; // r8
  int v11; // r9d
  unsigned int v12; // edx
  int v13; // eax
  HMONITOR v14; // rax
  void *v15; // [rsp+20h] [rbp-18h]
  enum DEVICE_SCALE_FACTOR v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v3 = (struct CSecondaryWindowRepresentation **)((char *)this + 384);
  if ( *((_QWORD *)this + 48) )
    goto LABEL_2;
  v7 = *((_QWORD *)this + 47);
  if ( !v7 )
    goto LABEL_2;
  v8 = *(CWindowData **)(v7 + 24);
  v9 = SCALE_100_PERCENT;
  v16 = SCALE_100_PERCENT;
  if ( CWindowData::IsImmersiveWindow(v8) )
  {
    v14 = MonitorFromRect((LPCRECT)(*(_QWORD *)(*((_QWORD *)this + 47) + 16LL) + 48LL), 2u);
    GetScaleFactorForMonitorImp(v14, &v16);
    v9 = v16;
  }
  v10 = *((_QWORD *)this + 47);
  v11 = 0;
  v12 = *(_DWORD *)(v10 + 36);
  if ( v10 && (v12 & 1) != 0 && *(_DWORD *)(v10 + 48) - *(_DWORD *)(v10 + 40) >= 0 )
    v11 = *(_DWORD *)(v10 + 48) - *(_DWORD *)(v10 + 40);
  LODWORD(v15) = v9;
  v13 = CSecondaryWindowRepresentation::Create(
          (*(_DWORD *)(v10 + 77) != 0 ? 6 : 2) | (*(_BYTE *)(v10 + 32) != 0 ? 0x120 : 0) | ((v12 & 0x100000 | (v12 >> 1) & 0x400000) >> 11),
          (int)this + 368,
          *(_QWORD *)(v10 + 24),
          v11,
          v15,
          (__int64)v3);
  v2 = v13;
  if ( v13 >= 0 )
  {
LABEL_2:
    if ( a2 )
      *a2 = *v3;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x20Eu);
  }
  return v2;
}
