/*
 * XREFs of sub_1402738F0 @ 0x1402738F0
 * Callers:
 *     sub_140243208 @ 0x140243208 (sub_140243208.c)
 *     sub_1402450AC @ 0x1402450AC (sub_1402450AC.c)
 *     sub_14025592C @ 0x14025592C (sub_14025592C.c)
 *     sub_14025AD28 @ 0x14025AD28 (sub_14025AD28.c)
 *     sub_14026C808 @ 0x14026C808 (sub_14026C808.c)
 *     sub_14026FB78 @ 0x14026FB78 (sub_14026FB78.c)
 *     sub_1402710C4 @ 0x1402710C4 (sub_1402710C4.c)
 *     sub_140272A10 @ 0x140272A10 (sub_140272A10.c)
 *     sub_1402BE8E0 @ 0x1402BE8E0 (sub_1402BE8E0.c)
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 *     sub_14033A920 @ 0x14033A920 (sub_14033A920.c)
 *     sub_14033B190 @ 0x14033B190 (sub_14033B190.c)
 *     sub_14033E970 @ 0x14033E970 (sub_14033E970.c)
 *     sub_14058B40C @ 0x14058B40C (sub_14058B40C.c)
 *     sub_14058BA98 @ 0x14058BA98 (sub_14058BA98.c)
 *     sub_140599EBC @ 0x140599EBC (sub_140599EBC.c)
 *     sub_14059DF58 @ 0x14059DF58 (sub_14059DF58.c)
 *     sub_14059E3E8 @ 0x14059E3E8 (sub_14059E3E8.c)
 *     sub_14059E660 @ 0x14059E660 (sub_14059E660.c)
 *     sub_14059E7F0 @ 0x14059E7F0 (sub_14059E7F0.c)
 *     sub_1405A0774 @ 0x1405A0774 (sub_1405A0774.c)
 * Callees:
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_140273A80 @ 0x140273A80 (sub_140273A80.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14059A31C @ 0x14059A31C (sub_14059A31C.c)
 */

__int64 __fastcall sub_1402738F0(unsigned __int64 *a1, __int64 a2)
{
  char v2; // r14
  __int64 v4; // r8
  unsigned __int64 i; // r9
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v11; // rdx
  int v12; // [rsp+50h] [rbp+8h] BYREF

  v2 = a2;
  v4 = 0x40000000000000LL;
  for ( i = 0x7FFFFFFFFFFFFFFFLL; ; _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), i) )
  {
    while ( 1 )
    {
      v6 = *a1;
      v7 = *a1;
      if ( (*a1 & 1) != 0 )
        goto LABEL_3;
      if ( (*a1 & 0xC00) != 0x800 )
        return 0LL;
      if ( (unsigned int)sub_140273A80(*a1, a2, v4, i) )
      {
        v7 = v6;
        if ( qword_140C50780 && (v6 & 0x10) == 0 )
          v7 = v6 & ~qword_140C50780;
LABEL_3:
        v8 = (v7 >> 12) & 0xFFFFFFFFFFLL;
        if ( v8 <= qword_140C50840 )
        {
          a2 = 6 * v8;
          if ( (v4 & *(_QWORD *)(48 * v8 - 0x21FFFFFFFFD8LL)) != 0 )
            break;
        }
      }
    }
    v9 = 48 * v8 - 0x220000000000LL;
    if ( (v2 & 1) != 0 )
    {
      sub_140239060(48 * v8 - 0x220000000000LL);
    }
    else
    {
      v12 = v2 & 1;
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
        goto LABEL_7;
      do
      {
        do
          sub_1402F32E0(&v12);
        while ( *(__int64 *)(v9 + 24) < 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
    }
    i = 0x7FFFFFFFFFFFFFFFLL;
    v4 = 0x40000000000000LL;
LABEL_7:
    if ( *a1 == v6 )
      break;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v9 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x100) != 0 )
  {
    v11 = v2 & 1 | 2u;
    if ( (v2 & 2) == 0 )
      v11 = v2 & 1;
    return sub_14059A31C(v9, v11);
  }
  return v9;
}
