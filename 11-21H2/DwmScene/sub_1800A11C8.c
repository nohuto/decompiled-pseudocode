/*
 * XREFs of sub_1800A11C8 @ 0x1800A11C8
 * Callers:
 *     sub_1800A12C4 @ 0x1800A12C4 (sub_1800A12C4.c)
 * Callees:
 *     sub_1800A1AD8 @ 0x1800A1AD8 (sub_1800A1AD8.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_1800A11C8(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 (__fastcall ***v8)(_QWORD, __int64); // rcx
  __int64 (__fastcall ***v9)(_QWORD, __int64); // rcx

  v6 = *a3;
  *a3 = 0LL;
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 48);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 52);
  *(_QWORD *)(a1 + 32) = 0LL;
  v7 = a1 + 40;
  *(_QWORD *)(a1 + 96) = 0LL;
  v8 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 112);
  if ( v8 )
    *(_QWORD *)(v7 + 56) = (**v8)(v8, v7);
  *(_QWORD *)(a1 + 160) = 0LL;
  v9 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 176);
  if ( v9 )
    *(_QWORD *)(a1 + 160) = (**v9)(v9, a1 + 104);
  *(_BYTE *)(a1 + 168) = 0;
  sub_1800A1AD8(a2);
  if ( *a3 )
    (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a3 + 8LL))(*a3, 1LL);
  return a1;
}
