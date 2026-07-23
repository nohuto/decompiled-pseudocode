/*
 * XREFs of sub_1409D4698 @ 0x1409D4698
 * Callers:
 *     sub_1406E5AA0 @ 0x1406E5AA0 (sub_1406E5AA0.c)
 * Callees:
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_1405F7EBC @ 0x1405F7EBC (sub_1405F7EBC.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1409D4698(unsigned __int64 a1, int a2, char a3)
{
  __int64 v5; // rcx
  _DWORD **v6; // rax
  __int64 v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h]

  if ( a2 != 16 )
    return 3221225990LL;
  if ( a3 )
  {
    if ( (a1 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v5 = 0x7FFFFFFF0000LL;
    if ( a1 < 0x7FFFFFFF0000LL )
      v5 = a1;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 15) = *(_BYTE *)(v5 + 15);
  }
  v8 = *(_OWORD *)a1;
  if ( (unsigned __int8)*(_OWORD *)a1 != 1 )
    return 3221225561LL;
  if ( (v8 & 0xFFFFFF00) != 0 || !*((_QWORD *)&v8 + 1) )
    return 3221225485LL;
  if ( dword_140D321F0 == -1 )
    return 3221226021LL;
  v6 = (_DWORD **)sub_14035F5E8((__int64)&unk_140D31A00, dword_140D321F0 & 0x3FF);
  return sub_1405F7EBC(v7, *v6, *((__int64 *)&v8 + 1));
}
