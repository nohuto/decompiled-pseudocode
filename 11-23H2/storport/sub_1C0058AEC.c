/*
 * XREFs of sub_1C0058AEC @ 0x1C0058AEC
 * Callers:
 *     sub_1C001DFB4 @ 0x1C001DFB4 (sub_1C001DFB4.c)
 *     sub_1C005E1A8 @ 0x1C005E1A8 (sub_1C005E1A8.c)
 * Callees:
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C000729C @ 0x1C000729C (sub_1C000729C.c)
 *     sub_1C0008570 @ 0x1C0008570 (sub_1C0008570.c)
 */

__int64 __fastcall sub_1C0058AEC(__int64 a1, char a2, __int64 a3)
{
  __int64 v4; // rbx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  _QWORD *v8; // rcx
  __int64 v9; // rax

  v4 = *(_QWORD *)(*(_QWORD *)(a3 + 184) + 8LL);
  *(_BYTE *)(v4 + 3) = a2;
  v5 = sub_1C0008570(a2);
  *(_QWORD *)(v6 + 56) = 0LL;
  *(_DWORD *)(v6 + 48) = v5;
  sub_1C000729C(v7);
  if ( (*(_BYTE *)(a3 + 142) & 0x20) != 0 )
  {
    if ( *(_BYTE *)(v4 + 2) == 40 )
    {
      v8 = *(_QWORD **)(v4 + 96);
      *(_QWORD *)(v4 + 96) = v8[2];
    }
    else
    {
      v8 = *(_QWORD **)(v4 + 48);
      v9 = v8[2];
      *(_QWORD *)(v4 + 56) = 0LL;
      *(_QWORD *)(v4 + 40) = 0LL;
      *(_QWORD *)(v4 + 48) = v9;
    }
    ExFreePoolWithTag(v8, 0x54436152u);
  }
  return sub_1C0003440((PIRP)a3, 0, *(_DWORD *)(a3 + 48));
}
