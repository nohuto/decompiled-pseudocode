/*
 * XREFs of sub_140AB3214 @ 0x140AB3214
 * Callers:
 *     sub_140AB2608 @ 0x140AB2608 (sub_140AB2608.c)
 *     sub_140AB26C8 @ 0x140AB26C8 (sub_140AB26C8.c)
 *     sub_140AB2FBC @ 0x140AB2FBC (sub_140AB2FBC.c)
 * Callees:
 *     sub_140AB3290 @ 0x140AB3290 (sub_140AB3290.c)
 */

__int64 __fastcall sub_140AB3214(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // eax
  __int64 result; // rax
  char v6; // cl
  __int64 v7; // rcx
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  v3 = *(unsigned __int8 *)(a1 + 23);
  if ( a2 )
  {
    *a3 += v3 >> 3;
    return 0LL;
  }
  else
  {
    result = sub_140AB3290(a1, &v8, v3 >> 3, a3);
    if ( (int)result >= 0 )
    {
      v6 = *(_BYTE *)(a1 + 23);
      switch ( v6 )
      {
        case 8:
          v7 = (char)v8;
          break;
        case 16:
          v7 = (__int16)v8;
          break;
        case 32:
          v7 = (int)v8;
          break;
        default:
          v7 = v8;
          break;
      }
      *(_QWORD *)(a1 + 32) = v7;
    }
  }
  return result;
}
