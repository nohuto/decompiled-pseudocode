/*
 * XREFs of sub_18002B970 @ 0x18002B970
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002850C @ 0x18002850C (sub_18002850C.c)
 */

__int64 __fastcall sub_18002B970(__int64 a1)
{
  __int64 v1; // r8
  signed __int32 v2; // eax
  signed __int32 v3; // ett
  __int64 v4; // rbx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 80);
  v6 = 0LL;
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 8);
    while ( v2 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 8), v2 + 1, v2);
      if ( v3 == v2 )
      {
        v6 = *(_OWORD *)(a1 + 72);
        break;
      }
    }
  }
  v4 = sub_18002850C(v6);
  sub_180010910((__int64)&v6);
  return v4;
}
