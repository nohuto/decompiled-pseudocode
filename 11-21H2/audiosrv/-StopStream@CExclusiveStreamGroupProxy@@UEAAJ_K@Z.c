/*
 * XREFs of ?StopStream@CExclusiveStreamGroupProxy@@UEAAJ_K@Z @ 0x1800FAA50
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CExclusiveStreamGroupProxy::StopStream(CExclusiveStreamGroupProxy *this, __int64 a2)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 11);
  v7 = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 56LL);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v7);
  v5 = v4(v2, &v7);
  if ( v5 >= 0 )
    v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 88LL))(v7, a2);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v7);
  return (unsigned int)v5;
}
