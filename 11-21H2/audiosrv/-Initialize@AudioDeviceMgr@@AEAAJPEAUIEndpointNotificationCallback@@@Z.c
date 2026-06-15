/*
 * XREFs of ?Initialize@AudioDeviceMgr@@AEAAJPEAUIEndpointNotificationCallback@@@Z @ 0x18004B8A4
 * Callers:
 *     ?CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z @ 0x18005C4C0 (-CreateInstance@AudioDeviceMgr@@SAJPEAUIEndpointNotificationCallback@@PEAPEAUIAudioDeviceMgr@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180009D48 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?EnumEndpointDevices@AudioDeviceMgr@@AEAAJXZ @ 0x18004B9A4 (-EnumEndpointDevices@AudioDeviceMgr@@AEAAJXZ.c)
 *     ?CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z @ 0x18004C1DC (-CreateInstance@EndpointCollection@@SAJPEAPEAUIEndpointCollection@@@Z.c)
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x18005A820 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?CreateWorkItemThread@AudioDeviceMgr@@AEAAJXZ @ 0x18005CF10 (-CreateWorkItemThread@AudioDeviceMgr@@AEAAJXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::Initialize(AudioDeviceMgr *this, struct IUnknown *a2)
{
  unsigned int v3; // ebx
  struct IUnknown **v4; // rcx
  HRESULT Instance; // eax
  int v6; // eax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  v3 = 0;
  if ( a2 )
  {
    v4 = (struct IUnknown **)((char *)this + 32);
    if ( *v4 != a2 )
      ATL::AtlComPtrAssign(v4, a2);
  }
  Instance = EndpointCollection::CreateInstance((struct IEndpointCollection **)this + 7);
  if ( Instance < 0 )
    return (unsigned int)Instance;
  Instance = EndpointCollection::CreateInstance((struct IEndpointCollection **)this + 8);
  if ( Instance < 0 )
    return (unsigned int)Instance;
  Instance = CoCreateInstance(
               &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
               0LL,
               0x17u,
               &GUID_8a189c00_2dd1_4f94_bfab_31ac1deb05d0,
               (LPVOID *)this + 5);
  if ( Instance < 0 )
    return (unsigned int)Instance;
  Instance = AudioDeviceMgr::CreateWorkItemThread(this);
  if ( Instance < 0 )
  {
    return (unsigned int)Instance;
  }
  else
  {
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      &lpCriticalSection,
      (char *)this + 80);
    v6 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 5) + 72LL))(
           *((_QWORD *)this + 5),
           (char *)this + 8);
    if ( v6 < 0 || (*((_DWORD *)this + 12) = 1, v6 = AudioDeviceMgr::EnumEndpointDevices(this), v6 < 0) )
      v3 = v6;
    if ( v9 )
      LeaveCriticalSection(lpCriticalSection);
  }
  return v3;
}
