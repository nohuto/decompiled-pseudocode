/*
 * XREFs of sub_140A1483C @ 0x140A1483C
 * Callers:
 *     sub_140A139FC @ 0x140A139FC (sub_140A139FC.c)
 * Callees:
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140A1483C(__int64 a1, unsigned int *a2)
{
  wchar_t *v4; // r14
  int v5; // ebx

  *(_DWORD *)a1 = 5111884;
  v4 = (wchar_t *)sub_14075B444(a1, 0x4EuLL);
  if ( v4 )
  {
    v5 = sub_1402E0198(
           v4,
           (unsigned __int64)*(unsigned __int16 *)(a1 + 2) >> 1,
           L"{%08lx-%04hx-%04hx-%02hx%02hx-%02hx%02hx%02hx%02hx%02hx%02hx}",
           *a2,
           *((unsigned __int16 *)a2 + 2),
           *((unsigned __int16 *)a2 + 3),
           *((unsigned __int8 *)a2 + 8),
           *((unsigned __int8 *)a2 + 9),
           *((unsigned __int8 *)a2 + 10),
           *((unsigned __int8 *)a2 + 11),
           *((unsigned __int8 *)a2 + 12),
           *((unsigned __int8 *)a2 + 13),
           *((unsigned __int8 *)a2 + 14),
           *((unsigned __int8 *)a2 + 15));
    if ( v5 >= 0 )
    {
      *(_QWORD *)(a1 + 8) = v4;
      return 0;
    }
    else
    {
      sub_1406E0C3C(1LL, (__int64)"AslGuidToString_UStr");
      ExFreePoolWithTag(v4, 0x74705041u);
    }
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"AslGuidToString_UStr");
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v5;
}
