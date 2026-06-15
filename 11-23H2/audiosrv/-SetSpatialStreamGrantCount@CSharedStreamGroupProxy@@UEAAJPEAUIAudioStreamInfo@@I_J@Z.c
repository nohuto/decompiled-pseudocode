/*
 * XREFs of ?SetSpatialStreamGrantCount@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@I_J@Z @ 0x180109F10
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSharedStreamGroupProxy::SetSpatialStreamGrantCount(
        CSharedStreamGroupProxy *this,
        struct IAudioStreamInfo *a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64, _QWORD, __int64); // rbx
  __int64 v12; // rax
  __int64 v13[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( g_UseNewStreamManagementCodePath )
  {
    v6 = *(_QWORD *)a2;
    v13[0] = 0LL;
    v7 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v6 + 184))(a2, v13);
    v8 = v7;
    if ( v7 >= 0 )
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v13[0] + 56LL))(v13[0], a3, a4);
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4E4,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v7);
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(v13);
    return v8;
  }
  else
  {
    v10 = *((_QWORD *)this + 10);
    v11 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v10 + 56LL);
    v12 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 40LL))(a2);
    return v11(v10, v12, a3, a4);
  }
}
