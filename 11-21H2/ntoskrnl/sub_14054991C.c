/*
 * XREFs of sub_14054991C @ 0x14054991C
 * Callers:
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 * Callees:
 *     PoSetHiberRange @ 0x14038DBE0 (PoSetHiberRange.c)
 *     sub_1405498B4 @ 0x1405498B4 (sub_1405498B4.c)
 *     sub_14054D214 @ 0x14054D214 (sub_14054D214.c)
 *     sub_14054D4B8 @ 0x14054D4B8 (sub_14054D4B8.c)
 *     sub_14054E34C @ 0x14054E34C (sub_14054E34C.c)
 */

void __fastcall sub_14054991C(PVOID MemoryMap)
{
  __int64 v2; // rcx
  __int64 v3; // rdi
  int v4; // ebx
  unsigned int i; // esi
  unsigned __int64 v6; // r9
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( (int)sub_14054D4B8(0LL, 7LL, 0LL, 0LL, 0, &v7) >= 0 )
  {
    v3 = v7;
    do
    {
      LOBYTE(v7) = 0;
      LOBYTE(v2) = 1;
      v4 = sub_14054E34C(v2, 0LL, 0LL, &v7);
      if ( v4 >= 0 )
      {
        for ( i = 0; i < *(unsigned __int16 *)(v3 + 8); ++i )
        {
          v6 = *(_QWORD *)(v3 + 8LL * i + 16);
          PoSetHiberRange(MemoryMap, 0xC000u, (PVOID)(v6 & 0xFFFFFFFFFFLL), (v6 >> 40) + 1, 0x686C7648u);
        }
      }
    }
    while ( !v4 );
    sub_14054D214(0LL, 0LL, 0LL);
    sub_1405498B4(MemoryMap);
  }
}
