/*
 * XREFs of sub_1409E1C60 @ 0x1409E1C60
 * Callers:
 *     sub_1409DEFB8 @ 0x1409DEFB8 (sub_1409DEFB8.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1409E01E4 @ 0x1409E01E4 (sub_1409E01E4.c)
 */

__int64 __fastcall sub_1409E1C60(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r12d
  __int64 result; // rax
  __int64 v8; // r14
  __int64 i; // r8
  unsigned int v10; // r15d
  unsigned int j; // edi
  __int64 k; // rsi
  signed __int32 v13[8]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v14; // [rsp+20h] [rbp-48h]
  __int64 v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+40h] [rbp-28h]

  v6 = dword_140D06884;
  if ( !a3 || a3 > *(_DWORD *)((char *)&NlsMbCodePageTag + 5) || *(_DWORD *)(a1 + 300) == 1 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 1016) || (result = sub_1409E01E4(a1), !(_DWORD)result) )
  {
    v8 = *(_QWORD *)(a1 + 1016);
    if ( *(_DWORD *)(v8 + 20) )
    {
      return 3221226243LL;
    }
    else
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v16 = i;
        if ( (unsigned int)i >= a3 )
          break;
        *(_DWORD *)(*(_QWORD *)v8 + 4 * i) = *(_DWORD *)(a2 + 4 * i);
      }
      v10 = 0;
      for ( j = 0; j < v6; ++j )
      {
        v15 = 0LL;
        v14 = v8 + 8 * (j + 3LL);
        v10 = sub_14042A5E0(j, *(_QWORD *)v8);
        if ( v10 )
          break;
      }
      if ( v10 )
      {
        for ( k = 0LL; (unsigned int)k < j; k = (unsigned int)(k + 1) )
        {
          sub_14042A5E0(*(_QWORD *)(v8 + 8 * k + 24), a2);
          *(_QWORD *)(v8 + 8 * k + 24) = 0LL;
        }
      }
      else
      {
        *(_DWORD *)(v8 + 20) = a3;
        _InterlockedOr(v13, 0);
        _InterlockedOr((volatile signed __int32 *)(a1 + 816), 0x800u);
      }
      return v10;
    }
  }
  return result;
}
