/*
 * XREFs of ?Release@?$CMILCOMBaseT@VILegacyRemotingSwapChain@@@@UEAAKXZ @ 0x18010B438
 * Callers:
 *     ?Release@?$CMILCOMBaseT@VILegacyRemotingSwapChain@@@@$4PPPPPPPM@MI@EAAKXZ @ 0x1801216A0 (-Release@-$CMILCOMBaseT@VILegacyRemotingSwapChain@@@@$4PPPPPPPM@MI@EAAKXZ.c)
 * Callees:
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007BB54 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMILCOMBaseT<ILegacyRemotingSwapChain>::Release(__int64 a1)
{
  __int64 *v1; // rsi
  volatile signed __int32 *v2; // rdi
  unsigned __int32 v3; // ebx
  __int64 v4; // rdx

  v1 = (__int64 *)(a1 - 32);
  v2 = (volatile signed __int32 *)(a1 - 32 + 16);
  v3 = _InterlockedDecrement(v2);
  if ( !v3 )
  {
    CMILRefCountImpl::AddReference((CMILRefCountImpl *)(a1 - 32 + 16));
    (*(void (__fastcall **)(__int64 *))(*v1 + 136))(v1);
    v3 = _InterlockedDecrement(v2);
    if ( !v3 )
    {
      v4 = *v1;
      --*v2;
      (*(void (__fastcall **)(__int64 *, __int64))(v4 + 128))(v1, 1LL);
    }
  }
  return v3;
}
