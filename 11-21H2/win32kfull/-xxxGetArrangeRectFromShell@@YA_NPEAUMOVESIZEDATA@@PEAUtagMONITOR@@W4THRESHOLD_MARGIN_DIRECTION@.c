/*
 * XREFs of ?xxxGetArrangeRectFromShell@@YA_NPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@PEAUtagRECT@@@Z @ 0x1C020CF7C
 * Callers:
 *     ?xxxGetArrangeRectFromHitTarget@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C020CCA4 (-xxxGetArrangeRectFromHitTarget@@YAXPEAUMOVESIZEDATA@@PEAUtagMONITOR@@W4THRESHOLD_MARGIN_DIRECTI.c)
 * Callees:
 *     IntersectRect @ 0x1C004CD28 (IntersectRect.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     memset @ 0x1C0160540 (memset.c)
 *     ?ArrangementStyleFromOverlap@@YA?AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z @ 0x1C02096B0 (-ArrangementStyleFromOverlap@@YA-AW4ArrStyleFromOverlap@@W4FrameBoundsOverlapInfo@@@Z.c)
 *     ?GetFrameBoundsOverlapInfo@@YA?AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z @ 0x1C0209FFC (-GetFrameBoundsOverlapInfo@@YA-AW4FrameBoundsOverlapInfo@@AEBUtagRECT@@0_N@Z.c)
 *     ?TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOverlapInfo@@PEAUtagRECT@@@Z @ 0x1C020B360 (-TransformShellProvidedRectangle@@YAXPEBUtagWND@@AEBUtagPOINT@@1PEAUtagMONITOR@@W4FrameBoundsOve.c)
 *     ?xxxArrangementRectangleHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@PEAU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C0237100 (-xxxArrangementRectangleHandler@CallShell@@YA_NPEBUMOVESIZEDATA@@PEAU_SHELL_WINDOWMANAGEMENT_CAL.c)
 *     ?SHData_StoreSafetyZone@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z @ 0x1C024AA14 (-SHData_StoreSafetyZone@MOVESIZEDATA@@QEAAXAEBUtagRECT@@@Z.c)
 */

char __fastcall xxxGetArrangeRectFromShell(__int64 a1, __int64 a2, unsigned int a3, _OWORD *a4)
{
  char v4; // r15
  struct _SHELL_WINDOWMANAGEMENT_CALLOUT_INFO *v8; // r8
  char v9; // al
  int v10; // edx
  int v11; // r8d
  __int64 v12; // rdi
  int v13; // edx
  int v14; // r8d
  __int64 v15; // rax
  int FrameBoundsOverlapInfo; // eax
  int v17; // edi
  int v18; // r10d
  PDEVICE_OBJECT v19; // rcx
  __int16 v20; // ax
  struct tagWND *v21; // rcx
  int v22; // edx
  int v23; // r8d
  __int128 v24; // xmm0
  int v25; // edi
  __int64 v27; // [rsp+20h] [rbp-89h]
  __int128 v28; // [rsp+40h] [rbp-69h] BYREF
  __int128 v29; // [rsp+50h] [rbp-59h] BYREF
  int v30[24]; // [rsp+60h] [rbp-49h] BYREF

  v4 = 0;
  *a4 = 0LL;
  if ( a3 <= 2 )
  {
    memset(v30, 0, sizeof(v30));
    if ( CallShell::xxxArrangementRectangleHandler((CallShell *)a1, (const struct MOVESIZEDATA *)v30, v8) )
    {
      v9 = v30[15];
      if ( (v30[15] & 1) != 0 )
      {
        if ( !PtInRect(&v30[11], *(_QWORD *)(a1 + 272)) )
          return v4;
        MOVESIZEDATA::SHData_StoreSafetyZone((MOVESIZEDATA *)a1, (const struct tagRECT *)&v30[11]);
        LOBYTE(v10) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v10,
            v11,
            (unsigned int)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
            4,
            1,
            15,
            (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids);
        }
        v9 = v30[15];
      }
      if ( (v9 & 2) != 0 )
      {
        v12 = *(_QWORD *)(a2 + 40);
        v28 = 0LL;
        if ( !(unsigned int)IntersectRect(&v28, &v30[7], (int *)(v12 + 44)) )
          goto LABEL_36;
        v15 = v28 - *(_QWORD *)&v30[7];
        if ( (_QWORD)v28 == *(_QWORD *)&v30[7] )
          v15 = *((_QWORD *)&v28 + 1) - *(_QWORD *)&v30[9];
        if ( v15 )
        {
LABEL_36:
          v19 = WPP_GLOBAL_Control;
          LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v13 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_45;
          v20 = 16;
          goto LABEL_44;
        }
        FrameBoundsOverlapInfo = GetFrameBoundsOverlapInfo((_DWORD *)(v12 + 44), &v30[7], 1);
        v17 = ArrangementStyleFromOverlap(FrameBoundsOverlapInfo);
        if ( !v17 )
        {
          v19 = WPP_GLOBAL_Control;
          LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
          LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( !(_BYTE)v13 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_45;
          v20 = 17;
LABEL_44:
          WPP_RECORDER_AND_TRACE_SF_(
            v19->AttachedDevice,
            v13,
            v14,
            (unsigned int)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
            3,
            1,
            v20,
            (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids);
LABEL_45:
          *(_OWORD *)(a1 + 296) = 0LL;
          *(_OWORD *)(a1 + 312) = 0LL;
          *(_DWORD *)(a1 + 332) &= 0xFFFFFFFC;
          *(_DWORD *)(a1 + 328) = 0;
          return v4;
        }
        v21 = *(struct tagWND **)(a1 + 16);
        LODWORD(v27) = v18;
        v29 = *(_OWORD *)&v30[7];
        TransformShellProvidedRectangle(v21, (int *)(a1 + 112), (int *)(a1 + 104), a2, v27, &v29);
        v24 = v29;
        *(_DWORD *)(a1 + 332) |= 2u;
        v4 = 1;
        v25 = (*(_DWORD *)(a1 + 200) ^ (v17 << 8)) & 0x300;
        *(_DWORD *)(a1 + 328) = v30[16];
        *(_DWORD *)(a1 + 200) ^= v25;
        *(_OWORD *)(a1 + 296) = v24;
        *a4 = v24;
        LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v22,
            v23,
            (unsigned int)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids,
            4,
            1,
            18,
            (__int64)&WPP_8cb7855e1a7532aa775f462dd4a98639_Traceguids);
        }
      }
    }
  }
  return v4;
}
