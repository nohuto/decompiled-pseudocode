/*
 * XREFs of RtlInitCodePageTable @ 0x1800F0300
 * Callers:
 *     RtlpInitCodePageTables @ 0x1800B0A42 (RtlpInitCodePageTables.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlInitCodePageTable(unsigned __int16 *a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 v4; // r8
  unsigned __int16 v5; // r11
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int16 v9; // ax

  v2 = 0LL;
  if ( !a1 || a1[1] == 0xFDE9 )
  {
    *(_OWORD *)a2 = Utf8TableInfo;
    *(_OWORD *)(a2 + 16) = xmmword_180177720;
    *(_OWORD *)(a2 + 32) = xmmword_180177730;
    *(_OWORD *)(a2 + 48) = xmmword_180177740;
  }
  else
  {
    v4 = *a1;
    v5 = *a1 + a1[v4];
    *(_WORD *)(a2 + 2) = a1[2];
    *(_WORD *)(a2 + 4) = a1[3];
    *(_WORD *)(a2 + 6) = a1[4];
    *(_WORD *)(a2 + 8) = a1[5];
    *(_WORD *)(a2 + 10) = a1[6];
    *(_QWORD *)(a2 + 14) = *(_QWORD *)(a1 + 7);
    *(_DWORD *)(a2 + 22) = *(_DWORD *)(a1 + 11);
    v6 = (__int64)&a1[v4 + 1];
    v7 = v6 + 512;
    *(_QWORD *)(a2 + 32) = v6;
    v8 = *(_WORD *)(v6 + 512) != 0 ? 0x200 : 0;
    if ( *(_WORD *)(v8 + v6 + 512 + 2) )
    {
      v9 = 1;
      v2 = v8 + v7 + 4;
    }
    else
    {
      v9 = 0;
    }
    *(_QWORD *)(a2 + 56) = v2;
    *(_WORD *)(a2 + 12) = v9;
    *(_QWORD *)(a2 + 40) = &a1[v5 + 1];
    *(_WORD *)a2 = a1[1];
  }
}
