/*
 * XREFs of ?WriteInstruction@CDrawTileImageInstruction@@UEAAJPEAUIRenderDataBuilder@@PEBVCVisual@@@Z @ 0x1800109A0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDrawTileImageInstruction::WriteInstruction(
        CDrawTileImageInstruction *this,
        struct IRenderDataBuilder *a2,
        const struct CVisual *a3)
{
  __int64 i; // rax
  float v5[4]; // [rsp+38h] [rbp-20h] BYREF

  for ( i = 0LL; i < 4; ++i )
    v5[i] = (float)*((int *)this + i + 4);
  return (*(__int64 (__fastcall **)(struct IRenderDataBuilder *, _QWORD, float *))(*(_QWORD *)a2 + 64LL))(
           a2,
           *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 6) + 16LL) + 24LL),
           v5);
}
