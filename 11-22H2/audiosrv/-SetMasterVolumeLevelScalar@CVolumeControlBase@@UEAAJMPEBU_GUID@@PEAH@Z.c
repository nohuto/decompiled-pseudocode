/*
 * XREFs of ?SetMasterVolumeLevelScalar@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x180129390
 * Callers:
 *     <none>
 * Callees:
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18001A398 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18001A4CC (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18001BE9C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18001BEC0 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18001BFD8 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x1800823C2 (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     WPP_SF_qdg @ 0x1800E4168 (WPP_SF_qdg.c)
 *     WPP_SF_qdgg @ 0x1800E41C8 (WPP_SF_qdgg.c)
 *     WPP_SF_qg_guid_ @ 0x18012A0C4 (WPP_SF_qg_guid_.c)
 *     WPP_SF_qggg @ 0x18012A194 (WPP_SF_qggg.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevelScalar(
        CVolumeControlBase *this,
        float a2,
        const struct _GUID *a3,
        int *a4)
{
  struct _RTL_CRITICAL_SECTION *v7; // rsi
  CVolumeUnit *v8; // rax
  int v9; // r8d
  float Wiper; // xmm12_4
  int v11; // r15d
  CVolumeUnit *v12; // rax
  float DB; // xmm11_4
  CVolumeUnit *v14; // rax
  int v15; // ebx
  __int64 v16; // rdx
  _DWORD *v17; // rax
  int v18; // xmm9_4
  int v19; // xmm8_4
  int v20; // xmm7_4
  CVolumeUnit *v21; // rax
  float v22; // xmm0_4
  CVolumeUnit *v23; // rax
  float v24; // xmm7_4
  CVolumeUnit *v25; // rax
  double v26; // xmm3_8
  __int64 v27; // rdx
  __int64 v28; // r8
  unsigned int v29; // ebx
  CVolumeUnit *v30; // rax
  float v31; // xmm6_4
  CVolumeUnit *v32; // rax
  double v33; // xmm3_8
  CVolumeUnit *v34; // rax
  __int64 v35; // rax
  int v37[2]; // [rsp+20h] [rbp-B8h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  if ( a2 < 0.0 || a2 > 1.0 )
  {
    v15 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D4,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x80070057LL);
    return (unsigned int)v15;
  }
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v8 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                        (_QWORD *)this + 10,
                        *((unsigned int *)this + 28));
  Wiper = CVolumeUnit::GetWiper(v8);
  v11 = 1;
  if ( a2 != Wiper )
  {
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qg_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 23, v9, (_DWORD)this, COERCE_UNSIGNED_INT64(a2), (__int64)a3);
    }
    v12 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 10,
                           *((unsigned int *)this + 28));
    DB = CVolumeUnit::GetDB(v12);
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v37[0] = *((_DWORD *)this + 28);
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x18u,
        (__int64)&WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids,
        this,
        *(_QWORD *)v37,
        a2);
    }
    v14 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 10,
                           *((unsigned int *)this + 28));
    v15 = CVolumeUnit::SetWiper(v14, a2);
    if ( v15 < 0 )
    {
      v16 = 743LL;
      goto LABEL_14;
    }
    v17 = (_DWORD *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                      (_QWORD *)this + 10,
                      *((unsigned int *)this + 28));
    v18 = v17[4];
    v19 = v17[3];
    v20 = v17[2];
    v21 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 10,
                           *((unsigned int *)this + 28));
    v22 = CVolumeUnit::GetDB(v21);
    AudioSrvVolumeTelemetry::Update((CVolumeControlBase *)((char *)this + 136));
    *((float *)this + 52) = v22;
    *((_DWORD *)this + 53) = v20;
    *((_DWORD *)this + 54) = v19;
    *((_DWORD *)this + 55) = v18;
    v23 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 10,
                           *((unsigned int *)this + 28));
    v24 = CVolumeUnit::GetDB(v23) - DB;
    if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v25 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                             (_QWORD *)this + 10,
                             *((unsigned int *)this + 28));
      v26 = CVolumeUnit::GetDB(v25);
      WPP_SF_qggg(*((_QWORD *)WPP_GLOBAL_Control + 2), v27, v28, this, v24, *(_QWORD *)&v26, DB);
    }
    v29 = 0;
    if ( *((_DWORD *)this + 29) )
    {
      do
      {
        if ( v29 != *((_DWORD *)this + 28) )
        {
          v30 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                                 (_QWORD *)this + 10,
                                 v29);
          v31 = CVolumeUnit::GetDB(v30) + v24;
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            v32 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                                   (_QWORD *)this + 10,
                                   v29);
            v33 = CVolumeUnit::GetDB(v32);
            v37[0] = v29;
            WPP_SF_qdgg(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              0x1Au,
              (__int64)&WPP_ae14f8769cc9386b95eddb3bc7f1f163_Traceguids,
              this,
              *(_QWORD *)v37,
              v33,
              v31);
          }
          v34 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                                 (_QWORD *)this + 10,
                                 v29);
          CVolumeUnit::SetDB(v34, v31);
        }
        ++v29;
      }
      while ( v29 < *((_DWORD *)this + 29) );
      v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
    }
    v15 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 240LL))(this);
    if ( v15 < 0 )
    {
      v16 = 772LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
        (const char *)(unsigned int)v15);
      if ( v7 )
        LeaveCriticalSection(v7);
      return (unsigned int)v15;
    }
    if ( !a3 )
      goto LABEL_35;
    v35 = 0x4E8B67CC68F64C3DLL - *(_QWORD *)&a3->Data1;
    if ( *(_QWORD *)&a3->Data1 == 0x4E8B67CC68F64C3DLL )
      v35 = 0x6147AA4EA63F7FA1LL - *(_QWORD *)a3->Data4;
    if ( v35 )
LABEL_35:
      (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 24LL))(
        *((_QWORD *)this + 16),
        0LL,
        a3);
  }
  if ( a4 )
  {
    if ( Wiper != a2 )
      v11 = 0;
    *a4 = v11;
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  return 0LL;
}
