/*
 * XREFs of ?PushBoundsToWindow@WindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1804EAFA8
 * Callers:
 *     ?SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1802D90CE (-SetDesiredPosition@WindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PE.c)
 *     _lambda_b2fbff76c4d1ba4527abf8e3eed14512_::operator() @ 0x1804E7AE8 (_lambda_b2fbff76c4d1ba4527abf8e3eed14512_--operator().c)
 *     ?SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x1804ED04C (-SetWindowId@WindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Window.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PosChanged@WindowReadyState@@QEAAXHH@Z @ 0x1802D9840 (-PosChanged@WindowReadyState@@QEAAXHH@Z.c)
 */

void __fastcall WindowWrapperBase::PushBoundsToWindow(__int64 a1, char a2)
{
  UINT uFlags; // r10d

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 216LL))(*(_QWORD *)(a1 + 280));
  if ( *(_BYTE *)(a1 + 504)
    && *(_DWORD *)(a1 + 296)
    && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1) )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1) )
      a2 &= ~2u;
    uFlags = 2 * ((a2 & 1) == 0) + 82964;
    if ( (a2 & 2) == 0 )
      uFlags |= 1u;
    if ( SetWindowPos(
           (HWND)*(int *)(a1 + 296),
           0LL,
           (int)*(float *)(a1 + 488),
           (int)*(float *)(a1 + 492),
           (int)*(float *)(a1 + 496),
           (int)*(float *)(a1 + 500),
           uFlags) )
    {
      WindowReadyState::PosChanged((WindowReadyState *)(a1 + 360), (int)*(float *)(a1 + 496), (int)*(float *)(a1 + 500));
    }
  }
}
