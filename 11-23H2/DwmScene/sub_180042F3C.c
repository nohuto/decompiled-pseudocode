/*
 * XREFs of sub_180042F3C @ 0x180042F3C
 * Callers:
 *     sub_180042FB4 @ 0x180042FB4 (sub_180042FB4.c)
 *     sub_180042FD0 @ 0x180042FD0 (sub_180042FD0.c)
 *     sub_18004A100 @ 0x18004A100 (sub_18004A100.c)
 *     sub_18004AF30 @ 0x18004AF30 (sub_18004AF30.c)
 *     sub_18005133C @ 0x18005133C (sub_18005133C.c)
 *     sub_180059984 @ 0x180059984 (sub_180059984.c)
 *     sub_18008F60C @ 0x18008F60C (sub_18008F60C.c)
 *     sub_1800966D8 @ 0x1800966D8 (sub_1800966D8.c)
 *     unknown_libname_42 @ 0x1800E68F3 (unknown_libname_42.c)
 *     sub_1800E707C @ 0x1800E707C (sub_1800E707C.c)
 *     sub_1800E78BF @ 0x1800E78BF (sub_1800E78BF.c)
 * Callees:
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void **__fastcall sub_180042F3C(_QWORD *a1)
{
  __int64 v2; // rcx
  volatile signed __int32 *v3; // rcx
  void **result; // rax
  volatile signed __int32 *v5; // rcx

  *a1 = &Spectre::Engine::Component::`vftable';
  v2 = a1[10];
  if ( v2 )
  {
    a1[10] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = (volatile signed __int32 *)a1[8];
  if ( v3 )
    sub_180010574(v3);
  sub_180011B24((__int64)(a1 + 3));
  result = &Spectre::Engine::IVisitable::`vftable';
  *a1 = &Spectre::Engine::IVisitable::`vftable';
  v5 = (volatile signed __int32 *)a1[2];
  if ( v5 )
    return (void **)sub_180010574(v5);
  return result;
}
