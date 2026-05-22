/*
 * XREFs of std::_Make_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800EF0D8
 * Callers:
 *     std::_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800EFD30 (std--_Sort_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___.c)
 * Callees:
 *     std::_Pop_heap_hole_by_index_HidChannelValueInfo___HidChannelValueInfo__lambda_6d163ee07e6820131f280e717b4d58c9___ @ 0x1800EF948 (std--_Pop_heap_hole_by_index_HidChannelValueInfo___HidChannelValueInfo__lambda_6d163ee07e6820131.c)
 */

__int64 __fastcall std::_Make_heap_unchecked_HidChannelValueInfo____lambda_6d163ee07e6820131f280e717b4d58c9___(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 result; // rax
  signed __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbp
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int v12; // [rsp+20h] [rbp-68h]
  _OWORD v13[4]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v14; // [rsp+70h] [rbp-18h]

  result = 0x8E38E38E38E38E39uLL;
  v6 = 0x8E38E38E38E38E39uLL * ((a2 - a1) >> 3);
  v7 = v6 >> 1;
  if ( v6 >> 1 > 0 )
  {
    v8 = a1 + 72 * v7;
    do
    {
      v8 -= 72LL;
      LOBYTE(v12) = a3;
      --v7;
      v9 = *(_OWORD *)(v8 + 16);
      v13[0] = *(_OWORD *)v8;
      v10 = *(_OWORD *)(v8 + 32);
      v13[1] = v9;
      v11 = *(_OWORD *)(v8 + 48);
      v13[2] = v10;
      v14 = *(_QWORD *)(v8 + 64);
      v13[3] = v11;
      result = std::_Pop_heap_hole_by_index_HidChannelValueInfo___HidChannelValueInfo__lambda_6d163ee07e6820131f280e717b4d58c9___(
                 a1,
                 v7,
                 v6,
                 v13,
                 v12);
    }
    while ( v7 > 0 );
  }
  return result;
}
