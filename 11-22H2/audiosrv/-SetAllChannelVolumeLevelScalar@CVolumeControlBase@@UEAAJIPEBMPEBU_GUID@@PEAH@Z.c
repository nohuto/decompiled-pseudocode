/*
 * XREFs of ?SetAllChannelVolumeLevelScalar@CVolumeControlBase@@UEAAJIPEBMPEBU_GUID@@PEAH@Z @ 0x180128A90
 * Callers:
 *     <none>
 * Callees:
 *     ?RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ @ 0x18001A190 (-RecalcMasterFromChannelLevels@CVolumeControlBase@@IEAAXXZ.c)
 *     ?SetWiper@CVolumeUnit@@QEAAJM@Z @ 0x18001A398 (-SetWiper@CVolumeUnit@@QEAAJM@Z.c)
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18001A4CC (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x18001BE9C (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeControlBase::SetAllChannelVolumeLevelScalar(
        CVolumeControlBase *this,
        unsigned int a2,
        float *a3,
        const struct _GUID *a4,
        int *a5)
{
  struct _RTL_CRITICAL_SECTION *v5; // rbx
  const struct _GUID *v7; // r15
  int v11; // ebp
  unsigned int v12; // esi
  CVolumeUnit *v13; // rax
  CVolumeUnit *v14; // rax
  int v15; // eax
  unsigned int v16; // r15d
  int v17; // eax
  unsigned int v18; // esi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 8);
  v7 = a4;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 8));
  if ( a2 >= *((_DWORD *)this + 29) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x364,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
      (const char *)0x80070057LL);
    if ( v5 )
      LeaveCriticalSection(v5);
    return 2147942487LL;
  }
  v11 = 0;
  v12 = 0;
  if ( !a2 )
  {
LABEL_11:
    CVolumeControlBase::RecalcMasterFromChannelLevels(this);
    v17 = (*(__int64 (__fastcall **)(CVolumeControlBase *))(*(_QWORD *)this + 240LL))(this);
    v18 = v17;
    if ( v17 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 16) + 24LL))(
        *((_QWORD *)this + 16),
        0LL,
        v7);
      if ( a5 )
        *a5 = v11 == 0;
      if ( v5 )
        LeaveCriticalSection(v5);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x37F,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
        (const char *)(unsigned int)v17);
      if ( v5 )
        LeaveCriticalSection(v5);
      return v18;
    }
  }
  while ( 1 )
  {
    v13 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                           (_QWORD *)this + 10,
                           v12);
    if ( CVolumeUnit::GetWiper(v13) != *a3 )
      break;
LABEL_9:
    ++v12;
    ++a3;
    if ( v12 >= a2 )
    {
      v7 = a4;
      goto LABEL_11;
    }
  }
  v14 = (CVolumeUnit *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                         (_QWORD *)this + 10,
                         v12);
  v15 = CVolumeUnit::SetWiper(v14, *a3);
  v16 = v15;
  if ( v15 >= 0 )
  {
    ++v11;
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x36F,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumecontrol.cpp",
    (const char *)(unsigned int)v15);
  if ( v5 )
    LeaveCriticalSection(v5);
  return v16;
}
