/*
 * XREFs of ?IsUsefulPackage@AtmosCheck@@AEAA_NPEAUIPackage@ApplicationModel@Windows@@@Z @ 0x180155260
 * Callers:
 *     _lambda_02cf54438168803f227ee4e991ef3551_::operator() @ 0x180152EF0 (_lambda_02cf54438168803f227ee4e991ef3551_--operator().c)
 *     _lambda_584c7311ea728c54c4a47fc057f19078_::operator() @ 0x18015306C (_lambda_584c7311ea728c54c4a47fc057f19078_--operator().c)
 *     _lambda_f9bd085ee8be78cd632838852672651f_::operator() @ 0x1801533B8 (_lambda_f9bd085ee8be78cd632838852672651f_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall AtmosCheck::IsUsefulPackage(AtmosCheck *this, struct Windows::ApplicationModel::IPackage *a2)
{
  char v3; // di
  int (__fastcall *v4)(struct Windows::ApplicationModel::IPackage *, GUID *, __int64 *); // rbx
  struct Windows::ApplicationModel::IPackage *v6; // [rsp+20h] [rbp-18h] BYREF
  AtmosCheck *v7; // [rsp+60h] [rbp+28h] BYREF
  char v8; // [rsp+68h] [rbp+30h] BYREF
  char v9; // [rsp+70h] [rbp+38h] BYREF
  __int64 v10; // [rsp+78h] [rbp+40h] BYREF

  v7 = this;
  v6 = a2;
  v3 = 0;
  if ( a2 )
    (*(void (__fastcall **)(struct Windows::ApplicationModel::IPackage *))(*(_QWORD *)a2 + 8LL))(a2);
  v10 = 0LL;
  LOBYTE(v7) = 0;
  v8 = 0;
  v9 = 0;
  (*(void (__fastcall **)(struct Windows::ApplicationModel::IPackage *, AtmosCheck **))(*(_QWORD *)a2 + 64LL))(a2, &v7);
  v4 = **(int (__fastcall ***)(struct Windows::ApplicationModel::IPackage *, GUID *, __int64 *))a2;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v10);
  if ( v4(a2, &GUID_a6612fb6_7688_4ace_95fb_359538e7aa01, &v10) >= 0 )
  {
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 88LL))(v10, &v8);
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v10 + 80LL))(v10, &v9);
  }
  if ( !(_BYTE)v7 && !v8 && !v9 )
    v3 = 1;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v6);
  return v3;
}
