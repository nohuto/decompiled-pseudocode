/*
 * XREFs of sub_14050A0C4 @ 0x14050A0C4
 * Callers:
 *     sub_140507040 @ 0x140507040 (sub_140507040.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_14050A0C4(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v5; // ebx^2
  __int64 result; // rax
  unsigned int v8; // ebx
  unsigned int v9; // esi
  __int64 *v10; // r14

  v5 = BYTE2(a1);
  result = sub_14042A5E0(a3, 378LL);
  if ( (result & 4) != 0 )
  {
    result = 24LL;
    v8 = v5;
    if ( v8 > 0x18 )
      v8 = 24;
    *(_DWORD *)(a4 + 64) = v8;
    if ( v8 > 8 )
    {
      result = sub_14042A5E0(a3, 392LL);
      v9 = 0;
      if ( result )
      {
        v10 = (__int64 *)(a4 + 72);
        do
        {
          result = sub_14042A5E0(a3, v9 + 384);
          ++v9;
          *v10++ = result;
        }
        while ( v9 < v8 );
      }
    }
  }
  return result;
}
