/*
 * XREFs of ?AcquireOverlayId@ADAPTER_RENDER@@QEAAIPEAVDXGOVERLAY@@@Z @ 0x1C02C30A4
 * Callers:
 *     ?Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z @ 0x1C03296A0 (-Initialize@DXGOVERLAY@@QEAAJPEAU_D3DKMT_CREATEOVERLAY@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ADAPTER_RENDER::AcquireOverlayId(ADAPTER_RENDER *this, struct DXGOVERLAY *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // edx
  _QWORD *i; // rax

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 3046LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pOverlayOwner != NULL", 3046LL, 0LL, 0LL, 0LL, 0LL);
  }
  v4 = 0LL;
  v5 = *(_DWORD *)(*((_QWORD *)this + 2) + 2132LL);
  if ( !v5 )
    return 0xFFFFFFFFLL;
  for ( i = (_QWORD *)((char *)this + 712); *i; ++i )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= v5 )
      return 0xFFFFFFFFLL;
  }
  *((_QWORD *)this + v4 + 89) = a2;
  return (unsigned int)v4;
}
