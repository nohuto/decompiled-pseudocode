/*
 * XREFs of sub_14054445C @ 0x14054445C
 * Callers:
 *     sub_1403DEDD0 @ 0x1403DEDD0 (sub_1403DEDD0.c)
 * Callees:
 *     MmMapIoSpaceEx @ 0x140215340 (MmMapIoSpaceEx.c)
 *     sub_140544670 @ 0x140544670 (sub_140544670.c)
 *     sub_1405448D4 @ 0x1405448D4 (sub_1405448D4.c)
 *     sub_140545750 @ 0x140545750 (sub_140545750.c)
 */

__int64 __fastcall sub_14054445C(__int64 a1, unsigned __int16 a2)
{
  int v2; // edi
  int v3; // esi
  __int64 v4; // rbp
  int *v5; // rbx
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int16 v9; // cx
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+60h] [rbp+18h] BYREF
  __int64 v12; // [rsp+68h] [rbp+20h] BYREF

  v2 = NumOfElements;
  v11 = 0;
  v3 = a1;
  v12 = 0LL;
  v4 = a2;
  v5 = &dword_140D125E0[30 * (unsigned int)NumOfElements];
  if ( (dword_140D068B8 & 0x20) != 0 )
  {
    v11 = NumOfElements;
    result = sub_140545750((unsigned int)NumOfElements, (unsigned int)a1, a2, v5 + 14);
    if ( (int)result < 0 )
      return result;
  }
  else
  {
    result = sub_140544670(a1, &v11);
    if ( (int)result < 0 )
      return result;
    v2 = v11;
  }
  if ( (dword_140D068B8 & 0x10) != 0 )
  {
    v10 = 0LL;
    LODWORD(v10) = v2;
    result = sub_1405448D4(2LL, &v10, &v12);
    if ( (int)result < 0 )
      return result;
    v7 = MmMapIoSpaceEx(v12, 4096LL, 2u);
    if ( !v7 )
      return 3221225626LL;
    *((_QWORD *)v5 + 4) = v7;
  }
  v5[1] = v2;
  v8 = qword_140D31700[v4];
  v5[2] = v3;
  *((_WORD *)v5 + 6) = v4;
  v9 = *(_WORD *)(v8 + 2);
  v5[6] = -1;
  *((_WORD *)v5 + 7) = v9;
  result = 0LL;
  *v5 = 1;
  return result;
}
