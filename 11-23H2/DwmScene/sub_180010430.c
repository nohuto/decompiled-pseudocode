/*
 * XREFs of sub_180010430 @ 0x180010430
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001049C @ 0x18001049C (sub_18001049C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180010430(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r11

  v1 = sub_18001049C(a1 + 12);
  if ( !v1 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 104LL))(v2, v1 + 1);
    if ( qword_1801D3388 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_1801D3388 + 16LL))(qword_1801D3388);
  }
  return v1;
}
