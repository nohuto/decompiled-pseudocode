/*
 * XREFs of ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18002F720
 * Callers:
 *     ?GetGameEntryFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18002F390 (-GetGameEntryFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18002F3D0 (-GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z @ 0x18002FA5C (-CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z.c)
 *     ?GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z @ 0x18002FC4C (-GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIGameEntry@KnownGameList@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18018B698 (--4-$ComPtr@UIGameEntry@KnownGameList@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C8FA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 *     _alloca_probe @ 0x18028E130 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x18073F438 (--$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJP.c)
 *     ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18073FE4C (-GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18074024C (-GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x1807404D0 (-GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z @ 0x1807410D0 (-StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CQueryKnownGameList::GetGameEntryByIdentifier(
        CQueryKnownGameList *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct KnownGameList::IGameEntry **a4)
{
  void *v5; // rdi
  __int64 v6; // rax
  int TOCIndexByIdentifier; // eax
  unsigned int v8; // ebx
  struct KnownGameList::IEnumerateEntries **v9; // rsi
  unsigned int v10; // r14d
  int v11; // eax
  void *v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  unsigned int v15; // r9d
  int EnumerateEntriesInstance; // eax
  unsigned __int16 *v17; // rsi
  unsigned __int16 *v18; // r14
  unsigned __int16 *v19; // r15
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(__int64, __int64 *); // r12
  __int64 v22; // rcx
  int v23; // ecx
  int v24; // eax
  unsigned int v25; // r13d
  int v26; // r12d
  unsigned int v27; // ebx
  struct localeinfo_struct *v28; // rax
  bool v29; // zf
  __int64 v30; // r12
  int v31; // r13d
  wint_t v32; // ax
  CQueryKnownGameList *v33; // rax
  int v35; // eax
  unsigned int v36; // r12d
  CQueryKnownGameList *v37; // r13
  int v38; // eax
  const unsigned __int16 *v39; // r9
  int ProcessArgsByPID; // eax
  unsigned int v41; // r8d
  int ProcessWorkingDirectoryByPID; // eax
  int ProcessParentDirectoryByPID; // eax
  struct KnownGameList::IGameEntry **v44; // rbx
  int v45; // eax
  struct KnownGameList::IGameEntry *v46; // rax
  unsigned __int16 **v47; // [rsp+20h] [rbp-E0h]
  unsigned int v48; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v49; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v50; // [rsp+38h] [rbp-C8h]
  unsigned __int16 *v51; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+48h] [rbp-B8h] BYREF
  struct KnownGameList::IGameEntry *v53; // [rsp+50h] [rbp-B0h] BYREF
  _locale_t Locale; // [rsp+58h] [rbp-A8h] BYREF
  CQueryKnownGameList *v55; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v56; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v57; // [rsp+70h] [rbp-90h] BYREF
  int v58; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned __int16 *v59; // [rsp+78h] [rbp-88h] BYREF
  CQueryKnownGameList *v60; // [rsp+80h] [rbp-80h] BYREF
  __int64 v61; // [rsp+88h] [rbp-78h] BYREF
  __int64 v62; // [rsp+90h] [rbp-70h]
  struct KnownGameList::IGameEntry **v63; // [rsp+98h] [rbp-68h]
  void *v64; // [rsp+A0h] [rbp-60h]
  __int64 v65; // [rsp+A8h] [rbp-58h]
  const unsigned __int16 *v66; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v67; // [rsp+B8h] [rbp-48h]
  unsigned __int16 *v68; // [rsp+C0h] [rbp-40h]
  unsigned __int16 *v69; // [rsp+C8h] [rbp-38h]
  struct KnownGameList::IEnumerateEntries *v70[512]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1128h] [rbp+1028h]

  v63 = a4;
  v50 = a3;
  v66 = a2;
  v60 = this;
  v5 = 0LL;
  *a4 = 0LL;
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  v62 = v6;
  TOCIndexByIdentifier = CQueryKnownGameList::GetTOCIndexByIdentifier(this, a2, &v48);
  v8 = TOCIndexByIdentifier;
  if ( TOCIndexByIdentifier < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x286,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)TOCIndexByIdentifier,
      (int)v47);
    return v8;
  }
  v9 = v70;
  v64 = 0LL;
  v49 = 4096;
  v10 = v48;
  v11 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, unsigned int *))(*(_QWORD *)this + 96LL))(
          this,
          v48,
          v70,
          &v49);
  v8 = v11;
  if ( !v11 )
    goto LABEL_8;
  if ( v11 == -2147024774 )
  {
    v12 = operator new[](v49, (const struct std::nothrow_t *)&std::nothrow);
    v5 = v12;
    v64 = v12;
    if ( v12 )
    {
      v9 = (struct KnownGameList::IEnumerateEntries **)v12;
      v13 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, void *, unsigned int *))(*(_QWORD *)this + 96LL))(
              this,
              v10,
              v12,
              &v49);
      v8 = v13;
      if ( v13 >= 0 )
      {
LABEL_8:
        v56 = 0LL;
        v14 = v49;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
        EnumerateEntriesInstance = KnownGameList::CreateEnumerateEntriesInstance(
                                     (KnownGameList *)&v56,
                                     v9,
                                     (unsigned __int8 *)v14,
                                     v15);
        v8 = EnumerateEntriesInstance;
        if ( EnumerateEntriesInstance < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x29B,
            (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)(unsigned int)EnumerateEntriesInstance,
            (int)v47);
        }
        else
        {
          v52 = 0LL;
          v55 = 0LL;
          v17 = 0LL;
          v67 = 0LL;
          v18 = 0LL;
          v68 = 0LL;
          v19 = 0LL;
          v69 = 0LL;
          do
          {
LABEL_10:
            while ( 2 )
            {
              while ( 2 )
              {
                v20 = v56;
                v21 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v56 + 24LL);
                v22 = v52;
                if ( v52 )
                {
                  v52 = 0LL;
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
                }
                v23 = v21(v20, &v52);
                LODWORD(v53) = v23;
                if ( v23 )
                  goto LABEL_71;
                v61 = 0LL;
                v24 = (*(__int64 (__fastcall **)(__int64, __int64 *, unsigned int *))(*(_QWORD *)v52 + 24LL))(
                        v52,
                        &v61,
                        &v57);
                v8 = v24;
                if ( v24 < 0 )
                {
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x2A9,
                    (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                    (const char *)(unsigned int)v24,
                    (int)v47);
                  goto LABEL_23;
                }
                v25 = v57;
                LODWORD(v51) = v57;
                v65 = v61;
                v26 = 0;
                v27 = 0;
                v28 = _create_locale(0, "C");
                Locale = v28;
                while ( 1 )
                {
                  v29 = v27 == v25;
                  if ( v27 >= v25 )
                    goto LABEL_43;
                  if ( v27 >= (unsigned int)v62 )
                    break;
                  v30 = v27;
                  v31 = _towlower_l(*(_WORD *)(v30 * 2 + v65), v28);
                  v32 = _towlower_l(v66[v30], Locale);
                  ++v27;
                  v29 = v31 == v32;
                  v26 = v31 - v32;
                  v25 = (unsigned int)v51;
                  v28 = Locale;
                  if ( !v29 )
                    goto LABEL_18;
                }
                if ( !v26 )
                {
                  v29 = v27 == v25;
LABEL_43:
                  if ( !v29 )
                  {
                    _free_locale(v28);
LABEL_21:
                    v33 = v55;
                    if ( v55 )
                      goto LABEL_82;
                    goto LABEL_22;
                  }
                  if ( v27 != (_DWORD)v62 )
                  {
                    _free_locale(v28);
                    continue;
                  }
                }
                break;
              }
LABEL_18:
              _free_locale(v28);
              if ( v26 > 0 )
                goto LABEL_21;
              if ( v26 )
                continue;
              break;
            }
            v35 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v52 + 40LL))(v52, &v48);
            v8 = v35;
            if ( v35 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x2BF,
                (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                (const char *)(unsigned int)v35,
                (int)v47);
              goto LABEL_23;
            }
          }
          while ( (_WORD)v48 && !v50 );
          v36 = 0;
          if ( (_WORD)v48 )
          {
            v37 = v60;
            while ( 1 )
            {
              Locale = 0LL;
              v51 = 0LL;
              v47 = &v59;
              v38 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, _locale_t *))(*(_QWORD *)v52 + 56LL))(
                      v52,
                      v36,
                      &v58,
                      &Locale);
              v8 = v38;
              if ( v38 < 0 )
                break;
              if ( v58 )
              {
                if ( v58 == 1 )
                {
                  if ( !v18 )
                  {
                    ProcessWorkingDirectoryByPID = CQueryKnownGameList::GetProcessWorkingDirectoryByPID(
                                                     v37,
                                                     v50,
                                                     (const unsigned __int16 **)&v51);
                    v8 = ProcessWorkingDirectoryByPID;
                    if ( ProcessWorkingDirectoryByPID < 0 )
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x2E3,
                        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                        (const char *)(unsigned int)ProcessWorkingDirectoryByPID,
                        (int)&v59);
                      goto LABEL_23;
                    }
                    v18 = v51;
                    v68 = v51;
                  }
                  v41 = (unsigned int)v18;
                }
                else
                {
                  if ( v58 != 2 )
                  {
                    v8 = -2147418113;
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x2F3,
                      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                      (const char *)0x8000FFFFLL,
                      (int)&v59);
                    goto LABEL_23;
                  }
                  if ( !v19 )
                  {
                    ProcessParentDirectoryByPID = CQueryKnownGameList::GetProcessParentDirectoryByPID(
                                                    v37,
                                                    v50,
                                                    (const unsigned __int16 **)&v51);
                    v8 = ProcessParentDirectoryByPID;
                    if ( ProcessParentDirectoryByPID < 0 )
                    {
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x2EC,
                        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                        (const char *)(unsigned int)ProcessParentDirectoryByPID,
                        (int)&v59);
                      goto LABEL_23;
                    }
                    v19 = v51;
                    v69 = v51;
                  }
                  v41 = (unsigned int)v19;
                }
              }
              else
              {
                if ( !v17 )
                {
                  ProcessArgsByPID = CQueryKnownGameList::GetProcessArgsByPID(v37, v50, (const unsigned __int16 **)&v51);
                  v8 = ProcessArgsByPID;
                  if ( ProcessArgsByPID < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x2DA,
                      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
                      (const char *)(unsigned int)ProcessArgsByPID,
                      (int)&v59);
                    goto LABEL_23;
                  }
                  v17 = v51;
                  v67 = v51;
                }
                v41 = (unsigned int)v17;
              }
              if ( !KnownGameList::StrStrInsensitive(
                      (KnownGameList *)Locale,
                      (const unsigned __int16 *)(unsigned int)v59,
                      v41,
                      v39) )
                goto LABEL_10;
              if ( ++v36 >= (unsigned __int16)v48 )
                goto LABEL_69;
            }
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x2D4,
              (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
              (const char *)(unsigned int)v38,
              (int)&v59);
            goto LABEL_23;
          }
LABEL_69:
          Microsoft::WRL::ComPtr<KnownGameList::IGameEntry>::operator=(&v55, &v52);
          if ( !(_WORD)v48 )
            goto LABEL_10;
          v23 = (int)v53;
LABEL_71:
          v33 = v55;
          if ( !v55 )
          {
            if ( v23 != 1 )
            {
              v44 = v63;
              goto LABEL_85;
            }
            goto LABEL_22;
          }
LABEL_82:
          v53 = 0LL;
          v60 = v33;
          v45 = Microsoft::WRL::Details::MakeAndInitialize<CGameEntry,KnownGameList::IGameEntry,KnownGameList::IGameEntry *>(
                  &v53,
                  &v60);
          v8 = v45;
          if ( v45 >= 0 )
          {
            v46 = v53;
            v53 = 0LL;
            v44 = v63;
            *v63 = v46;
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v53);
LABEL_85:
            v29 = *v44 == 0LL;
            v8 = 0;
            if ( v29 )
LABEL_22:
              v8 = -2147023728;
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x315,
              (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
              (const char *)(unsigned int)v45,
              (int)v47);
            Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v53);
          }
LABEL_23:
          if ( v19 )
            operator delete[](v19);
          if ( v18 )
            operator delete[](v18);
          if ( v17 )
            operator delete[](v17);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v55);
          Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v52);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v56);
        goto LABEL_31;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x297,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)v13,
        (int)v47);
    }
    else
    {
      v8 = -2147024882;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x293,
        (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)0x8007000ELL,
        (int)v47);
    }
  }
  else if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28E,
      (unsigned int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v11,
      (int)v47);
  }
LABEL_31:
  if ( v5 )
    operator delete[](v5);
  return v8;
}
