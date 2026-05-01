/*
 * XREFs of ?SetPosition@CMultitaskingViewElementBase@@UEAAXAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x1805759B0
 * Callers:
 *     ?SetPosition@CSwitchItemGrid@@UEAAXAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x18057A5B0 (-SetPosition@CSwitchItemGrid@@UEAAXAEBUCRect@Geometry@@W4DCompThumbnailAnimation@@PEAUIUIAnimati.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006BCD8 (-InternalRelease@-$ComPtr@UIWICBitmapDecoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x1803CD4B8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 *     ?_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationStoryboardEventHandler2@@@Z @ 0x180576150 (-_LayoutChildren@CMultitaskingViewElementBase@@IEAAXW4DCompThumbnailAnimation@@PEAUIUIAnimationS.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CMultitaskingViewElementBase::SetPosition(_DWORD *a1, _DWORD *a2, unsigned int a3, __int64 a4)
{
  char v7; // r12
  _OWORD *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, _QWORD, _DWORD *, _DWORD *, int *); // rbx
  unsigned int v12; // eax
  int v13; // eax
  char v14; // bl
  int (__fastcall *v15)(_DWORD *, GUID *, IRawElementProviderSimple **); // rbx
  HRESULT inited; // eax
  wil::details::in1diag3 *v17; // rcx
  __int64 v18; // rdx
  int v19; // [rsp+30h] [rbp-D0h] BYREF
  IRawElementProviderSimple *pProvider; // [rsp+38h] [rbp-C8h] BYREF
  VARIANT pvarg; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h]
  VARIANT pvar; // [rsp+60h] [rbp-A0h] BYREF
  VARIANT newValue; // [rsp+80h] [rbp-80h] BYREF
  VARIANT oldValue; // [rsp+A0h] [rbp-60h] BYREF
  DOUBLE prgn[4]; // [rsp+C0h] [rbp-40h] BYREF
  DOUBLE v27[4]; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+158h] [rbp+58h]

  v22 = a4;
  v7 = 0;
  LODWORD(pProvider) = 0;
  LOBYTE(v19) = 1;
  v8 = a1 + 14;
  if ( !Geometry::operator==(a1 + 14, a2) )
  {
    v9 = (*(__int64 (__fastcall **)(_DWORD *, VARIANT *))(*(_QWORD *)a1 + 384LL))(a1, &pvarg);
    v7 = 1;
    LODWORD(pProvider) = 1;
    v10 = *(_QWORD *)v9;
    v11 = *(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *, _DWORD *, int *))(**(_QWORD **)v9 + 56LL);
    v12 = (*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 400LL))(a1);
    v13 = v11(v10, v12, a1, a2, &v19);
    if ( v13 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xAF,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
        (const char *)(unsigned int)v13);
LABEL_5:
      v14 = 1;
      goto LABEL_7;
    }
    if ( (_BYTE)v19 )
      goto LABEL_5;
  }
  v14 = 0;
LABEL_7:
  if ( (v7 & 1) != 0 )
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&pvarg);
  if ( v14 )
  {
    *(_OWORD *)&pvarg.vt = *v8;
    *v8 = *(_OWORD *)a2;
    if ( *a2 >= a2[2]
      || a2[1] >= a2[3]
      || !UiaClientsAreListening()
      || !(*(unsigned __int8 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 168LL))(a1)
      || !(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)a1 + 328LL))(a1) )
    {
      goto LABEL_25;
    }
    pProvider = 0LL;
    v15 = *(int (__fastcall **)(_DWORD *, GUID *, IRawElementProviderSimple **))(*(_QWORD *)a1 + 376LL);
    Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&pProvider);
    if ( v15(a1, &GUID_d6dd68d1_86fd_4332_8666_9abedea2d24c, &pProvider) < 0 )
    {
LABEL_24:
      Microsoft::WRL::ComPtr<IWICBitmapDecoder>::InternalRelease((__int64 *)&pProvider);
LABEL_25:
      CMultitaskingViewElementBase::_LayoutChildren(a1, a3, v22);
      return;
    }
    prgn[0] = (double)*(int *)&pvarg.vt;
    prgn[1] = (double)(int)pvarg.decVal.Hi32;
    prgn[2] = (double)(pvarg.lVal - *(_DWORD *)&pvarg.vt);
    prgn[3] = (double)(pvarg.cyVal.Hi - pvarg.decVal.Hi32);
    pvar.vt = 0;
    v27[0] = (double)(int)*a2;
    v27[1] = (double)(int)a2[1];
    v27[2] = (double)(a2[2] - *a2);
    v27[3] = (double)(a2[3] - a2[1]);
    pvarg.vt = 0;
    inited = InitVariantFromDoubleArray(prgn, 4u, &pvar);
    v17 = retaddr;
    if ( inited >= 0 )
    {
      inited = InitVariantFromDoubleArray(v27, 4u, &pvarg);
      v17 = retaddr;
      if ( inited >= 0 )
      {
        newValue = pvarg;
        oldValue = pvar;
        inited = UiaRaiseAutomationPropertyChangedEvent(pProvider, 30001, &oldValue, &newValue);
        v17 = retaddr;
        if ( inited >= 0 )
        {
LABEL_23:
          VariantClear(&pvarg);
          VariantClear(&pvar);
          goto LABEL_24;
        }
        v18 = 194LL;
      }
      else
      {
        v18 = 192LL;
      }
    }
    else
    {
      v18 = 191LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v17,
      (void *)v18,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\baseelement.cpp",
      (const char *)(unsigned int)inited);
    goto LABEL_23;
  }
}
