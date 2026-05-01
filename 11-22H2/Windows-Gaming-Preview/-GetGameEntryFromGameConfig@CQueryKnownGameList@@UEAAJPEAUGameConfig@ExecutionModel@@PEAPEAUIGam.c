/*
 * XREFs of ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180046A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z @ 0x1800487A0 (-GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z.c)
 *     ?CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z @ 0x1800494B0 (-CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z.c)
 *     ?StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z @ 0x1800499A0 (-StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z.c)
 *     ?StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z @ 0x180049A70 (-StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z.c)
 *     ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x180049F3C (--$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJP.c)
 *     __security_check_cookie @ 0x18004B4D0 (__security_check_cookie.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBAC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004BBC4 (--_V@YAXPEAX@Z.c)
 *     _alloca_probe @ 0x18004CE10 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=23
__int64 __fastcall CQueryKnownGameList::GetGameEntryFromGameConfig(
        CQueryKnownGameList *this,
        struct ExecutionModel::GameConfig *a2,
        struct KnownGameList::IGameEntry **a3)
{
  struct KnownGameList::IEnumerateEntries **v6; // rdi
  KnownGameList *v7; // rax
  __int64 v8; // r12
  int TOCIndexByIdentifier; // eax
  unsigned int v10; // ebx
  struct KnownGameList::IEnumerateEntries **v11; // rsi
  int v12; // eax
  unsigned int v13; // r9d
  __int64 v14; // r9
  __int64 v15; // rdx
  int v16; // eax
  int EnumerateEntriesInstance; // eax
  unsigned int v18; // r14d
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, _DWORD *); // rsi
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // esi
  int v24; // eax
  int v25; // eax
  bool i; // cf
  const unsigned __int16 *v27; // r9
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // eax
  unsigned int v32; // eax
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  int v36; // eax
  unsigned __int16 *v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  unsigned __int16 **v41; // [rsp+20h] [rbp-E0h]
  unsigned int v42; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v43[3]; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int16 *v44; // [rsp+40h] [rbp-C0h] BYREF
  KnownGameList *v45; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v46; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v47; // [rsp+58h] [rbp-A8h] BYREF
  int v48; // [rsp+5Ch] [rbp-A4h] BYREF
  KnownGameList *v49; // [rsp+60h] [rbp-A0h] BYREF
  struct KnownGameList::IEnumerateEntries **v50; // [rsp+68h] [rbp-98h]
  struct KnownGameList::IEnumerateEntries *v51[512]; // [rsp+70h] [rbp-90h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+10B8h] [rbp+FB8h]

  v6 = 0LL;
  *a3 = 0LL;
  v7 = (KnownGameList *)*((_QWORD *)a2 + 3);
  v45 = v7;
  v8 = -1LL;
  do
    ++v8;
  while ( *((_WORD *)v7 + v8) );
  TOCIndexByIdentifier = CQueryKnownGameList::GetTOCIndexByIdentifier(this, (const unsigned __int16 *)v7, &v42);
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
  v11 = v51;
  v50 = 0LL;
  v43[0] = 4096;
  v12 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, _DWORD *))(*(_QWORD *)this + 96LL))(
          this,
          v42,
          v51,
          v43);
  v10 = v12;
  if ( !v12 )
    goto LABEL_14;
  if ( v12 == -2147024774 )
  {
    v11 = (struct KnownGameList::IEnumerateEntries **)operator new[](
                                                        v43[0],
                                                        (const struct std::nothrow_t *)&std::nothrow);
    if ( !v11 )
    {
      v10 = -2147024882;
      v14 = 2147942414LL;
      v15 = 403LL;
      goto LABEL_13;
    }
    operator delete[](0LL);
    v6 = v11;
    v50 = v11;
    v16 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, _DWORD *))(*(_QWORD *)this + 96LL))(
            this,
            v42,
            v11,
            v43);
    v10 = v16;
    if ( v16 < 0 )
    {
      v14 = (unsigned int)v16;
      v15 = 407LL;
      goto LABEL_13;
    }
LABEL_14:
    v46 = 0LL;
    EnumerateEntriesInstance = KnownGameList::CreateEnumerateEntriesInstance(
                                 (KnownGameList *)&v46,
                                 v11,
                                 (unsigned __int8 *)v43[0],
                                 v13);
    v10 = EnumerateEntriesInstance;
    if ( EnumerateEntriesInstance >= 0 )
    {
      *(_QWORD *)&v43[1] = 0LL;
      v18 = (unsigned int)v45;
      do
      {
LABEL_17:
        v19 = v46;
        v20 = *(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v46 + 24LL);
        v21 = *(_QWORD *)&v43[1];
        if ( *(_QWORD *)&v43[1] )
        {
          *(_QWORD *)&v43[1] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        }
        v22 = v20(v19, &v43[1]);
        v23 = 0;
        if ( v22 )
        {
          if ( v22 != 1 )
            goto LABEL_61;
          goto LABEL_62;
        }
        v49 = 0LL;
        v24 = (*(__int64 (__fastcall **)(_QWORD, KnownGameList **, unsigned int *))(**(_QWORD **)&v43[1] + 24LL))(
                *(_QWORD *)&v43[1],
                &v49,
                &v47);
        v10 = v24;
        if ( v24 < 0 )
        {
          v35 = 424LL;
          goto LABEL_58;
        }
        v25 = KnownGameList::StrCmpInsensitive(
                v49,
                (const unsigned __int16 *)v47,
                v18,
                (const unsigned __int16 *)(unsigned int)v8,
                (unsigned int)v41);
        if ( v25 > 0 )
        {
          v10 = -2147023728;
          goto LABEL_63;
        }
      }
      while ( v25 );
      v24 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *))(**(_QWORD **)&v43[1] + 40LL))(*(_QWORD *)&v43[1], &v42);
      v10 = v24;
      if ( v24 >= 0 )
      {
        for ( i = (_WORD)v42 != 0; i; i = v23 < (unsigned __int16)v42 )
        {
          v45 = 0LL;
          v41 = &v44;
          v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, KnownGameList **))(**(_QWORD **)&v43[1] + 56LL))(
                  *(_QWORD *)&v43[1],
                  v23,
                  &v48,
                  &v45);
          v10 = v24;
          if ( v24 < 0 )
          {
            v35 = 451LL;
            goto LABEL_58;
          }
          if ( v48 )
          {
            if ( v48 == 1 )
            {
              v31 = 0;
              if ( !*((_DWORD *)a2 + 4) )
                goto LABEL_17;
              v29 = *((_QWORD *)a2 + 1);
              while ( 1 )
              {
                v30 = 2LL * v31;
                if ( *(_DWORD *)(v29 + 16LL * v31) == 1 )
                  break;
                if ( ++v31 >= *((_DWORD *)a2 + 4) )
                  goto LABEL_17;
              }
            }
            else
            {
              if ( v48 != 2 )
              {
                v10 = -2147418113;
                v34 = 2147549183LL;
                v35 = 490LL;
                goto LABEL_59;
              }
              v32 = 0;
              if ( !*((_DWORD *)a2 + 4) )
                goto LABEL_17;
              v29 = *((_QWORD *)a2 + 1);
              while ( 1 )
              {
                v30 = 2LL * v32;
                if ( *(_DWORD *)(v29 + 16LL * v32) == 2 )
                  break;
                if ( ++v32 >= *((_DWORD *)a2 + 4) )
                  goto LABEL_17;
              }
            }
          }
          else
          {
            v28 = 0;
            if ( !*((_DWORD *)a2 + 4) )
              goto LABEL_17;
            v29 = *((_QWORD *)a2 + 1);
            while ( 1 )
            {
              v30 = 2LL * v28;
              if ( !*(_DWORD *)(v29 + 16LL * v28) )
                break;
              if ( ++v28 >= *((_DWORD *)a2 + 4) )
                goto LABEL_17;
            }
          }
          v33 = *(_QWORD *)(v29 + 8 * v30 + 8);
          if ( !v33 || !KnownGameList::StrStrInsensitive(v45, (const unsigned __int16 *)(unsigned int)v44, v33, v27) )
            goto LABEL_17;
          ++v23;
        }
        v44 = 0LL;
        v45 = *(KnownGameList **)&v43[1];
        v36 = Microsoft::WRL::Details::MakeAndInitialize<CGameEntry,KnownGameList::IGameEntry,KnownGameList::IGameEntry *>(
                &v44,
                &v45);
        v10 = v36;
        if ( v36 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x206,
            (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
            (const char *)(unsigned int)v36);
          v37 = v44;
          if ( v44 )
          {
            v44 = 0LL;
            (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v37 + 16LL))(v37);
          }
          goto LABEL_63;
        }
        *a3 = (struct KnownGameList::IGameEntry *)v44;
LABEL_61:
        v10 = 0;
        if ( *a3 )
          goto LABEL_63;
LABEL_62:
        v10 = -2147023728;
        goto LABEL_63;
      }
      v35 = 439LL;
LABEL_58:
      v34 = (unsigned int)v24;
LABEL_59:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v35,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)v34);
LABEL_63:
      v38 = *(_QWORD *)&v43[1];
      if ( *(_QWORD *)&v43[1] )
      {
        *(_QWORD *)&v43[1] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x19D,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)EnumerateEntriesInstance);
    }
    v39 = v46;
    if ( v46 )
    {
      v46 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v39 + 16LL))(v39);
    }
    goto LABEL_67;
  }
  if ( v12 >= 0 )
    goto LABEL_67;
  v14 = (unsigned int)v12;
  v15 = 398LL;
LABEL_13:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v15,
    (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)v14);
LABEL_67:
  if ( v6 )
    operator delete[](v6);
  return v10;
}
