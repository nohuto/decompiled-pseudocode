/*
 * XREFs of sub_1406E5854 @ 0x1406E5854
 * Callers:
 *     sub_140775990 @ 0x140775990 (sub_140775990.c)
 * Callees:
 *     sub_1407758D0 @ 0x1407758D0 (sub_1407758D0.c)
 *     sub_140776880 @ 0x140776880 (sub_140776880.c)
 */

__int64 __fastcall sub_1406E5854(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int128 *v7; // r9
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 176);
  v8 = 0LL;
  if ( v2 )
  {
    v3 = *(_QWORD *)(v2 + 184);
    result = _InterlockedExchange64((volatile __int64 *)(v2 + 104), 0LL);
    if ( result )
    {
      v5 = 0LL;
      if ( (*(_DWORD *)(a1 + 216) & 1) != 0 )
      {
        v7 = 0LL;
        v6 = 3221225626LL;
      }
      else
      {
        ((void (__fastcall *)(__int64, _QWORD, _QWORD, __int128 *))sub_1407758D0)(
          a1,
          *(unsigned int *)(v3 + 8),
          0LL,
          &v8);
        v6 = 0LL;
        v7 = &v8;
        v5 = 16LL;
      }
      result = sub_140776880(*(_QWORD *)(a1 + 176), v6, v5, v7, v8, *((_QWORD *)&v8 + 1));
      *(_DWORD *)(a1 + 216) &= ~0x10u;
      *(_QWORD *)(a1 + 176) = 0LL;
    }
  }
  return result;
}
