/*
 * XREFs of sub_140237D0C @ 0x140237D0C
 * Callers:
 *     sub_140237ABC @ 0x140237ABC (sub_140237ABC.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140237D0C(__int64 a1, int a2)
{
  _QWORD **v2; // rbx
  _QWORD *v3; // rcx
  _QWORD *v4; // r8

  if ( !a2 )
  {
    v2 = (_QWORD **)(a1 + 64);
    while ( 1 )
    {
      v3 = v2[1];
      if ( v3 == v2 )
        break;
      v4 = *v2;
      *v2 = (_QWORD *)**v2;
      if ( v4 == v3 )
      {
        *v2 = 0LL;
        v2[1] = v2;
      }
      else
      {
        --*v3;
      }
      ExFreePoolWithTag(v4, 0);
    }
  }
}
