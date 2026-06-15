/*
 * XREFs of ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x1400074C0
 * Callers:
 *     ?Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z @ 0x140004CE0 (-Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z.c)
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z @ 0x140023BE0 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@PEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x140006E98 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140006F40 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140007080 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?NewNode@?$CAtlList@PEAVCSubmixImpl@@V?$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@AEAAPEAVCNode@12@AEBQEAVCSubmixImpl@@PEAV312@1@Z @ 0x140007338 (-NewNode@-$CAtlList@PEAVCSubmixImpl@@V-$CElementTraits@PEAVCSubmixImpl@@@ATL@@@ATL@@AEAAPEAVCNod.c)
 *     ?CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000A320 (-CreateSubmixPipeInstance@CPipeInstance@@SAJPEAUIDeviceGraphObjectCache@@PEAUSUBMIX_DESCRIPTOR@@.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1400144C8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?GetDeviceGraphObjectCache@@YAJPEBG_JHPEAUtWAVEFORMATEX@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x14001818C (-GetDeviceGraphObjectCache@@YAJPEBG_JHPEAUtWAVEFORMATEX@@PEAPEAUIDeviceGraphObjectCache@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1400210E4 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     memcpy_0 @ 0x14002A5CF (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSubmixImpl::Initialize(
        CSubmixImpl *this,
        struct SUBMIX_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3)
{
  _WORD *v6; // rax
  __int64 v7; // r9
  int DeviceGraphObjectCache; // r14d
  LPVOID v9; // rax
  void *v10; // rcx
  void *v11; // rcx
  void **v12; // r14
  LPVOID v13; // rax
  void *v14; // rcx
  __int64 v15; // rcx
  CPipeInstance **v16; // r14
  int SubmixPipeInstance; // edi
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 *v20; // rax
  __int64 v22; // rdx
  unsigned int v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rdx
  void *v26; // rcx
  __int64 v27; // rdx
  int v28; // [rsp+20h] [rbp-58h]
  void **v29; // [rsp+38h] [rbp-40h]
  struct tWAVEFORMATEX *v30; // [rsp+40h] [rbp-38h] BYREF
  char v31; // [rsp+48h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  CSubmixImpl *v33; // [rsp+88h] [rbp+10h] BYREF
  struct _RTL_CRITICAL_SECTION *v34; // [rsp+98h] [rbp+20h]

  if ( *(_DWORD *)a2 > 2u )
  {
    v22 = 185LL;
LABEL_48:
    v23 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)0x80070057LL,
      v28);
    v24 = 252LL;
LABEL_50:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)v23,
      v28);
    return v23;
  }
  if ( !*((_DWORD *)a2 + 4) && *((_DWORD *)a2 + 22) )
  {
    v22 = 189LL;
    goto LABEL_48;
  }
  if ( *(_DWORD *)a2 == 2 && (*((_DWORD *)a2 + 22) || *((_QWORD *)a2 + 3)) )
  {
    v22 = 192LL;
    goto LABEL_48;
  }
  if ( *((_DWORD *)a2 + 22) > 5u )
  {
    v22 = 195LL;
    goto LABEL_48;
  }
  v6 = (_WORD *)*((_QWORD *)a2 + 3);
  if ( v6 )
  {
    if ( *((_DWORD *)a2 + 4) < 0x12u )
    {
      v22 = 200LL;
      goto LABEL_48;
    }
    if ( *v6 == 0xFFFE && *((_DWORD *)a2 + 4) < 0x28u )
    {
      v22 = 201LL;
      goto LABEL_48;
    }
  }
  if ( *((_DWORD *)a2 + 10) < 0x12u )
  {
    v22 = 205LL;
    goto LABEL_48;
  }
  if ( **((_WORD **)a2 + 6) == 0xFFFE && *((_DWORD *)a2 + 10) < 0x28u )
  {
    v22 = 206LL;
    goto LABEL_48;
  }
  *((_QWORD *)this + 29) = *((_QWORD *)a2 + 7);
  *((_OWORD *)this + 15) = *(_OWORD *)((char *)a2 + 68);
  *((_DWORD *)this + 64) = *(_DWORD *)a2;
  *((_BYTE *)this + 16) = *((_BYTE *)a2 + 12);
  *((_BYTE *)this + 313) = *((_BYTE *)a2 + 13);
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)this + 1,
    0LL);
  v7 = -1LL;
  do
    ++v7;
  while ( *(_WORD *)(*((_QWORD *)a2 + 4) + 2 * v7) );
  DeviceGraphObjectCache = _AllocStringWorker<CTCoAllocPolicy>();
  if ( DeviceGraphObjectCache < 0 )
  {
    v25 = 260LL;
LABEL_53:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)DeviceGraphObjectCache,
      v28);
    return (unsigned int)DeviceGraphObjectCache;
  }
  v9 = CoTaskMemAlloc(*((unsigned int *)a2 + 10));
  v10 = (void *)*((_QWORD *)this + 27);
  *((_QWORD *)this + 27) = v9;
  if ( v10 )
    CoTaskMemFree(v10);
  v11 = (void *)*((_QWORD *)this + 27);
  if ( !v11 )
  {
    v23 = -2147024882;
    v24 = 263LL;
    goto LABEL_50;
  }
  memcpy_0(v11, *((const void **)a2 + 6), *((unsigned int *)a2 + 10));
  v12 = (void **)((char *)this + 224);
  if ( *((_DWORD *)a2 + 4) )
  {
    v13 = CoTaskMemAlloc(*((unsigned int *)a2 + 4));
    v14 = *v12;
    *v12 = v13;
    if ( v14 )
      CoTaskMemFree(v14);
    if ( !*v12 )
    {
      v23 = -2147024882;
      v24 = 269LL;
      goto LABEL_50;
    }
    memcpy_0(*v12, *((const void **)a2 + 3), *((unsigned int *)a2 + 4));
  }
  else
  {
    v29 = (void **)((char *)this + 224);
    v30 = 0LL;
    v31 = 1;
    DeviceGraphObjectCache = CloneWaveFormat(*((const struct tWAVEFORMATEX **)this + 27), &v30);
    if ( v31 )
    {
      v26 = *v29;
      *v29 = v30;
      if ( v26 )
        CoTaskMemFree(v26);
    }
    if ( DeviceGraphObjectCache < 0 )
    {
      v25 = 275LL;
      goto LABEL_53;
    }
  }
  if ( *((_BYTE *)this + 313) )
    goto LABEL_32;
  v15 = *((_QWORD *)this + 33);
  *((_QWORD *)this + 33) = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  DeviceGraphObjectCache = GetDeviceGraphObjectCache(
                             *((const unsigned __int16 **)a2 + 4),
                             *((_QWORD *)a2 + 7),
                             *((unsigned __int8 *)a2 + 12),
                             *((struct tWAVEFORMATEX **)this + 27),
                             (struct IDeviceGraphObjectCache **)this + 33);
  if ( DeviceGraphObjectCache < 0 )
  {
    v25 = 281LL;
    goto LABEL_53;
  }
  if ( *((_BYTE *)a2 + 84) )
  {
    v16 = (CPipeInstance **)((char *)this + 24);
    SubmixPipeInstance = CPipeInstance::CreateSubmixPipeInstance(
                           *((struct IUnknown **)this + 33),
                           a2,
                           (struct CPipeInstance **)this + 3);
    if ( SubmixPipeInstance < 0 )
    {
      v27 = 287LL;
    }
    else
    {
      SubmixPipeInstance = CPipeInstance::Initialize(*v16);
      if ( SubmixPipeInstance < 0 )
      {
        v27 = 288LL;
      }
      else
      {
        SubmixPipeInstance = CPipeInstance::ConnectAPOs(*v16, a3);
        if ( SubmixPipeInstance >= 0 )
        {
          *((_DWORD *)this + 79) = *((_DWORD *)*v16 + 35);
          goto LABEL_32;
        }
        v27 = 289LL;
      }
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v27,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
      (const char *)(unsigned int)SubmixPipeInstance,
      v28);
    return (unsigned int)SubmixPipeInstance;
  }
LABEL_32:
  EnterCriticalSection(&g_CritSecSubmixList);
  v34 = &g_CritSecSubmixList;
  v33 = this;
  v20 = ATL::CAtlList<CSubmixImpl *,ATL::CElementTraits<CSubmixImpl *>>::NewNode(v18, (__int64 *)&v33, v19, SubmixList);
  if ( SubmixList )
    *(_QWORD *)(SubmixList + 8) = v20;
  else
    qword_1400CEAF8 = (__int64)v20;
  SubmixList = (__int64)v20;
  LeaveCriticalSection(&g_CritSecSubmixList);
  return 0LL;
}
