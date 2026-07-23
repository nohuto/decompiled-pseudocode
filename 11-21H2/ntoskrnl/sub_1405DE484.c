/*
 * XREFs of sub_1405DE484 @ 0x1405DE484
 * Callers:
 *     sub_1403B9F08 @ 0x1403B9F08 (sub_1403B9F08.c)
 *     sub_1405DE2A0 @ 0x1405DE2A0 (sub_1405DE2A0.c)
 *     sub_1405DE3F0 @ 0x1405DE3F0 (sub_1405DE3F0.c)
 * Callees:
 *     <none>
 */

unsigned __int16 *__fastcall sub_1405DE484(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int64 v2; // r14
  __int64 v3; // r9
  __int64 v5; // rdi
  unsigned __int16 **i; // rbx
  unsigned __int16 *v7; // r10
  __int64 v8; // rax
  unsigned __int16 *v9; // r8
  unsigned __int16 *v10; // rbp
  unsigned __int16 *v11; // r11
  signed __int64 v12; // rbp
  int v13; // ecx
  int v14; // r15d
  unsigned __int16 v15; // dx
  __int16 v16; // cx

  v2 = *(_QWORD *)(a1 + 48);
  v3 = 0LL;
  v5 = 0LL;
  if ( v2 )
  {
    for ( i = *(unsigned __int16 ***)(a1 + 56); ; ++i )
    {
      v7 = *i;
      if ( a2 == *i )
        break;
      v8 = *a2;
      if ( (_WORD)v8 == *v7 )
      {
        v9 = (unsigned __int16 *)*((_QWORD *)a2 + 1);
        v10 = (unsigned __int16 *)*((_QWORD *)v7 + 1);
        if ( v9 == v10 )
          return *i;
        v11 = (unsigned __int16 *)((char *)v9 + v8);
        if ( v9 >= (unsigned __int16 *)((char *)v9 + v8) )
          return *i;
        v12 = (char *)v10 - (char *)v9;
        while ( 1 )
        {
          v13 = *v9;
          v14 = *(unsigned __int16 *)((char *)v9 + v12);
          if ( (_WORD)v13 != (_WORD)v14 )
          {
            v15 = v13 - 32;
            if ( (unsigned int)(v13 - 97) > 0x19 )
              v15 = *v9;
            v16 = v14 - 32;
            if ( (unsigned int)(v14 - 97) > 0x19 )
              v16 = *(unsigned __int16 *)((char *)v9 + v12);
            if ( v15 != v16 )
              break;
          }
          if ( ++v9 >= v11 )
            return *i;
        }
      }
      if ( ++v5 >= v2 )
        return (unsigned __int16 *)v3;
    }
    return *i;
  }
  return (unsigned __int16 *)v3;
}
