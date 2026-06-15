/*
 * XREFs of ?ValidateStreamForStreamGroup@CBaseStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x18004B690
 * Callers:
 *     ?CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAUIAudioGraphCallback@@KPEAUSystemAudioStream@@@Z @ 0x1801065B0 (-CreateStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@PEAUSYSTEM_AUDIO_STREAM_DESCRI.c)
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180031990 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800455A0 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$CAutoPtr@USaDeviceParams@@@ATL@@QEAA@XZ @ 0x180081480 (--1-$CAutoPtr@USaDeviceParams@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::ValidateStreamForStreamGroup(
        CBaseStreamGroupProxy *this,
        struct IAudioStreamInfo *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  int v6; // eax
  unsigned int v7; // esi
  const struct tWAVEFORMATEX *v8; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  SaDeviceParams *v10; // [rsp+38h] [rbp+10h] BYREF

  if ( !(*(unsigned __int8 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 136LL))(a2)
    || (*(unsigned __int8 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 256LL))(this) )
  {
    return 0LL;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v4 = *((_QWORD *)this + 11);
  if ( !v4 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 152LL))(v4) )
  {
LABEL_18:
    if ( this != (CBaseStreamGroupProxy *)-96LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
    return 0LL;
  }
  v5 = *((_QWORD *)this + 11);
  v10 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, SaDeviceParams **))(*(_QWORD *)v5 + 104LL))(v5, &v10);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x16C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v6);
    ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>(&v10);
    if ( this != (CBaseStreamGroupProxy *)-96LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
    return v7;
  }
  v8 = (const struct tWAVEFORMATEX *)(*(__int64 (__fastcall **)(CBaseStreamGroupProxy *))(*(_QWORD *)this + 160LL))(this);
  if ( (unsigned int)CompareWaveFormat(*((const struct tWAVEFORMATEX **)v10 + 3), v8) )
  {
    if ( v10 )
      SaDeviceParams::`scalar deleting destructor'(v10);
    goto LABEL_18;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x16D,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
    (const char *)0x88890029LL);
  if ( v10 )
    SaDeviceParams::`scalar deleting destructor'(v10);
  v10 = 0LL;
  if ( this != (CBaseStreamGroupProxy *)-96LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  return 2290679849LL;
}
