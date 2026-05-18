/*
 * XREFs of sub_18000AF98 @ 0x18000AF98
 * Callers:
 *     sub_18000AF40 @ 0x18000AF40 (sub_18000AF40.c)
 * Callees:
 *     sub_18000B5A0 @ 0x18000B5A0 (sub_18000B5A0.c)
 *     sub_18000B5E0 @ 0x18000B5E0 (sub_18000B5E0.c)
 *     sub_18000B61C @ 0x18000B61C (sub_18000B61C.c)
 *     sub_18000B748 @ 0x18000B748 (sub_18000B748.c)
 *     sub_18000B82C @ 0x18000B82C (sub_18000B82C.c)
 *     sub_18000B8CC @ 0x18000B8CC (sub_18000B8CC.c)
 *     sub_18000BA80 @ 0x18000BA80 (sub_18000BA80.c)
 *     sub_18000BAA8 @ 0x18000BAA8 (sub_18000BAA8.c)
 *     sub_18000BACC @ 0x18000BACC (sub_18000BACC.c)
 *     sub_18000BAEC @ 0x18000BAEC (sub_18000BAEC.c)
 *     sub_18000BC40 @ 0x18000BC40 (sub_18000BC40.c)
 *     _initterm @ 0x18000BEB6 (_initterm.c)
 *     _initterm_e @ 0x18000BEC2 (_initterm_e.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 sub_18000AF98()
{
  char v0; // bl
  char v1; // di
  __int64 v2; // rcx
  _QWORD *v3; // rax

  if ( !(unsigned __int8)sub_18000B748(0LL) )
    return 0LL;
  v0 = sub_18000B5A0();
  v1 = 1;
  if ( dword_1801D31A4 )
  {
    sub_18000BAEC(7LL);
    __debugbreak();
    JUMPOUT(0x18000B0B8LL);
  }
  dword_1801D31A4 = 1;
  if ( (unsigned __int8)sub_18000B61C() )
  {
    sub_18000BC40();
    sub_18000BA80();
    sub_18000BAA8();
    if ( !initterm_e((_PIFV *)&First, (_PIFV *)&Last) )
    {
      if ( (unsigned __int8)sub_18000B5E0() )
      {
        initterm((_PVFV *)&qword_180101238, (_PVFV *)&qword_1801029B0);
        dword_1801D31A4 = 2;
        v1 = 0;
      }
    }
  }
  LOBYTE(v2) = v0;
  sub_18000B8CC(v2);
  if ( v1 )
    return 0LL;
  v3 = (_QWORD *)sub_18000BACC();
  if ( *v3 )
  {
    if ( (unsigned __int8)sub_18000B82C(v3) )
      _guard_xfg_dispatch_icall_fptr();
  }
  ++dword_1801D2BF0;
  return 1LL;
}
