/*
 * XREFs of ??$MakeAndInitialize@VPositionerPriority@@V1@AEAW4_TABLETMODESTATE@@@Details@WRL@Microsoft@@YAJPEAPEAVPositionerPriority@@AEAW4_TABLETMODESTATE@@@Z @ 0x1800F01C8
 * Callers:
 *     ?PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z @ 0x1800F0138 (-PositionerPriority_CreateInstance@@YAJW4_TABLETMODESTATE@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0PositionerPriority@@QEAA@XZ @ 0x1800F027C (--0PositionerPriority@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PositionerPriority,PositionerPriority,enum _TABLETMODESTATE &>(
        PositionerPriority **a1,
        int *a2)
{
  unsigned int v4; // ebx
  PositionerPriority *v5; // rax
  PositionerPriority *v6; // rdi
  int v7; // ecx
  PositionerPriority *v9; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  *a1 = 0LL;
  v5 = (PositionerPriority *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = PositionerPriority::PositionerPriority(v5);
    v9 = v6;
    v7 = *a2;
    *((_QWORD *)v6 + 8) = 0LL;
    *((_WORD *)v6 + 36) = 0;
    *((_BYTE *)v6 + (v7 == 1) + 64) = 1;
    if ( v6 )
      (*(void (__fastcall **)(PositionerPriority *))(*(_QWORD *)v6 + 8LL))(v6);
    *a1 = v6;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v4;
}
