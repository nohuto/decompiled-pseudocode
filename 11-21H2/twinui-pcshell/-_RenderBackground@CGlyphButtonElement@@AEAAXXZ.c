/*
 * XREFs of ?_RenderBackground@CGlyphButtonElement@@AEAAXXZ @ 0x1804CBF28
 * Callers:
 *     ?Repaint@CGlyphButtonElement@@UEAAXXZ @ 0x1804CBCC0 (-Repaint@CGlyphButtonElement@@UEAAXXZ.c)
 *     ?_CreateBackground@CGlyphButtonElement@@AEAAJAEBUCSize@Geometry@@@Z @ 0x1804CBE54 (-_CreateBackground@CGlyphButtonElement@@AEAAJAEBUCSize@Geometry@@@Z.c)
 *     ?v_SetRenderMode@CGlyphButtonElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElement@@@Z @ 0x1804CC270 (-v_SetRenderMode@CGlyphButtonElement@@MEAAJW4ButtonRenderMode@CMultitaskingViewButtonElement@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
          LambdaCustomPaintProc<_lambda_6388d5cf85f46d09280dec8197538f8a_,ID2D1DeviceContext *>,
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
