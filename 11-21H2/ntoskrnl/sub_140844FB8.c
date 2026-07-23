/*
 * XREFs of sub_140844FB8 @ 0x140844FB8
 * Callers:
 *     sub_14064B24C @ 0x14064B24C (sub_14064B24C.c)
 *     sub_140844C0C @ 0x140844C0C (sub_140844C0C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140844FB8(int a1, unsigned int *a2, _DWORD *a3)
{
  unsigned int v3; // r11d
  unsigned int v4; // ecx
  unsigned int v6; // edx
  __int64 *i; // r10
  unsigned int v8; // eax

  v3 = 0;
  v4 = a1 - 100;
  if ( v4 > 0x3A || !a2 && !a3 )
    return 3221225485LL;
  v6 = 0;
  for ( i = qword_140D3B168; ; i = (__int64 *)((char *)i + 2) )
  {
    v8 = v3 + *(unsigned __int16 *)i;
    if ( v8 > v4 )
      break;
    ++v6;
    v3 = v8;
    if ( v6 >= 9 )
      return 3221225473LL;
  }
  if ( a2 )
    *a2 = v6;
  if ( a3 )
    *a3 = v4 - v3;
  return 0LL;
}
