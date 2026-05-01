/*
 * XREFs of ?PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x180415C18
 * Callers:
 *     _lambda_a6b32a0b6616cd8ad7d644a35fbdc2e5_::operator() @ 0x1804125E0 (_lambda_a6b32a0b6616cd8ad7d644a35fbdc2e5_--operator().c)
 *     ?SetDesiredPosition@UwpWindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18041702C (-SetDesiredPosition@UwpWindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@.c)
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x180418020 (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?PosChanged@UwpWindowReadyState@@QEAAXHH@Z @ 0x18041A798 (-PosChanged@UwpWindowReadyState@@QEAAXHH@Z.c)
 */

__int64 __fastcall UwpWindowWrapperBase::PushBoundsToWindow(__int64 a1, char a2)
{
  __int64 result; // rax
  UINT uFlags; // r10d

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 272) + 224LL))(*(_QWORD *)(a1 + 272));
  if ( *(_BYTE *)(a1 + 496) && *(_DWORD *)(a1 + 288) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1) )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1) )
        a2 &= ~2u;
      uFlags = 2 * ((a2 & 1) == 0) + 82964;
      if ( (a2 & 2) == 0 )
        uFlags |= 1u;
      if ( SetWindowPos(
             (HWND)*(int *)(a1 + 288),
             0LL,
             (int)*(float *)(a1 + 480),
             (int)*(float *)(a1 + 484),
             (int)*(float *)(a1 + 488),
             (int)*(float *)(a1 + 492),
             uFlags) )
      {
        UwpWindowReadyState::PosChanged(
          (UwpWindowReadyState *)(a1 + 352),
          (int)*(float *)(a1 + 488),
          (int)*(float *)(a1 + 492));
      }
    }
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 224LL))(a1);
  }
  return result;
}
