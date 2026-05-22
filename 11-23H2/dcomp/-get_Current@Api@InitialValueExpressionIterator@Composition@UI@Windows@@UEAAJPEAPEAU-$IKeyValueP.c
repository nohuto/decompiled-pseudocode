/*
 * XREFs of ?get_Current@Api@InitialValueExpressionIterator@Composition@UI@Windows@@UEAAJPEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@5@@Z @ 0x1801A2DF0
 * Callers:
 *     <none>
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029810 (-BeginApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     ?EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ @ 0x180029860 (-EndApiEntry@ContextSession@WRL2@Microsoft@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetCurrent@InitialValueExpressionIterator@Composition@UI@Windows@@QEAAJPEAPEAU?$IKeyValuePair@PEAUHSTRING__@@PEAU1@@Collections@Foundation@4@@Z @ 0x1801A28E4 (-GetCurrent@InitialValueExpressionIterator@Composition@UI@Windows@@QEAAJPEAPEAU-$IKeyValuePair@P.c)
 */

__int64 __fastcall Windows::UI::Composition::InitialValueExpressionIterator::Api::get_Current(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  struct _RTL_CRITICAL_SECTION *v3; // rbx
  unsigned int v5; // edi
  int Current; // eax
  HSTRING v8; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = a1 - 40;
  v3 = *(struct _RTL_CRITICAL_SECTION **)(a1 - 40 + 24);
  Microsoft::WRL2::ContextSession::BeginApiEntry(v3);
  if ( (*(_BYTE *)(v2 + 32) & 2) != 0 )
  {
    v8 = 0LL;
    Current = Windows::UI::Composition::InitialValueExpressionIterator::GetCurrent(v2, &v8);
    v5 = Current;
    if ( Current < 0 )
    {
      DoStackCaptureDirect(Current, 0x9Du);
      if ( v8 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v8 + 16LL))(v8);
    }
    else
    {
      v5 = 0;
      *a2 = v8;
    }
  }
  else
  {
    v5 = -2147483629;
    RoOriginateErrorW(
      2147483667LL,
      0LL,
      L"The given object has already been closed / disposed and may no longer be used.");
  }
  Microsoft::WRL2::ContextSession::EndApiEntry(v3);
  return v5;
}
