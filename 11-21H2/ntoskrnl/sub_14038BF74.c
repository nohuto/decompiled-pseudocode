/*
 * XREFs of sub_14038BF74 @ 0x14038BF74
 * Callers:
 *     sub_140A4B5A0 @ 0x140A4B5A0 (sub_140A4B5A0.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_14038BF74(__int64 a1, char a2)
{
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rdx

  v2 = *(_QWORD *)(a1 + 34088);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 64);
    if ( v3 )
    {
      if ( *(_QWORD *)(v3 + 104) )
      {
        if ( a2 )
          v4 = 39LL;
        else
          v4 = 40LL;
        sub_14042A5E0(*(_QWORD *)(v2 + 72), v4);
      }
    }
  }
}
