/*
 * XREFs of ??$MakeAndInitialize@VPPIWin32VtcLayoutOperation@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVPPIWin32VtcLayoutOperation@@@Z @ 0x1805CCC34
 * Callers:
 *     ?PPIWin32VtcLayoutOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1805CDD30 (-PPIWin32VtcLayoutOperation_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x1801383A0 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0PPIWin32VtcLayoutOperation@@QEAA@XZ @ 0x1805CD0EC (--0PPIWin32VtcLayoutOperation@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PPIWin32VtcLayoutOperation,PPIWin32VtcLayoutOperation,>(
        PPIWin32VtcLayoutOperation **a1)
{
  PPIWin32VtcLayoutOperation *v2; // rax
  int inited; // edi
  PPIWin32VtcLayoutOperation *v4; // rsi
  PPIWin32VtcLayoutOperation *v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 v7; // [rsp+48h] [rbp+10h]

  *a1 = 0LL;
  v2 = (PPIWin32VtcLayoutOperation *)operator new(0xF0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v2;
  if ( v2 )
  {
    v4 = PPIWin32VtcLayoutOperation::PPIWin32VtcLayoutOperation(v2);
    v6 = v4;
    v7 = 0LL;
    inited = CObjectWithThreadUseDetection::InitApartmentId((PPIWin32VtcLayoutOperation *)((char *)v4 + 192));
    if ( inited >= 0 )
    {
      if ( v4 )
        (*(void (__fastcall **)(PPIWin32VtcLayoutOperation *))(*(_QWORD *)v4 + 8LL))(v4);
      *a1 = v4;
      inited = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)inited;
}
