/*
 * XREFs of ?InitializeAPOs@CVolumeSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x1801275F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetAtGrow@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVolumeUnit@@@Z @ 0x180019D98 (-SetAtGrow@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAX_KAEBVCVol.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18001BE9C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180024758 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x1800487E0 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x1800DDCA8 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1800E3ED0 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180111964 (WPP_SF_qD.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeSoftware::InitializeAPOs(
        CVolumeSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  struct IAudioProcessingObject **v4; // rdi
  CVolumeSoftware *v6; // rsi
  int v7; // edi
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  __int64 v9; // r15
  _QWORD *v10; // r14
  struct _RTL_CRITICAL_SECTION *v11; // rcx
  unsigned int *v13; // r14
  unsigned int v14; // eax
  unsigned int i; // edi
  _OWORD *v16; // rax
  int v17; // eax
  int *v18; // rbx
  unsigned int v19; // [rsp+30h] [rbp-98h]
  struct _RTL_CRITICAL_SECTION *v20; // [rsp+38h] [rbp-90h]
  unsigned int *v21; // [rsp+40h] [rbp-88h]
  ATL::CAtlException *v22; // [rsp+48h] [rbp-80h] BYREF
  _OWORD v23[7]; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v25; // [rsp+E0h] [rbp+18h] BYREF
  struct IAudioProcessingObject **v26; // [rsp+E8h] [rbp+20h]

  v26 = a4;
  v4 = a4;
  v6 = this;
  v25 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x35u,
      (__int64)&WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids,
      this);
  }
  if ( a3 )
  {
    v8 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 256);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 256));
    v20 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 256);
    v9 = 0LL;
    v10 = (_QWORD *)((char *)v6 + 248);
    while ( (unsigned int)v9 < a3 )
    {
      v10 = (_QWORD *)((char *)v6 + 248);
      ATL::CComPtrBase<IPart>::Release((_QWORD *)v6 + 31);
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64))v4[v9]->lpVtbl->QueryInterface)(
             v4[v9],
             &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
             (__int64)v6 + 248) >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(*(_QWORD *)*v10 + 40LL))(*v10, &v25);
        if ( v7 < 0 )
          goto LABEL_20;
        if ( *v10 )
          goto LABEL_25;
        v4 = v26;
      }
      v9 = (unsigned int)(v9 + 1);
    }
    if ( !*v10 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x36u, (__int64)&WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids);
      }
      v7 = -2147467262;
LABEL_20:
      if ( v6 != (CVolumeSoftware *)-256LL )
      {
        v11 = (struct _RTL_CRITICAL_SECTION *)((char *)v6 + 256);
        goto LABEL_22;
      }
LABEL_23:
      AudSrvTraceLoggingErrorHelper("CVolumeSoftware::InitializeAPOs", 2243, v7);
      return (unsigned int)v7;
    }
LABEL_25:
    v13 = (unsigned int *)((char *)v6 + 116);
    v21 = (unsigned int *)((char *)v6 + 116);
    v14 = v25;
    if ( *((_DWORD *)v6 + 29) != v25 && *v13 )
    {
      for ( i = 1; ; ++i )
      {
        v19 = i;
        if ( i >= v14 )
        {
          *v13 = v14;
          break;
        }
        v16 = (_OWORD *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)v6 + 10, 0LL);
        try
        {
          v23[0] = *v16;
          v23[1] = v16[1];
          v23[2] = v16[2];
          v23[3] = v16[3];
          ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::SetAtGrow((_QWORD *)v6 + 10, i, (__int64)v23);
        }
        catch ( ATL::CAtlException *v22 )
        {
          v18 = (int *)v22;
          if ( *(_DWORD *)v22 == -1073741571 )
            _o__resetstkoflw();
          v7 = *v18;
          if ( *v18 < 0 )
          {
            v11 = v20;
            if ( !v20 )
              goto LABEL_23;
LABEL_22:
            LeaveCriticalSection(v11);
            goto LABEL_23;
          }
          v6 = this;
          v8 = v20;
          i = v19;
          v13 = v21;
        }
        v14 = v25;
      }
    }
    if ( v8 )
      LeaveCriticalSection(v8);
    v17 = (*(__int64 (__fastcall **)(CVolumeSoftware *))(*(_QWORD *)v6 + 240LL))(v6);
    v7 = v17;
    if ( v17 < 0 )
      goto LABEL_23;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qD(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x37u,
        (__int64)&WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids,
        v6,
        v17);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v7;
}
