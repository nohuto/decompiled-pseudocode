/*
 * XREFs of sub_1406F83A0 @ 0x1406F83A0
 * Callers:
 *     sub_140207100 @ 0x140207100 (sub_140207100.c)
 *     sub_140241C40 @ 0x140241C40 (sub_140241C40.c)
 *     sub_140257280 @ 0x140257280 (sub_140257280.c)
 *     sub_140434000 @ 0x140434000 (sub_140434000.c)
 *     sub_1405E1428 @ 0x1405E1428 (sub_1405E1428.c)
 *     sub_140659774 @ 0x140659774 (sub_140659774.c)
 *     sub_140685A20 @ 0x140685A20 (sub_140685A20.c)
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 *     NtDeleteAtom @ 0x1406AB2D0 (NtDeleteAtom.c)
 *     sub_1406BC9D0 @ 0x1406BC9D0 (sub_1406BC9D0.c)
 *     sub_1406BFED0 @ 0x1406BFED0 (sub_1406BFED0.c)
 *     sub_1406C0100 @ 0x1406C0100 (sub_1406C0100.c)
 *     sub_1406C03F0 @ 0x1406C03F0 (sub_1406C03F0.c)
 *     sub_1406C1740 @ 0x1406C1740 (sub_1406C1740.c)
 *     NtQueryInformationAtom @ 0x1406C43F0 (NtQueryInformationAtom.c)
 *     sub_1406CB660 @ 0x1406CB660 (sub_1406CB660.c)
 *     sub_1406D5120 @ 0x1406D5120 (sub_1406D5120.c)
 *     sub_1406DFA80 @ 0x1406DFA80 (sub_1406DFA80.c)
 *     sub_1406F5D60 @ 0x1406F5D60 (sub_1406F5D60.c)
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 *     sub_1407F2AD0 @ 0x1407F2AD0 (sub_1407F2AD0.c)
 *     sub_1409AC388 @ 0x1409AC388 (sub_1409AC388.c)
 *     sub_1409B04E0 @ 0x1409B04E0 (sub_1409B04E0.c)
 * Callees:
 *     sub_140281830 @ 0x140281830 (sub_140281830.c)
 *     sub_140281870 @ 0x140281870 (sub_140281870.c)
 *     sub_140281930 @ 0x140281930 (sub_140281930.c)
 *     sub_140300B40 @ 0x140300B40 (sub_140300B40.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406A8F48 @ 0x1406A8F48 (sub_1406A8F48.c)
 *     sub_1406F8074 @ 0x1406F8074 (sub_1406F8074.c)
 */

__int64 __fastcall sub_1406F83A0(int a1, __int64 a2, int a3, unsigned int *a4)
{
  __int64 v4; // rbp
  unsigned int *v5; // r10
  signed __int64 *v7; // rdi
  struct _EX_RUNDOWN_REF *v8; // rbx
  unsigned int v9; // esi
  __int64 result; // rax
  int v11; // r8d
  __int64 v12; // rcx
  int v13; // eax
  _DWORD *v14; // r9
  signed __int64 *v15; // rax
  unsigned int *v16; // rcx
  unsigned int v17; // [rsp+40h] [rbp+18h] BYREF

  v4 = a1;
  v5 = a4;
  v17 = 0;
  if ( a3 )
  {
    v11 = a3 - 1;
    if ( v11 )
    {
      if ( v11 != 1 )
        return 3221225485LL;
      v16 = 0LL;
    }
    else
    {
      v12 = *((_QWORD *)KeGetCurrentThread() + 23);
      if ( (*(_DWORD *)(v12 + 1124) & 0x10000) != 0 )
      {
        v13 = sub_140300B40(v12);
        if ( *v14 == v13 )
        {
          v15 = (signed __int64 *)sub_140281830();
          return sub_1406F8074(v15, v4);
        }
      }
      v16 = v5;
    }
    result = sub_1406A8F48(v16, v4, a2, (int *)&v17);
    if ( (int)result >= 0 )
      return v17;
  }
  else
  {
    v7 = (signed __int64 *)sub_140281830();
    v8 = sub_140281870(v7);
    if ( v8 )
    {
      v9 = sub_14042A5E0(v8[2].Count, v4);
      sub_140281930(v7, (__int64)v8);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
    return v9;
  }
  return result;
}
