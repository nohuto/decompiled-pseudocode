/*
 * XREFs of ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x180048EB0
 * Callers:
 *     ?RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z @ 0x1800489E0 (-RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180049630 (-GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MarkConsumed@CGameEntry@@AEAAJK_N@Z @ 0x1800492B8 (-MarkConsumed@CGameEntry@@AEAAJK_N@Z.c)
 *     ?VerifyAvailable@CGameEntry@@AEAAJK@Z @ 0x180049370 (-VerifyAvailable@CGameEntry@@AEAAJK@Z.c)
 *     ?ReadUShort@CGameEntry@@AEAAJPEAG_N@Z @ 0x1800493AC (-ReadUShort@CGameEntry@@AEAAJPEAG_N@Z.c)
 *     ?ReadDWORD@CGameEntry@@AEAAJPEAK@Z @ 0x180049430 (-ReadDWORD@CGameEntry@@AEAAJPEAK@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBAC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x18004BBC4 (--_V@YAXPEAX@Z.c)
 */

__int64 __fastcall CGameEntry::CompleteInitialization(CGameEntry *this)
{
  int DWORD; // edi
  bool v3; // r8
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 v7; // rdx
  unsigned __int16 *v9; // rsi
  unsigned int v10; // edx
  bool v11; // r8
  _WORD *v12; // rdi
  int UShort; // esi
  bool v14; // r8
  __int64 v15; // rdx
  _WORD *v16; // r14
  unsigned __int64 v17; // rax
  void *v18; // rax
  void *v19; // rcx
  void *v20; // rsi
  unsigned int v21; // r15d
  __int64 v22; // rsi
  int v23; // ebp
  unsigned __int64 v24; // rax
  char *v25; // rax
  char *v26; // rcx
  char *v27; // rdi
  __int64 v28; // rdx
  bool v29; // cf
  unsigned int v30; // ebp
  __int64 v31; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  DWORD = CGameEntry::ReadDWORD(this, (unsigned int *)this + 9);
  if ( DWORD < 0 )
  {
    v4 = 1334LL;
LABEL_62:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)DWORD);
    return (unsigned int)DWORD;
  }
  v5 = *((unsigned int *)this + 9);
  if ( v5 > (unsigned __int64)*((unsigned int *)this + 8) + 4 )
  {
    v6 = -2147483637;
    v7 = 1338LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v6);
    return v6;
  }
  if ( (unsigned int)v5 < 4 )
  {
    *((_DWORD *)this + 8) = -1;
    DWORD = -2147024362;
    v4 = 1342LL;
    goto LABEL_62;
  }
  v9 = (unsigned __int16 *)((char *)this + 48);
  *((_DWORD *)this + 8) = v5 - 4;
  DWORD = CGameEntry::ReadUShort(this, (unsigned __int16 *)this + 24, v3);
  if ( DWORD < 0 )
  {
    v4 = 1346LL;
    goto LABEL_62;
  }
  DWORD = CGameEntry::VerifyAvailable(this, *v9);
  if ( DWORD < 0 )
  {
    v4 = 1348LL;
    goto LABEL_62;
  }
  v10 = *v9;
  *((_QWORD *)this + 5) = *((_QWORD *)this + 2);
  DWORD = CGameEntry::MarkConsumed(this, v10, 1);
  if ( DWORD < 0 )
  {
    v4 = 1352LL;
    goto LABEL_62;
  }
  v12 = (_WORD *)((char *)this + 50);
  UShort = CGameEntry::ReadUShort(this, (unsigned __int16 *)this + 25, v11);
  if ( UShort < 0 )
  {
    v15 = 1354LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)UShort);
    return (unsigned int)UShort;
  }
  if ( 12 * (unsigned int)(unsigned __int16)*v12 > *((_DWORD *)this + 8) )
  {
    v6 = -2147024809;
    v7 = 1356LL;
    goto LABEL_5;
  }
  v16 = (_WORD *)((char *)this + 52);
  UShort = CGameEntry::ReadUShort(this, (unsigned __int16 *)this + 26, v14);
  if ( UShort < 0 )
  {
    v15 = 1358LL;
    goto LABEL_15;
  }
  if ( 4 * (unsigned int)(unsigned __int16)*v16 > *((_DWORD *)this + 8) )
  {
    v6 = -2147024809;
    v7 = 1360LL;
    goto LABEL_5;
  }
  if ( !*v12 )
    goto LABEL_35;
  v17 = 16LL * (unsigned __int16)*v12;
  if ( !is_mul_ok((unsigned __int16)*v12, 0x10uLL) )
    v17 = -1LL;
  v18 = operator new[](v17, (const struct std::nothrow_t *)&std::nothrow);
  v19 = (void *)*((_QWORD *)this + 7);
  v20 = v18;
  if ( v18 != v19 )
  {
    operator delete[](v19);
    v19 = v20;
    *((_QWORD *)this + 7) = v20;
  }
  if ( !v19 )
  {
    v6 = -2147024882;
    v7 = 1366LL;
    goto LABEL_5;
  }
  v21 = 0;
  if ( !*v12 )
  {
LABEL_35:
    if ( *v16 )
    {
      v24 = 16LL * (unsigned __int16)*v16;
      if ( !is_mul_ok((unsigned __int16)*v16, 0x10uLL) )
        v24 = -1LL;
      v25 = (char *)operator new[](v24, (const struct std::nothrow_t *)&std::nothrow);
      v26 = (char *)*((_QWORD *)this + 8);
      v27 = v25;
      if ( v25 != v26 )
      {
        operator delete[](v26);
        v26 = v27;
        *((_QWORD *)this + 8) = v27;
      }
      if ( !v26 )
      {
        v6 = -2147024882;
        v7 = 1386LL;
        goto LABEL_5;
      }
      v29 = *v16 != 0;
      v30 = 0;
      while ( v29 )
      {
        v31 = 16LL * v30;
        *(_DWORD *)&v26[v31 + 4] = 0;
        *(_QWORD *)(v31 + *((_QWORD *)this + 8) + 8) = 0LL;
        UShort = CGameEntry::ReadDWORD(this, (unsigned int *)(v31 + *((_QWORD *)this + 8)));
        if ( UShort < 0 )
        {
          v15 = 1393LL;
          goto LABEL_15;
        }
        v26 = (char *)*((_QWORD *)this + 8);
        if ( (*(_DWORD *)&v26[16 * v30] & 0x10000000) == 0 )
        {
          UShort = CGameEntry::ReadDWORD(this, (unsigned int *)&v26[v31 + 4]);
          if ( UShort < 0 )
          {
            v15 = 1399LL;
            goto LABEL_15;
          }
          UShort = CGameEntry::VerifyAvailable(this, *(_DWORD *)(v31 + *((_QWORD *)this + 8) + 4));
          if ( UShort < 0 )
          {
            v15 = 1401LL;
            goto LABEL_15;
          }
          *(_QWORD *)(v31 + *((_QWORD *)this + 8) + 8) = *((_QWORD *)this + 2);
          DWORD = CGameEntry::MarkConsumed(this, *(_DWORD *)(v31 + *((_QWORD *)this + 8) + 4), 1);
          if ( DWORD < 0 )
          {
            v4 = 1405LL;
            goto LABEL_62;
          }
          v26 = (char *)*((_QWORD *)this + 8);
        }
        v29 = ++v30 < (unsigned __int16)*v16;
      }
    }
    return 0LL;
  }
  while ( 1 )
  {
    v22 = 16LL * v21;
    v23 = CGameEntry::ReadDWORD(this, (unsigned int *)(v22 + *((_QWORD *)this + 7)));
    if ( v23 < 0 )
      break;
    v23 = CGameEntry::ReadDWORD(this, (unsigned int *)(v22 + *((_QWORD *)this + 7) + 4LL));
    if ( v23 < 0 )
    {
      v28 = 1372LL;
      goto LABEL_46;
    }
    v23 = CGameEntry::VerifyAvailable(this, *(_DWORD *)(v22 + *((_QWORD *)this + 7) + 4));
    if ( v23 < 0 )
    {
      v28 = 1374LL;
      goto LABEL_46;
    }
    *(_QWORD *)(v22 + *((_QWORD *)this + 7) + 8) = *((_QWORD *)this + 2);
    UShort = CGameEntry::MarkConsumed(this, *(_DWORD *)(v22 + *((_QWORD *)this + 7) + 4), 1);
    if ( UShort < 0 )
    {
      v15 = 1378LL;
      goto LABEL_15;
    }
    if ( ++v21 >= (unsigned __int16)*v12 )
      goto LABEL_35;
  }
  v28 = 1370LL;
LABEL_46:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v28,
    (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)(unsigned int)v23);
  return (unsigned int)v23;
}
