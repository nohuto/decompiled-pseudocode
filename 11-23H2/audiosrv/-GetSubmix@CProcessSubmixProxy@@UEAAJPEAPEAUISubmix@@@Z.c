/*
 * XREFs of ?GetSubmix@CProcessSubmixProxy@@UEAAJPEAPEAUISubmix@@@Z @ 0x1800168A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcessSubmixProxy::GetSubmix(CProcessSubmixProxy *this, struct ISubmix **a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  struct ISubmix *v5; // rcx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  struct ISubmix *v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = 0LL;
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct ISubmix **))this + 5))(
         *((_QWORD *)this + 5),
         &GUID_09874cb6_a367_4918_b747_2b660bde30d1,
         &v9);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xE35,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v3,
      v7);
  }
  else
  {
    v5 = v9;
    if ( v9 )
    {
      *a2 = v9;
      (*(void (__fastcall **)(struct ISubmix *))(*(_QWORD *)v5 + 8LL))(v5);
    }
    else
    {
      *a2 = 0LL;
    }
    v4 = 0;
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v9);
  return v4;
}
