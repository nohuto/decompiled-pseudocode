/*
 * XREFs of sub_140534A70 @ 0x140534A70
 * Callers:
 *     <none>
 * Callees:
 *     sub_1405342C0 @ 0x1405342C0 (sub_1405342C0.c)
 *     sub_1405345E8 @ 0x1405345E8 (sub_1405345E8.c)
 *     sub_140534CBC @ 0x140534CBC (sub_140534CBC.c)
 */

__int64 __fastcall sub_140534A70(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned __int64 v5; // rbp
  __int64 *v7; // rbx
  __int64 v8; // rcx
  __int64 *v9; // rax
  __int64 **v11; // r12
  __int64 **v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rax

  v3 = 0;
  v5 = a2 + (a3 << 12);
  if ( !*(_BYTE *)(a1 + 120) )
    return (unsigned int)-1073741823;
  if ( (a2 & 0xFFF) != 0 )
    return (unsigned int)-1073741584;
  v7 = *(__int64 **)(a1 + 88);
  if ( v5 > v7[6] + v7[7] || v5 == a2 )
    return (unsigned int)-1073741583;
  while ( 1 )
  {
    v8 = v7[6];
    if ( v8 == a2 && v7[7] + v8 == v5 )
    {
LABEL_19:
      v11 = (__int64 **)(v7 + 2);
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            while ( 1 )
            {
              if ( v7 == *v11 )
                return v3;
              v12 = (__int64 **)(v7 + 3);
              v13 = v7[3];
              if ( !v13 || a2 >= *(_QWORD *)(v13 + 48) + *(_QWORD *)(v13 + 56) )
                break;
              v7 = (__int64 *)v7[3];
            }
            v14 = v7[4];
            if ( !v14 || v5 <= *(_QWORD *)(v14 + 48) )
              break;
            v7 = (__int64 *)v7[4];
          }
          v15 = v7[6];
          if ( a2 > v15 && a2 < v15 + v7[7] )
            break;
          v16 = v7[7];
          if ( v5 < v16 + v15 && v5 > v15 )
            break;
          if ( a2 > v15 || v5 < v16 + v15 )
            goto LABEL_33;
          v17 = (_QWORD *)(a1 + 80);
          if ( !*((_BYTE *)v7 + 72) )
          {
            v7[8] = v16;
            *((_BYTE *)v7 + 72) = 1;
            v7[5] = (__int64)v17;
            *(_QWORD *)(a1 + 72) += v16;
            ++*v17;
            sub_1405345E8(v7, a1);
            goto LABEL_33;
          }
LABEL_32:
          if ( (_QWORD *)v7[5] != v17 )
            return (unsigned int)-1073741823;
LABEL_33:
          if ( v7 == *v11 )
            return v3;
          while ( 1 )
          {
            v18 = v7[2];
            if ( *(__int64 **)(v18 + 24) == v7 )
              break;
            v7 = (__int64 *)v7[2];
            if ( (__int64 *)v18 == *v11 )
              return v3;
          }
          v7 = *(__int64 **)(v18 + 32);
        }
        if ( *((_BYTE *)v7 + 72) )
        {
          v17 = (_QWORD *)(a1 + 80);
          goto LABEL_32;
        }
        sub_1405345E8(v7, a1);
        v3 = sub_140534CBC(a1, v7);
        if ( (v3 & 0x80000000) != 0 )
          return v3;
        sub_1405342C0((__int64 *)v7[4], a1);
        sub_1405342C0(*v12, a1);
        v7 = *v12;
      }
    }
    v9 = (__int64 *)v7[3];
    if ( v9 )
      goto LABEL_13;
    if ( *((_BYTE *)v7 + 72) )
      break;
    sub_1405345E8(v7, a1);
    v3 = sub_140534CBC(a1, v7);
    if ( (v3 & 0x80000000) != 0 )
      return v3;
    sub_1405342C0((__int64 *)v7[4], a1);
    sub_1405342C0((__int64 *)v7[3], a1);
    v9 = (__int64 *)v7[3];
LABEL_13:
    if ( v5 > v9[6] + v9[7] )
    {
      v9 = (__int64 *)v7[4];
      if ( a2 < v9[6] )
        goto LABEL_19;
    }
    v7 = v9;
  }
  if ( v7[5] != a1 + 80 )
    return (unsigned int)-1073741823;
  return v3;
}
