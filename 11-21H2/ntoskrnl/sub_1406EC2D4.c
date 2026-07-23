/*
 * XREFs of sub_1406EC2D4 @ 0x1406EC2D4
 * Callers:
 *     sub_1406EC158 @ 0x1406EC158 (sub_1406EC158.c)
 *     sub_1406EC288 @ 0x1406EC288 (sub_1406EC288.c)
 * Callees:
 *     sub_14025ECDC @ 0x14025ECDC (sub_14025ECDC.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     sub_14033B6A0 @ 0x14033B6A0 (sub_14033B6A0.c)
 */

void __fastcall sub_1406EC2D4(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  bool v6; // zf

  if ( *(_DWORD *)(a2 + 8) )
  {
    v4 = sub_14025ECDC(*(_QWORD *)a2);
    do
    {
      sub_1402E20D0(a1, *(_QWORD *)a2, 0);
      v5 = sub_14033B6A0(*(_QWORD *)a2, ++v4);
      v6 = (*(_DWORD *)(a2 + 8))-- == 1;
      *(_QWORD *)a2 = v5;
    }
    while ( !v6 );
  }
}
