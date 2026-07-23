/*
 * XREFs of sub_1407F1308 @ 0x1407F1308
 * Callers:
 *     sub_1407F0070 @ 0x1407F0070 (sub_1407F0070.c)
 *     sub_140B24AB0 @ 0x140B24AB0 (sub_140B24AB0.c)
 * Callees:
 *     sub_14036C210 @ 0x14036C210 (sub_14036C210.c)
 *     RtlRandomEx @ 0x14036C940 (RtlRandomEx.c)
 *     sub_140661D80 @ 0x140661D80 (sub_140661D80.c)
 *     sub_1407F1400 @ 0x1407F1400 (sub_1407F1400.c)
 *     sub_1407F15C0 @ 0x1407F15C0 (sub_1407F15C0.c)
 */

__int64 __fastcall sub_1407F1308(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v5; // xmm0
  int v6; // eax
  _QWORD *v7; // rdi
  int v8; // ebx
  __int128 v10; // [rsp+30h] [rbp-20h] BYREF
  __int128 v11; // [rsp+40h] [rbp-10h] BYREF
  ULONG Seed; // [rsp+78h] [rbp+28h] BYREF
  _QWORD *v13; // [rsp+88h] [rbp+38h] BYREF

  v13 = 0LL;
  if ( qword_140C1CFC8 )
  {
    v10 = RtlRandomEx(&Seed);
    v5 = v10;
    v10 = 0LL;
    v11 = v5;
    LODWORD(v10) = -1428313379;
    BYTE4(v10) = 6;
    v6 = sub_14036C210(qword_140C1CFC8, &v10, &v11, a1 + 8, 7u, (__int64 *)&v13);
    v7 = v13;
    v8 = v6;
    if ( v6 >= 0 )
    {
      if ( (*(_DWORD *)a1 & 1) == 0
        || (v8 = sub_140661D80(
                   v13,
                   *(_WORD *)(a1 + 40),
                   (unsigned __int16 *)(a1 + 24),
                   *(_DWORD *)(a1 + 44),
                   (unsigned __int16 *)(a1 + 48)),
            v8 >= 0) )
      {
        v8 = sub_1407F1400(v7, a3);
        if ( v8 >= 0 )
        {
          v7 = 0LL;
          v8 = 0;
        }
      }
    }
    if ( v7 )
      sub_1407F15C0(v7);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v8;
}
