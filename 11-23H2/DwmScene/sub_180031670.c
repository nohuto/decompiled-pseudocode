/*
 * XREFs of sub_180031670 @ 0x180031670
 * Callers:
 *     sub_18002D850 @ 0x18002D850 (sub_18002D850.c)
 *     sub_18002F42C @ 0x18002F42C (sub_18002F42C.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180031670(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  bool v5; // di
  __int64 v6; // rax

  *(_QWORD *)a1 = a2;
  v4 = std::wios::rdbuf(a2 + *(int *)(*(_QWORD *)a2 + 4LL));
  v5 = 0;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  if ( std::ios_base::good((std::ios_base *)(a2 + *(int *)(*(_QWORD *)a2 + 4LL))) )
  {
    v6 = std::wios::tie(a2 + *(int *)(*(_QWORD *)a2 + 4LL));
    if ( !v6 || v6 == a2 )
    {
      v5 = 1;
    }
    else
    {
      std::wostream::flush(v6);
      v5 = std::ios_base::good((std::ios_base *)(a2 + *(int *)(*(_QWORD *)a2 + 4LL)));
    }
  }
  *(_BYTE *)(a1 + 8) = v5;
  return a1;
}
