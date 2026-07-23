/*
 * XREFs of sub_14098F5E8 @ 0x14098F5E8
 * Callers:
 *     sub_140806788 @ 0x140806788 (sub_140806788.c)
 *     sub_14098F20C @ 0x14098F20C (sub_14098F20C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14098F5E8(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax
  _QWORD *v3; // rdx

  v1 = *(_DWORD *)(a1 + 16);
  result = 0LL;
  if ( !v1 )
    return *(unsigned __int16 *)(a1 + 24) + 10LL;
  if ( v1 == 1 )
    return 12LL;
  if ( v1 <= 1 )
    return result;
  if ( v1 > 3 )
  {
    if ( v1 != 4 )
      return result;
    return 12LL;
  }
  v3 = *(_QWORD **)(a1 + 24);
  if ( v3 )
    return *v3 + 8LL;
  else
    return 48LL;
}
