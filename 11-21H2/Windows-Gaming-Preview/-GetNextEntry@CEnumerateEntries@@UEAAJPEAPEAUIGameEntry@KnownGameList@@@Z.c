/*
 * XREFs of ?GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180048810
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000369C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CGameEntry@@QEAA@XZ @ 0x180047AB4 (--0CGameEntry@@QEAA@XZ.c)
 *     ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x1800480A0 (-CompleteInitialization@CGameEntry@@AEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004ACE0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CEnumerateEntries::GetNextEntry(CEnumerateEntries *this, struct KnownGameList::IGameEntry **a2)
{
  CGameEntry *v4; // rbx
  int v5; // edi
  __int64 v6; // rdx
  CGameEntry *v7; // rax
  CGameEntry *v8; // r14
  int v9; // edx
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  unsigned __int64 v13; // r9
  unsigned int v14; // eax
  __int64 v15; // rcx
  struct KnownGameList::IGameEntry *v16; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned int v19; // [rsp+48h] [rbp+10h] BYREF
  CGameEntry *v20; // [rsp+50h] [rbp+18h]

  v4 = 0LL;
  if ( !a2 )
  {
    v5 = -2147467261;
    v6 = 1530LL;
LABEL_16:
    v13 = (unsigned int)v5;
    goto LABEL_17;
  }
  *a2 = 0LL;
  if ( !*((_DWORD *)this + 6) )
  {
    v5 = 1;
    goto LABEL_19;
  }
  v4 = 0LL;
  v20 = 0LL;
  v7 = (CGameEntry *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( !v7 )
  {
    v5 = -2147024882;
LABEL_11:
    v6 = 1539LL;
    goto LABEL_16;
  }
  v8 = CGameEntry::CGameEntry(v7);
  v9 = *((_DWORD *)this + 6);
  v10 = *((_QWORD *)this + 2);
  *((_QWORD *)v8 + 2) = v10;
  *((_QWORD *)v8 + 3) = v10;
  *((_DWORD *)v8 + 8) = v9;
  v11 = CGameEntry::CompleteInitialization(v8);
  v5 = v11;
  if ( v11 >= 0 )
  {
    (*(void (__fastcall **)(CGameEntry *))(*(_QWORD *)v8 + 8LL))(v8);
    v4 = v8;
    v20 = v8;
    (*(void (__fastcall **)(CGameEntry *))(*(_QWORD *)v8 + 16LL))(v8);
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4B0,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v11);
    (*(void (__fastcall **)(CGameEntry *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  if ( v5 < 0 )
    goto LABEL_11;
  v12 = (*(__int64 (__fastcall **)(CGameEntry *, unsigned int *))(*(_QWORD *)v4 + 80LL))(v4, &v19);
  v5 = v12;
  if ( v12 < 0 )
  {
    v13 = (unsigned int)v12;
    v6 = 1541LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v13);
    goto LABEL_19;
  }
  v14 = *((_DWORD *)this + 6);
  v15 = v19;
  if ( v19 > v14 )
  {
    v5 = -2147024883;
    v6 = 1543LL;
    goto LABEL_16;
  }
  *((_DWORD *)this + 6) = v14 - v19;
  *((_QWORD *)this + 2) += v15;
  v16 = v4;
  v4 = 0LL;
  *a2 = v16;
  v5 = 0;
LABEL_19:
  if ( v4 )
    (*(void (__fastcall **)(CGameEntry *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v5;
}
