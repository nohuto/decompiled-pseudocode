/*
 * XREFs of ?xxxGetWorkAreasFromShell@@YA_NXZ @ 0x1C004A114
 * Callers:
 *     xxxDesktopsRecalcAndBroadcastDisplayChange @ 0x1C004A500 (xxxDesktopsRecalcAndBroadcastDisplayChange.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0048AB8 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ddddddddddS @ 0x1C0049F70 (WPP_RECORDER_AND_TRACE_SF_ddddddddddS.c)
 *     ?xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z @ 0x1C004A5E4 (-xxxDisplayChangedHandler@CallShell@@YA_NPEAU_SYNC_DISPLAY_CHANGE_DATA@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C006D000 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00ABF38 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ?UpdateCurrent@CTopologyManager@@SAXXZ @ 0x1C00BF568 (-UpdateCurrent@CTopologyManager@@SAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdd @ 0x1C00C0E4C (WPP_RECORDER_AND_TRACE_SF_qdd.c)
 *     IntersectRect @ 0x1C00D0330 (IntersectRect.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C00E4884 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00E4E9C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddd @ 0x1C01A6554 (WPP_RECORDER_AND_TRACE_SF_qdddddddd.c)
 *     WPP_RECORDER_AND_TRACE_SF_qdddddddddddd @ 0x1C01F5BAC (WPP_RECORDER_AND_TRACE_SF_qdddddddddddd.c)
 */

