/*
 * XREFs of sub_14055CB14 @ 0x14055CB14
 * Callers:
 *     sub_14055C6BC @ 0x14055C6BC (sub_14055C6BC.c)
 *     sub_14055C7C4 @ 0x14055C7C4 (sub_14055C7C4.c)
 * Callees:
 *     sub_1403D7FD4 @ 0x1403D7FD4 (sub_1403D7FD4.c)
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 */

__int64 __fastcall sub_14055CB14(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // ebx
  __int64 v4; // rcx
  unsigned __int64 v5; // rsi

  v1 = *(unsigned __int16 *)(a1 + 2);
  v2 = 0;
  if ( (_WORD)v1 )
  {
    v4 = *(_QWORD *)(a1 + 8);
    if ( (unsigned __int16)v1 > 0x100u )
    {
      if ( sub_1403D7FD4(v4, 256LL) )
      {
        sub_1403D99B4(*(_QWORD *)(a1 + 8), (PVOID)0x100);
        return (unsigned int)-2147483643;
      }
    }
    else
    {
      v5 = (unsigned __int64)(v1 + 7) >> 3;
      if ( sub_1403D7FD4(v4, 8 * v5) )
        sub_1403D99B4(*(_QWORD *)(a1 + 8), (PVOID)(unsigned int)(8 * v5));
      else
        return (unsigned int)-1073741823;
    }
  }
  return v2;
}
