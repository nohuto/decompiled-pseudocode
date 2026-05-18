/*
 * XREFs of sub_180015B40 @ 0x180015B40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18002C460 @ 0x18002C460 (sub_18002C460.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180046DF4 @ 0x180046DF4 (sub_180046DF4.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_180015B40(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int128 v11; // [rsp+20h] [rbp-30h] BYREF
  __int128 v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h] BYREF
  char v14; // [rsp+48h] [rbp-8h]

  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 32);
    v11 = 0LL;
    v4 = *(_QWORD *)(v3 + 80);
    if ( v4 )
    {
      v5 = *(_DWORD *)(v4 + 8);
      while ( v5 )
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 8), v5 + 1, v5);
        if ( v6 == v5 )
        {
          v11 = *(_OWORD *)(v3 + 72);
          break;
        }
      }
    }
    sub_18002C460(v11 + 16, &v13);
    v12 = 0LL;
    v7 = *(_QWORD *)(a2 + 40);
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v7 = *(_QWORD *)(a2 + 40);
    }
    *(_QWORD *)&v12 = *(_QWORD *)(a2 + 32);
    *((_QWORD *)&v12 + 1) = v7;
    sub_180046DF4(v11, &v12);
    if ( v14 )
      j_LanguageEnumProc(v13, v8, v9, v10);
    sub_180010910((__int64)&v11);
  }
}
