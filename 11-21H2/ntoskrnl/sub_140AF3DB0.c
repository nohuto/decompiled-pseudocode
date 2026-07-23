/*
 * XREFs of sub_140AF3DB0 @ 0x140AF3DB0
 * Callers:
 *     sub_140AF3770 @ 0x140AF3770 (sub_140AF3770.c)
 *     sub_140AF39BC @ 0x140AF39BC (sub_140AF39BC.c)
 *     sub_140AF3B50 @ 0x140AF3B50 (sub_140AF3B50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140AF3DB0(__int64 a1, unsigned __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rcx

  result = qword_140D68708;
  if ( !qword_140D68708
    || (v5 = *(_QWORD *)(qword_140D68708 + 32), a2 < v5)
    || a2 >= v5 + *(_QWORD *)(qword_140D68708 + 40) )
  {
    if ( qword_140D68710 )
    {
      v6 = *(_QWORD *)(qword_140D68710 + 32);
      if ( a2 >= v6 && a2 < *(_QWORD *)(qword_140D68710 + 40) + v6 )
        return 0LL;
    }
    v7 = *(_QWORD *)(a1 + 352);
    if ( (*(_BYTE *)(a1 + 360) & 1) != 0 && v7 )
      v7 ^= a1 + 352;
    v8 = 0LL;
    while ( 1 )
    {
      if ( !v7 )
      {
        if ( v8 )
        {
          v11 = *(_DWORD *)(v8 + 24) & 0x1FFFFFFF;
          if ( (unsigned int)v11 > 0x2A || (v12 = 0x5C5C0C00048LL, !_bittest64(&v12, v11)) )
          {
            qword_140D68708 = v8;
            return v8;
          }
          qword_140D68710 = v8;
        }
        return 0LL;
      }
      v9 = *(_QWORD *)(v7 + 32);
      if ( a2 < v9 )
        goto LABEL_17;
      if ( a2 < *(_QWORD *)(v7 + 40) + v9 )
        break;
      v10 = *(_QWORD *)(v7 + 8);
LABEL_18:
      if ( (*(_BYTE *)(a1 + 360) & 1) != 0 && v10 )
        v7 ^= v10;
      else
        v7 = v10;
    }
    v8 = v7;
LABEL_17:
    v10 = *(_QWORD *)v7;
    goto LABEL_18;
  }
  return result;
}
