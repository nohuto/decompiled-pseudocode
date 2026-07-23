/*
 * XREFs of sub_14069FC10 @ 0x14069FC10
 * Callers:
 *     <none>
 * Callees:
 *     sub_14069FC64 @ 0x14069FC64 (sub_14069FC64.c)
 */

__int64 __fastcall sub_14069FC10(__int64 a1, __int64 a2, __int64 a3)
{
  int *v3; // rbx
  __int64 result; // rax
  __int64 v5; // r9
  int v6; // ecx

  v3 = (int *)a2;
  if ( (*(_DWORD *)(a2 + 24) & 4) != 0 || (*(_DWORD *)(a1 + 8) & 0x80u) == 0 )
  {
    v5 = *(_QWORD *)(a2 + 16);
    LOBYTE(a2) = 1;
    v6 = sub_14069FC64(a1, a2, a3, v5);
    result = 0LL;
    if ( v6 == -1073741267 )
    {
      ++v3[2];
    }
    else if ( v6 < 0 )
    {
      *v3 = v6;
      return 1LL;
    }
  }
  else
  {
    ++*(_DWORD *)(a2 + 4);
    return 0LL;
  }
  return result;
}
