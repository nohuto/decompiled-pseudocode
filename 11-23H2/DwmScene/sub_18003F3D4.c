/*
 * XREFs of sub_18003F3D4 @ 0x18003F3D4
 * Callers:
 *     sub_18003F3D4 @ 0x18003F3D4 (sub_18003F3D4.c)
 *     sub_18003FF34 @ 0x18003FF34 (sub_18003FF34.c)
 *     sub_18006102C @ 0x18006102C (sub_18006102C.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18003F3D4 @ 0x18003F3D4 (sub_18003F3D4.c)
 */

__int64 __fastcall sub_18003F3D4(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = sub_1800100E8(v6, 0x38uLL) )
  {
    sub_18003F3D4(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    v7 = v6[6];
    if ( v7 )
      sub_180010530(v7);
  }
  return result;
}
