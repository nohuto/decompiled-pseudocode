/*
 * XREFs of sub_14063B690 @ 0x14063B690
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_14063B3D4 @ 0x14063B3D4 (sub_14063B3D4.c)
 */

__int64 __fastcall sub_14063B690(__int64 a1, unsigned int *a2, volatile signed __int32 *a3, __int64 a4)
{
  signed __int32 v7; // eax
  unsigned int v8; // edi
  unsigned int i; // edi
  __int64 result; // rax
  unsigned int v11; // edi
  signed __int32 v12; // eax
  unsigned int v13; // edi
  int v14; // [rsp+20h] [rbp-28h] BYREF
  _DWORD v15[9]; // [rsp+24h] [rbp-24h] BYREF
  int j; // [rsp+68h] [rbp+20h] BYREF

  v7 = _InterlockedDecrement((volatile signed __int32 *)a4);
  v8 = ~v7 & 0x80000000;
  if ( (v7 & 0x7FFFFFFF) != 0 )
  {
    v14 = 0;
    while ( (*(_DWORD *)a4 & 0x80000000) != v8 )
      sub_1402F32E0(&v14, (__int64)a2, (__int64)a3, a4);
    v12 = _InterlockedDecrement((volatile signed __int32 *)a4);
    v13 = ~v12 & 0x80000000;
    if ( (v12 & 0x7FFFFFFF) != 0 )
    {
      v15[0] = 0;
      while ( 1 )
      {
        result = *(_DWORD *)a4 & 0x80000000;
        if ( (_DWORD)result == v13 )
          break;
        sub_1402F32E0(v15, (__int64)a2, (__int64)a3, a4);
      }
    }
    else
    {
      result = v13 | *(_DWORD *)(a4 + 4);
      *(_DWORD *)a4 = result;
    }
  }
  else
  {
    *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v8;
    for ( i = 0; i < *a2; ++i )
      sub_14063B3D4((signed __int64 *)&a2[14 * i + 2]);
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)a4);
    v11 = ~(_DWORD)result & 0x80000000;
    if ( (result & 0x7FFFFFFF) != 0 )
    {
      for ( j = 0; ; sub_1402F32E0(&j, (__int64)a2, (__int64)a3, a4) )
      {
        result = *(_DWORD *)a4 & 0x80000000;
        if ( (_DWORD)result == v11 )
          break;
      }
    }
    else
    {
      *(_DWORD *)a4 = *(_DWORD *)(a4 + 4) | v11;
    }
  }
  _InterlockedDecrement(a3);
  return result;
}
