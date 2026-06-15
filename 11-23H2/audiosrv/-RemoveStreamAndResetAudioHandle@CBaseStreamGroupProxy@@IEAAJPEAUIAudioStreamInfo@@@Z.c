/*
 * XREFs of ?RemoveStreamAndResetAudioHandle@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x1801098D4
 * Callers:
 *     ?DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180106AD0 (-DestroyStream@CExclusiveStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180106BF0 (-DestroyStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ??1SystemAudioStream@@QEAA@XZ @ 0x180016C84 (--1SystemAudioStream@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18008294C (-RemoveStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CBaseStreamGroupProxy::RemoveStreamAndResetAudioHandle(
        CBaseStreamGroupProxy *this,
        struct IAudioStreamInfo *a2)
{
  int v3; // ebx
  unsigned __int64 v5; // rcx
  __int128 v6; // [rsp+30h] [rbp-D0h] BYREF
  int v7; // [rsp+40h] [rbp-C0h]
  __int64 v8; // [rsp+48h] [rbp-B8h]
  __int64 v9; // [rsp+50h] [rbp-B0h]
  __int64 v10; // [rsp+58h] [rbp-A8h]
  __int64 v11; // [rsp+60h] [rbp-A0h]
  __int64 v12; // [rsp+190h] [rbp+90h]
  __int64 v13; // [rsp+2C0h] [rbp+1C0h]
  int v14; // [rsp+3F0h] [rbp+2F0h]
  __int64 v15; // [rsp+3F8h] [rbp+2F8h]
  __int64 v16; // [rsp+528h] [rbp+428h]
  int v17; // [rsp+530h] [rbp+430h]
  int v18; // [rsp+534h] [rbp+434h]
  wil::details::in1diag3 *retaddr; // [rsp+558h] [rbp+458h]

  v3 = CBaseStreamGroupProxy::RemoveStream(this, a2);
  if ( v3 >= 0 )
  {
    v6 = 0LL;
    v7 = 0;
    v8 = 0LL;
    v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0;
    v15 = 0LL;
    v16 = 0LL;
    v17 = 0;
    v18 = 0;
    v5 = ((unsigned __int64)a2 - 8) & -(__int64)(a2 != 0LL);
    (*(void (__fastcall **)(unsigned __int64, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v5 + 48LL))(v5, &v6, 0LL, 0LL);
    SystemAudioStream::~SystemAudioStream((SystemAudioStream *)&v6);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
}
