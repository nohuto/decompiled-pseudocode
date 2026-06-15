/*
 * XREFs of ?SetChannelVolumeLevel@CVolumeControlBase@@UEAAJIMPEBU_GUID@@PEAH@Z @ 0x180128C70
 * Callers:
 *     <none>
 * Callees:
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18001A190 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18001BE9C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?SetDB@CVolumeUnit@@QEAAXM@Z @ 0x18001BEC0 (-SetDB@CVolumeUnit@@QEAAXM@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18001BFD8 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     wil::details::lambda_call__lambda_7e1fc5644b77df97e3444cd8a79030be___::_lambda_call__lambda_7e1fc5644b77df97e3444cd8a79030be___ @ 0x180126F34 (wil--details--lambda_call__lambda_7e1fc5644b77df97e3444cd8a79030be___--_lambda_call__lambda_7e1f.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeControlBase::SetChannelVolumeLevel(
        CVolumeControlBase *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4,
        int *a5)
{
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  __int64 v8; // rdx
  CVolumeUnit *v9; // rax
  __int64 v10; // rax
  CVolumeUnit *v11; // rax
  int v12; // eax
  unsigned int v13; // esi
  __int128 v15; // [rsp+20h] [rbp-50h]
  __int128 v16; // [rsp+38h] [rbp-38h] BYREF
  float *p_DB; // [rsp+48h] [rbp-28h]
  char v18; // [rsp+50h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  float DB; // [rsp+A0h] [rbp+30h] BYREF
  unsigned int v21; // [rsp+A8h] [rbp+38h] BYREF

  v21 = a2;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  if ( v21 >= *((_DWORD *)this + 29) )
  {
    v8 = 669LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x80070057LL);
    if ( v7 )
      LeaveCriticalSection(v7);
    return 2147942487LL;
  }
  v9 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v21);
  DB = CVolumeUnit::GetDB(v9);
  v10 = ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[]((_QWORD *)this + 10, v21);
  if ( *(float *)(v10 + 8) > a3 || a3 > *(float *)(v10 + 12) )
  {
    v8 = 674LL;
    goto LABEL_15;
  }
  v11 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 10,
                         v21);
  CVolumeUnit::SetDB(v11, a3);
  *(_QWORD *)&v15 = this;
  *((_QWORD *)&v15 + 1) = &v21;
  v16 = v15;
  p_DB = &DB;
  v18 = 1;
  v12 = (*(__int64 (__fastcall **)(CVolumeControlBase *, _QWORD))(*(_QWORD *)this + 232LL))(this, v21);
  v13 = v12;
  if ( v12 >= 0 )
  {
    CVolumeControlBase::RecalcMasterFromChannelLevels(this);
    (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 24LL))(
      *((_QWORD *)this + 16),
      0LL,
      a4);
    if ( a5 )
      *a5 = DB == a3;
    if ( v7 )
      LeaveCriticalSection(v7);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2AE,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)(unsigned int)v12);
    wil::details::lambda_call__lambda_7e1fc5644b77df97e3444cd8a79030be___::_lambda_call__lambda_7e1fc5644b77df97e3444cd8a79030be___((__int64)&v16);
    if ( v7 )
      LeaveCriticalSection(v7);
    return v13;
  }
}
