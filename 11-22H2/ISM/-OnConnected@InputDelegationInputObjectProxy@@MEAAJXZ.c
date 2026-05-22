/*
 * XREFs of ?OnConnected@InputDelegationInputObjectProxy@@MEAAJXZ @ 0x180071AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ImpersonateCaller@BaseBamoConnection@Bamo@Microsoft@@QEAA?AVImpersonationReverter@123@XZ @ 0x18004CE0C (-ImpersonateCaller@BaseBamoConnection@Bamo@Microsoft@@QEAA-AVImpersonationReverter@123@XZ.c)
 */

__int64 __fastcall InputDelegationInputObjectProxy::OnConnected(InputDelegationInputObjectProxy *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL);
  if ( *(int *)(v2 + 8) <= 0 )
    v3 = 0LL;
  else
    v3 = *(_QWORD *)(v2 + 16);
  Microsoft::Bamo::BaseBamoConnection::ImpersonateCaller(v3, &v5);
  if ( !v5 )
  {
    LOBYTE(v5) = 0;
    if ( (int)CapabilityCheck(-6LL, L"inputForegroundObservation", &v5) >= 0 )
      *((_BYTE *)this + 116) = (_BYTE)v5 != 0;
    RevertToSelf();
  }
  return 0LL;
}
