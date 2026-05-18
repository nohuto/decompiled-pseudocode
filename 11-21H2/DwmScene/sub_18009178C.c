/*
 * XREFs of sub_18009178C @ 0x18009178C
 * Callers:
 *     sub_180091CE8 @ 0x180091CE8 (sub_180091CE8.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 */

__int64 __fastcall sub_18009178C(__int64 *a1, __int64 *a2, __int64 a3)
{
  __int64 *v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  int v10; // eax
  _QWORD v12[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v13[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 != a2 )
  {
    v5 = a1 + 1;
    do
    {
      v6 = *v5;
      if ( *v5 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 8));
        v6 = *v5;
      }
      v12[0] = *(_QWORD *)a3;
      *(_QWORD *)a3 = *(v5 - 1);
      v7 = *(_QWORD *)(a3 + 8);
      *(_QWORD *)(a3 + 8) = v6;
      v12[1] = v7;
      sub_180010910((__int64)v12);
      v8 = v5[2];
      if ( v8 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
        v8 = v5[2];
      }
      v13[0] = *(_QWORD *)(a3 + 16);
      *(_QWORD *)(a3 + 16) = v5[1];
      v9 = *(_QWORD *)(a3 + 24);
      *(_QWORD *)(a3 + 24) = v8;
      v13[1] = v9;
      sub_180010910((__int64)v13);
      v10 = *((_DWORD *)v5 + 6);
      v5 += 5;
      *(_DWORD *)(a3 + 32) = v10;
      a3 += 40LL;
    }
    while ( v5 - 1 != a2 );
  }
  return a3;
}
