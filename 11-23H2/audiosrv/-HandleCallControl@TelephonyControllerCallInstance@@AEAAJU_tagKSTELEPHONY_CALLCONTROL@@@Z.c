/*
 * XREFs of ?HandleCallControl@TelephonyControllerCallInstance@@AEAAJU_tagKSTELEPHONY_CALLCONTROL@@@Z @ 0x1801682D0
 * Callers:
 *     ?BeginCall@TelephonyControllerCallInstance@@UEAAJPEAU_TelephonyInstanceData@@@Z @ 0x180167FE0 (-BeginCall@TelephonyControllerCallInstance@@UEAAJPEAU_TelephonyInstanceData@@@Z.c)
 *     ?EndCall@TelephonyControllerCallInstance@@UEAAJPEAU_TelephonyInstanceData@@@Z @ 0x180168160 (-EndCall@TelephonyControllerCallInstance@@UEAAJPEAU_TelephonyInstanceData@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TelephonyControllerCallInstance::HandleCallControl(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  GUID v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+50h] [rbp-18h]
  int v6; // [rsp+54h] [rbp-14h]
  __int64 v7; // [rsp+70h] [rbp+8h] BYREF
  __int64 v8; // [rsp+78h] [rbp+10h] BYREF

  v8 = a2;
  v2 = *(_QWORD *)(a1 + 32);
  v5 = 2;
  v4 = GUID_b6df7eb1_d099_489f_a6a0_c0106f0887a7;
  v6 = 2;
  return (*(__int64 (__fastcall **)(__int64, GUID *, __int64, __int64 *, int, __int64 *))(*(_QWORD *)v2 + 24LL))(
           v2,
           &v4,
           24LL,
           &v8,
           8,
           &v7);
}
