/*
 * XREFs of sub_140595F4C @ 0x140595F4C
 * Callers:
 *     sub_1403203D0 @ 0x1403203D0 (sub_1403203D0.c)
 * Callees:
 *     sub_1402DC05C @ 0x1402DC05C (sub_1402DC05C.c)
 *     sub_1402DC098 @ 0x1402DC098 (sub_1402DC098.c)
 */

__int64 __fastcall sub_140595F4C(unsigned __int64 a1)
{
  unsigned int v2; // ebx
  PVOID *i; // rdx
  PVOID v4; // rcx
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v6 = 0;
  sub_1402DC098(&v6);
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    v4 = i[6];
    if ( a1 >= (unsigned __int64)v4 && a1 < (unsigned __int64)v4 + *((unsigned int *)i + 16) )
    {
      v2 = 1;
      break;
    }
  }
  sub_1402DC05C(v6);
  return v2;
}
