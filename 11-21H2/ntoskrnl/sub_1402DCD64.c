/*
 * XREFs of sub_1402DCD64 @ 0x1402DCD64
 * Callers:
 *     sub_1403CB454 @ 0x1403CB454 (sub_1403CB454.c)
 *     sub_140649D44 @ 0x140649D44 (sub_140649D44.c)
 *     sub_1406B89A0 @ 0x1406B89A0 (sub_1406B89A0.c)
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_14076370C @ 0x14076370C (sub_14076370C.c)
 *     sub_14076426C @ 0x14076426C (sub_14076426C.c)
 *     sub_140765DC0 @ 0x140765DC0 (sub_140765DC0.c)
 *     sub_140771CD0 @ 0x140771CD0 (sub_140771CD0.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     sub_14082FDD8 @ 0x14082FDD8 (sub_14082FDD8.c)
 *     sub_140841E78 @ 0x140841E78 (sub_140841E78.c)
 *     sub_140854E78 @ 0x140854E78 (sub_140854E78.c)
 *     sub_14098E284 @ 0x14098E284 (sub_14098E284.c)
 *     sub_14099B8FC @ 0x14099B8FC (sub_14099B8FC.c)
 *     sub_1409B863C @ 0x1409B863C (sub_1409B863C.c)
 *     sub_1409B9B50 @ 0x1409B9B50 (sub_1409B9B50.c)
 *     sub_1409D3004 @ 0x1409D3004 (sub_1409D3004.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402DCD64(_WORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rdx
  __int64 v5; // rax
  unsigned __int64 i; // r8
  signed int v7; // ecx

  v3 = a2 >> 1;
  v5 = 0LL;
  if ( a1 && v3 <= 0x7FFFFFFF )
  {
    for ( i = v3; i; --i )
    {
      if ( !*a1 )
        break;
      ++a1;
    }
    v7 = i == 0 ? 0xC000000D : 0;
    v5 = (v3 - i) & -(__int64)(i != 0);
  }
  else
  {
    v7 = -1073741811;
  }
  if ( a3 )
  {
    if ( v7 < 0 )
      *a3 = 0LL;
    else
      *a3 = 2 * v5;
  }
  return (unsigned int)v7;
}
