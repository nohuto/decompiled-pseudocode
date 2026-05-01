/*
 * XREFs of ??$MakeAndInitialize@VPositionerPriority@@V1@AEAK@Details@WRL@Microsoft@@YAJPEAPEAVPositionerPriority@@AEAK@Z @ 0x1804F9DB4
 * Callers:
 *     ?PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z @ 0x1804F9FB8 (-PositionerPriority_CreateInstance@@YAJKAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0PositionerPriority@@QEAA@XZ @ 0x1804F9E64 (--0PositionerPriority@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z @ 0x1804F9F74 (-Attach@-$ComPtr@VPositionerPriority@@@WRL@Microsoft@@QEAAXPEAVPositionerPriority@@@Z.c)
 *     ?RuntimeClassInitialize@PositionerPriority@@QEAAJK@Z @ 0x1804FA0A0 (-RuntimeClassInitialize@PositionerPriority@@QEAAJK@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<PositionerPriority,PositionerPriority,unsigned long &>(
        PositionerPriority **a1,
        unsigned int *a2)
{
  PositionerPriority *v4; // rax
  int v5; // edi
  PositionerPriority *v6; // rax
  unsigned int v7; // edx
  PositionerPriority *v8; // rbx
  PositionerPriority *v10; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  v4 = (PositionerPriority *)operator new(0x50uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = PositionerPriority::PositionerPriority(v4);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<PositionerPriority>::Attach(&v10, v6);
    v7 = *a2;
    v8 = v10;
    v5 = PositionerPriority::RuntimeClassInitialize(v10, v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
        (*(void (__fastcall **)(PositionerPriority *))(*(_QWORD *)v8 + 8LL))(v8);
      *a1 = v8;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
