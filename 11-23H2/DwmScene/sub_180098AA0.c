/*
 * XREFs of sub_180098AA0 @ 0x180098AA0
 * Callers:
 *     sub_18009B824 @ 0x18009B824 (sub_18009B824.c)
 * Callees:
 *     sub_18003F8F8 @ 0x18003F8F8 (sub_18003F8F8.c)
 *     sub_1800985E0 @ 0x1800985E0 (sub_1800985E0.c)
 */

unsigned __int64 __fastcall sub_180098AA0(_QWORD *a1)
{
  _QWORD *v1; // rbx
  _QWORD *v2; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 *v4; // rdx
  unsigned __int64 *v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)*a1;
  if ( *a1 && v1[2] )
  {
    v2 = (_QWORD *)v1[1];
    if ( v1[7] >> 3 <= v1[2] )
    {
      sub_1800985E0((__int64)a1, (__int64)v2);
      *(_QWORD *)v1[1] = v1[1];
      *(_QWORD *)(v1[1] + 8LL) = v1[1];
      v1[2] = 0LL;
      v4 = (unsigned __int64 *)v1[4];
      v5 = (unsigned __int64 *)v1[3];
      v6 = v1[1];
      return sub_18003F8F8(v5, v4, &v6);
    }
    else
    {
      return sub_18009BA60(*a1, *v2, v1[1]);
    }
  }
  return result;
}
