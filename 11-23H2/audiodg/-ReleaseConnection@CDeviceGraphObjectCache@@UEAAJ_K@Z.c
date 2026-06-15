/*
 * XREFs of ?ReleaseConnection@CDeviceGraphObjectCache@@UEAAJ_K@Z @ 0x14000AD30
 * Callers:
 *     ??1CDeviceGraphObjectCache@@MEAA@XZ @ 0x1400709A8 (--1CDeviceGraphObjectCache@@MEAA@XZ.c)
 * Callees:
 *     ?ReleaseConnection@CConnectionNode@@QEAAXPEAUIDeviceGraphObjectCache@@@Z @ 0x14000A7C4 (-ReleaseConnection@CConnectionNode@@QEAAXPEAUIDeviceGraphObjectCache@@@Z.c)
 *     ?Remove@?$CRealTimeSafeList@VCConnectionNode@@V?$CAtlList@PEAVCConnectionNode@@VCConnectionNodeTraits@@@ATLRT@@@@QEAAJPEAVCConnectionNode@@@Z @ 0x14000E5E0 (-Remove@-$CRealTimeSafeList@VCConnectionNode@@V-$CAtlList@PEAVCConnectionNode@@VCConnectionNodeT.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ @ 0x140070B50 (--1SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall CDeviceGraphObjectCache::ReleaseConnection(unsigned __int64 this, __int64 a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *v5; // rcx
  __int64 v6; // rbx
  int v7; // r8d
  int v8; // eax
  unsigned int v9; // edi
  __int64 v11; // rdx
  __int64 v12; // r9
  int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+40h] [rbp+8h] BYREF

  v2 = (struct _RTL_CRITICAL_SECTION *)(this + 56);
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 56));
  v15 = v2;
  EnterCriticalSection((LPCRITICAL_SECTION)(this + 272));
  v5 = *(_QWORD **)(this + 152 + 48 * (*(unsigned __int16 *)(this + 264) ^ 1LL));
  while ( v5 )
  {
    v6 = v5[2];
    v5 = (_QWORD *)*v5;
    if ( *(_QWORD *)(v6 + 16) == a2 )
      goto LABEL_5;
  }
  v6 = 0LL;
LABEL_5:
  LeaveCriticalSection((LPCRITICAL_SECTION)(this + 272));
  if ( !v6 )
  {
    v9 = -2005139430;
    v11 = 967LL;
    v12 = 2289827866LL;
LABEL_14:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)v12,
      v13);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v15);
    return v9;
  }
  v7 = *(_DWORD *)(v6 + 8);
  if ( v7 + *(_DWORD *)(v6 + 12) || v7 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x3CC,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\devicegraphobjectcache.cpp",
      (const char *)0x887C0027LL,
      v13);
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)&v15);
    return 2289827879LL;
  }
  v8 = CRealTimeSafeList<CConnectionNode,ATLRT::CAtlList<CConnectionNode *,CConnectionNodeTraits>>::Remove(
         this + 152,
         v6);
  v9 = v8;
  if ( v8 < 0 )
  {
    v12 = (unsigned int)v8;
    v11 = 974LL;
    goto LABEL_14;
  }
  CConnectionNode::ReleaseConnection(
    (CConnectionNode *)v6,
    (struct IDeviceGraphObjectCache *)(this & ((unsigned __int128)-(__int128)(this - 8) >> 64)));
  (**(void (__fastcall ***)(__int64, __int64))v6)(v6, 1LL);
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
