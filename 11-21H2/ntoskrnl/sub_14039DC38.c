/*
 * XREFs of sub_14039DC38 @ 0x14039DC38
 * Callers:
 *     sub_14039DA74 @ 0x14039DA74 (sub_14039DA74.c)
 *     sub_14039DB6C @ 0x14039DB6C (sub_14039DB6C.c)
 *     sub_14054CE04 @ 0x14054CE04 (sub_14054CE04.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14039DC38(_QWORD *a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // rdx
  int v7; // eax
  unsigned int v8; // r9d
  __int64 result; // rax
  unsigned __int64 v10; // rcx
  _BYTE *i; // r8
  unsigned __int64 v12; // rcx

  v6 = 0LL;
  v7 = a4 == 0 ? 4 : 0;
  v8 = v7 | 2;
  if ( a2 )
    v8 = v7;
  if ( a3 )
  {
    v10 = *(_QWORD *)(a3 + 8);
    if ( byte_140D05016 )
    {
      v6 = *(_QWORD *)(a3 + 8);
    }
    else
    {
      for ( i = &unk_140D0CBD3; ; i += 4 )
      {
        if ( (v10 & 1) != 0 )
          v6 |= 1LL << *(i - 2);
        v12 = v10 >> 1;
        if ( !v12 )
          break;
        if ( (v12 & 1) != 0 )
          v6 |= 1LL << *i;
        v10 = v12 >> 1;
        if ( !v10 )
          break;
      }
    }
  }
  else
  {
    v8 |= 1u;
  }
  a1[2] = v6;
  result = v8;
  a1[1] = v8;
  *a1 = a2;
  return result;
}
