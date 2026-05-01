/*
 * XREFs of ?_RenderBackground@CGlyphButtonElement@@AEAAXXZ @ 0x180583718
 * Callers:
 *     ?Repaint@CGlyphButtonElement@@UEAAXXZ @ 0x1805834B0 (-Repaint@CGlyphButtonElement@@UEAAXXZ.c)
 *     ?_CreateBackground@CGlyphButtonElement@@AEAAJAEBUCSize@Geometry@@@Z @ 0x180583644 (-_CreateBackground@CGlyphButtonElement@@AEAAJAEBUCSize@Geometry@@@Z.c)
 *     ?v_SetRenderMode@CGlyphButtonElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElement@@@Z @ 0x180583A70 (-v_SetRenderMode@CGlyphButtonElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElement@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CGlyphButtonElement::_RenderBackground(CGlyphButtonElement *this)
{
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, GUID *, __int64 *); // rbx
  __int64 v4; // rdx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF
  CGlyphButtonElement *v6; // [rsp+48h] [rbp+10h] BYREF

  if ( *((_QWORD *)this + 49) )
  {
    v5 = 0LL;
    v2 = *((_QWORD *)this + 48);
    v3 = *(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v2 + 24LL);
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
    if ( v3(v2, &GUID_b09cbbc9_d9b8_46fe_b3d5_2cd3bb04dda8, &v5) >= 0 )
    {
      if ( (*((_BYTE *)this + 364) & 1) != 0 || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) )
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)this + 49) + 32LL))(
          *((_QWORD *)this + 49),
          v4,
          0LL,
          0LL);
        v6 = this;
        (*(void (__fastcall **)(_QWORD, __int64 (__fastcall *)(__int64, _QWORD *, __int64), CGlyphButtonElement **))(**((_QWORD **)this + 49) + 80LL))(
          *((_QWORD *)this + 49),
          LambdaCustomPaintProc__lambda_6388d5cf85f46d09280dec8197538f8a__ID2D1DeviceContext_,
          &v6);
      }
      else
      {
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(**((_QWORD **)this + 49) + 32LL))(
          *((_QWORD *)this + 49),
          v4,
          0LL,
          0LL);
      }
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v5);
  }
}
