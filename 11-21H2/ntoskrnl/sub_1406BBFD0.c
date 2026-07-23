/*
 * XREFs of sub_1406BBFD0 @ 0x1406BBFD0
 * Callers:
 *     sub_140700D70 @ 0x140700D70 (sub_140700D70.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1406BC07C @ 0x1406BC07C (sub_1406BC07C.c)
 */

__int64 __fastcall sub_1406BBFD0(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  unsigned int i; // ebp
  __int64 result; // rax
  unsigned int v8; // eax

  v2 = 0;
  v3 = a1 + 152;
  for ( i = 0; i < *(_DWORD *)(a1 + 144); v3 += 40LL )
  {
    if ( *(_QWORD *)(v3 + 8) )
    {
      v8 = sub_14042A5E0(a1, v3 + 24);
      *(_DWORD *)v3 = v8;
      if ( v8 )
      {
        if ( v2 )
        {
          if ( v2 >= v8 )
            v2 = v8;
        }
        else
        {
          v2 = v8;
        }
      }
    }
    ++i;
  }
  if ( a2 && v2 )
    *a2 = sub_1406BC07C(a1, v2);
  result = v2;
  *(_DWORD *)(a1 + 312) = v2;
  return result;
}
