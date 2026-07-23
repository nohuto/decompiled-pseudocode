/*
 * XREFs of sub_140985CD8 @ 0x140985CD8
 * Callers:
 *     sub_140986190 @ 0x140986190 (sub_140986190.c)
 *     sub_140986424 @ 0x140986424 (sub_140986424.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140985CD8(__int64 a1, unsigned __int16 **a2)
{
  __int64 v3; // r8
  __int64 v4; // rbp
  unsigned __int16 *v5; // rsi
  unsigned __int16 *i; // rbx
  unsigned __int16 *v7; // rdi
  __int64 v8; // rax

  v3 = (((unsigned int)(a1 + 48) >> 4) & 0xFFFFF) % 0x191;
  v4 = (unsigned int)v3;
  v5 = 0LL;
  for ( i = (unsigned __int16 *)*((_QWORD *)qword_140C252C8 + v3); i; i = (unsigned __int16 *)*((_QWORD *)i + 1) )
  {
    v7 = i;
    if ( *(_QWORD *)i == a1 )
    {
      v8 = i[17];
      if ( i[16] == (_WORD)v8 )
      {
        i = (unsigned __int16 *)ExAllocatePool2(64LL, 12 * v8 + 6184, 1951556175LL);
        if ( !i )
          return 3221225495LL;
        memmove(i, v7, 12LL * v7[16] + 40);
        i[17] += 512;
        if ( v5 )
          *((_QWORD *)v5 + 1) = i;
        else
          *((_QWORD *)qword_140C252C8 + v4) = i;
        ExFreePoolWithTag(v7, 0x7452624Fu);
      }
      break;
    }
    v5 = i;
  }
  *a2 = i;
  return 0LL;
}
