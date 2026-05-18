/*
 * XREFs of sub_18000AF98 @ 0x18000AF98
 * Callers:
 *     sub_18000AF40 @ 0x18000AF40 (sub_18000AF40.c)
 * Callees:
 *     sub_18000B5B0 @ 0x18000B5B0 (sub_18000B5B0.c)
 *     sub_18000B5F0 @ 0x18000B5F0 (sub_18000B5F0.c)
 *     sub_18000B62C @ 0x18000B62C (sub_18000B62C.c)
 *     sub_18000B758 @ 0x18000B758 (sub_18000B758.c)
 *     sub_18000B83C @ 0x18000B83C (sub_18000B83C.c)
 *     sub_18000B8DC @ 0x18000B8DC (sub_18000B8DC.c)
 *     sub_18000BA90 @ 0x18000BA90 (sub_18000BA90.c)
 *     sub_18000BAB8 @ 0x18000BAB8 (sub_18000BAB8.c)
 *     sub_18000BADC @ 0x18000BADC (sub_18000BADC.c)
 *     sub_18000BAFC @ 0x18000BAFC (sub_18000BAFC.c)
 *     sub_18000BC50 @ 0x18000BC50 (sub_18000BC50.c)
 *     _initterm @ 0x18000BEC6 (_initterm.c)
 *     _initterm_e @ 0x18000BED2 (_initterm_e.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 sub_18000AF98()
{
  char v0; // bl
  char v1; // di
  __int64 v2; // rcx
  _QWORD *v3; // rax

  if ( !(unsigned __int8)sub_18000B758(0LL) )
    return 0LL;
  v0 = sub_18000B5B0();
  v1 = 1;
  if ( dword_1801F7290 )
  {
    sub_18000BAFC(7LL);
    __debugbreak();
    JUMPOUT(0x18000B0B8LL);
  }
  dword_1801F7290 = 1;
  if ( (unsigned __int8)sub_18000B62C() )
  {
    sub_18000BC50();
    sub_18000BA90();
    sub_18000BAB8();
    if ( !initterm_e((_PIFV *)&First, (_PIFV *)&Last) )
    {
      if ( (unsigned __int8)sub_18000B5F0() )
      {
        initterm((_PVFV *)&qword_180123138, (_PVFV *)&qword_1801248B0);
        dword_1801F7290 = 2;
        v1 = 0;
      }
    }
  }
  LOBYTE(v2) = v0;
  sub_18000B8DC(v2);
  if ( v1 )
    return 0LL;
  v3 = (_QWORD *)sub_18000BADC();
  if ( *v3 )
  {
    if ( (unsigned __int8)sub_18000B83C(v3) )
      _guard_xfg_dispatch_icall_fptr();
  }
  ++dword_1801F6D10;
  return 1LL;
}
