/*
 * XREFs of sub_180019C5C @ 0x180019C5C
 * Callers:
 *     sub_180013140 @ 0x180013140 (sub_180013140.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180016240 @ 0x180016240 (sub_180016240.c)
 */

__int64 __fastcall sub_180019C5C(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  signed __int32 v4; // eax
  signed __int32 v5; // ett
  __int64 *i; // r8
  __int64 v7; // rbx
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a2 + 80);
  v3 = a1;
  v10 = 0LL;
  if ( v2 )
  {
    v4 = *(_DWORD *)(v2 + 8);
    while ( v4 )
    {
      v5 = v4;
      v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v4 + 1, v4);
      if ( v5 == v4 )
      {
        v10 = *(_OWORD *)(a2 + 72);
        break;
      }
    }
  }
  for ( i = *(__int64 **)(a1 + 112); i != *(__int64 **)(v3 + 120); i = (__int64 *)(v8 + 8) )
  {
    v7 = *i;
    if ( sub_180016240((_QWORD *)(*i + 16), &v10) )
      goto LABEL_12;
  }
  v7 = 0LL;
LABEL_12:
  sub_180010910((__int64)&v10);
  return v7;
}
