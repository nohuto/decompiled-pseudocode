/*
 * XREFs of sub_18004171C @ 0x18004171C
 * Callers:
 *     sub_1800414A0 @ 0x1800414A0 (sub_1800414A0.c)
 *     sub_18004171C @ 0x18004171C (sub_18004171C.c)
 *     sub_180063F5C @ 0x180063F5C (sub_180063F5C.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     sub_18003DDEC @ 0x18003DDEC (sub_18003DDEC.c)
 *     sub_180040FA8 @ 0x180040FA8 (sub_180040FA8.c)
 *     sub_18004171C @ 0x18004171C (sub_18004171C.c)
 *     sub_180043668 @ 0x180043668 (sub_180043668.c)
 */

// Hidden C++ exception states: #wind=1
unsigned __int64 __fastcall sub_18004171C(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rdx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  unsigned __int64 v9; // rax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  sub_180043668(a1);
  v2 = *(_QWORD *)sub_18003DDEC((__int64)&unk_1801F4B40);
  result = *(_QWORD *)(a1 + 216);
  if ( result != v2 )
  {
    v4 = sub_180040FA8(a1);
    sub_180043668(v5);
    v10 = 0LL;
    v6 = *(_QWORD *)(a1 + 64);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 8);
      while ( v7 )
      {
        v8 = v7;
        v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 8), v7 + 1, v7);
        if ( v8 == v7 )
        {
          v10 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    if ( sub_1800122C0(&v10) )
    {
      v9 = sub_18004171C(v10);
      if ( v4 < v9 )
        v4 = v9;
    }
    *(_QWORD *)(a1 + 216) = v4;
    sub_180010910((__int64)&v10);
    return v4;
  }
  return result;
}
