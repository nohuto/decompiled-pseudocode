/*
 * XREFs of ??1SharedD3DDevicePool@Internal@Composition@UI@Windows@@QEAA@XZ @ 0x1800A50C0
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VSharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@EEAAXXZ @ 0x1800A6970 (-_Destroy@-$_Ref_count_obj2@VSharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??0?$unordered_map@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U?$hash@_J@std@@U?$equal_to@_J@8@V?$allocator@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@8@@std@@QEAA@XZ @ 0x1800A4DCC (--0-$unordered_map@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@U-$hash@.c)
 *     ??1?$_Hash@V?$_Umap_traits@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@V?$_Uhash_compare@_JU?$hash@_J@std@@U?$equal_to@_J@2@@std@@V?$allocator@U?$pair@$$CB_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@@std@@@8@$0A@@std@@@std@@QEAA@XZ @ 0x1800A4ED8 (--1-$_Hash@V-$_Umap_traits@_JUSharedDevice@SharedD3DDevicePool@Internal@Composition@UI@Windows@@.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800E3AD0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800E5588 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

void __fastcall Windows::UI::Composition::Internal::SharedD3DDevicePool::~SharedD3DDevicePool(
        Windows::UI::Composition::Internal::SharedD3DDevicePool *this)
{
  __int64 v2; // rcx
  int v3; // xmm1_4
  int v4; // xmm0_4
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // [rsp+20h] [rbp-40h] BYREF
  __int64 v18; // [rsp+28h] [rbp-38h]
  __int64 v19; // [rsp+30h] [rbp-30h]
  __int64 v20; // [rsp+38h] [rbp-28h]
  __int64 v21; // [rsp+40h] [rbp-20h]
  __int64 v22; // [rsp+48h] [rbp-18h]
  __int64 v23; // [rsp+50h] [rbp-10h]
  __int64 v24; // [rsp+58h] [rbp-8h]
  char v25; // [rsp+70h] [rbp+10h] BYREF

  std::unordered_map<__int64,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>::unordered_map<__int64,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>((__int64)&v17);
  wil::srwlock::lock_exclusive((char *)this + 64, &v25);
  if ( &v17 != (int *)this )
  {
    v2 = v18;
    v3 = v17;
    v4 = *(_DWORD *)this;
    v18 = *((_QWORD *)this + 1);
    v5 = *((_QWORD *)this + 2);
    *((_QWORD *)this + 1) = v2;
    v6 = v19;
    v19 = v5;
    v7 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 2) = v6;
    v8 = v20;
    v20 = v7;
    v9 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 3) = v8;
    v10 = v21;
    v21 = v9;
    v11 = *((_QWORD *)this + 5);
    *((_QWORD *)this + 4) = v10;
    v12 = v22;
    v22 = v11;
    v13 = *((_QWORD *)this + 6);
    *((_QWORD *)this + 5) = v12;
    v14 = v23;
    v23 = v13;
    v15 = *((_QWORD *)this + 7);
    *((_QWORD *)this + 6) = v14;
    v16 = v24;
    v24 = v15;
    *((_QWORD *)this + 7) = v16;
    v17 = v4;
    *(_DWORD *)this = v3;
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>(&v25);
  std::_Hash<std::_Umap_traits<__int64,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice,std::_Uhash_compare<__int64,std::hash<__int64>,std::equal_to<__int64>>,std::allocator<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>,0>>::~_Hash<std::_Umap_traits<__int64,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice,std::_Uhash_compare<__int64,std::hash<__int64>,std::equal_to<__int64>>,std::allocator<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>,0>>((__int64)&v17);
  std::_Hash<std::_Umap_traits<__int64,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice,std::_Uhash_compare<__int64,std::hash<__int64>,std::equal_to<__int64>>,std::allocator<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>,0>>::~_Hash<std::_Umap_traits<__int64,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice,std::_Uhash_compare<__int64,std::hash<__int64>,std::equal_to<__int64>>,std::allocator<std::pair<__int64 const,Windows::UI::Composition::Internal::SharedD3DDevicePool::SharedDevice>>,0>>((__int64)this);
}
