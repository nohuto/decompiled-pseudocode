/*
 * XREFs of sub_180018E70 @ 0x180018E70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001049C @ 0x18001049C (sub_18001049C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180018E70(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r11

  v1 = sub_18001049C((volatile signed __int32 *)(a1 + 12));
  if ( !v1 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 24LL))(v2, v1 + 1);
    if ( qword_1801D3388 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801D3388 + 16LL))(qword_1801D3388);
  }
  return v1;
}
