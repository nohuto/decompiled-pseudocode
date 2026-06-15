/*
 * XREFs of ?RemoveStream@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180016710
 * Callers:
 *     ?OnDisconnectedFromStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180016090 (-OnDisconnectedFromStream@CProcessSubmixProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?RemoveStreamAndResetAudioHandle@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x1801099F4 (-RemoveStreamAndResetAudioHandle@CProcessSubmixProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?erase@?$vector@PEAUIAudioStreamInfo@@V?$allocator@PEAUIAudioStreamInfo@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAUIAudioStreamInfo@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAUIAudioStreamInfo@@@std@@@std@@@2@0@Z @ 0x180016820 (-erase@-$vector@PEAUIAudioStreamInfo@@V-$allocator@PEAUIAudioStreamInfo@@@std@@@std@@QEAA-AV-$_V.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CProcessSubmixProxy::RemoveStream(CProcessSubmixProxy *this, struct IAudioStreamInfo *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebp
  struct IAudioStreamInfo **v6; // r8
  struct IAudioStreamInfo **v7; // rdx
  struct IAudioStreamInfo **i; // rax
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  char v11; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(_QWORD *)a2;
  v10 = 0LL;
  (*(void (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v4 + 112))(a2, &v10);
  v5 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 72LL))(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  v6 = (struct IAudioStreamInfo **)*((_QWORD *)this + 22);
  v7 = (struct IAudioStreamInfo **)*((_QWORD *)this + 23);
  while ( v6 != v7 && *v6 != a2 )
    ++v6;
  if ( v6 != v7 )
  {
    for ( i = v6 + 1; i != v7; ++i )
    {
      if ( *i != a2 )
        *v6++ = *i;
    }
  }
  std::vector<IAudioStreamInfo *>::erase((char *)this + 176, &v11, v6, *((_QWORD *)this + 23));
  if ( this != (CProcessSubmixProxy *)-136LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v10 + 240LL))(v10, 2LL, 0xFFFFFFFFLL, v5);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v10);
  return 0LL;
}
