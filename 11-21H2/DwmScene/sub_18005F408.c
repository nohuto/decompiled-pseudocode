/*
 * XREFs of sub_18005F408 @ 0x18005F408
 * Callers:
 *     sub_18005ECD4 @ 0x18005ECD4 (sub_18005ECD4.c)
 *     sub_18005F684 @ 0x18005F684 (sub_18005F684.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

_QWORD *__fastcall sub_18005F408(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  __int64 v8; // rdx
  __int64 v9; // r8
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(__int64 **)(a1 + 40);
  if ( v3 == *(__int64 **)(a1 + 48) )
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v4 = *v3;
    v13 = 0LL;
    v5 = *(_QWORD *)(v4 + 64);
    if ( v5 )
    {
      v6 = *(_DWORD *)(v5 + 8);
      while ( v6 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6);
        if ( v7 == v6 )
        {
          v13 = *(_OWORD *)(v4 + 56);
          break;
        }
      }
    }
    *a2 = 0LL;
    a2[1] = 0LL;
    v8 = v13;
    v9 = *(_QWORD *)(v13 + 80);
    if ( v9 )
    {
      v10 = *(_DWORD *)(v9 + 8);
      while ( v10 )
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 8), v10 + 1, v10);
        if ( v11 == v10 )
        {
          *a2 = *(_QWORD *)(v13 + 72);
          a2[1] = *(_QWORD *)(v8 + 80);
          break;
        }
      }
    }
    sub_180010910((__int64)&v13);
  }
  return a2;
}
