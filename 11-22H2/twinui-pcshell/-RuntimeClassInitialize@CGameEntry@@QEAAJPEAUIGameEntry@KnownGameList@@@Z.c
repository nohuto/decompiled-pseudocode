/*
 * XREFs of ?RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z @ 0x180740E48
 * Callers:
 *     ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x18073F438 (--$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJP.c)
 * Callees:
 *     ?CompleteInitialization@CGameEntry@@AEAAJXZ @ 0x180013E70 (-CompleteInitialization@CGameEntry@@AEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C8FA4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1801C8FB0 (--_V@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGameEntry::RuntimeClassInitialize(CGameEntry *this, struct KnownGameList::IGameEntry *a2)
{
  int v4; // edi
  __int64 v5; // rdx
  void *v7; // rax
  void *v8; // rcx
  void *v9; // rcx
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  size_t Size; // [rsp+38h] [rbp+10h] BYREF
  void *Src; // [rsp+40h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, void **))(*(_QWORD *)a2 + 72LL))(a2, &Src);
  if ( v4 < 0 )
  {
    v5 = 1210LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = (*(__int64 (__fastcall **)(struct KnownGameList::IGameEntry *, size_t *))(*(_QWORD *)a2 + 80LL))(a2, &Size);
  if ( v4 < 0 )
  {
    v5 = 1212LL;
    goto LABEL_3;
  }
  v7 = operator new[]((unsigned int)Size, (const struct std::nothrow_t *)&std::nothrow);
  v8 = (void *)*((_QWORD *)this + 9);
  *((_QWORD *)this + 9) = v7;
  if ( v8 )
    operator delete[](v8);
  v9 = (void *)*((_QWORD *)this + 9);
  if ( !v9 )
  {
    v10 = -2147024882;
    v11 = 1215LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  memcpy_0(v9, Src, (unsigned int)Size);
  v12 = *((_QWORD *)this + 9);
  *((_QWORD *)this + 2) = v12;
  *((_QWORD *)this + 3) = v12;
  *((_DWORD *)this + 8) = Size;
  v10 = CGameEntry::CompleteInitialization(this);
  if ( v10 < 0 )
  {
    v11 = 1224LL;
    goto LABEL_10;
  }
  return 0LL;
}
