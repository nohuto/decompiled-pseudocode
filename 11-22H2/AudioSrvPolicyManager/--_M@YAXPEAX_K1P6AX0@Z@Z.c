/*
 * XREFs of ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180016940
 * Callers:
 *     ??1ApplicationSpecificEndpointInfo@@UEAA@XZ @ 0x180024FFC (--1ApplicationSpecificEndpointInfo@@UEAA@XZ.c)
 *     ??1CStreamClassPolicyGains@@QEAA@XZ @ 0x1800322C4 (--1CStreamClassPolicyGains@@QEAA@XZ.c)
 *     _ApplicationSpecificEndpointInfo::ApplicationSpecificEndpointInfo_::_1_::dtor$5 @ 0x18004A47C (_ApplicationSpecificEndpointInfo--ApplicationSpecificEndpointInfo_--_1_--dtor$5.c)
 *     _CStreamClassPolicyGains::CStreamClassPolicyGains_::_1_::dtor$1 @ 0x18004AB8C (_CStreamClassPolicyGains--CStreamClassPolicyGains_--_1_--dtor$1.c)
 * Callees:
 *     ?__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z @ 0x1800169BC (-__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180048B60 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall `eh vector destructor iterator'(char *a1, __int64 a2, __int64 a3, void (*a4)(void *))
{
  __int64 v4; // rbx
  char *v6; // rdi

  v4 = a3;
  v6 = &a1[a3 * a2];
  while ( v4-- )
  {
    v6 -= a2;
    _guard_xfg_dispatch_icall_fptr();
  }
}
