/*
 * XREFs of ?SetMasterVolumeLevel@CVolumeControlBase@@UEAAJMPEBU_GUID@@PEAH@Z @ 0x1801290A0
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18001BE9C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18001BEC0 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18001BFD8 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Update@AudioSrvVolumeTelemetry@@IEAAXXZ @ 0x1800823C2 (-Update@AudioSrvVolumeTelemetry@@IEAAXXZ.c)
 *     WPP_SF_qg_guid_ @ 0x18012A0C4 (WPP_SF_qg_guid_.c)
 */

__int64 __fastcall CVolumeControlBase::SetMasterVolumeLevel(
        CVolumeControlBase *this,
        float a2,
        const struct _GUID *a3,
        int *a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rdi
  __int64 v8; // rax
  float v9; // xmm10_4
  float v10; // xmm8_4
  int v11; // xmm11_4
  CVolumeUnit *v12; // rax
  int v13; // r8d
  float DB; // xmm9_4
  int v15; // r15d
  CVolumeUnit *v16; // rax
  float v17; // xmm6_4
  CVolumeUnit *v18; // rax
  float v19; // xmm6_4
  __int64 v20; // rax
  CVolumeUnit *v21; // rax
  CVolumeUnit *v22; // rax
  unsigned int v23; // ebp
  float i; // xmm8_4
  CVolumeUnit *v25; // rax
  float v26; // xmm0_4
  CVolumeUnit *v27; // rax
  int v28; // ebx
  __int64 v29; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  v8 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
         (_QWORD *)this + 10,
         *((unsigned int *)this + 28));
  v9 = *(float *)(v8 + 8);
  v10 = *(float *)(v8 + 12);
  v11 = *(_DWORD *)(v8 + 16);
  if ( v9 > a2 || a2 > v10 )
  {
    v29 = 599LL;
    goto LABEL_26;
  }
  v12 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 10,
                         *((unsigned int *)this + 28));
  DB = CVolumeUnit::GetDB(v12);
  v15 = 1;
  if ( DB == a2 )
    goto LABEL_17;
  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qg_guid_(*((_QWORD *)WPP_GLOBAL_Control + 2), 22, v13, (_DWORD)this, COERCE_UNSIGNED_INT64(a2), (__int64)a3);
  }
  v16 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 10,
                         *((unsigned int *)this + 28));
  v17 = CVolumeUnit::GetDB(v16);
  AudioSrvVolumeTelemetry::Update((CVolumeControlBase *)((char *)this + 136));
  *((float *)this + 52) = v17;
  *((float *)this + 53) = v9;
  *((float *)this + 54) = v10;
  *((_DWORD *)this + 55) = v11;
  v18 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 10,
                         *((unsigned int *)this + 28));
  v19 = CVolumeUnit::GetDB(v18);
  v20 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
          (_QWORD *)this + 10,
          *((unsigned int *)this + 28));
  if ( *(float *)(v20 + 8) > a2 || a2 > *(float *)(v20 + 12) )
  {
    v29 = 616LL;
LABEL_26:
    v28 = -2147024809;
    goto LABEL_27;
  }
  v21 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 10,
                         *((unsigned int *)this + 28));
  CVolumeUnit::SetDB(v21, a2);
  v22 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 10,
                         *((unsigned int *)this + 28));
  v23 = 0;
  for ( i = CVolumeUnit::GetDB(v22) - v19; v23 < *((_DWORD *)this + 29); ++v23 )
  {
    if ( v23 != *((_DWORD *)this + 28) )
    {
      v25 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                             (_QWORD *)this + 10,
                             v23);
      v26 = CVolumeUnit::GetDB(v25);
      v27 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                             (_QWORD *)this + 10,
                             v23);
      CVolumeUnit::SetDB(v27, v26 + i);
    }
  }
  v28 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 240LL))(this);
  if ( v28 < 0 )
  {
    v29 = 633LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v28);
    if ( v4 )
      LeaveCriticalSection(v4);
    return (unsigned int)v28;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 24LL))(
    *((_QWORD *)this + 16),
    0LL,
    a3);
LABEL_17:
  if ( a4 )
  {
    if ( DB != a2 )
      v15 = 0;
    *a4 = v15;
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return 0LL;
}
