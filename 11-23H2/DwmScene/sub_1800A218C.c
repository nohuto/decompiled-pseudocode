/*
 * XREFs of sub_1800A218C @ 0x1800A218C
 * Callers:
 *     sub_1800A1C58 @ 0x1800A1C58 (sub_1800A1C58.c)
 *     sub_1800A1CB4 @ 0x1800A1CB4 (sub_1800A1CB4.c)
 *     sub_1800A1F78 @ 0x1800A1F78 (sub_1800A1F78.c)
 *     sub_1800A201C @ 0x1800A201C (sub_1800A201C.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011A3C @ 0x180011A3C (sub_180011A3C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800A218C(__int128 *a1)
{
  __int128 *v2; // r8
  __int64 v3; // rcx
  __int128 v4; // rcx

  v2 = a1 + 1;
  if ( *((_QWORD *)a1 + 2) )
  {
    v3 = *((_QWORD *)a1 + 1);
    if ( v3 && sub_180011A3C(v3) )
      v4 = *a1;
    else
      v4 = 0LL;
    if ( (_QWORD)v4 )
      (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)v4 + 8LL))(v4, v2);
    if ( *((_QWORD *)&v4 + 1) )
      sub_180010530(*((__int64 *)&v4 + 1));
  }
}
