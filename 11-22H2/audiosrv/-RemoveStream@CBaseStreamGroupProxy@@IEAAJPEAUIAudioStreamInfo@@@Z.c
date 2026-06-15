/*
 * XREFs of ?RemoveStream@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x18008297C
 * Callers:
 *     ?OnDisconnectedFromStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z @ 0x180108E00 (-OnDisconnectedFromStream@CSharedStreamGroupProxy@@UEAAJPEAUIAudioStreamInfo@@@Z.c)
 *     ?RemoveStreamAndResetAudioHandle@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z @ 0x180109924 (-RemoveStreamAndResetAudioHandle@CBaseStreamGroupProxy@@IEAAJPEAUIAudioStreamInfo@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?erase@?$vector@PEAUIAudioStreamInfo@@V?$allocator@PEAUIAudioStreamInfo@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAUIAudioStreamInfo@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAUIAudioStreamInfo@@@std@@@std@@@2@0@Z @ 0x180016820 (-erase@-$vector@PEAUIAudioStreamInfo@@V-$allocator@PEAUIAudioStreamInfo@@@std@@@std@@QEAA-AV-$_V.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBaseStreamGroupProxy::RemoveStream(CBaseStreamGroupProxy *this, struct IAudioStreamInfo *a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebp
  char *v6; // r8
  char *v7; // rdx
  char *i; // rax
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(_QWORD *)a2;
  v10 = 0LL;
  (*(void (__fastcall **)(struct IAudioStreamInfo *, __int64 *))(v4 + 112))(a2, &v10);
  v5 = (*(__int64 (__fastcall **)(struct IAudioStreamInfo *))(*(_QWORD *)a2 + 72LL))(a2);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  v6 = (char *)*((_QWORD *)this + 24);
  v7 = (char *)*((_QWORD *)this + 25);
  while ( v6 != v7 && *(struct IAudioStreamInfo **)v6 != a2 )
    v6 += 8;
  if ( v6 != v7 )
  {
    for ( i = v6 + 8; i != v7; i += 8 )
    {
      if ( *(struct IAudioStreamInfo **)i != a2 )
      {
        *(_QWORD *)v6 = *(_QWORD *)i;
        v6 += 8;
      }
    }
  }
  std::vector<IAudioStreamInfo *>::erase((__int64)this + 192, &v11, v6, *((char **)this + 25));
  if ( this != (CBaseStreamGroupProxy *)-152LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v10 + 240LL))(v10, 2LL, 0xFFFFFFFFLL, v5);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v10);
  return 0LL;
}
