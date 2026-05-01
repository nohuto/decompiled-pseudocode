/*
 * XREFs of ??$MakeAndInitialize@VPWSLayoutParser@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPWSLayoutParser@@@Z @ 0x180495E10
 * Callers:
 *     ?PWSLayoutParser_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x180496778 (-PWSLayoutParser_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0PWSLayoutParser@@QEAA@XZ @ 0x1804962B0 (--0PWSLayoutParser@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@PWSLayoutParser@@QEAAJXZ @ 0x180497318 (-RuntimeClassInitialize@PWSLayoutParser@@QEAAJXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PWSLayoutParser,PWSLayoutParser,>(PWSLayoutParser **a1)
{
  PWSLayoutParser *v2; // rax
  int v3; // edi
  PWSLayoutParser *v4; // rsi
  PWSLayoutParser *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h]

  *a1 = 0LL;
  v2 = (PWSLayoutParser *)operator new(0xA8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v4 = PWSLayoutParser::PWSLayoutParser(v2);
    v6 = v4;
    v7 = 0LL;
    v3 = PWSLayoutParser::RuntimeClassInitialize(v4);
    if ( v3 >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(PWSLayoutParser *))(*(_QWORD *)v4 + 8LL))(v4);
      *a1 = v4;
      v3 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v3;
}
