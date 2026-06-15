/*
 * XREFs of ?PopulateAudioHistoryForStreamInternal@@YAJPEAUIStreamInstanceInternal@@_J11H@Z @ 0x140068564
 * Callers:
 *     ?PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11H@Z @ 0x140068480 (-PopulateAudioHistoryForStream@CSubmixImpl@@UEAAJ_K_J11H@Z.c)
 *     ?PopulateAudioHistoryForStream@CStreamInstance@@UEAAJ_J00H@Z @ 0x140077B70 (-PopulateAudioHistoryForStream@CStreamInstance@@UEAAJ_J00H@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140004F18 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAudioHistoryControlForStream@CAudioHistoryBufferManager@@QEAAJ_KPEAPEAUICPAudioHistoryControl@@@Z @ 0x140069924 (-GetAudioHistoryControlForStream@CAudioHistoryBufferManager@@QEAAJ_KPEAPEAUICPAudioHistoryContro.c)
 *     ?GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z @ 0x140069A4C (-GetHistoryBufferManager@@YAJPEAPEAVCAudioHistoryBufferManager@@@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall PopulateAudioHistoryForStreamInternal(
        struct IStreamInstanceInternal *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v8; // rsi
  int HistoryBufferManager; // eax
  int AudioHistoryControlForStream; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  struct _RTL_CRITICAL_SECTION **v14; // rbx
  __int64 v15; // rcx
  struct _RTL_CRITICAL_SECTION *v16; // rbx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 (__fastcall *v20)(__int64, _QWORD, _OWORD *, _QWORD, __int64); // rax
  __int64 v21; // r9
  __int64 v23; // [rsp+30h] [rbp-71h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-69h] BYREF
  __int64 v25; // [rsp+40h] [rbp-61h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v27; // [rsp+50h] [rbp-51h] BYREF
  __int64 *v28; // [rsp+58h] [rbp-49h] BYREF
  _OWORD v29[2]; // [rsp+60h] [rbp-41h] BYREF
  __int64 v30; // [rsp+80h] [rbp-21h]
  struct ICPAudioHistoryControl *v31[2]; // [rsp+90h] [rbp-11h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-1h]
  __int64 v33; // [rsp+B0h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+57h]

  v8 = (*(__int64 (__fastcall **)(struct IStreamInstanceInternal *))(*(_QWORD *)a1 + 24LL))(a1);
  lpCriticalSection = 0LL;
  HistoryBufferManager = GetHistoryBufferManager((struct CAudioHistoryBufferManager **)&lpCriticalSection);
  AudioHistoryControlForStream = HistoryBufferManager;
  if ( HistoryBufferManager >= 0 )
  {
    v28 = 0LL;
    v31[0] = (struct ICPAudioHistoryControl *)&v28;
    v31[1] = 0LL;
    LOBYTE(v32) = 1;
    AudioHistoryControlForStream = CAudioHistoryBufferManager::GetAudioHistoryControlForStream(
                                     lpCriticalSection,
                                     a2,
                                     &v31[1]);
    if ( (_BYTE)v32 )
    {
      v11 = *(_QWORD *)v31[0];
      *(_QWORD *)v31[0] = v31[1];
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    if ( AudioHistoryControlForStream >= 0 )
    {
      v23 = 0LL;
      v12 = *v28;
      v31[0] = (struct ICPAudioHistoryControl *)&v23;
      v31[1] = 0LL;
      LOBYTE(v32) = 1;
      AudioHistoryControlForStream = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, _QWORD, struct ICPAudioHistoryControl **))(v12 + 24))(
                                       v28,
                                       a3,
                                       a4,
                                       a5,
                                       &v31[1]);
      if ( (_BYTE)v32 )
      {
        v13 = *(_QWORD *)v31[0];
        *(_QWORD *)v31[0] = v31[1];
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( AudioHistoryControlForStream >= 0 )
      {
        v14 = *(struct _RTL_CRITICAL_SECTION ***)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(v8 + 16))
                                                + 32LL);
        if ( !v14 )
        {
LABEL_27:
          wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v23);
          AudioHistoryControlForStream = 0;
          goto LABEL_28;
        }
        v15 = 0LL;
        v25 = 0LL;
        v16 = *v14;
        lpCriticalSection = v16;
        if ( v16 )
        {
          ((void (__fastcall *)(struct _RTL_CRITICAL_SECTION *))v16->DebugInfo->CriticalSection)(v16);
          v15 = v25;
        }
        v25 = 0LL;
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        v17 = ((__int64 (__fastcall *)(struct _RTL_CRITICAL_SECTION *, GUID *, __int64 *))v16->DebugInfo->Type)(
                v16,
                &GUID_91377361_53fa_4626_82b9_bdb68e242b3e,
                &v25);
        AudioHistoryControlForStream = v17;
        if ( v17 >= 0 )
        {
          v19 = (*(__int64 (__fastcall **)(__int64, unsigned int *, struct ICPAudioHistoryControl **, unsigned int *))(*(_QWORD *)v23 + 24LL))(
                  v23,
                  &v24,
                  v31,
                  &v27);
          *((_QWORD *)&v32 + 1) = a3;
          while ( 1 )
          {
            v21 = v19;
            if ( !v24 )
            {
              wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v25);
              wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&lpCriticalSection);
              goto LABEL_27;
            }
            v20 = *(__int64 (__fastcall **)(__int64, _QWORD, _OWORD *, _QWORD, __int64))(*(_QWORD *)v25 + 24LL);
            v29[0] = *(_OWORD *)v31;
            v29[1] = v32;
            v30 = v33;
            v17 = v20(v25, v24, v29, v27, v21);
            AudioHistoryControlForStream = v17;
            if ( v17 < 0 )
              break;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 32LL))(v23);
            v19 = (*(__int64 (__fastcall **)(__int64, unsigned int *, struct ICPAudioHistoryControl **, unsigned int *))(*(_QWORD *)v23 + 24LL))(
                    v23,
                    &v24,
                    v31,
                    &v27);
          }
          v18 = 1071LL;
        }
        else
        {
          v18 = 1059LL;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v18,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v17);
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v25);
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&lpCriticalSection);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x419,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)AudioHistoryControlForStream);
      }
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v23);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x416,
        (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
        (const char *)(unsigned int)AudioHistoryControlForStream);
    }
LABEL_28:
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v28);
    return (unsigned int)AudioHistoryControlForStream;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x413,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)HistoryBufferManager);
  return (unsigned int)AudioHistoryControlForStream;
}
