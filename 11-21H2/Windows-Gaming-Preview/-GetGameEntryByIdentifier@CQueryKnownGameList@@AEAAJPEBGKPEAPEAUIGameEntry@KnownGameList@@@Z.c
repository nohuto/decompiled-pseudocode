/*
 * XREFs of ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x1800466B4
 * Callers:
 *     ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x1800459A0 (-GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetGameEntryFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180045A70 (-GetGameEntryFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x180047218 (-GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x180047454 (-GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x1800476E4 (-GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z @ 0x180047988 (-GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z.c)
 *     ?CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z @ 0x1800486A0 (-CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z.c)
 *     ?StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z @ 0x180048B78 (-StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z.c)
 *     ?StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z @ 0x180048C48 (-StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z.c)
 *     ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x18004911C (--$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJP.c)
 *     __security_check_cookie @ 0x18004A5E0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACBC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004ACD4 (--_V@YAXPEAX@Z.c)
 *     _alloca_probe @ 0x18004BF20 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=43
__int64 __fastcall CQueryKnownGameList::GetGameEntryByIdentifier(
        CQueryKnownGameList *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct KnownGameList::IGameEntry **a4)
{
  __int64 v5; // rax
  int TOCIndexByIdentifier; // eax
  unsigned int v7; // ebx
  struct KnownGameList::IEnumerateEntries **v9; // rbx
  struct KnownGameList::IEnumerateEntries **v10; // r12
  int v11; // eax
  unsigned int v12; // r9d
  int ProcessWorkingDirectoryByPID; // edi
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  int EnumerateEntriesInstance; // eax
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // rbx
  unsigned __int16 *v21; // rsi
  unsigned __int16 *v22; // r14
  unsigned __int16 *v23; // r15
  __int64 v24; // rdi
  __int64 (__fastcall *v25)(__int64, __int64 *, __int64, __int64); // r13
  int v26; // r13d
  int v27; // eax
  __int64 v28; // r8
  int v29; // eax
  __int64 v30; // rdx
  unsigned int v31; // r13d
  bool i; // cf
  int v33; // eax
  const unsigned __int16 *v34; // r9
  unsigned __int16 *v35; // rdi
  unsigned int v36; // r8d
  unsigned __int16 *v37; // rdi
  unsigned __int16 *v38; // rdi
  const unsigned __int16 *v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rcx
  int v42; // eax
  unsigned __int16 *v43; // rcx
  __int64 v44; // rdx
  unsigned __int64 v45; // r9
  struct KnownGameList::IGameEntry **v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  unsigned int *v49; // [rsp+20h] [rbp-E0h]
  unsigned int v50; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v51; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 *v52; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v53; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v54; // [rsp+4Ch] [rbp-B4h]
  __int64 v55; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v56; // [rsp+58h] [rbp-A8h] BYREF
  int v57; // [rsp+5Ch] [rbp-A4h] BYREF
  unsigned int v58; // [rsp+60h] [rbp-A0h] BYREF
  int v59; // [rsp+64h] [rbp-9Ch]
  CQueryKnownGameList *v60; // [rsp+68h] [rbp-98h]
  unsigned int v61[2]; // [rsp+70h] [rbp-90h] BYREF
  KnownGameList *v62; // [rsp+78h] [rbp-88h] BYREF
  KnownGameList *v63; // [rsp+80h] [rbp-80h] BYREF
  struct KnownGameList::IGameEntry **v64; // [rsp+88h] [rbp-78h]
  struct KnownGameList::IEnumerateEntries **v65; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v66; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v67; // [rsp+A0h] [rbp-60h]
  unsigned __int16 *v68; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v69; // [rsp+B0h] [rbp-50h]
  __int64 v70; // [rsp+B8h] [rbp-48h]
  struct KnownGameList::IEnumerateEntries *v71[512]; // [rsp+C0h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1118h] [rbp+1018h]

  v64 = a4;
  v54 = a3;
  *(_QWORD *)v61 = a2;
  v60 = this;
  *a4 = 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v66 = (unsigned __int16 *)v5;
  TOCIndexByIdentifier = CQueryKnownGameList::GetTOCIndexByIdentifier(this, a2, &v50);
  v7 = TOCIndexByIdentifier;
  if ( TOCIndexByIdentifier < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x286,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)TOCIndexByIdentifier);
    return v7;
  }
  v9 = v71;
  v10 = 0LL;
  v65 = 0LL;
  v53 = 4096;
  v11 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, unsigned int *))(*(_QWORD *)this + 96LL))(
          this,
          v50,
          v71,
          &v53);
  ProcessWorkingDirectoryByPID = v11;
  if ( !v11 )
    goto LABEL_14;
  if ( v11 == -2147024774 )
  {
    v9 = (struct KnownGameList::IEnumerateEntries **)operator new[](v53, (const struct std::nothrow_t *)&std::nothrow);
    if ( !v9 )
    {
      ProcessWorkingDirectoryByPID = -2147024882;
      v14 = 2147942414LL;
      v15 = 659LL;
      goto LABEL_13;
    }
    operator delete[](0LL);
    v10 = v9;
    v65 = v9;
    v16 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, unsigned int *))(*(_QWORD *)this + 96LL))(
            this,
            v50,
            v9,
            &v53);
    ProcessWorkingDirectoryByPID = v16;
    if ( v16 < 0 )
    {
      v14 = (unsigned int)v16;
      v15 = 663LL;
      goto LABEL_13;
    }
LABEL_14:
    v55 = 0LL;
    EnumerateEntriesInstance = KnownGameList::CreateEnumerateEntriesInstance(
                                 (KnownGameList *)&v55,
                                 v9,
                                 (unsigned __int8 *)v53,
                                 v12);
    ProcessWorkingDirectoryByPID = EnumerateEntriesInstance;
    v18 = 0LL;
    if ( EnumerateEntriesInstance >= 0 )
    {
      v19 = 0LL;
      v51 = 0LL;
      v20 = 0LL;
      v70 = 0LL;
      v21 = 0LL;
      v67 = 0LL;
      v22 = 0LL;
      v68 = 0LL;
      v23 = 0LL;
      v69 = 0LL;
      while ( 1 )
      {
        v24 = v55;
        v25 = *(__int64 (__fastcall **)(__int64, __int64 *, __int64, __int64))(*(_QWORD *)v55 + 24LL);
        if ( v19 )
        {
          v51 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        }
        v26 = v25(v24, &v51, v19, v18);
        v59 = v26;
        if ( v26 )
          break;
        v62 = 0LL;
        ProcessWorkingDirectoryByPID = (*(__int64 (__fastcall **)(__int64, KnownGameList **, unsigned int *))(*(_QWORD *)v51 + 24LL))(
                                         v51,
                                         &v62,
                                         &v56);
        if ( ProcessWorkingDirectoryByPID < 0 )
        {
          v44 = 681LL;
LABEL_71:
          v45 = (unsigned int)ProcessWorkingDirectoryByPID;
          goto LABEL_72;
        }
        v27 = KnownGameList::StrCmpInsensitive(
                v62,
                (const unsigned __int16 *)v56,
                v61[0],
                (const unsigned __int16 *)(unsigned int)v66,
                (unsigned int)v49);
        v18 = 0LL;
        if ( v27 > 0 )
        {
          if ( !v20 )
          {
LABEL_77:
            ProcessWorkingDirectoryByPID = -2147023728;
            goto LABEL_78;
          }
          goto LABEL_58;
        }
        if ( v27 )
          goto LABEL_49;
        v29 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64, _QWORD))(*(_QWORD *)v51 + 40LL))(
                v51,
                &v50,
                v28,
                0LL);
        ProcessWorkingDirectoryByPID = v29;
        v18 = 0LL;
        if ( v29 < 0 )
        {
          v45 = (unsigned int)v29;
          v44 = 703LL;
LABEL_72:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v44,
            (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)v45);
          goto LABEL_78;
        }
        v30 = (unsigned __int16)v50;
        if ( (_WORD)v50 && !v54 )
        {
LABEL_49:
          v19 = v51;
        }
        else
        {
          v31 = 0;
          for ( i = (_WORD)v50 != 0; i; i = v31 < (unsigned __int16)v50 )
          {
            v63 = 0LL;
            v52 = 0LL;
            v49 = &v58;
            v33 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *, KnownGameList **))(*(_QWORD *)v51 + 56LL))(
                    v51,
                    v31,
                    &v57,
                    &v63);
            ProcessWorkingDirectoryByPID = v33;
            if ( v33 < 0 )
            {
              v45 = (unsigned int)v33;
              v44 = 724LL;
              goto LABEL_72;
            }
            if ( v57 )
            {
              if ( v57 == 1 )
              {
                if ( !v22 )
                {
                  ProcessWorkingDirectoryByPID = CQueryKnownGameList::GetProcessWorkingDirectoryByPID(
                                                   v60,
                                                   v54,
                                                   (const unsigned __int16 **)&v52);
                  if ( ProcessWorkingDirectoryByPID < 0 )
                  {
                    v44 = 739LL;
                    goto LABEL_71;
                  }
                  v37 = v52;
                  if ( v52 )
                  {
                    operator delete[](0LL);
                    v22 = v37;
                    v68 = v37;
                  }
                }
                v36 = (unsigned int)v22;
              }
              else
              {
                if ( v57 != 2 )
                {
                  ProcessWorkingDirectoryByPID = -2147418113;
                  v44 = 755LL;
                  goto LABEL_71;
                }
                if ( !v23 )
                {
                  ProcessWorkingDirectoryByPID = CQueryKnownGameList::GetProcessParentDirectoryByPID(
                                                   v60,
                                                   v54,
                                                   (const unsigned __int16 **)&v52);
                  if ( ProcessWorkingDirectoryByPID < 0 )
                  {
                    v44 = 748LL;
                    goto LABEL_71;
                  }
                  v38 = v52;
                  if ( v52 )
                  {
                    operator delete[](0LL);
                    v23 = v38;
                    v69 = v38;
                  }
                }
                v36 = (unsigned int)v23;
              }
            }
            else
            {
              if ( !v21 )
              {
                ProcessWorkingDirectoryByPID = CQueryKnownGameList::GetProcessArgsByPID(
                                                 v60,
                                                 v54,
                                                 (const unsigned __int16 **)&v52);
                if ( ProcessWorkingDirectoryByPID < 0 )
                {
                  v44 = 730LL;
                  goto LABEL_71;
                }
                v35 = v52;
                if ( v52 )
                {
                  operator delete[](0LL);
                  v21 = v35;
                  v67 = v35;
                }
              }
              v36 = (unsigned int)v21;
            }
            v39 = KnownGameList::StrStrInsensitive(v63, (const unsigned __int16 *)v58, v36, v34);
            v18 = 0LL;
            if ( !v39 )
              goto LABEL_49;
            ++v31;
            v30 = (unsigned __int16)v50;
          }
          v19 = v51;
          if ( v20 != v51 )
          {
            v40 = v51;
            if ( v51 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v51 + 8LL))(v51);
              v19 = v51;
              v30 = (unsigned __int16)v50;
              v18 = 0LL;
            }
            v41 = v20;
            v20 = v40;
            v70 = v40;
            if ( v41 )
            {
              (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v41 + 16LL))(v41, v30, v19, 0LL);
              v19 = v51;
              LOWORD(v30) = v50;
              v18 = 0LL;
            }
          }
          if ( (_WORD)v30 )
          {
            v26 = v59;
            break;
          }
        }
      }
      if ( !v20 )
      {
        v46 = v64;
        goto LABEL_75;
      }
LABEL_58:
      v26 = 0;
      v52 = 0LL;
      *(_QWORD *)v61 = v20;
      v42 = Microsoft::WRL::Details::MakeAndInitialize<CGameEntry,KnownGameList::IGameEntry,KnownGameList::IGameEntry *>(
              &v52,
              v61);
      ProcessWorkingDirectoryByPID = v42;
      if ( v42 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x315,
          (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
          (const char *)(unsigned int)v42);
        v43 = v52;
        if ( v52 )
        {
          v52 = 0LL;
          (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v43 + 16LL))(v43);
        }
        goto LABEL_78;
      }
      v46 = v64;
      *v64 = (struct KnownGameList::IGameEntry *)v52;
LABEL_75:
      if ( v26 == 1 )
        goto LABEL_77;
      ProcessWorkingDirectoryByPID = 0;
      if ( !*v46 )
        goto LABEL_77;
LABEL_78:
      operator delete[](v23);
      operator delete[](v22);
      operator delete[](v21);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      v47 = v51;
      if ( v51 )
      {
        v51 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x29B,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)EnumerateEntriesInstance);
    }
    v48 = v55;
    if ( v55 )
    {
      v55 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v48 + 16LL))(v48);
    }
    goto LABEL_84;
  }
  if ( v11 < 0 )
  {
    v14 = (unsigned int)v11;
    v15 = 654LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v14);
  }
LABEL_84:
  if ( v10 )
    operator delete[](v10);
  return (unsigned int)ProcessWorkingDirectoryByPID;
}
