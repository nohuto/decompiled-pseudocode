/*
 * XREFs of sub_140A61B28 @ 0x140A61B28
 * Callers:
 *     sub_14051DB48 @ 0x14051DB48 (sub_14051DB48.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140A61B28(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // rbx
  __int64 *v4; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v3 = (__int64 *)qword_140C4BCE0;
  while ( v3 != &qword_140C4BCE0 )
  {
    v4 = v3;
    v3 = (__int64 *)*v3;
    result = *((unsigned int *)v4 + 118);
    if ( (result & 0x40) != 0 )
    {
      LOBYTE(a2) = 1;
      result = sub_14042A5E0(v4[2], a2);
    }
  }
  return result;
}
