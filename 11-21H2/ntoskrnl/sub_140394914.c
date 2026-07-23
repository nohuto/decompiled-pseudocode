/*
 * XREFs of sub_140394914 @ 0x140394914
 * Callers:
 *     sub_1403945DC @ 0x1403945DC (sub_1403945DC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140394914(__int64 *a1, __int64 a2, char a3)
{
  int v4; // eax
  __int64 *v5; // rax
  __int64 **v6; // rdx
  __int64 v7; // rdx
  __int64 **v8; // rax
  __int64 result; // rax

  if ( !a3 || (result = *((unsigned int *)a1 + 150), (result & 0x30000) != 0) )
  {
    v4 = *((_DWORD *)a1 + 25);
    if ( v4 == *((_DWORD *)a1 + 24) )
    {
      v5 = (__int64 *)*a1;
      if ( *(__int64 **)(*a1 + 8) != a1
        || (v6 = (__int64 **)a1[1], *v6 != a1)
        || (*v6 = v5,
            v5[1] = (__int64)v6,
            v7 = a2 + 72 * (*((unsigned __int8 *)a1 + 56) + 1LL),
            v8 = *(__int64 ***)(v7 + 8),
            *v8 != (__int64 *)v7) )
      {
        __fastfail(3u);
      }
      *a1 = v7;
      a1[1] = (__int64)v8;
      *v8 = a1;
      *(_QWORD *)(v7 + 8) = a1;
      v4 = *((_DWORD *)a1 + 25);
    }
    result = (unsigned int)(v4 - 1);
    *((_DWORD *)a1 + 25) = result;
  }
  return result;
}
