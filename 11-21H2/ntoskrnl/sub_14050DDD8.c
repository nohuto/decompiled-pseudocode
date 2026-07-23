/*
 * XREFs of sub_14050DDD8 @ 0x14050DDD8
 * Callers:
 *     sub_14050CD98 @ 0x14050CD98 (sub_14050CD98.c)
 * Callees:
 *     sub_140303720 @ 0x140303720 (sub_140303720.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14050DE34 @ 0x14050DE34 (sub_14050DE34.c)
 */

void __fastcall sub_14050DDD8(__int64 a1, char a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx

  if ( a2 )
  {
    v3 = sub_140303720(qword_140C4E380);
    if ( (int)sub_14042A5E0(v3, v4) >= 0 )
    {
      if ( dword_140D01740 )
        sub_14050DE34();
    }
    else
    {
      *(_DWORD *)(a1 + 184) = *(_DWORD *)(a1 + 184) & 0xFFFFFFFC | 1;
    }
  }
}
