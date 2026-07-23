/*
 * XREFs of sub_14056A19C @ 0x14056A19C
 * Callers:
 *     sub_140583D08 @ 0x140583D08 (sub_140583D08.c)
 * Callees:
 *     sub_140389334 @ 0x140389334 (sub_140389334.c)
 */

__int64 __fastcall sub_14056A19C(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v5; // ebx
  PVOID *v6; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int8 CurrentIrql; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( !qword_140C2BD30 )
    return 0LL;
  v6 = 0LL;
  v5 = 0;
  while ( (unsigned int)sub_140389334(&v6, &CurrentIrql, &v8) )
  {
    if ( v8 >= a1 && v8 < a2 )
      v5 = 1;
  }
  return v5;
}
