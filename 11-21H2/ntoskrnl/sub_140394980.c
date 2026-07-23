/*
 * XREFs of sub_140394980 @ 0x140394980
 * Callers:
 *     sub_1403945DC @ 0x1403945DC (sub_1403945DC.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140394980(__int64 *a1, __int64 a2, unsigned __int8 a3, char a4)
{
  char v4; // r11
  __int64 *v8; // rax
  __int64 **v9; // rcx
  __int64 v10; // rax
  __int64 **v11; // rcx

  v4 = 0;
  if ( (!a4 || (a1[75] & 0x30000) != 0) && (*((_DWORD *)a1 + 23))-- == 1 )
  {
    v8 = (__int64 *)*a1;
    if ( *(__int64 **)(*a1 + 8) != a1
      || (v9 = (__int64 **)a1[1], *v9 != a1)
      || (*v9 = v8,
          v8[1] = (__int64)v9,
          v10 = a2 + 8 * (*((unsigned __int8 *)a1 + 56) + 8LL * *((unsigned __int8 *)a1 + 56) + 5),
          v11 = *(__int64 ***)(v10 + 8),
          *v11 != (__int64 *)v10) )
    {
      __fastfail(3u);
    }
    *a1 = v10;
    a1[1] = (__int64)v11;
    *v11 = a1;
    *(_QWORD *)(v10 + 8) = a1;
    return *((_BYTE *)a1 + 56) == a3;
  }
  return v4;
}
