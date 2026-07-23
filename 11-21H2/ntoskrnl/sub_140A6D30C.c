/*
 * XREFs of sub_140A6D30C @ 0x140A6D30C
 * Callers:
 *     sub_14096029C @ 0x14096029C (sub_14096029C.c)
 * Callees:
 *     sub_1403C08BC @ 0x1403C08BC (sub_1403C08BC.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140A6D30C(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  __int64 Pool2; // rax
  __int64 v6; // rdx
  __int64 i; // rbx

  result = 0LL;
  if ( a2 )
  {
    for ( i = qword_140CE1AA8; (__int64 *)i != &qword_140CE1AA8; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 108) == 1 )
      {
        *(_DWORD *)(i + 108) = 2;
        result = sub_1403C08BC(i, a2);
        if ( (int)result < 0 )
        {
          *(_DWORD *)(i + 108) = 1;
          return result;
        }
      }
    }
  }
  else
  {
    Pool2 = ExAllocatePool2(66LL, 24LL, 1634035799LL);
    v6 = Pool2;
    if ( Pool2 )
    {
      *(_QWORD *)(Pool2 + 8) = &unk_140CE1A98;
      *(_DWORD *)Pool2 = dword_140CE1A9C;
      *(_QWORD *)(Pool2 + 16) = &qword_140C10BE0;
      result = 0LL;
      *(_QWORD *)(a1 + 34464) = v6;
    }
    else
    {
      LODWORD(qword_140C10C70) = qword_140C10C70 + 1;
      result = 3221225626LL;
      HIDWORD(qword_140C10C70) |= 0x10u;
    }
  }
  return result;
}
