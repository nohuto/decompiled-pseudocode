/*
 * XREFs of sub_18002F0F0 @ 0x18002F0F0
 * Callers:
 *     sub_18002EB98 @ 0x18002EB98 (sub_18002EB98.c)
 *     sub_18002F9F0 @ 0x18002F9F0 (sub_18002F9F0.c)
 *     sub_1800386C4 @ 0x1800386C4 (sub_1800386C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002F0F0(__int64 *a1, __int64 a2, _QWORD *a3)
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
