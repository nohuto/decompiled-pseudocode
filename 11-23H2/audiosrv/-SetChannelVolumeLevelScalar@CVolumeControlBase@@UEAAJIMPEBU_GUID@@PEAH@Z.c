/*
 * XREFs of ?SetChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x180128E10
 * Callers:
 *     <none>
 * Callees:
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18001A190 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18001A398 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18001BE9C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18001BFD8 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_7e1fc5644b77df97e3444cd8a79030be___::_lambda_call__lambda_7e1fc5644b77df97e3444cd8a79030be___ @ 0x180126EE4 (wil--details--lambda_call__lambda_7e1fc5644b77df97e3444cd8a79030be___--_lambda_call__lambda_7e1f.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeControlBase::SetChannelVolumeLevelScalar(
        CVolumeControlBase *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4,
        int *a5)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  _QWORD *v8; // r15
  CVolumeUnit *v9; // rax
  CVolumeUnit *v10; // rax
  int v11; // eax
  unsigned int v12; // esi
  int v14; // eax
  int *v15; // rdi
  CVolumeUnit *v16; // rax
  float v17; // xmm0_4
  __int128 v18; // [rsp+20h] [rbp-50h]
  __int128 v19; // [rsp+38h] [rbp-38h] BYREF
  float *p_DB; // [rsp+48h] [rbp-28h]
  char v21; // [rsp+50h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int v23; // [rsp+A8h] [rbp+38h] BYREF
  float DB; // [rsp+B0h] [rbp+40h] BYREF

  v23 = a2;
  if ( a3 < 0.0 || a3 > 1.0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32B,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  if ( v23 >= *((_DWORD *)this + 29) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x32F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x80070057LL);
    if ( v7 )
      LeaveCriticalSection(v7);
    return 2147942487LL;
  }
  v8 = (_QWORD *)((char *)this + 80);
  v9 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v23);
  DB = CVolumeUnit::GetDB(v9);
  v10 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 10,
                         v23);
  v11 = CVolumeUnit::SetWiper(v10, a3);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x334,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v11);
LABEL_8:
    if ( v7 )
      LeaveCriticalSection(v7);
    return v12;
  }
  *(_QWORD *)&v18 = this;
  *((_QWORD *)&v18 + 1) = &v23;
  v19 = v18;
  p_DB = &DB;
  v21 = 1;
  v14 = (*(__int64 (__fastcall **)(CVolumeControlBase *, _QWORD))(*(_QWORD *)this + 232LL))(this, v23);
  v12 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v14);
    wil::details::lambda_call__lambda_7e1fc5644b77df97e3444cd8a79030be___::_lambda_call__lambda_7e1fc5644b77df97e3444cd8a79030be___((__int64)&v19);
    goto LABEL_8;
  }
  CVolumeControlBase::RecalcMasterFromChannelLevels(this);
  (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 24LL))(
    *((_QWORD *)this + 16),
    0LL,
    a4);
  v15 = a5;
  if ( a5 )
  {
    v16 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](v8, v23);
    v17 = CVolumeUnit::GetDB(v16);
    *v15 = DB == v17;
  }
  if ( v7 )
    LeaveCriticalSection(v7);
  return 0LL;
}
