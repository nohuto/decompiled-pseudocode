/*
 * XREFs of sub_14037FC24 @ 0x14037FC24
 * Callers:
 *     sub_14037FA00 @ 0x14037FA00 (sub_14037FA00.c)
 * Callees:
 *     sub_1402F5718 @ 0x1402F5718 (sub_1402F5718.c)
 *     sub_14037E958 @ 0x14037E958 (sub_14037E958.c)
 *     sub_1403814C4 @ 0x1403814C4 (sub_1403814C4.c)
 */

void __fastcall sub_14037FC24(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v2; // rax
  __int64 v3; // r8
  unsigned __int64 v4; // r11

  v1 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 184) = 0LL;
  if ( *(_QWORD *)(a1 + 168) != -1LL )
  {
    v2 = sub_1402F5718();
    if ( *(_QWORD *)(v4 + 168) <= v2 )
    {
      sub_14037E958(v4, v2);
    }
    else if ( v1 )
    {
      sub_1403814C4(v4, v2, v3);
    }
  }
}
