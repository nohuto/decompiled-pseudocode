/*
 * XREFs of sub_18002E7C0 @ 0x18002E7C0
 * Callers:
 *     sub_18002E850 @ 0x18002E850 (sub_18002E850.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall sub_18002E7C0(__int64 a1)
{
  __int64 v1; // rcx
  bool v2; // bl
  __int64 v3; // rcx
  _BYTE v5[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v5) + 8);
  v2 = v1 && *(_DWORD *)(v1 + 8);
  v3 = v6;
  if ( v6 && _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return v2;
}
