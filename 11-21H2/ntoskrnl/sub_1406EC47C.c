/*
 * XREFs of sub_1406EC47C @ 0x1406EC47C
 * Callers:
 *     sub_14025F4D4 @ 0x14025F4D4 (sub_14025F4D4.c)
 *     sub_140260144 @ 0x140260144 (sub_140260144.c)
 * Callees:
 *     sub_140260A44 @ 0x140260A44 (sub_140260A44.c)
 *     sub_140260C2C @ 0x140260C2C (sub_140260C2C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406EC47C(void *Src, __int64 a2)
{
  void *v2; // rdi
  size_t v4; // rbx
  PVOID v5; // rax
  int v6; // ebx

  v2 = 0LL;
  if ( a2 )
  {
    v4 = 16 * a2;
    v5 = sub_140260C2C(16 * a2, 0x52566D73u);
    v2 = v5;
    if ( !v5 )
      return (unsigned int)-1073741670;
    memmove(v5, Src, v4);
  }
  v6 = sub_140260A44((ULONG_PTR)&qword_140D321C8);
  if ( v6 >= 0 )
  {
    return 0;
  }
  else if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
  }
  return (unsigned int)v6;
}
