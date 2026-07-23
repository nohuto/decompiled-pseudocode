/*
 * XREFs of sub_14074F7B8 @ 0x14074F7B8
 * Callers:
 *     sub_1402D5A78 @ 0x1402D5A78 (sub_1402D5A78.c)
 * Callees:
 *     sub_14074F848 @ 0x14074F848 (sub_14074F848.c)
 */

__int64 __fastcall sub_14074F7B8(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v3; // eax
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int128 v6; // xmm1
  __int64 v7; // xmm0_8

  v1 = 0LL;
  if ( !a1
    || (v3 = *(_DWORD *)(a1 + 24)) == 0
    || !*(_QWORD *)(a1 + 8) && !*(_QWORD *)(a1 + 16)
    || (v4 = *(_DWORD *)(a1 + 28)) != 0 && (!*(_QWORD *)(a1 + 32) || v4 <= v3) )
  {
    __fastfail(5u);
  }
  v5 = sub_14074F848();
  if ( v5 )
  {
    v6 = *(_OWORD *)(a1 + 16);
    *(_OWORD *)(v5 + 8) = *(_OWORD *)a1;
    v7 = *(_QWORD *)(a1 + 32);
    *(_OWORD *)(v5 + 24) = v6;
    *(_QWORD *)(v5 + 40) = v7;
    if ( *(_QWORD *)(a1 + 16) )
    {
      *(_QWORD *)(v5 + 88) = v5;
      *(_QWORD *)(v5 + 80) = sub_140A31BC0;
      *(_QWORD *)(v5 + 64) = 0LL;
    }
    return v5;
  }
  return v1;
}
