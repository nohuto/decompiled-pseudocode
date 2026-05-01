/*
 * XREFs of ?PushBoundsToWindow@UwpWindowWrapperBase@@AEAAXW4PositioningTypeFlags@@@Z @ 0x1800A01EC
 * Callers:
 *     _lambda_3ba90f86f8f7e03444da890b020d85d2_::operator() @ 0x180061C78 (_lambda_3ba90f86f8f7e03444da890b020d85d2_--operator().c)
 *     ?SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Windows@@W4WindowCreatedType@@@Z @ 0x18009FAF0 (-SetWindowId@UwpWindowWrapperBase@@AEAAXUWindowId@WindowManagement@ApplicationModel@Internal@Win.c)
 *     ?SetDesiredPosition@UwpWindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@@PEBUAPPLICATION_VIEW_DATA@@@Z @ 0x18009FD50 (-SetDesiredPosition@UwpWindowWrapperBase@@AEAAXURect@Foundation@Windows@@W4PositioningTypeFlags@.c)
 * Callees:
 *     ?PosChanged@UwpWindowReadyState@@QEAAXHH@Z @ 0x1800A0328 (-PosChanged@UwpWindowReadyState@@QEAAXHH@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall UwpWindowWrapperBase::PushBoundsToWindow(__int64 a1, char a2)
{
  __int64 result; // rax
  UINT uFlags; // r10d

  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 280) + 224LL))(*(_QWORD *)(a1 + 280));
  if ( *(_BYTE *)(a1 + 504) && *(_DWORD *)(a1 + 296) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 120LL))(a1) )
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
        UwpWindowReadyState::PosChanged(
          (UwpWindowReadyState *)(a1 + 360),
          (int)*(float *)(a1 + 496),
          (int)*(float *)(a1 + 500));
      }
    }
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 224LL))(a1);
  }
  return result;
}
