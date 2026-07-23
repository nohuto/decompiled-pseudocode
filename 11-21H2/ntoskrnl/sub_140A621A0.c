/*
 * XREFs of sub_140A621A0 @ 0x140A621A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140A62B5C @ 0x140A62B5C (sub_140A62B5C.c)
 */

__int64 __fastcall sub_140A621A0(__int64 a1, _QWORD *a2)
{
  unsigned __int32 v3; // r8d
  __int64 result; // rax
  __int64 v5; // rdi

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4), 1u);
  if ( v3 < *(_DWORD *)a1 )
  {
    v5 = *(_QWORD *)(a1 + 32) + v3 * *(_DWORD *)(a1 + 40);
    result = sub_140A62B5C(v5);
    if ( (int)result >= 0 )
    {
      *a2 = v5;
      return 0LL;
    }
  }
  else
  {
    if ( a2 )
      *a2 = 0LL;
    return 3221225626LL;
  }
  return result;
}