char xxxGetWorkAreasFromShell(void)
{
  unsigned int v0; // r14d
  int v1; // edx
  int v2; // r8d
  char v3; // bl
  struct _SYNC_DISPLAY_CHANGE_DATA *v4; // rdx
  __int64 i; // rdi
  unsigned __int64 v6; // rsi
  __int64 v7; // rcx
  int v8; // edx
  __int64 v9; // r9
  char v10; // dl
  int v11; // edx
  int v12; // r8d
  int v13; // r9d
  bool v15; // r10
  int v16; // edx
  char v17; // r13
  unsigned int v18; // r12d
  unsigned __int64 v19; // r15
  _DWORD *v20; // rsi
  __int64 v21; // rax
  int v22; // edx
  int v23; // r8d
  __int64 v24; // r14
  __int64 v25; // rdx
  int v26; // r10d
  int v27; // r9d
  __int64 v28; // rcx
  bool v29; // r10
  unsigned __int16 *v30; // rdi
  int v31; // eax
  int v32; // edx
  int v33; // r8d
  __int64 v34; // rax
  char *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  PDEVICE_OBJECT v38; // rcx
  __int16 v39; // ax
  struct _UNICODE_STRING v40; // xmm0
  __int64 v41; // rcx
  int v42; // eax
  bool v43; // r10
  int v44; // eax
  int v45; // [rsp+28h] [rbp-110h]
  int v46; // [rsp+30h] [rbp-108h]
  int v47; // [rsp+38h] [rbp-100h]
  int v48; // [rsp+40h] [rbp-F8h]
  int v49; // [rsp+78h] [rbp-C0h]
  int v50; // [rsp+78h] [rbp-C0h]
  int v51; // [rsp+80h] [rbp-B8h]
  int v52; // [rsp+80h] [rbp-B8h]
  int v53; // [rsp+88h] [rbp-B0h]
  int v54; // [rsp+88h] [rbp-B0h]
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-80h] BYREF
  _DWORD v56[6]; // [rsp+C8h] [rbp-70h] BYREF
  unsigned __int16 v57[596]; // [rsp+E0h] [rbp-58h] BYREF
  int v58; // [rsp+588h] [rbp+450h] BYREF
  _BYTE v59[324]; // [rsp+58Ch] [rbp+454h] BYREF
  size_t v60[65]; // [rsp+6D0h] [rbp+598h] BYREF
  WCHAR SourceString[32]; // [rsp+8D8h] [rbp+7A0h] BYREF

  v0 = *(_DWORD *)*gpDispInfo;
  if ( v0 > 4 )
    v0 = 4;
  memset_0(v56, 0, 0x4B4uLL);
  v3 = 1;
  LOBYTE(v1) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v1,
      v2,
      (unsigned int)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids,
      4,
      7,
      15,
      (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids);
  }
  v4 = 0LL;
  v56[0] = 0;
  for ( i = *(_QWORD *)(gpDispInfo + 104LL); i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) != 0 )
    {
      if ( (unsigned int)v4 >= v0 )
      {
        v15 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v16 = 16;
          LOBYTE(v16) = v15;
          LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            v16,
            v2,
            (_DWORD)gFullLog,
            2,
            7,
            16,
            (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids,
            *(_DWORD *)*gpDispInfo);
        }
        break;
      }
      v6 = 300LL * (unsigned int)v4;
      *(_DWORD *)&v57[v6 / 2 + 130] = *(_DWORD *)i;
      *(_DWORD *)&v57[v6 / 2 + 128] = i == *(_QWORD *)(gpDispInfo + 96LL);
      v56[v6 / 4 + 5] = *(unsigned __int16 *)(*(_QWORD *)(i + 40) + 60LL);
      *(_OWORD *)&v56[v6 / 4 + 1] = *(_OWORD *)(*(_QWORD *)(i + 40) + 28LL);
      *(_OWORD *)&v57[v6 / 2 + 132] = *(_OWORD *)(*(_QWORD *)(i + 40) + 44LL);
      memset_0(v59, 0, 0x344uLL);
      v7 = *(_QWORD *)(i + 80);
      v58 = 840;
      DestinationString = 0LL;
      if ( !(unsigned int)DrvGetHdevName(v7, SourceString)
        || (RtlInitUnicodeString(&DestinationString, SourceString),
            (int)DrvEnumDisplayDevices(&DestinationString, 0LL, 0LL, &v58, 1, 0) < 0)
        || RtlStringCchCopyW(&v57[v6 / 2], 0x80uLL, v60) < 0 )
      {
        LOBYTE(v8) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v2) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v8,
            v2,
            17,
            2,
            7,
            17,
            (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids,
            *(_QWORD *)(i + 80));
        }
      }
      v10 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v10 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_ddddddddddS(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v10,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          v9,
          v45,
          v46,
          v47,
          v48,
          v56[0],
          v56[v6 / 4 + 1],
          v56[v6 / 4 + 2],
          v56[v6 / 4 + 3],
          v56[v6 / 4 + 4],
          *(_DWORD *)&v57[v6 / 2 + 132],
          *(_DWORD *)&v57[v6 / 2 + 134],
          *(_DWORD *)&v57[v6 / 2 + 136],
          *(_DWORD *)&v57[v6 / 2 + 138],
          v56[v6 / 4 + 5],
          (const char *)&v57[v6 / 2]);
      v4 = (struct _SYNC_DISPLAY_CHANGE_DATA *)(unsigned int)++v56[0];
    }
  }
  if ( CallShell::xxxDisplayChangedHandler((CallShell *)v56, v4) )
  {
    LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v11,
        v12,
        v13,
        4,
        7,
        20,
        (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids);
    }
    v17 = 0;
    v18 = 0;
    if ( !v56[0] )
      return v17;
    while ( 1 )
    {
      v19 = 300LL * v18;
      v20 = &v56[v19 / 4 + 1];
      v21 = ValidateHmonitorNoRip((unsigned int)v56[v19 / 4 + 71]);
      v24 = v21;
      if ( !v21 )
      {
        LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_q(
            WPP_GLOBAL_Control->AttachedDevice,
            v22,
            v23,
            21,
            3,
            7,
            21,
            (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids,
            v20[70]);
        }
        goto LABEL_72;
      }
      v25 = *(_QWORD *)(v21 + 40);
      v26 = v20[4];
      v27 = *(unsigned __int16 *)(v25 + 60);
      if ( v27 != v26 )
      {
        LOBYTE(v25) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( (_BYTE)v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qdd(
            WPP_GLOBAL_Control->AttachedDevice,
            v25,
            v23,
            (_DWORD)gFullLog,
            3,
            7,
            22,
            (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids,
            v20[70],
            v26,
            v27);
        }
        goto LABEL_72;
      }
      v28 = *(_QWORD *)v20 - *(_QWORD *)(v25 + 28);
      if ( *(_QWORD *)v20 == *(_QWORD *)(v25 + 28) )
        v28 = *((_QWORD *)v20 + 1) - *(_QWORD *)(v25 + 36);
      if ( v28 )
      {
        v43 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
        if ( v43 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v54 = *(_DWORD *)(v25 + 40);
          v52 = *(_DWORD *)(v25 + 36);
          v50 = *(_DWORD *)(v25 + 32);
          v44 = *(_DWORD *)(v25 + 28);
          LOBYTE(v25) = v43;
          LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_qdddddddd(
            WPP_GLOBAL_Control->AttachedDevice,
            v25,
            v23,
            (_DWORD)gFullLog,
            3,
            7,
            23,
            (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids,
            v20[70],
            *v20,
            v20[1],
            v20[2],
            v20[3],
            v44,
            v50,
            v52,
            v54);
        }
        goto LABEL_72;
      }
      v29 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
         && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
         && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      if ( v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v30 = (unsigned __int16 *)(v20 + 71);
        v53 = *(_DWORD *)(v25 + 56);
        v51 = *(_DWORD *)(v25 + 52);
        v49 = *(_DWORD *)(v25 + 48);
        v31 = *(_DWORD *)(v25 + 44);
        LOBYTE(v25) = v29;
        LOBYTE(v23) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_qdddddddddddd(
          WPP_GLOBAL_Control->AttachedDevice,
          v25,
          v23,
          (_DWORD)gFullLog,
          v45,
          v46,
          v47,
          v48,
          v24,
          *v20,
          v56[75 * v18 + 2],
          v56[75 * v18 + 3],
          v56[75 * v18 + 4],
          v31,
          v49,
          v51,
          v53,
          v20[71],
          v20[72],
          v20[73],
          v20[74]);
      }
      else
      {
        v30 = &v57[v19 / 2 + 132];
      }
      DestinationString = 0LL;
      if ( (unsigned int)IsRectEmptyInl((const struct tagRECT *)v30)
        || !(unsigned int)IntersectRect(&DestinationString, &v56[v19 / 4 + 1], v30) )
      {
        goto LABEL_126;
      }
      v34 = *(_QWORD *)v30;
      v35 = (char *)(*(_QWORD *)&DestinationString.Length - *(_QWORD *)v30);
      if ( *(_QWORD *)&DestinationString.Length == *(_QWORD *)v30 )
        v35 = (char *)DestinationString.Buffer - *((_QWORD *)v30 + 1);
      if ( v35 )
      {
LABEL_126:
        LOBYTE(v32) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( (_BYTE)v32 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v32,
            v33,
            (unsigned int)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids,
            2,
            7,
            25,
            (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids);
        }
        goto LABEL_72;
      }
      v36 = *(_QWORD *)(v24 + 40);
      v37 = *(_QWORD *)(v36 + 44) - v34;
      if ( !v37 )
        v37 = *(_QWORD *)(v36 + 52) - *((_QWORD *)v30 + 1);
      if ( v37 )
      {
        v40 = *(struct _UNICODE_STRING *)(v36 + 44);
        *(_DWORD *)(v36 + 44) = v34;
        v17 = 1;
        v41 = *(_QWORD *)(v24 + 40);
        v42 = *((_DWORD *)v30 + 1);
        DestinationString = v40;
        *(_DWORD *)(v41 + 48) = v42;
        *(_DWORD *)(*(_QWORD *)(v24 + 40) + 52LL) = *((_DWORD *)v30 + 2);
        *(_DWORD *)(*(_QWORD *)(v24 + 40) + 56LL) = *((_DWORD *)v30 + 3);
        v38 = WPP_GLOBAL_Control;
        LOBYTE(v36) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v36 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_72;
        v39 = 27;
      }
      else
      {
        v38 = WPP_GLOBAL_Control;
        LOBYTE(v36) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v33) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v36 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_72;
        v39 = 26;
      }
      WPP_RECORDER_AND_TRACE_SF_(
        v38->AttachedDevice,
        v36,
        v33,
        (unsigned int)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids,
        4,
        7,
        v39,
        (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids);
LABEL_72:
      if ( ++v18 >= v56[0] )
      {
        if ( v17 )
          CTopologyManager::UpdateCurrent();
        return v17;
      }
    }
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v3 = 0;
  }
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v11) = v3;
    LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v11,
      v12,
      v13,
      4,
      7,
      19,
      (__int64)&WPP_713a73a9a0bc322488e80543f5fb9642_Traceguids);
  }
  return 0;
}
