/*
 * XREFs of ?FinishConstruction@CAudioSession@@UEAAJPEAVCAudioSessionManager@@PEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKU_GUID@@@Z @ 0x18000A990
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$_Emplace_reallocate@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAPEAV?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAV23@$$QEAV23@@Z @ 0x18000ADE0 (--$_Emplace_reallocate@V-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@@-$vector@.c)
 *     ??0?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcess@@@Z @ 0x18000B48C (--0-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUIAudioProcess@@@Z.c)
 *     ?Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z @ 0x18000B540 (-Copy@CAudioSessionInstanceId@@QEAAJAEBV1@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18001CD18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?StartInactiveTimer@CAudioSession@@QEAAXXZ @ 0x180021CBC (-StartInactiveTimer@CAudioSession@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBD@Z @ 0x18005011C (--4-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAAEAV01@PEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x1800CF09C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 */

// Hidden C++ exception states: #wind=1
HRESULT __fastcall CAudioSession::FinishConstruction(
        CAudioSession *this,
        struct CAudioSessionManager *a2,
        struct IAudioProcess *a3,
        struct CAudioSessionInstanceId *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        struct _GUID *a8)
{
  __int64 *v12; // rdx
  int v13; // eax
  int v14; // esi
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  unsigned int v19; // eax
  unsigned int v20; // eax
  HRESULT v21; // eax
  HRESULT v22; // esi
  int v23; // eax
  int v24; // esi
  int v25; // eax
  int v26; // esi
  __int64 v28; // rax
  __int64 v29[11]; // [rsp+20h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v29[1] = (__int64)this;
  v29[2] = (__int64)a3;
  *((_QWORD *)this + 53) = a2;
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::com_ptr_t<IAudioProcess,wil::err_returncode_policy>(v29, a3);
  v12 = (__int64 *)*((_QWORD *)this + 89);
  if ( v12 == *((__int64 **)this + 90) )
  {
    std::vector<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>::_Emplace_reallocate<wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>>(
      (char *)this + 704,
      v12,
      v29);
  }
  else
  {
    v28 = v29[0];
    v29[0] = 0LL;
    *v12 = v28;
    *((_QWORD *)this + 89) += 8LL;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v29);
  *((_BYTE *)this + 728) = (*(unsigned int (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a3 + 96LL))(a3) != 0;
  v13 = CAudioSessionInstanceId::Copy((CAudioSession *)((char *)this + 584), a4);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x791,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v13,
      v29[0]);
    return v14;
  }
  v15 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)a3 + 40LL))(a3);
  *((_QWORD *)this + 108) = *((_QWORD *)this + 82);
  *((_DWORD *)this + 218) = v15;
  *((_BYTE *)this + 231) = a5 & 1;
  if ( (a5 & 1) != 0 )
    *((_DWORD *)this + 60) = 2000;
  if ( (a5 & 4) != 0 )
  {
    v16 = -1LL;
    v17 = -1LL;
    do
      ++v17;
    while ( aSystemrootSyst_0[v17] );
    ATL::CSimpleStringT<unsigned short,0>::SetString(
      (char *)this + 248,
      L"@%SystemRoot%\\System32\\AudioSrv.Dll,-202",
      (unsigned int)v17);
    do
      ++v16;
    while ( aSystemrootSyst[v16] );
    ATL::CSimpleStringT<unsigned short,0>::SetString(
      (char *)this + 256,
      L"@%SystemRoot%\\System32\\AudioSrv.Dll,-203",
      (unsigned int)v16);
    *((_BYTE *)this + 230) = 1;
    *((_DWORD *)this + 60) = 5000;
  }
  else
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=((char *)this + 248);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::operator=((char *)this + 256);
  }
  *((_DWORD *)this + 102) = (a5 >> 5) & 1;
  *((_DWORD *)this + 58) = a6;
  *((_DWORD *)this + 59) = a5;
  *((_DWORD *)this + 51) = a7;
  v18 = *(_QWORD *)&a8->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&a8->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v18 = *(_QWORD *)a8->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v18 )
  {
    *(struct _GUID *)((char *)this + 212) = *a8;
    *((_BYTE *)this + 228) = 1;
  }
  else
  {
    v19 = UuidCreate((UUID *)((char *)this + 212));
    if ( v19 )
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0x7C1,
               (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
               (const char *)v19,
               v29[0]);
  }
  v20 = UuidCreate((UUID *)((char *)this + 264));
  if ( v20 )
    return wil::details::in1diag3::Return_Win32(
             retaddr,
             (void *)0x7CA,
             (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
             (const char *)v20,
             v29[0]);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  *((_DWORD *)this + 194) = 1065353216;
  if ( this != (CAudioSession *)-736LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 736));
  v21 = PSCreateMemoryPropertyStore(&IID_IPropertyStore, (void **)this + 52);
  v22 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7D1,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
      (const char *)(unsigned int)v21,
      v29[0]);
    return v22;
  }
  else
  {
    v23 = (*(__int64 (__fastcall **)(CAudioSession *, _QWORD))(*(_QWORD *)this + 176LL))(this, a5);
    v24 = v23;
    if ( v23 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7D3,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
        (const char *)(unsigned int)v23,
        v29[0]);
      return v24;
    }
    else
    {
      v25 = (*(__int64 (__fastcall **)(struct IAudioProcess *, char *))(*(_QWORD *)a3 + 24LL))(a3, (char *)this + 8);
      v26 = v25;
      if ( v25 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x7D6,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosession.cpp",
          (const char *)(unsigned int)v25,
          v29[0]);
        return v26;
      }
      else
      {
        CAudioSession::StartInactiveTimer(this);
        return 0;
      }
    }
  }
}
