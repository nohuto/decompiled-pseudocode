/*
 * XREFs of sub_140A628D0 @ 0x140A628D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A621FC @ 0x140A621FC (sub_140A621FC.c)
 */

__int64 __fastcall sub_140A628D0(__int64 a1, __int64 a2)
{
  int v2; // esi
  unsigned int v4; // edi
  int v5; // eax
  int v6; // esi
  unsigned int v7; // edi
  __int64 result; // rax

  v2 = *(_DWORD *)a1;
  v4 = 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
  v5 = *(_DWORD *)(a1 + 48);
  v6 = v2 + 1;
  while ( v5 < v6 )
  {
    if ( (++v4 & dword_140C4C47C) != 0 || !qword_140C4C480 )
      _mm_pause();
    else
      sub_14042A5E0(v4, a2);
    v5 = *(_DWORD *)(a1 + 48);
  }
  if ( !*(_BYTE *)(a1 + 68) )
    sub_140A621FC(a1);
  v7 = 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 52));
  while ( 1 )
  {
    result = *(unsigned int *)(a1 + 52);
    if ( (int)result >= v6 )
      break;
    if ( (++v7 & dword_140C4C47C) != 0 || !qword_140C4C480 )
      _mm_pause();
    else
      sub_14042A5E0(v7, a2);
  }
  return result;
}
