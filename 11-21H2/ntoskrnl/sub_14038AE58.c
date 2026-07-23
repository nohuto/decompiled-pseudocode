/*
 * XREFs of sub_14038AE58 @ 0x14038AE58
 * Callers:
 *     sub_14038AA3C @ 0x14038AA3C (sub_14038AA3C.c)
 *     sub_14038AB60 @ 0x14038AB60 (sub_14038AB60.c)
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_14038AF44 @ 0x14038AF44 (sub_14038AF44.c)
 *     sub_1405D4150 @ 0x1405D4150 (sub_1405D4150.c)
 *     sub_1407FD7A8 @ 0x1407FD7A8 (sub_1407FD7A8.c)
 *     sub_14081CEB4 @ 0x14081CEB4 (sub_14081CEB4.c)
 */

void __fastcall sub_14038AE58(char a1)
{
  __int64 i; // rdi
  __int64 v3; // rdx
  __int64 *j; // rbx
  __int64 v5; // rax

  sub_1402D66A8((ULONG_PTR)&qword_140C225E0);
  for ( i = qword_140C225F0; (__int64 *)i != &qword_140C225F0; i = *(_QWORD *)i )
  {
    if ( *(_BYTE *)(i + 64) )
    {
      sub_1402D66A8(i + 32);
      for ( j = *(__int64 **)(i + 16); j != (__int64 *)(i + 16); j = (__int64 *)*j )
      {
        if ( *((_BYTE *)j + 18) )
        {
          if ( a1 )
          {
            if ( *(_QWORD *)(i + 136) )
            {
              LOBYTE(v3) = *((_BYTE *)j + 16);
              sub_1407FD7A8(j + 5, v3);
              sub_14038AF44(j);
            }
            if ( *(_QWORD *)(i + 128) )
            {
              LOBYTE(v3) = *((_BYTE *)j + 17) == 0;
              sub_14081CEB4(j + 5, v3);
              sub_1405D4150(j);
            }
            *((_BYTE *)j + 40) = 1;
          }
          else
          {
            v5 = MEMORY[0xFFFFF78000000008];
            j[6] = MEMORY[0xFFFFF78000000008];
            j[7] = v5;
            *((_BYTE *)j + 40) = 0;
          }
        }
      }
      sub_1402935D0(i + 32);
    }
  }
  sub_1402935D0((ULONG_PTR)&qword_140C225E0);
}
