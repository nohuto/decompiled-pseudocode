/*
 * XREFs of sub_1800312A0 @ 0x1800312A0
 * Callers:
 *     sub_180030140 @ 0x180030140 (sub_180030140.c)
 *     sub_180030598 @ 0x180030598 (sub_180030598.c)
 *     sub_180033C90 @ 0x180033C90 (sub_180033C90.c)
 *     sub_18006A444 @ 0x18006A444 (sub_18006A444.c)
 *     sub_18006B2C0 @ 0x18006B2C0 (sub_18006B2C0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800312A0(__int64 *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // eax

  v3 = *a1;
  *(_DWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = v3;
  v6 = *(__int64 **)(v3 + 8);
  *(_QWORD *)a2 = v6;
  while ( !*((_BYTE *)v6 + 25) )
  {
    v7 = v6[4] + 8;
    v8 = *a3 + 8LL;
    *(_QWORD *)a2 = v6;
    if ( (int)_std_type_info_compare(v7, v8) >= 0 )
    {
      *(_QWORD *)(a2 + 16) = v6;
      v9 = 1;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
      v9 = 0;
    }
    *(_DWORD *)(a2 + 8) = v9;
  }
  return a2;
}
