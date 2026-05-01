/*
 * XREFs of ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x18073F438
 * Callers:
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18002F720 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18073F980 (-GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGam.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CGameEntry@@QEAA@XZ @ 0x18073F534 (--0CGameEntry@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCGameEntry@@@WRL@Microsoft@@QEAAXPEAVCGameEntry@@@Z @ 0x18073F5C4 (-Attach@-$ComPtr@VCGameEntry@@@WRL@Microsoft@@QEAAXPEAVCGameEntry@@@Z.c)
 *     ?RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z @ 0x180740E48 (-RuntimeClassInitialize@CGameEntry@@QEAAJPEAUIGameEntry@KnownGameList@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CGameEntry,KnownGameList::IGameEntry,KnownGameList::IGameEntry *>(
        _QWORD *a1,
        struct KnownGameList::IGameEntry **a2)
{
  CGameEntry *v4; // rax
  int v5; // esi
  CGameEntry *v6; // rax
  struct KnownGameList::IGameEntry *v7; // rdx
  CGameEntry *v8; // rbx
  CGameEntry *v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v4 = (CGameEntry *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  if ( v4 )
  {
    v6 = CGameEntry::CGameEntry(v4);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<CGameEntry>::Attach(&v10, v6);
    v11 = 0LL;
    v7 = *a2;
    v8 = v10;
    v5 = CGameEntry::RuntimeClassInitialize(v10, v7);
    if ( v5 >= 0 )
      v5 = (**(__int64 (__fastcall ***)(CGameEntry *, GUID *, _QWORD *))v8)(
             v8,
             &GUID_7672fec8_528f_493d_ac6f_80c610e495a4,
             a1);
    if ( v8 )
      (*(void (__fastcall **)(CGameEntry *))(*(_QWORD *)v8 + 16LL))(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
