/*
 * XREFs of sub_18002C554 @ 0x18002C554
 * Callers:
 *     sub_18002C5C0 @ 0x18002C5C0 (sub_18002C5C0.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall sub_18002C554(__int64 a1)
{
  __int64 v1; // rcx
  bool v2; // bl
  _BYTE v4[8]; // [rsp+20h] [rbp-18h] BYREF
  volatile signed __int32 *v5; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v4) + 8);
  v2 = v1 && *(_DWORD *)(v1 + 8);
  if ( v5 )
    sub_180010574(v5);
  return v2;
}
