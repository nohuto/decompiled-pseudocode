/*
 * XREFs of sub_1403AACB4 @ 0x1403AACB4
 * Callers:
 *     sub_1403AAA5C @ 0x1403AAA5C (sub_1403AAA5C.c)
 *     sub_140507820 @ 0x140507820 (sub_140507820.c)
 *     sub_140A61564 @ 0x140A61564 (sub_140A61564.c)
 * Callees:
 *     sub_1403AAD30 @ 0x1403AAD30 (sub_1403AAD30.c)
 */

__int64 __fastcall sub_1403AACB4(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebp
  unsigned int v4; // esi
  unsigned int v5; // edi
  unsigned __int64 v7; // rax
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v3 = -1073741275;
  if ( !byte_140C549B0 )
  {
    v7 = __readmsr(0x179u);
    byte_140C549B0 = v7;
  }
  v4 = (unsigned __int8)byte_140C549B0;
  v5 = 0;
  v8 = 0LL;
  if ( byte_140C549B0 )
  {
    while ( sub_1403AAD30(a2, v5, &v8) >= 0 )
    {
      if ( ++v5 >= v4 )
        return v3;
    }
    return 0;
  }
  return v3;
}
