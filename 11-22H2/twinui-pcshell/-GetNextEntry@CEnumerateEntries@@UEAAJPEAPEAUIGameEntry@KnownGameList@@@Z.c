/*
 * XREFs of ?GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180013CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x180013E70 (-CompleteInitialization@CGameEntry@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18038BBCC (--1-$ComPtr@VCImmersiveWindowManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEnumerateEntries::GetNextEntry(CEnumerateEntries *this, struct KnownGameList::IGameEntry **a2)
{
  struct KnownGameList::IGameEntry *v4; // rbx
  _DWORD *v5; // rax
  _DWORD *v6; // rdi
  int v7; // ecx
  __int64 v8; // rax
  int v9; // eax
  int v10; // esi
  int v11; // eax
  unsigned int v12; // eax
  __int64 v13; // rcx
  struct KnownGameList::IGameEntry *v14; // rax
  int v16; // [rsp+20h] [rbp-38h]
  int v17; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v19; // [rsp+68h] [rbp+10h] BYREF
  _DWORD *v20; // [rsp+70h] [rbp+18h] BYREF
  _DWORD *v21; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  if ( a2 )
  {
    *a2 = 0LL;
    if ( *((_DWORD *)this + 6) )
    {
      v17 = 0;
      v5 = operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
      v6 = v5;
      v20 = v5;
      if ( v5 )
      {
        *(_QWORD *)v5 = &Microsoft::WRL::ChainInterfaces<IVoiceAssistantPositioner,IBasicPositioner,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`vftable';
        v5[3] = 1;
        *(_QWORD *)v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,KnownGameList::IGameEntry>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *(_QWORD *)v6 = &CGameEntry::`vftable';
        *((_QWORD *)v6 + 2) = 0LL;
        *((_QWORD *)v6 + 3) = 0LL;
        *((_QWORD *)v6 + 4) = 0LL;
        *((_QWORD *)v6 + 5) = 0LL;
        v6[12] = 0;
        *((_WORD *)v6 + 26) = 0;
        *((_QWORD *)v6 + 7) = 0LL;
        *((_QWORD *)v6 + 8) = 0LL;
        *((_QWORD *)v6 + 9) = 0LL;
        v21 = v6;
        v20 = 0LL;
        v7 = *((_DWORD *)this + 6);
        v8 = *((_QWORD *)this + 2);
        *((_QWORD *)v6 + 2) = v8;
        *((_QWORD *)v6 + 3) = v8;
        v6[8] = v7;
        v9 = CGameEntry::CompleteInitialization((CGameEntry *)v6);
        v10 = v9;
        if ( v9 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x4B0,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)(unsigned int)v9,
            0);
          Microsoft::WRL::ComPtr<CImmersiveWindowManager>::~ComPtr<CImmersiveWindowManager>(&v21);
          Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v20);
        }
        else
        {
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
          v4 = (struct KnownGameList::IGameEntry *)v6;
          v17 = (int)v6;
          (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 16LL))(v6);
          v10 = 0;
        }
      }
      else
      {
        Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v20);
        v10 = -2147024882;
      }
      if ( v10 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x603,
          (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)(unsigned int)v10,
          v17);
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, unsigned int *))(*(_QWORD *)v4 + 80LL))(
                v4,
                &v19);
        v10 = v11;
        if ( v11 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x605,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)(unsigned int)v11,
            v17);
        }
        else
        {
          v12 = *((_DWORD *)this + 6);
          v13 = v19;
          if ( v19 > v12 )
          {
            v10 = -2147024883;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x607,
              (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
              (const char *)0x8007000DLL,
              v17);
          }
          else
          {
            *((_DWORD *)this + 6) = v12 - v19;
            *((_QWORD *)this + 2) += v13;
            v14 = v4;
            v4 = 0LL;
            *a2 = v14;
            v10 = 0;
          }
        }
      }
    }
    else
    {
      v10 = 1;
    }
  }
  else
  {
    v10 = -2147467261;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5FA,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)0x80004003LL,
      v16);
  }
  if ( v4 )
    (*(void (__fastcall **)(struct KnownGameList::IGameEntry *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v10;
}
