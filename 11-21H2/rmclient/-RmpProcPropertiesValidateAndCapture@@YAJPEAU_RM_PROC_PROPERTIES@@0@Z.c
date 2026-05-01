/*
 * XREFs of ?RmpProcPropertiesValidateAndCapture@@YAJPEAU_RM_PROC_PROPERTIES@@0@Z @ 0x180014E28
 * Callers:
 *     RmSetProcessManagement @ 0x18001B6F0 (RmSetProcessManagement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpProcPropertiesValidateAndCapture(__m128i *a1, __m128i *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx

  v2 = 0;
  if ( a2 )
    *a2 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a1->m128i_i8[3] )
  {
    if ( a2 )
      a2->m128i_i32[0] = a1->m128i_i32[0];
    return (unsigned int)-1073700573;
  }
  if ( a1->m128i_i8[3] > 2u )
    return (unsigned int)-1073700573;
  if ( a2 )
    *a2 = *a1;
  v4 = a1->m128i_i64[0];
  if ( (v4 & 0xFFF800) != 0
    || (v4 & 0xFFFFFFFF00000000uLL) != 0
    || ((unsigned __int8)v4 & 7u) >= 5
    || ((unsigned __int8)v4 & 0x18u) >= 0x18
    || ((unsigned __int16)v4 & 0x1C0u) >= 0xC0uLL
    || a1->m128i_i64[1] > GetTickCount64() )
  {
    return (unsigned int)-1073741811;
  }
  if ( a1->m128i_i8[3] != 2 )
  {
    v2 = -1073741811;
    if ( (a1->m128i_i64[0] & 0x200) == 0 )
      return (a1->m128i_i64[0] & 0x400) != 0 ? 0xC000000D : 0;
  }
  return v2;
}
