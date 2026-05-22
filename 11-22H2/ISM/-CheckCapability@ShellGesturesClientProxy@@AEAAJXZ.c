/*
 * XREFs of ?CheckCapability@ShellGesturesClientProxy@@AEAAJXZ @ 0x18004C9BC
 * Callers:
 *     ?OnConnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x18004C980 (-OnConnected@ShellGesturesClientProxy@@MEAAJXZ.c)
 * Callees:
 *     ?ImpersonateCaller@BaseBamoConnection@Bamo@Microsoft@@QEAA?AVImpersonationReverter@123@XZ @ 0x18004CE0C (-ImpersonateCaller@BaseBamoConnection@Bamo@Microsoft@@QEAA-AVImpersonationReverter@123@XZ.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x1800A6504 (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 */

__int64 __fastcall ShellGesturesClientProxy::CheckCapability(ShellGesturesClientProxy *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // ebx
  int v5; // eax
  int v6; // edx
  unsigned int v8; // edi
  char v9; // [rsp+30h] [rbp+8h] BYREF
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL);
  if ( *(int *)(v2 + 8) <= 0 )
    v3 = 0LL;
  else
    v3 = *(_QWORD *)(v2 + 16);
  Microsoft::Bamo::BaseBamoConnection::ImpersonateCaller(v3, &v10);
  v4 = v10;
  if ( v10 < 0 )
    return (unsigned int)v10;
  v9 = 0;
  v5 = CapabilityCheck(-6LL, L"shellExperienceComposer", &v9);
  if ( v5 < 0 )
  {
    v8 = wil::details::NtStatusToHr((wil::details *)(unsigned int)v5, v6);
    if ( !v4 )
      RevertToSelf();
    return v8;
  }
  else if ( v9 )
  {
    *((_BYTE *)this + 152) = v9 != 0;
    if ( !v4 )
      RevertToSelf();
    return 0LL;
  }
  else
  {
    if ( !v4 )
      RevertToSelf();
    return 2147942405LL;
  }
}
