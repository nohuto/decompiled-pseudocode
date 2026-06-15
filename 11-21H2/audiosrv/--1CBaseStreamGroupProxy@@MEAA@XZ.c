/*
 * XREFs of ??1CBaseStreamGroupProxy@@MEAA@XZ @ 0x180040290
 * Callers:
 *     ??_GCSharedStreamGroupProxy@@MEAAPEAXI@Z @ 0x180040160 (--_GCSharedStreamGroupProxy@@MEAAPEAXI@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@UIInspectable@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800F732C (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCBaseStreamGroupProxy@@.c)
 *     ??_ECBaseStreamGroupProxy@@MEAAPEAXI@Z @ 0x1800F7E90 (--_ECBaseStreamGroupProxy@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z @ 0x1800C5EEC (-_Adjust_manually_vector_aligned@std@@YAXAEAPEAXAEA_K@Z.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@1@@Z @ 0x1800F6C00 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBKK@std@@PEAX@std@@@std@@@-$_Tree_val@U-$_T.c)
 *     ?GetBtAudioResourceManager@CBtAudioResourceManagerCache@@QEAAJPEBVCEndpointCharacteristics@@U_GUID@@PEAPEAUISaDeviceResourceManager@@@Z @ 0x18011597C (-GetBtAudioResourceManager@CBtAudioResourceManagerCache@@QEAAJPEBVCEndpointCharacteristics@@U_GU.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CBaseStreamGroupProxy::~CBaseStreamGroupProxy(CBaseStreamGroupProxy *this)
{
  __int64 v2; // rcx
  struct CEndpointCharacteristics *v3; // rcx
  struct ISaDeviceResourceManager *v4; // r9
  __int64 v5; // rdx
  struct _GUID v6; // xmm0
  __int64 v7; // rax
  struct ISaDeviceResourceManager *v8; // rdi
  struct ISaDeviceResourceManager *v9; // rsi
  __int64 v10; // rcx
  struct CEndpointCharacteristics *v11; // rdx
  void *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct _RTL_CRITICAL_SECTION *v15; // rdi
  _QWORD *p_Type; // rcx
  _QWORD *v17; // rsi
  void (__fastcall ***v18)(_QWORD, __int64); // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  int BtAudioResourceManager; // eax
  void *v22; // rcx
  struct ISaDeviceResourceManager *v23; // [rsp+30h] [rbp-30h] BYREF
  struct CEndpointCharacteristics *v24; // [rsp+38h] [rbp-28h] BYREF
  struct _GUID v25; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  *(_QWORD *)this = &CBaseStreamGroupProxy::`vftable';
  v2 = *((_QWORD *)this + 11);
  if ( v2 )
  {
    v19 = *((_QWORD *)this + 9);
    if ( v19 )
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v2 + 72LL))(
        v2,
        2LL,
        0xFFFFFFFFLL,
        *(unsigned int *)(v19 + 56));
  }
  v3 = 0LL;
  v24 = 0LL;
  v4 = 0LL;
  v23 = 0LL;
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    if ( (*(int (__fastcall **)(PVOID, __int64, _QWORD, _QWORD))(*(_QWORD *)g_pEndpointCharacteristicsCache + 24LL))(
           g_pEndpointCharacteristicsCache,
           v5,
           0LL,
           0LL) >= 0 )
    {
      v4 = v23;
      v3 = v24;
      v6 = *(struct _GUID *)((char *)v24 + 9748);
      v25 = v6;
      v7 = *(_QWORD *)&v6.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( *(_QWORD *)&v6.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
        v7 = *(_QWORD *)v6.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      if ( !v7 )
        goto LABEL_7;
      v20 = *(_QWORD *)&v6.Data1 - BLUETOOTH_AUDIO_RESOURCE_MANAGER;
      if ( *(_QWORD *)&v6.Data1 == BLUETOOTH_AUDIO_RESOURCE_MANAGER )
        v20 = *(_QWORD *)v6.Data4 + 0x12C28937D3A30176LL;
      if ( v20 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC2,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)0x8000FFFFLL,
          (int)&v24);
      }
      else
      {
        v25 = *(struct _GUID *)((char *)v24 + 9764);
        BtAudioResourceManager = CBtAudioResourceManagerCache::GetBtAudioResourceManager(v24, v24, &v25, &v23);
        if ( BtAudioResourceManager >= 0 )
        {
          v3 = v24;
          v4 = v23;
LABEL_7:
          if ( !v4 )
            goto LABEL_8;
          (*(void (__fastcall **)(struct ISaDeviceResourceManager *, struct CEndpointCharacteristics *, CBaseStreamGroupProxy *))(*(_QWORD *)v4 + 80LL))(
            v4,
            v3,
            this);
          goto LABEL_43;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC4,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)BtAudioResourceManager,
          (int)&v24);
      }
    }
LABEL_43:
    v4 = v23;
    v3 = v24;
  }
LABEL_8:
  if ( v4 )
  {
    (*(void (__fastcall **)(struct ISaDeviceResourceManager *))(*(_QWORD *)v4 + 16LL))(v4);
    v3 = v24;
  }
  if ( v3 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v3 + 16LL))(v3);
  v8 = (struct ISaDeviceResourceManager *)*((_QWORD *)this + 27);
  if ( v8 )
  {
    v9 = (struct ISaDeviceResourceManager *)*((_QWORD *)this + 28);
    if ( v8 != v9 )
    {
      do
      {
        v10 = *(_QWORD *)v8;
        if ( *(_QWORD *)v8 )
        {
          *(_QWORD *)v8 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        }
        v8 = (struct ISaDeviceResourceManager *)((char *)v8 + 8);
      }
      while ( v8 != v9 );
      v8 = (struct ISaDeviceResourceManager *)*((_QWORD *)this + 27);
    }
    v11 = (struct CEndpointCharacteristics *)(8 * ((__int64)(*((_QWORD *)this + 29) - (_QWORD)v8) >> 3));
    v24 = v11;
    v23 = v8;
    if ( (unsigned __int64)v11 >= 0x1000 )
    {
      std::_Adjust_manually_vector_aligned((void **)&v23, (unsigned __int64 *)&v24);
      v11 = v24;
      v8 = v23;
    }
    operator delete(v8, (unsigned __int64)v11);
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 28) = 0LL;
    *((_QWORD *)this + 29) = 0LL;
  }
  v12 = (void *)*((_QWORD *)this + 24);
  if ( v12 )
  {
    std::_Deallocate<16,0>(v12, 8 * ((__int64)(*((_QWORD *)this + 26) - (_QWORD)v12) >> 3));
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 152));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v13 = *((_QWORD *)this + 11);
  if ( v13 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = *((_QWORD *)this + 10);
  if ( v14 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = (struct _RTL_CRITICAL_SECTION *)*((_QWORD *)this + 9);
  if ( v15 )
  {
    p_Type = &v15[1].DebugInfo->Type;
    v17 = (_QWORD *)p_Type[1];
    if ( !*((_BYTE *)v17 + 25) )
    {
      do
      {
        std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned long const,unsigned long>,void *>>>(
          &v15[1],
          &v15[1],
          v17[2]);
        v22 = v17;
        v17 = (_QWORD *)*v17;
        std::_Deallocate<16,0>(v22, 0x28uLL);
      }
      while ( !*((_BYTE *)v17 + 25) );
      p_Type = &v15[1].DebugInfo->Type;
    }
    operator delete(p_Type, 0x28uLL);
    DeleteCriticalSection(v15);
    operator delete(v15, 0x40uLL);
  }
  *((_QWORD *)this + 9) = 0LL;
  v18 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 8);
  if ( v18 )
    (**v18)(v18, 1LL);
  *((_QWORD *)this + 8) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 6));
  *((_QWORD *)this + 6) = 0LL;
  CoTaskMemFree(*((LPVOID *)this + 5));
  *((_QWORD *)this + 5) = 0LL;
}
