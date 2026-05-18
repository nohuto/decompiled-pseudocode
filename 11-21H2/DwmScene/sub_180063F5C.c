/*
 * XREFs of sub_180063F5C @ 0x180063F5C
 * Callers:
 *     sub_18001A2B0 @ 0x18001A2B0 (sub_18001A2B0.c)
 *     sub_180065C70 @ 0x180065C70 (sub_180065C70.c)
 *     sub_180075490 @ 0x180075490 (sub_180075490.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18004171C @ 0x18004171C (sub_18004171C.c)
 *     sub_18006560C @ 0x18006560C (sub_18006560C.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180063F5C(__int64 a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  unsigned __int64 v5; // rdi
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF

  v7 = 0LL;
  v2 = *(_QWORD *)(a1 + 64);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 8);
    while ( v3 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3);
      if ( v4 == v3 )
      {
        v7 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  v5 = sub_18004171C(v7);
  result = sub_180010910((__int64)&v7);
  if ( v5 != *(_QWORD *)(a1 + 96) )
  {
    result = sub_18006560C(a1, 1LL);
    *(_QWORD *)(a1 + 96) = v5;
  }
  return result;
}
