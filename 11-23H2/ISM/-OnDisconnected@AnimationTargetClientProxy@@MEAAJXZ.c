/*
 * XREFs of ?OnDisconnected@AnimationTargetClientProxy@@MEAAJXZ @ 0x180155CD0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x180024ACC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OnTargetAnimationDataChange@GestureServices@@QEAAXPEAVAnimationTargetClientProxy@@_K1@Z @ 0x1801533F0 (-OnTargetAnimationDataChange@GestureServices@@QEAAXPEAVAnimationTargetClientProxy@@_K1@Z.c)
 */

__int64 __fastcall AnimationTargetClientProxy::OnDisconnected(AnimationTargetClientProxy *this)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  GestureServices *v3; // rax
  struct AnimationTargetClientProxy *v4; // rdx

  if ( *((_QWORD *)this + 9) )
  {
    BamoServerConnection = ISMStatics::GetBamoServerConnection();
    v3 = (GestureServices *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL)
                                                               + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
    GestureServices::OnTargetAnimationDataChange(v3, v4, *((_QWORD *)this + 9), 0LL);
  }
  return 0LL;
}
