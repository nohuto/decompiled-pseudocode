/*
 * XREFs of sub_1406FE1A0 @ 0x1406FE1A0
 * Callers:
 *     sub_14066BFB8 @ 0x14066BFB8 (sub_14066BFB8.c)
 *     sub_1406FD140 @ 0x1406FD140 (sub_1406FD140.c)
 * Callees:
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 */

__int64 __fastcall sub_1406FE1A0(_BYTE *Address, unsigned int a2, char a3, char a4, __int64 a5)
{
  _BYTE *v6; // rbx
  __int64 result; // rax
  __int64 v8; // r14
  SIZE_T v9; // rcx
  int v10; // esi
  _BYTE *v11; // r14
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // ecx
  int v16; // eax

  v6 = Address;
  *(_OWORD *)a5 = 0LL;
  *(_QWORD *)(a5 + 16) = 0LL;
  if ( (a3 & 1) != 0 )
    *(_DWORD *)(a5 + 20) = 1;
  if ( !a2 )
    return Address != 0LL ? 0xC000000D : 0;
  if ( !Address )
    return 3221225485LL;
  v8 = a2;
  v9 = 16LL * a2;
  if ( is_mul_ok(a2, 0x10uLL) )
  {
    result = 0LL;
  }
  else
  {
    v9 = -1LL;
    result = 3221225621LL;
  }
  if ( (int)result >= 0 )
  {
    v10 = 0;
    if ( a4 )
      ProbeForWrite(v6, v9, 8u);
    v11 = &v6[16 * v8];
    while ( v6 < v11 )
    {
      v12 = (unsigned __int8)*(_DWORD *)v6;
      if ( (unsigned int)(v12 - 1) > 2 || *(_QWORD *)v6 >= 0x100uLL )
        return 3221225485LL;
      v13 = 1 << v12;
      if ( ((1 << v12) & 0xE) == 0 )
        return 3221225485LL;
      if ( (v13 & v10) != 0 )
        return 3221225485LL;
      v10 |= v13;
      v14 = v12 - 1;
      if ( v14 )
      {
        v15 = v14 - 1;
        if ( v15 )
        {
          if ( v15 != 1 )
            return 3221225485LL;
          if ( a4 )
            return 3221225485LL;
          *(_BYTE *)(a5 + 12) = v6[8];
        }
        else
        {
          if ( *((_QWORD *)v6 + 1) > 0xFFFFFFFFuLL )
            return 3221225485LL;
          v16 = *((_DWORD *)v6 + 2);
          *(_DWORD *)(a5 + 8) = v16;
          if ( v16 == -1 )
            return 3221225485LL;
          *(_DWORD *)(a5 + 8) = v16 + 1;
        }
      }
      else
      {
        if ( (*((_QWORD *)v6 + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          return 3221225485LL;
        *(_BYTE *)a5 = 1;
        *(_DWORD *)(a5 + 4) = *((_DWORD *)v6 + 2);
      }
      v6 += 16;
    }
    *(_DWORD *)(a5 + 16) = v10;
    return 0LL;
  }
  return result;
}
