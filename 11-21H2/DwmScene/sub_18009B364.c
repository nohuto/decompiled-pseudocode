/*
 * XREFs of sub_18009B364 @ 0x18009B364
 * Callers:
 *     sub_1800EADA0 @ 0x1800EADA0 (sub_1800EADA0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_18009B364(__int64 a1, _QWORD *a2, unsigned int a3)
{
  __int64 *v3; // r10
  __int64 v4; // rax
  __int64 *v5; // r9
  __int64 *v6; // rcx
  __int64 v7; // rcx
  _QWORD *result; // rax

  v3 = *(__int64 **)(a1 + 144);
  v4 = 0LL;
  v5 = v3;
  v6 = (__int64 *)v3[1];
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( *((_DWORD *)v6 + 8) >= a3 )
    {
      v5 = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  if ( *((_BYTE *)v5 + 25) || a3 < *((_DWORD *)v5 + 8) || v5 == v3 )
  {
    a2[1] = 0LL;
    v7 = 0LL;
  }
  else
  {
    v7 = v5[6];
    *a2 = 0LL;
    a2[1] = 0LL;
    if ( v7 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
      v7 = v5[6];
    }
    v4 = v5[5];
  }
  *a2 = v4;
  result = a2;
  a2[1] = v7;
  return result;
}
