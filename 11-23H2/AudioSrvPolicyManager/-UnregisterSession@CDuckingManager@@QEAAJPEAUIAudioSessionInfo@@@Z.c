/*
 * XREFs of ?UnregisterSession@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@@Z @ 0x180022BA8
 * Callers:
 *     ?UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z @ 0x18002A8C0 (-UnregisterSession@CProcess@@UEAAJPEAUIAudioSessionInfo@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18000B580 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??1_Flist_node_remove_op@?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@QEAA@XZ @ 0x1800202D4 (--1_Flist_node_remove_op@-$forward_list@PEAUIAudioSessionInfo@@V-$allocator@PEAUIAudioSessionInf.c)
 */

__int64 __fastcall CDuckingManager::UnregisterSession(CDuckingManager *this, struct IAudioSessionInfo *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 ***v5; // rcx
  __int64 *v6; // rax
  __int64 **v7; // r8
  char *v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h] BYREF
  __int64 *v11; // [rsp+30h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v10 = 0LL;
  v5 = (__int64 ***)((char *)this + 64);
  v11 = &v10;
  v6 = (__int64 *)*((_QWORD *)this + 8);
  v12 = v2;
  v9 = (char *)this + 64;
  while ( v6 )
  {
    if ( (struct IAudioSessionInfo *)v6[1] == a2 )
    {
      v7 = *v5;
      v6 = **v5;
      *v7 = 0LL;
      *v5 = (__int64 **)v6;
      *v11 = (__int64)v7;
      v11 = (__int64 *)v7;
    }
    else
    {
      v5 = (__int64 ***)v6;
      v6 = (__int64 *)*v6;
    }
  }
  std::forward_list<IAudioSessionInfo *>::_Flist_node_remove_op::~_Flist_node_remove_op((__int64)&v9);
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v12);
  return 0LL;
}
