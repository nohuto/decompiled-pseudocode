/*
 * XREFs of sub_18007218C @ 0x18007218C
 * Callers:
 *     sub_180064BB0 @ 0x180064BB0 (sub_180064BB0.c)
 *     sub_18006D0BC @ 0x18006D0BC (sub_18006D0BC.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_180071228 @ 0x180071228 (sub_180071228.c)
 *     sub_180073B4C @ 0x180073B4C (sub_180073B4C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18007218C(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rcx
  _QWORD *result; // rax
  __int64 v7; // rcx
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF

  v4 = sub_18001246C(v8, a2);
  sub_180073B4C(a1, v4);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD))(*(_QWORD *)*a2 + 8LL))(
    *a2,
    *(_QWORD *)(a1 + 32),
    *(unsigned int *)(a1 + 8),
    *(unsigned int *)(a1 + 12),
    *(_DWORD *)(a1 + 20),
    *(_DWORD *)(a1 + 28));
  v5 = *(_QWORD **)(a1 + 48);
  if ( v5 == *(_QWORD **)(a1 + 56) )
  {
    result = sub_180071228((char **)(a1 + 40), *(char **)(a1 + 48), a2);
  }
  else
  {
    result = sub_18001246C(v5, a2);
    *(_QWORD *)(a1 + 48) += 16LL;
  }
  v7 = a2[1];
  if ( v7 )
    return (_QWORD *)sub_180010530(v7);
  return result;
}
