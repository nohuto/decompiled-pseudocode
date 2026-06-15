/*
 * XREFs of ?PopulateAudioHistoryForStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@_J11H@Z @ 0x180109530
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSharedStreamGroupProxy::PopulateAudioHistoryForStream(
        CSharedStreamGroupProxy *this,
        struct IAudioStreamInfo *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, __int64, __int64, __int64, __int64, int); // rbx
  __int64 v14; // rax
  __int64 v15[3]; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( g_UseNewStreamManagementCodePath )
  {
    v8 = *(_QWORD *)a2;
    v15[0] = 0LL;
    v9 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v8 + 184))(a2, v15);
    v10 = v9;
    if ( v9 >= 0 )
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int))(*(_QWORD *)v15[0] + 64LL))(
              v15[0],
              a3,
              a4,
              a5,
              a6);
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x5E1,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v9);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v15);
    return v10;
  }
  else
  {
    v12 = *((_QWORD *)this + 10);
    v13 = *(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, int))(*(_QWORD *)v12 + 64LL);
    v14 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 40LL))(a2);
    return v13(v12, v14, a3, a4, a5, a6);
  }
}
