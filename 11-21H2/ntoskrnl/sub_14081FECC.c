/*
 * XREFs of sub_14081FECC @ 0x14081FECC
 * Callers:
 *     sub_140747FB4 @ 0x140747FB4 (sub_140747FB4.c)
 *     sub_1407483B4 @ 0x1407483B4 (sub_1407483B4.c)
 *     sub_140958D9C @ 0x140958D9C (sub_140958D9C.c)
 *     sub_140958F84 @ 0x140958F84 (sub_140958F84.c)
 *     sub_14095A02C @ 0x14095A02C (sub_14095A02C.c)
 * Callees:
 *     sub_14082045C @ 0x14082045C (sub_14082045C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_14081FECC(unsigned __int64 a1, unsigned __int64 a2)
{
  PVOID *v2; // rdi
  unsigned __int64 v3; // rbx
  void *v4; // rcx

  if ( a1 < a2 )
  {
    v2 = (PVOID *)(a1 + 32);
    v3 = ((a2 - a1 - 1) >> 6) + 1;
    do
    {
      sub_14082045C(*v2);
      *v2 = 0LL;
      if ( (*(_DWORD *)(v2 - 3) & 0x200) != 0 )
      {
        v4 = *(v2 - 1);
        if ( v4 )
        {
          ExFreePoolWithTag(v4, 0);
          *(v2 - 1) = 0LL;
        }
      }
      v2 += 8;
      --v3;
    }
    while ( v3 );
  }
}
