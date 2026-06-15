/*
 * XREFs of ?GetOta@CStreamInstance@@QEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x14006258C
 * Callers:
 *     ?GetStreamVpo@CSubmixImpl@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140062790 (-GetStreamVpo@CSubmixImpl@@UEAAJ_KIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProt.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140004168 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400265D0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x140059FAC (-GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CStreamInstance::GetOta(
        CStreamInstance *this,
        int a2,
        struct IAudioProtectedOutputController *a3,
        struct IAudioVirtualProtectedOutput **a4)
{
  int v6; // edx
  unsigned int v7; // ebx
  __int64 v8; // r9
  __int64 v9; // rdx
  struct IAudioVirtualProtectedOutput **v10; // rdi
  struct IAudioVirtualProtectedOutput *v11; // rbx
  __int64 v12; // rax
  int v13; // eax
  struct IAudioVirtualProtectedOutput **v14; // rdi
  CPipeInstance *v15; // rcx
  int PlaybackProtectionApo; // eax
  __int64 (__fastcall *v17)(struct IAudioProtectedOutputController *, struct IAudioProcessingObject *, struct IAudioVirtualProtectedOutput **); // rbx
  struct IAudioVirtualProtectedOutput *v18; // rcx
  int v19; // eax
  struct IAudioProcessingObject *v21; // [rsp+20h] [rbp-18h] BYREF
  struct IAudioVirtualProtectedOutput *v22; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v22 = 0LL;
  v6 = a2 - 1;
  if ( !v6 )
  {
    v14 = (struct IAudioVirtualProtectedOutput **)((char *)this + 24);
    v11 = (struct IAudioVirtualProtectedOutput *)*((_QWORD *)this + 3);
    if ( !v11 )
    {
      v21 = 0LL;
      v15 = *(CPipeInstance **)this;
      if ( v15 )
      {
        v21 = 0LL;
        PlaybackProtectionApo = CPipeInstance::GetPlaybackProtectionApo(v15, &v21);
        if ( PlaybackProtectionApo < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xB9,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
            (const char *)(unsigned int)PlaybackProtectionApo);
      }
      v17 = *(__int64 (__fastcall **)(struct IAudioProtectedOutputController *, struct IAudioProcessingObject *, struct IAudioVirtualProtectedOutput **))(*(_QWORD *)a3 + 24LL);
      v18 = *v14;
      *v14 = 0LL;
      if ( v18 )
        (*(void (__fastcall **)(struct IAudioVirtualProtectedOutput *))(*(_QWORD *)v18 + 16LL))(v18);
      v19 = v17(a3, v21, v14);
      v7 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xBB,
          (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v19);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v21);
        goto LABEL_24;
      }
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v21);
      v11 = *v14;
    }
    v22 = v11;
    if ( v11 )
      (*(void (__fastcall **)(struct IAudioVirtualProtectedOutput *))(*(_QWORD *)v11 + 8LL))(v11);
    goto LABEL_23;
  }
  if ( v6 == 3 )
  {
    v10 = (struct IAudioVirtualProtectedOutput **)((char *)this + 32);
    v11 = (struct IAudioVirtualProtectedOutput *)*((_QWORD *)this + 4);
    if ( !v11 )
    {
      v12 = *(_QWORD *)a3;
      *v10 = 0LL;
      v13 = (*(__int64 (__fastcall **)(struct IAudioProtectedOutputController *, _QWORD, char *))(v12 + 24))(
              a3,
              0LL,
              (char *)this + 32);
      v7 = v13;
      if ( v13 < 0 )
      {
        v8 = (unsigned int)v13;
        v9 = 197LL;
        goto LABEL_4;
      }
      v11 = *v10;
    }
    v22 = v11;
    if ( v11 )
      (*(void (__fastcall **)(struct IAudioVirtualProtectedOutput *))(*(_QWORD *)v11 + 8LL))(v11);
LABEL_23:
    v22 = 0LL;
    *a4 = v11;
    v7 = 0;
    goto LABEL_24;
  }
  v7 = -2147467263;
  v8 = 2147500033LL;
  v9 = 203LL;
LABEL_4:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)v8);
LABEL_24:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>((__int64 *)&v22);
  return v7;
}
