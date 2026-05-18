/*
 * XREFs of sub_18005C134 @ 0x18005C134
 * Callers:
 *     sub_18005BEF0 @ 0x18005BEF0 (sub_18005BEF0.c)
 *     sub_18005C018 @ 0x18005C018 (sub_18005C018.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_180029E58 @ 0x180029E58 (sub_180029E58.c)
 *     sub_18002B740 @ 0x18002B740 (sub_18002B740.c)
 *     sub_18002BAAC @ 0x18002BAAC (sub_18002BAAC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18005C134(__int64 a1, _QWORD *a2)
{
  __int64 v4; // r9
  __int64 v5; // r8
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  unsigned int v8; // esi
  _QWORD *v9; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = *a2;
  v13 = 0LL;
  v5 = *(_QWORD *)(v4 + 80);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 8);
    while ( v6 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v6 + 1, v6);
      if ( v7 == v6 )
      {
        v13 = *(_OWORD *)(v4 + 72);
        break;
      }
    }
  }
  v8 = *(_DWORD *)(*a2 + 88LL);
  sub_18002B740(a1, (__int64 *)&v13);
  v9 = (_QWORD *)sub_180029E58((__int64 *)(a1 + 128), v8);
  v10 = a2[1];
  if ( v10 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    v10 = a2[1];
  }
  v11 = *a2;
  v14[0] = *v9;
  *v9 = v11;
  v14[1] = v9[1];
  v9[1] = v10;
  sub_180010910((__int64)v14);
  sub_18002BAAC(a1, v8);
  return sub_180010910((__int64)&v13);
}
