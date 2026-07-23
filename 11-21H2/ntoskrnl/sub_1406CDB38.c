/*
 * XREFs of sub_1406CDB38 @ 0x1406CDB38
 * Callers:
 *     sub_1406CDACC @ 0x1406CDACC (sub_1406CDACC.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_1406CDB38(__int64 a1, unsigned __int64 a2, unsigned int a3, int *a4)
{
  int v6; // ebx
  __int64 v7; // rcx
  unsigned int v8; // r14d
  unsigned __int64 v9; // r15
  __int64 result; // rax

  v6 = 0;
  if ( a2 && a3 > 0x10 )
  {
    if ( *((_BYTE *)KeGetCurrentThread() + 562) )
    {
      if ( (a2 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = 0x7FFFFFFF0000LL;
      if ( a2 < 0x7FFFFFFF0000LL )
        v7 = a2;
      *(_BYTE *)v7 = *(_BYTE *)v7;
      *(_BYTE *)(v7 + 15) = *(_BYTE *)(v7 + 15);
    }
    v8 = a3 - 16;
    v9 = a2 + 16;
  }
  else
  {
    v8 = 0;
    v9 = 0LL;
  }
  if ( v8 > 0xFFFF )
    v8 = 0xFFFF;
  LODWORD(result) = sub_14042A5E0(v9, v8);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741789 )
    {
      *a4 = 16;
      return (unsigned int)result;
    }
  }
  else
  {
    *(_WORD *)a2 = -2;
    *(_WORD *)(a2 + 2) = v8;
    *(_QWORD *)(a2 + 8) = v9;
    v6 = 16;
  }
  *a4 = v6;
  return (unsigned int)result;
}
