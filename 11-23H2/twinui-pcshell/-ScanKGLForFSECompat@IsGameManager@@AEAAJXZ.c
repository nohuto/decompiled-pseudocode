/*
 * XREFs of ?ScanKGLForFSECompat@IsGameManager@@AEAAJXZ @ 0x1803DFDE0
 * Callers:
 *     ?LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z @ 0x1800A9200 (-LoadKGLFromGameDVRFolder@IsGameManager@@AEAAJ_N@Z.c)
 * Callees:
 *     ?CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z @ 0x18002FA5C (-CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C8FA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?DelayGameConfigStoreUpdate@IsGameManager@@AEAAXPEA_N@Z @ 0x1803DDCCC (-DelayGameConfigStoreUpdate@IsGameManager@@AEAAXPEA_N@Z.c)
 *     ?UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVString@Internal@Windows@@PEAU4@@Z @ 0x1803E0524 (-UpdateGameConfigStoreFromKGL@IsGameManager@@AEAAJPEAUIGameEntry@KnownGameList@@U_GUID@@K_NPEAVS.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall IsGameManager::ScanKGLForFSECompat(IsGameManager *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  unsigned int v5; // r12d
  unsigned int v6; // r14d
  struct KnownGameList::IEnumerateEntries **v7; // rsi
  void *v8; // rdi
  int EnumerateEntriesInstance; // eax
  void *v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rbx
  unsigned int (__fastcall *v13)(__int64, struct KnownGameList::IGameEntry **); // rsi
  unsigned int v14; // esi
  __int64 v15; // rdx
  __int64 v16; // r9
  bool v17[4]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int16 v18; // [rsp+4Ch] [rbp-BCh] BYREF
  unsigned __int8 *v19; // [rsp+50h] [rbp-B8h] BYREF
  struct KnownGameList::IGameEntry *v20; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+60h] [rbp-A8h] BYREF
  __int16 v22; // [rsp+68h] [rbp-A0h] BYREF
  int v23; // [rsp+6Ch] [rbp-9Ch] BYREF
  _QWORD v24[3]; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v25[8]; // [rsp+88h] [rbp-80h] BYREF
  int v26; // [rsp+90h] [rbp-78h]
  _BYTE v27[16]; // [rsp+A0h] [rbp-68h] BYREF
  unsigned int v28; // [rsp+B0h] [rbp-58h]
  unsigned int v29; // [rsp+B4h] [rbp-54h]
  struct KnownGameList::IEnumerateEntries *v30[128]; // [rsp+B8h] [rbp-50h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4F0h] [rbp+3E8h]

  v2 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 3) + 80LL))(*((_QWORD *)this + 3), &v23);
  if ( v2 < 0 )
  {
    v3 = 781LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 3) + 72LL))(*((_QWORD *)this + 3), v27);
  if ( v2 < 0 )
  {
    v3 = 783LL;
    goto LABEL_3;
  }
  v5 = v28 / v29;
  v6 = 0;
  if ( v28 / v29 )
  {
    while ( 2 )
    {
      v21 = 0LL;
      v20 = 0LL;
      v7 = v30;
      LODWORD(v19) = 1024;
      v8 = 0LL;
      v24[0] = 0LL;
      EnumerateEntriesInstance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct KnownGameList::IEnumerateEntries **, unsigned __int8 **))(**((_QWORD **)this + 3) + 96LL))(
                                   *((_QWORD *)this + 3),
                                   v6,
                                   v30,
                                   &v19);
      v2 = EnumerateEntriesInstance;
      if ( !EnumerateEntriesInstance )
        goto LABEL_12;
      if ( EnumerateEntriesInstance != -2147024774 )
      {
        if ( EnumerateEntriesInstance >= 0 )
        {
LABEL_41:
          if ( v8 )
            operator delete[](v8);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
          return (unsigned int)v2;
        }
        v15 = 800LL;
        break;
      }
      v10 = operator new[]((unsigned int)v19, (const struct std::nothrow_t *)&std::nothrow);
      v8 = v10;
      v24[0] = v10;
      if ( !v10 )
      {
        v2 = -2147024882;
        v16 = 2147942414LL;
        v15 = 805LL;
LABEL_40:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v15,
          (int)"pcshell\\twinui\\broadcastdvrcomponent\\lib\\isgamemanager.cpp",
          (const char *)v16);
        goto LABEL_41;
      }
      v7 = (struct KnownGameList::IEnumerateEntries **)v10;
      EnumerateEntriesInstance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, void *, unsigned __int8 **))(**((_QWORD **)this + 3) + 96LL))(
                                   *((_QWORD *)this + 3),
                                   v6,
                                   v10,
                                   &v19);
      v2 = EnumerateEntriesInstance;
      if ( EnumerateEntriesInstance < 0 )
      {
        v15 = 808LL;
      }
      else
      {
LABEL_12:
        v11 = (unsigned int)v19;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
        EnumerateEntriesInstance = KnownGameList::CreateEnumerateEntriesInstance(
                                     (KnownGameList *)&v21,
                                     v7,
                                     (unsigned __int8 *)v11);
        v2 = EnumerateEntriesInstance;
        if ( EnumerateEntriesInstance >= 0 )
        {
LABEL_13:
          while ( 1 )
          {
            v12 = v21;
            v13 = *(unsigned int (__fastcall **)(__int64, struct KnownGameList::IGameEntry **))(*(_QWORD *)v21 + 24LL);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
            if ( v13(v12, &v20) )
              break;
            EnumerateEntriesInstance = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, unsigned __int16 *))(*(_QWORD *)v20 + 48LL))(
                                         v20,
                                         &v18);
            v2 = EnumerateEntriesInstance;
            if ( EnumerateEntriesInstance < 0 )
            {
              v15 = 817LL;
              goto LABEL_39;
            }
            v14 = 0;
            if ( v18 )
            {
              while ( 1 )
              {
                EnumerateEntriesInstance = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, _QWORD, __int16 *, _BYTE *))(*(_QWORD *)v20 + 64LL))(
                                             v20,
                                             v14,
                                             &v22,
                                             v25);
                v2 = EnumerateEntriesInstance;
                if ( EnumerateEntriesInstance < 0 )
                {
                  v15 = 824LL;
                  goto LABEL_39;
                }
                if ( v22 == 256 && v26 == 1 || v22 == 259 && v26 == 1 || v22 == 260 && v26 == 1 )
                  break;
                if ( ++v14 >= v18 )
                  goto LABEL_13;
              }
              v17[0] = 0;
              IsGameManager::DelayGameConfigStoreUpdate(this, v17);
              if ( !v17[0] )
              {
                *(_OWORD *)&v24[1] = xmmword_180834B18;
                IsGameManager::UpdateGameConfigStoreFromKGL(this, v20, (struct _GUID *)&v24[1], 0, 1, 0LL, 0LL);
                continue;
              }
              v2 = 0;
              goto LABEL_41;
            }
          }
          if ( v8 )
            operator delete[](v8);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v20);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v21);
          if ( ++v6 < v5 )
            continue;
          return 0LL;
        }
        v15 = 811LL;
      }
      break;
    }
LABEL_39:
    v16 = (unsigned int)EnumerateEntriesInstance;
    goto LABEL_40;
  }
  return 0LL;
}
