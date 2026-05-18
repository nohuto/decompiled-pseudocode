/*
 * XREFs of sub_18005FC70 @ 0x18005FC70
 * Callers:
 *     sub_18005FE90 @ 0x18005FE90 (sub_18005FE90.c)
 *     sub_18007E8A0 @ 0x18007E8A0 (sub_18007E8A0.c)
 *     sub_18007F3D8 @ 0x18007F3D8 (sub_18007F3D8.c)
 *     sub_18007F7BC @ 0x18007F7BC (sub_18007F7BC.c)
 *     sub_18007FE50 @ 0x18007FE50 (sub_18007FE50.c)
 *     sub_180098A70 @ 0x180098A70 (sub_180098A70.c)
 *     unknown_libname_61 @ 0x1800EA0ED (unknown_libname_61.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180011B24 @ 0x180011B24 (sub_180011B24.c)
 */

__int64 __fastcall sub_18005FC70(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  *a1 = &Spectre::Engine::IShaderExtension::`vftable';
  sub_180011B24((__int64)(a1 + 9));
  v2 = a1[8];
  if ( v2 )
    sub_180010530(v2);
  result = sub_180011B24((__int64)(a1 + 3));
  v4 = (volatile signed __int32 *)a1[2];
  if ( v4 )
    return sub_180010574(v4);
  return result;
}
