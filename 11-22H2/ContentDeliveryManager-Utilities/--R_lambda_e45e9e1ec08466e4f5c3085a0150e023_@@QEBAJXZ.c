/*
 * XREFs of ??R_lambda_e45e9e1ec08466e4f5c3085a0150e023_@@QEBAJXZ @ 0x18007E92C
 * Callers:
 *     ??$Do@V_lambda_e45e9e1ec08466e4f5c3085a0150e023_@@V_lambda_e2353d45ae907a53937cddb6bb666ec0_@@@?$InvalidationChecker@V?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UIntVersionTag@XWinRT@@@detail@XWinRT@@QEAAJPEAV?$Vector@PEAVAppInstallInfoRecord@ContentManagement@@U?$DefaultEqualityPredicate@PEAVAppInstallInfoRecord@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAVAppInstallInfoRecord@ContentManagement@@@4567@U?$VectorOptions@PEAVAppInstallInfoRecord@ContentManagement@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@AEBV_lambda_e45e9e1ec08466e4f5c3085a0150e023_@@AEBV_lambda_e2353d45ae907a53937cddb6bb666ec0_@@@Z @ 0x18007B5BC (--$Do@V_lambda_e45e9e1ec08466e4f5c3085a0150e023_@@V_lambda_e2353d45ae907a53937cddb6bb666ec0_@@@-.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _lambda_e45e9e1ec08466e4f5c3085a0150e023_::operator()(_QWORD **a1)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v3)(_QWORD, GUID *, __int64 *); // rbx
  int v4; // ebx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))(*a1)[9];
  v3 = **v2;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  v4 = v3(v2, &GUID_3125e57c_be43_5e92_b20e_9f496eb9a270, &v6);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 48LL))(v6, *a1[1]);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  return (unsigned int)v4;
}
