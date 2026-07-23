/*
 * XREFs of sub_1403628D8 @ 0x1403628D8
 * Callers:
 *     sub_140351880 @ 0x140351880 (sub_140351880.c)
 *     sub_140362864 @ 0x140362864 (sub_140362864.c)
 * Callees:
 *     sub_140362978 @ 0x140362978 (sub_140362978.c)
 *     sub_1405F1BBC @ 0x1405F1BBC (sub_1405F1BBC.c)
 */

__int64 __fastcall sub_1403628D8(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rax

  v3 = a2;
  v6 = sub_140362978(a1 + 16, (unsigned __int64)(a2 - *(_QWORD *)(a1 + 8)) >> 20);
  if ( v6 )
  {
    *(_DWORD *)(a3 + 28) = 0;
    if ( (*(_BYTE *)v6 & 4) != 0 )
      v7 = *(_QWORD *)(v6 + 24);
    else
      v7 = *(unsigned __int16 *)(v6 + 24);
    *(_QWORD *)a3 = v7 << 20;
    v8 = *(unsigned __int8 *)(v6 + 1) + 45LL;
    *(_DWORD *)(a3 + 24) = 16;
    *(_DWORD *)(a3 + 8) = (*(unsigned __int8 *)(a1 + 48 * v8 + 46) >> 1) & 7;
    *(_DWORD *)(a3 + 12) = *(unsigned __int8 *)(a1 + 48 * v8 + 45);
    *(_QWORD *)(a3 + 16) = v6 + 8;
    return 0LL;
  }
  else
  {
    sub_1405F1BBC(22, v3, 0, 0, 0LL, 0LL);
    return 3221225473LL;
  }
}
