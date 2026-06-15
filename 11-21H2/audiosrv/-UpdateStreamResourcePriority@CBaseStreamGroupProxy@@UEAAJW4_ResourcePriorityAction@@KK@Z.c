/*
 * XREFs of ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x1800047A0
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
__int64 __fastcall CBaseStreamGroupProxy::UpdateStreamResourcePriority(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v8; // rsi
  __int64 v9; // rbx
  unsigned int v10; // r13d
  char v11; // bp
  __int64 *v12; // rax
  __int64 *v13; // rdx
  __int64 *v15; // rax
  __int64 *i; // r8
  void *v17; // rax
  int v18; // eax
  unsigned int v19; // edi
  int v20; // ecx
  __int64 v21; // rcx
  int v23; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  v8 = (struct _RTL_CRITICAL_SECTION *)(a1 + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 96));
  v9 = *(_QWORD *)(a1 + 72);
  v10 = *(_DWORD *)(v9 + 56);
  v11 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)v9);
  v25 = v9;
  if ( a2 - 1 <= 1 )
  {
    v12 = *(__int64 **)(*(_QWORD *)(v9 + 40) + 8LL);
    v13 = *(__int64 **)(v9 + 40);
    while ( !*((_BYTE *)v12 + 25) )
    {
      if ( *((_DWORD *)v12 + 7) < a4 )
      {
        v12 = (__int64 *)v12[2];
      }
      else
      {
        v13 = v12;
        v12 = (__int64 *)*v12;
      }
    }
    if ( *((_BYTE *)v13 + 25) || a4 < *((_DWORD *)v13 + 7) )
      v13 = *(__int64 **)(v9 + 40);
    if ( (*((_DWORD *)v13 + 8))-- == 1 )
    {
      v15 = v13;
      if ( *(_BYTE *)(v13[2] + 25) )
      {
        for ( i = (__int64 *)v13[1]; !*((_BYTE *)i + 25); i = (__int64 *)i[1] )
        {
          if ( v15 != (__int64 *)i[2] )
            break;
          v15 = i;
        }
      }
      v17 = (void *)std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Extract(v9 + 40);
      operator delete(v17, 0x28uLL);
    }
  }
  if ( a2 <= 1
    && (v18 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v9, a3), v19 = v18, v18 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x56,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v18,
      v23);
    wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>(&v25);
  }
  else
  {
    if ( *(_QWORD *)(v9 + 48) )
    {
      v20 = *(_DWORD *)(**(_QWORD **)(v9 + 40) + 28LL);
      if ( v20 != *(_DWORD *)(v9 + 56) )
      {
        v11 = 1;
        *(_DWORD *)(v9 + 56) = v20;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)v9);
    v19 = 0;
    if ( v11 )
    {
      v21 = *(_QWORD *)(a1 + 88);
      if ( v21 )
        v19 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v21 + 72LL))(
                v21,
                1LL,
                *(unsigned int *)(*(_QWORD *)(a1 + 72) + 56LL),
                v10);
    }
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  return v19;
}
