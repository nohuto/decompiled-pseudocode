/*
 * XREFs of sub_140A0A238 @ 0x140A0A238
 * Callers:
 *     sub_140A09FB4 @ 0x140A09FB4 (sub_140A09FB4.c)
 * Callees:
 *     sub_140A09F1C @ 0x140A09F1C (sub_140A09F1C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140A0A238(unsigned __int64 a1)
{
  PVOID *v2; // rbx
  unsigned __int64 v3; // rbp
  PVOID *v4; // rdi
  PVOID **v5; // rax

  if ( qword_140C0DA98 && a1 >= qword_140C0DA98 )
  {
    v2 = (PVOID *)qword_140D01098;
    v3 = a1 - qword_140C0DA98;
    while ( v2 != &qword_140D01098 )
    {
      v4 = v2;
      v2 = (PVOID *)*v2;
      if ( (unsigned __int64)v4[4] <= v3 )
      {
        if ( v2[1] != v4 || (v5 = (PVOID **)v4[1], *v5 != v4) )
          __fastfail(3u);
        *v5 = v2;
        v2[1] = v5;
        sub_140A09F1C((__int64)v4, 2, a1);
        ExFreePoolWithTag(v4, 0x61656857u);
      }
    }
  }
}
