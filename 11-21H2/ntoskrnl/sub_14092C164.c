/*
 * XREFs of sub_14092C164 @ 0x14092C164
 * Callers:
 *     sub_14092C358 @ 0x14092C358 (sub_14092C358.c)
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 */

__int64 __fastcall sub_14092C164(__int64 a1)
{
  int v1; // r8d
  unsigned int v3; // r9d
  unsigned int v4; // edx
  unsigned int v5; // r9d
  unsigned __int64 v6; // rcx
  unsigned int v7; // edx

  v1 = *(_DWORD *)(a1 + 96);
  v3 = *(_DWORD *)(a1 + 152);
  if ( !v1 )
    goto LABEL_5;
  v4 = *(_DWORD *)(a1 + 176);
  v5 = v3 + 16;
  v6 = 32LL * v4;
  if ( v6 > 0xFFFFFFFF )
  {
    DbgPrintEx(5u, 0, "DBGK: Overflow calculating total blocks. Block count %i\n", v4);
  }
  else
  {
    v7 = v6 + v5;
    if ( (unsigned int)v6 + v5 >= v5 )
    {
      v3 = v1 + v7;
      if ( v1 + v7 >= v7 )
      {
LABEL_5:
        *(_QWORD *)(*(_QWORD *)(a1 + 144) + 4000LL) = v3;
        DbgPrintEx(5u, 3u, "DBGK: Required total aize: 0x%X\n", v3);
        return 0LL;
      }
    }
  }
  return 3221225621LL;
}
