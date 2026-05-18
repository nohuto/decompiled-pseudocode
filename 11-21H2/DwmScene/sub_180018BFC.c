/*
 * XREFs of sub_180018BFC @ 0x180018BFC
 * Callers:
 *     sub_1800109C0 @ 0x1800109C0 (sub_1800109C0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180018BFC(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  char *v5; // rcx
  __int64 result; // rax
  __int64 (__fastcall ***v7)(_QWORD, __int64); // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  *(_QWORD *)a1 = off_18011C070;
  *(_QWORD *)(a1 + 16) = off_18011C1D0;
  v2 = *(_QWORD *)(a1 + 136);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 136) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a1 + 112);
  v3 = qword_1801F7498;
  if ( a1 == qword_1801F7498 )
    v3 = 0LL;
  qword_1801F7498 = v3;
  v4 = *(_QWORD *)(a1 + 136);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 136) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *(char **)(a1 + 112);
  if ( v5 )
  {
    sub_180010884(v5, (*(_QWORD *)(a1 + 128) - (_QWORD)v5) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 112) = 0LL;
    *(_QWORD *)(a1 + 120) = 0LL;
    *(_QWORD *)(a1 + 128) = 0LL;
  }
  sub_180010910(a1 + 96);
  sub_180010910(a1 + 80);
  result = sub_180010910(a1 + 64);
  v7 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 56);
  if ( v7 )
    result = (**v7)(v7, 1LL);
  v8 = *(_QWORD *)(a1 + 48);
  if ( v8 )
  {
    *(_QWORD *)(a1 + 48) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  v9 = *(_QWORD *)(a1 + 40);
  if ( v9 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = *(_QWORD *)(a1 + 32);
  if ( v10 )
  {
    *(_QWORD *)(a1 + 32) = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  *(_DWORD *)(a1 + 12) = -1073741823;
  return result;
}
