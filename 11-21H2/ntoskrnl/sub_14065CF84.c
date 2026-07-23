/*
 * XREFs of sub_14065CF84 @ 0x14065CF84
 * Callers:
 *     sub_14065CE0C @ 0x14065CE0C (sub_14065CE0C.c)
 *     sub_14065D4F8 @ 0x14065D4F8 (sub_14065D4F8.c)
 * Callees:
 *     sub_14065CFD4 @ 0x14065CFD4 (sub_14065CFD4.c)
 *     sub_140AB4218 @ 0x140AB4218 (sub_140AB4218.c)
 */

void __fastcall sub_14065CF84(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v7 = 0LL;
    v3 = a1 + 16;
    while ( 1 )
    {
      v5 = sub_140AB4218(v3, &v7, 0LL);
      if ( !v5 )
        break;
      sub_14065CFD4(v5, v6, a3);
    }
  }
}
