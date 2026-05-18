/*
 * XREFs of sub_18003F210 @ 0x18003F210
 * Callers:
 *     sub_18003F160 @ 0x18003F160 (sub_18003F160.c)
 * Callees:
 *     sub_18003E588 @ 0x18003E588 (sub_18003E588.c)
 *     sub_18003E6C4 @ 0x18003E6C4 (sub_18003E6C4.c)
 *     sub_18003F2E0 @ 0x18003F2E0 (sub_18003F2E0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18003F210(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        unsigned __int8 (__fastcall *a5)(_QWORD *, _QWORD *))
{
  _QWORD *v9; // rsi
  _QWORD *v10; // rdx
  _QWORD *v11; // rcx
  __int64 v12; // rbx

  v9 = a2;
  do
  {
    while ( a5(v9, a1) )
    {
      sub_18003E588(a4, v9);
      a4 += 2;
      v9 += 2;
      if ( v9 == a3 )
      {
        v10 = a2;
        v11 = a1;
        goto LABEL_7;
      }
    }
    sub_18003E588(a4, a1);
    a4 += 2;
    a1 += 2;
  }
  while ( a1 != a2 );
  v10 = a3;
  v11 = v9;
LABEL_7:
  v12 = sub_18003F2E0(v11, v10, a4);
  sub_18003E6C4(v12, v12);
  return v12;
}
