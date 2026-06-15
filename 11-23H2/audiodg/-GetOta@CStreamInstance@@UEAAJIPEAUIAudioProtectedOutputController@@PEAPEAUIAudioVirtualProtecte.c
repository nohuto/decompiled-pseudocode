/*
 * XREFs of ?GetOta@CStreamInstance@@UEAAJIPEAUIAudioProtectedOutputController@@PEAPEAUIAudioVirtualProtectedOutput@@@Z @ 0x140077950
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140038160 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z @ 0x14005CC0C (-GetPlaybackProtectionApo@CPipeInstance@@QEAAJPEAPEAUIAudioProcessingObject@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
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
  __int64 v11; // rax
  int v12; // eax
  struct IAudioVirtualProtectedOutput *v13; // rbx
  struct IAudioVirtualProtectedOutput **v14; // rdi
  CPipeInstance *v15; // rcx
  int PlaybackProtectionApo; // eax
  __int64 (__fastcall *v17)(struct IAudioProtectedOutputController *, struct IAudioProcessingObject *, struct IAudioVirtualProtectedOutput **); // rsi
  struct IAudioVirtualProtectedOutput *v18; // rcx
  int v19; // eax
  struct IAudioProcessingObject *v21; // [rsp+20h] [rbp-18h] BYREF
  __int64 v22; // [rsp+28h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v22 = 0LL;
  v6 = a2 - 1;
  if ( !v6 )
  {
    v14 = (struct IAudioVirtualProtectedOutput **)((char *)this + 104);
    if ( !*((_QWORD *)this + 13) )
    {
      v21 = 0LL;
      v15 = (CPipeInstance *)*((_QWORD *)this + 10);
      if ( v15 )
      {
        PlaybackProtectionApo = CPipeInstance::GetPlaybackProtectionApo(v15, &v21);
        if ( PlaybackProtectionApo < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xE8,
            (int)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
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
          (void *)0xEA,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
          (const char *)(unsigned int)v19);
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v21);
        goto LABEL_23;
      }
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v21);
    }
    v13 = *v14;
    if ( *v14 )
      (*(void (__fastcall **)(struct IAudioVirtualProtectedOutput *))(*(_QWORD *)v13 + 8LL))(*v14);
    goto LABEL_22;
  }
  if ( v6 == 3 )
  {
    v10 = (struct IAudioVirtualProtectedOutput **)((char *)this + 112);
    if ( !*((_QWORD *)this + 14) )
    {
      v11 = *(_QWORD *)a3;
      *v10 = 0LL;
      v12 = (*(__int64 (__fastcall **)(struct IAudioProtectedOutputController *, _QWORD, char *))(v11 + 24))(
              a3,
              0LL,
              (char *)this + 112);
      v7 = v12;
      if ( v12 < 0 )
      {
        v8 = (unsigned int)v12;
        v9 = 244LL;
        goto LABEL_7;
      }
    }
    v13 = *v10;
    if ( *v10 )
      (*(void (__fastcall **)(struct IAudioVirtualProtectedOutput *))(*(_QWORD *)v13 + 8LL))(*v10);
LABEL_22:
    *a4 = v13;
    v7 = 0;
    goto LABEL_23;
  }
  v7 = -2147467263;
  v8 = 2147500033LL;
  v9 = 250LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\streaminstance.cpp",
    (const char *)v8);
LABEL_23:
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v22);
  return v7;
}
