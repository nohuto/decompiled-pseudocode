/*
 * XREFs of sub_18001FD9C @ 0x18001FD9C
 * Callers:
 *     sub_180033CA0 @ 0x180033CA0 (sub_180033CA0.c)
 *     sub_1800354F0 @ 0x1800354F0 (sub_1800354F0.c)
 *     sub_1800356DC @ 0x1800356DC (sub_1800356DC.c)
 *     sub_180035D2C @ 0x180035D2C (sub_180035D2C.c)
 *     sub_180035F18 @ 0x180035F18 (sub_180035F18.c)
 *     sub_1800363BC @ 0x1800363BC (sub_1800363BC.c)
 *     sub_180037050 @ 0x180037050 (sub_180037050.c)
 *     sub_180037678 @ 0x180037678 (sub_180037678.c)
 *     sub_180037B00 @ 0x180037B00 (sub_180037B00.c)
 *     sub_1800671B0 @ 0x1800671B0 (sub_1800671B0.c)
 *     sub_180067610 @ 0x180067610 (sub_180067610.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_18001FD9C(_QWORD *a1, _QWORD *a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rcx

  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = *a2;
  a1[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *((_DWORD *)a1 + 4) = a4;
  a1[3] = a3;
  a1[4] = a5;
  a1[5] = a6;
  *((_BYTE *)a1 + 48) = 1;
  a1[7] = 0LL;
  (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 16LL) + 8LL))(*(_QWORD *)(*a1 + 16LL), &a5);
  a1[7] = a5;
  v8 = a2[1];
  if ( v8 )
    sub_180010530(v8);
  return a1;
}
