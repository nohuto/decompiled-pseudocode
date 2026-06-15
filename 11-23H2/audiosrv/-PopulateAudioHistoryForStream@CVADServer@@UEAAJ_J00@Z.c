/*
 * XREFs of ?PopulateAudioHistoryForStream@CVADServer@@UEAAJ_J00@Z @ 0x18011E7F0
 * Callers:
 *     AudioServerPopulateAudioHistoryForStream @ 0x180124840 (AudioServerPopulateAudioHistoryForStream.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVADServer::PopulateAudioHistoryForStream(CVADServer *this, __int64 a2, __int64 a3, __int64 a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v12; // edi
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // esi
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // [rsp+48h] [rbp-18h] BYREF
  char v19; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  __int64 v21; // [rsp+90h] [rbp+30h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 192);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  if ( !*((_DWORD *)this + 40) )
  {
    v9 = 2054LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x88890001LL);
    if ( v8 )
      LeaveCriticalSection(v8);
    return 2290679809LL;
  }
  v10 = *((_QWORD *)this + 21);
  if ( !v10 )
  {
    v9 = 2055LL;
    goto LABEL_5;
  }
  if ( !*((_QWORD *)this + 50) )
  {
    v12 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x809,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070057LL);
LABEL_10:
    if ( v8 )
      LeaveCriticalSection(v8);
    return v12;
  }
  v21 = 0LL;
  v13 = (__int64 *)(v10 + 8);
  v14 = *v13;
  v18 = 0LL;
  v19 = 1;
  v15 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v14 + 120))(v13, &v18);
  if ( v19 )
  {
    v16 = v21;
    v21 = v18;
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  if ( v15 >= 0 )
  {
    v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, bool))(*(_QWORD *)v21 + 96LL))(
            v21,
            (*((_QWORD *)this + 21) + 8LL) & -(__int64)(*((_QWORD *)this + 21) != 0LL),
            a2,
            a3,
            a4,
            *((_DWORD *)this + 140) == 3);
    v12 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x810,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v17);
      wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v21);
      goto LABEL_10;
    }
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v21);
    if ( v8 )
      LeaveCriticalSection(v8);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x80D,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v15);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v21);
    if ( v8 )
      LeaveCriticalSection(v8);
    return (unsigned int)v15;
  }
}
