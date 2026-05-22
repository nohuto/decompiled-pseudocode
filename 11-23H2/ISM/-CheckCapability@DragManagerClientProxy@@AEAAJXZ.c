/*
 * XREFs of ?CheckCapability@DragManagerClientProxy@@AEAAJXZ @ 0x18004C148
 * Callers:
 *     ?OnConnected@DragManagerClientProxy@@MEAAJXZ @ 0x18004C120 (-OnConnected@DragManagerClientProxy@@MEAAJXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x180093924 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall DragManagerClientProxy::CheckCapability(DragManagerClientProxy *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 result; // rax
  int v6; // ebx
  int v7; // eax
  int v8; // edx
  unsigned int v9; // edi
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL);
  if ( *(int *)(v2 + 8) <= 0 )
    v3 = 0LL;
  else
    v3 = *(_QWORD *)(v2 + 16);
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 56LL))(v3);
  result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + 48) + 328LL))(*(_QWORD *)(v4 + 48));
  v6 = result;
  if ( (int)result >= 0 )
  {
    v10 = 0;
    v7 = CapabilityCheck(-6LL, L"shellExperienceComposer", &v10);
    if ( v7 < 0 )
    {
      v9 = wil::details::NtStatusToHr((wil::details *)(unsigned int)v7, v8);
      if ( !v6 )
        RevertToSelf();
      return v9;
    }
    else if ( v10 )
    {
      *((_BYTE *)this + 128) = v10 != 0;
      if ( !v6 )
        RevertToSelf();
      return 0LL;
    }
    else
    {
      if ( !v6 )
        RevertToSelf();
      return 2147942405LL;
    }
  }
  return result;
}
