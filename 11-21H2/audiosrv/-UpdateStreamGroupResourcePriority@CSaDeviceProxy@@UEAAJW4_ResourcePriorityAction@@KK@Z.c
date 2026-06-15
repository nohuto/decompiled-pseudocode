/*
 * XREFs of ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x1800045D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x180004960 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800049E0 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@@@std@@QEAAPEAU-$_Tree_node.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18002B390 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1-LeaveCriticalSe.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CSaDeviceProxy::UpdateStreamGroupResourcePriority(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v8; // rbx
  char v9; // si
  __int64 *v10; // rax
  __int64 *v11; // rdx
  __int64 *v13; // rax
  __int64 *i; // r8
  void *v15; // rax
  int v16; // eax
  unsigned int v17; // edi
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // ebx
  int v22; // [rsp+20h] [rbp-18h]
  int v23; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v25; // [rsp+40h] [rbp+8h] BYREF

  v8 = *(_QWORD *)(a1 + 48);
  v9 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)v8);
  v25 = v8;
  if ( a2 - 1 <= 1 )
  {
    v10 = *(__int64 **)(*(_QWORD *)(v8 + 40) + 8LL);
    v11 = *(__int64 **)(v8 + 40);
    while ( !*((_BYTE *)v10 + 25) )
    {
      if ( *((_DWORD *)v10 + 7) >= a4 )
      {
        v11 = v10;
        v10 = (__int64 *)*v10;
      }
      else
      {
        v10 = (__int64 *)v10[2];
      }
    }
    if ( *((_BYTE *)v11 + 25) || a4 < *((_DWORD *)v11 + 7) )
      v11 = *(__int64 **)(v8 + 40);
    if ( (*((_DWORD *)v11 + 8))-- == 1 )
    {
      v13 = v11;
      if ( *(_BYTE *)(v11[2] + 25) )
      {
        for ( i = (__int64 *)v11[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] )
        {
          if ( v13 != (__int64 *)i[2] )
            break;
          v13 = i;
        }
      }
      v15 = (void *)std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Extract(v8 + 40);
      operator delete(v15, 0x28uLL);
    }
  }
  if ( a2 > 1
    || (v16 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v8, a3), v17 = v16, v16 >= 0) )
  {
    if ( *(_QWORD *)(v8 + 48) )
    {
      v19 = *(_DWORD *)(**(_QWORD **)(v8 + 40) + 28LL);
      if ( v19 != *(_DWORD *)(v8 + 56) )
      {
        v9 = 1;
        *(_DWORD *)(v8 + 56) = v19;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)v8);
    if ( v9
      && (v20 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, _QWORD, __int64))(*(_QWORD *)g_AudioResourceManager
                                                                                           + 48LL))(
                  g_AudioResourceManager,
                  *(unsigned int *)(*(_QWORD *)(a1 + 48) + 56LL),
                  a1 + 56),
          v21 = v20,
          v20 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7BC,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v20,
        v22);
      return v21;
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v16,
      v22);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v25);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B7,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)v17,
      v23);
    return v17;
  }
}
