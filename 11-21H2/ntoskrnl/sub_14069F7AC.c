/*
 * XREFs of sub_14069F7AC @ 0x14069F7AC
 * Callers:
 *     sub_14069E21C @ 0x14069E21C (sub_14069E21C.c)
 *     sub_14069E26C @ 0x14069E26C (sub_14069E26C.c)
 *     sub_14069E3E0 @ 0x14069E3E0 (sub_14069E3E0.c)
 *     sub_14069F770 @ 0x14069F770 (sub_14069F770.c)
 * Callees:
 *     sub_14069F870 @ 0x14069F870 (sub_14069F870.c)
 *     sub_14069F904 @ 0x14069F904 (sub_14069F904.c)
 */

__int64 __fastcall sub_14069F7AC(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v10; // rbx
  unsigned int v11; // esi

  v4 = *(_QWORD *)(a1 + 32);
  result = sub_14069F904(v4);
  if ( *(_QWORD *)a1 != 1LL && ((*(_DWORD *)(a1 + 184) & 0x40000) == 0 || *(_QWORD *)a1 != 2LL) )
  {
    v10 = 0LL;
    v11 = 0;
    if ( *(_DWORD *)(v4 + 1656) )
    {
      while ( 1 )
      {
        result = sub_14069F870(a1, *(_QWORD *)(v4 + 1648) + 24LL * v11, a3, a4);
        if ( (_DWORD)result == 1 )
          break;
        if ( (_DWORD)result == 2 )
          --v11;
        if ( ++v11 >= *(_DWORD *)(v4 + 1656) )
          goto LABEL_9;
      }
    }
    else
    {
LABEL_9:
      if ( a2 && *(_DWORD *)(v4 + 1672) )
      {
        do
        {
          result = sub_14069F870(a1, *(_QWORD *)(v4 + 1664) + 24 * v10, a3, a4);
          if ( (_DWORD)result == 1 )
            break;
          if ( (_DWORD)result == 2 )
            LODWORD(v10) = v10 - 1;
          v10 = (unsigned int)(v10 + 1);
        }
        while ( (unsigned int)v10 < *(_DWORD *)(v4 + 1672) );
      }
    }
  }
  return result;
}
