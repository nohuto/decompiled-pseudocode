/*
 * XREFs of ?GetNextEntry@CEnumerateEntries@@UEAAJPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180049630
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800036D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0CGameEntry@@QEAA@XZ @ 0x1800488CC (--0CGameEntry@@QEAA@XZ.c)
 *     ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x180048EB0 (-CompleteInitialization@CGameEntry@@AEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004BBD0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CEnumerateEntries::GetNextEntry(CEnumerateEntries *this, struct KnownGameList::IGameEntry **a2)
{
  CGameEntry *v4; // rbx
  int v5; // edi
  __int64 v6; // rdx
  unsigned int *v7; // r15
  CGameEntry *v8; // rax
  CGameEntry *v9; // r14
  unsigned int v10; // edx
  __int64 v11; // rcx
  int v12; // eax
  int v13; // eax
  unsigned __int64 v14; // r9
  __int64 v15; // rcx
  struct KnownGameList::IGameEntry *v16; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v19; // [rsp+58h] [rbp+10h] BYREF
  CGameEntry *v20; // [rsp+60h] [rbp+18h]

  v4 = 0LL;
  if ( !a2 )
  {
    v5 = -2147467261;
    v6 = 1530LL;
LABEL_16:
    v14 = (unsigned int)v5;
    goto LABEL_17;
  }
  *a2 = 0LL;
  v7 = (unsigned int *)((char *)this + 24);
  if ( !*((_DWORD *)this + 6) )
  {
    v5 = 1;
    goto LABEL_19;
  }
  v4 = 0LL;
  v20 = 0LL;
  v8 = (CGameEntry *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v9 = CGameEntry::CGameEntry(v8);
    v10 = *v7;
    v11 = *((_QWORD *)this + 2);
    *((_QWORD *)v9 + 2) = v11;
    *((_QWORD *)v9 + 3) = v11;
    *((_DWORD *)v9 + 8) = v10;
    v12 = CGameEntry::CompleteInitialization(v9);
    v5 = v12;
    if ( v12 >= 0 )
    {
      (*(void (__fastcall **)(CGameEntry *))(*(_QWORD *)v9 + 8LL))(v9);
      v4 = v9;
      v20 = v9;
      (*(void (__fastcall **)(CGameEntry *))(*(_QWORD *)v9 + 16LL))(v9);
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4B0,
        (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)(unsigned int)v12);
      (*(void (__fastcall **)(CGameEntry *))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  else
  {
    v5 = -2147024882;
  }
  if ( v5 < 0 )
  {
    v6 = 1539LL;
    goto LABEL_16;
  }
  v13 = (*(__int64 (__fastcall **)(CGameEntry *, unsigned int *))(*(_QWORD *)v4 + 80LL))(v4, &v19);
  v5 = v13;
  if ( v13 < 0 )
  {
    v14 = (unsigned int)v13;
    v6 = 1541LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)v14);
    goto LABEL_19;
  }
  v15 = v19;
  if ( v19 > *v7 )
  {
    v5 = -2147024883;
    v6 = 1543LL;
    goto LABEL_16;
  }
  *v7 -= v19;
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
