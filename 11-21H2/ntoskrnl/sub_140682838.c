/*
 * XREFs of sub_140682838 @ 0x140682838
 * Callers:
 *     sub_140682900 @ 0x140682900 (sub_140682900.c)
 *     sub_1406879B8 @ 0x1406879B8 (sub_1406879B8.c)
 * Callees:
 *     sub_14025863C @ 0x14025863C (sub_14025863C.c)
 */

void __fastcall sub_140682838(__int64 a1, __int64 a2, __int64 a3, __int16 a4)
{
  __int64 v6; // rbx
  int v7; // r9d
  int v8; // eax

  if ( a1 != a2 )
  {
    v6 = a1;
    v7 = a4 & 0x8000;
    do
    {
      v8 = *(_DWORD *)(a1 + 212);
      if ( v8 != -1 )
        *(_DWORD *)(a1 + 212) = v8 + 1;
      ++*(_DWORD *)(a1 + 216);
      ++*(_DWORD *)(a1 + 1416);
      if ( v7 || (*(_DWORD *)(a3 + 2172) & 0x20) != 0 )
        ++*(_DWORD *)(a1 + 1420);
      a1 = *(_QWORD *)(a1 + 1264);
    }
    while ( a1 != a2 );
    do
    {
      _InterlockedAnd((volatile signed __int32 *)(v6 + 1512), 0xFFDFFFFF);
      if ( *(_QWORD *)(v6 + 552) )
      {
        if ( (*(_DWORD *)(v6 + 1068) & 0x40) != 0 )
          sub_14025863C(v6, 6LL, *(_QWORD *)(a3 + 1088), 0);
      }
      v6 = *(_QWORD *)(v6 + 1264);
    }
    while ( v6 != a2 );
  }
}
