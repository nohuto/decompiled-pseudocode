/*
 * XREFs of ?Initialize@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C0005D98
 * Callers:
 *     ?ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObject@@@Z @ 0x1C0005D30 (-ObjectInit@CompositionTokenObject@@KAJPEAVDxgkCompositionObject@@PEAXPEAPEAVIDxgkCompositionObj.c)
 * Callees:
 *     ?InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z @ 0x1C00064CC (-InitializeUpdates@CCompositionToken@@IEAAJAEBUCompositionTokenInitInfo@@@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionToken::Initialize(CCompositionToken *this, const struct CompositionTokenInitInfo *a2)
{
  __int64 v4; // rax
  int v5; // edi

  *((_DWORD *)this + 8) = 0;
  if ( !is_mul_ok(*((unsigned int *)a2 + 3), 0x20uLL) )
  {
    v5 = -1073741675;
LABEL_9:
    (*(void (__fastcall **)(char *))(*((_QWORD *)this + 1) + 56LL))((char *)this + 8);
    return (unsigned int)v5;
  }
  v4 = operator new[](32LL * *((unsigned int *)a2 + 3), 1650675028LL, 256LL);
  v5 = 0;
  *((_QWORD *)this + 7) = v4;
  if ( !v4 )
    v5 = -1073741801;
  *((_DWORD *)this + 16) = 0;
  if ( v5 < 0 )
    goto LABEL_9;
  v5 = CCompositionToken::InitializeUpdates(this, a2);
  if ( v5 < 0 )
    goto LABEL_9;
  *((_QWORD *)this + 9) = *((_QWORD *)a2 + 2);
  *((_DWORD *)this + 20) = *((_DWORD *)this + 16);
  return (unsigned int)v5;
}
