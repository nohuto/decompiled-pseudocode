/*
 * XREFs of ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18073F980
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z @ 0x18002FA5C (-CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z.c)
 *     ?GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z @ 0x18002FC4C (-GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C8FA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 *     _alloca_probe @ 0x18028E130 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x18073F438 (--$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJP.c)
 *     ?StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z @ 0x180741000 (-StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z.c)
 *     ?StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z @ 0x1807410D0 (-StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CQueryKnownGameList::GetGameEntryFromGameConfig(
        CQueryKnownGameList *this,
        struct ExecutionModel::GameConfig *a2,
        struct KnownGameList::IGameEntry **a3)
{
  void *v6; // rdi
  KnownGameList *v7; // rax
  __int64 v8; // r12
  int TOCIndexByIdentifier; // eax
  unsigned int v10; // ebx
  struct KnownGameList::IEnumerateEntries **v11; // r15
  int v12; // eax
  __int64 v13; // rdx
  void *v14; // rax
  __int64 v15; // r9
  unsigned int v16; // ebx
  int EnumerateEntriesInstance; // eax
  unsigned int v18; // r15d
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, KnownGameList **); // rsi
  int v21; // eax
  unsigned int v22; // esi
  int v23; // eax
  int v24; // eax
  const unsigned __int16 *v25; // r9
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // r8
  unsigned int v29; // eax
  unsigned int v30; // eax
  __int64 v31; // r8
  int v32; // eax
  __int64 v33; // r9
  __int64 v34; // rdx
  struct KnownGameList::IGameEntry *v35; // rax
  _DWORD *v37; // [rsp+20h] [rbp-E0h]
  unsigned int v38; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v39[3]; // [rsp+34h] [rbp-CCh] BYREF
  KnownGameList *v40; // [rsp+40h] [rbp-C0h] BYREF
  KnownGameList *v41; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v43; // [rsp+58h] [rbp-A8h] BYREF
  int v44; // [rsp+5Ch] [rbp-A4h] BYREF
  KnownGameList *v45; // [rsp+60h] [rbp-A0h] BYREF
  void *v46; // [rsp+68h] [rbp-98h]
  _BYTE v47[4096]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+10B8h] [rbp+FB8h]

  v6 = 0LL;
  *a3 = 0LL;
  v7 = (KnownGameList *)*((_QWORD *)a2 + 3);
  v41 = v7;
  v8 = -1LL;
  do
    ++v8;
  while ( *((_WORD *)v7 + v8) );
  TOCIndexByIdentifier = CQueryKnownGameList::GetTOCIndexByIdentifier(this, (const unsigned __int16 *)v7, &v38);
  v10 = TOCIndexByIdentifier;
  if ( TOCIndexByIdentifier < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x185,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)TOCIndexByIdentifier);
    return v10;
  }
  v11 = (struct KnownGameList::IEnumerateEntries **)v47;
  v46 = 0LL;
  v39[0] = 4096;
  v12 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, _BYTE *, _DWORD *))(*(_QWORD *)this + 96LL))(
          this,
          v38,
          v47,
          v39);
  v10 = v12;
  if ( v12 )
  {
    if ( v12 != -2147024774 )
    {
      if ( v12 >= 0 )
        goto LABEL_60;
      v13 = 398LL;
      goto LABEL_13;
    }
    v14 = operator new[](v39[0], (const struct std::nothrow_t *)&std::nothrow);
    v6 = v14;
    v46 = v14;
    if ( !v14 )
    {
      v10 = -2147024882;
      v15 = 2147942414LL;
      v13 = 403LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)v15);
      goto LABEL_60;
    }
    v11 = (struct KnownGameList::IEnumerateEntries **)v14;
    v12 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, void *, _DWORD *))(*(_QWORD *)this + 96LL))(
            this,
            v38,
            v14,
            v39);
    v10 = v12;
    if ( v12 < 0 )
    {
      v13 = 407LL;
LABEL_13:
      v15 = (unsigned int)v12;
      goto LABEL_14;
    }
  }
  v42 = 0LL;
  v16 = v39[0];
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v42);
  EnumerateEntriesInstance = KnownGameList::CreateEnumerateEntriesInstance(
                               (KnownGameList *)&v42,
                               v11,
                               (unsigned __int8 *)v16);
  v10 = EnumerateEntriesInstance;
  if ( EnumerateEntriesInstance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19D,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)EnumerateEntriesInstance);
    goto LABEL_59;
  }
  v40 = 0LL;
  v18 = (unsigned int)v41;
  do
  {
LABEL_18:
    v19 = v42;
    v20 = *(__int64 (__fastcall **)(__int64, KnownGameList **))(*(_QWORD *)v42 + 24LL);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v40);
    v21 = v20(v19, &v40);
    v22 = 0;
    if ( v21 )
    {
      if ( v21 != 1 )
        goto LABEL_56;
      goto LABEL_57;
    }
    v45 = 0LL;
    v23 = (*(__int64 (__fastcall **)(KnownGameList *, KnownGameList **, unsigned int *))(*(_QWORD *)v40 + 24LL))(
            v40,
            &v45,
            &v43);
    v10 = v23;
    if ( v23 < 0 )
    {
      v34 = 424LL;
      goto LABEL_53;
    }
    v24 = KnownGameList::StrCmpInsensitive(
            v45,
            (const unsigned __int16 *)v43,
            v18,
            (const unsigned __int16 *)(unsigned int)v8,
            (unsigned int)v37);
    if ( v24 > 0 )
      goto LABEL_57;
  }
  while ( v24 );
  v23 = (*(__int64 (__fastcall **)(KnownGameList *, unsigned int *))(*(_QWORD *)v40 + 40LL))(v40, &v38);
  v10 = v23;
  if ( v23 < 0 )
  {
    v34 = 439LL;
LABEL_53:
    v33 = (unsigned int)v23;
LABEL_54:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v34,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v33);
    goto LABEL_58;
  }
  if ( (_WORD)v38 )
  {
    while ( 1 )
    {
      v41 = 0LL;
      v37 = &v39[1];
      v10 = (*(__int64 (__fastcall **)(KnownGameList *, _QWORD, int *, KnownGameList **))(*(_QWORD *)v40 + 56LL))(
              v40,
              v22,
              &v44,
              &v41);
      if ( (v10 & 0x80000000) != 0 )
        break;
      if ( v44 )
      {
        if ( v44 == 1 )
        {
          v29 = 0;
          if ( !*((_DWORD *)a2 + 4) )
            goto LABEL_18;
          v27 = *((_QWORD *)a2 + 1);
          while ( 1 )
          {
            v28 = 2LL * v29;
            if ( *(_DWORD *)(v27 + 16LL * v29) == 1 )
              break;
            if ( ++v29 >= *((_DWORD *)a2 + 4) )
              goto LABEL_18;
          }
        }
        else
        {
          if ( v44 != 2 )
          {
            v10 = -2147418113;
            v33 = 2147549183LL;
            v34 = 490LL;
            goto LABEL_54;
          }
          v30 = 0;
          if ( !*((_DWORD *)a2 + 4) )
            goto LABEL_18;
          v27 = *((_QWORD *)a2 + 1);
          while ( 1 )
          {
            v28 = 2LL * v30;
            if ( *(_DWORD *)(v27 + 16LL * v30) == 2 )
              break;
            if ( ++v30 >= *((_DWORD *)a2 + 4) )
              goto LABEL_18;
          }
        }
      }
      else
      {
        v26 = 0;
        if ( !*((_DWORD *)a2 + 4) )
          goto LABEL_18;
        v27 = *((_QWORD *)a2 + 1);
        while ( 1 )
        {
          v28 = 2LL * v26;
          if ( !*(_DWORD *)(v27 + 16LL * v26) )
            break;
          if ( ++v26 >= *((_DWORD *)a2 + 4) )
            goto LABEL_18;
        }
      }
      v31 = *(_QWORD *)(v27 + 8 * v28 + 8);
      if ( !v31 || !KnownGameList::StrStrInsensitive(v41, (const unsigned __int16 *)v39[1], v31, v25) )
        goto LABEL_18;
      if ( ++v22 >= (unsigned __int16)v38 )
        goto LABEL_46;
    }
    v33 = v10;
    v34 = 451LL;
    goto LABEL_54;
  }
LABEL_46:
  *(_QWORD *)&v39[1] = 0LL;
  v41 = v40;
  v32 = Microsoft::WRL::Details::MakeAndInitialize<CGameEntry,KnownGameList::IGameEntry,KnownGameList::IGameEntry *>(
          &v39[1],
          &v41);
  v10 = v32;
  if ( v32 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x206,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v32);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v39[1]);
    goto LABEL_58;
  }
  v35 = *(struct KnownGameList::IGameEntry **)&v39[1];
  *(_QWORD *)&v39[1] = 0LL;
  *a3 = v35;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v39[1]);
LABEL_56:
  v10 = 0;
  if ( !*a3 )
LABEL_57:
    v10 = -2147023728;
LABEL_58:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v40);
LABEL_59:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v42);
LABEL_60:
  if ( v6 )
    operator delete[](v6);
  return v10;
}
