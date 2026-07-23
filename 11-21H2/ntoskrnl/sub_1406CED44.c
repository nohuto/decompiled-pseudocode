/*
 * XREFs of sub_1406CED44 @ 0x1406CED44
 * Callers:
 *     sub_14078FE24 @ 0x14078FE24 (sub_14078FE24.c)
 * Callees:
 *     sub_1406CEEB0 @ 0x1406CEEB0 (sub_1406CEEB0.c)
 */

__int64 __fastcall sub_1406CED44(_DWORD *a1, __int64 a2)
{
  unsigned int v3; // eax
  unsigned int v5; // ecx
  unsigned int v6; // ebx
  int v7; // ebp
  int v8; // esi
  __int64 v9; // r9
  unsigned __int64 v10; // r10
  int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 result; // rax
  int v15; // eax
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF

  v16 = 0LL;
  v3 = a1[29];
  if ( v3 > 0xD )
    return 3221225485LL;
  v5 = a1[1];
  v6 = 16 * v3 + 120;
  if ( v6 > v5 )
    return 3221225485LL;
  v7 = 0;
  v8 = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      v9 = (__int64)&a1[4 * v8 + 30];
      v10 = *(_QWORD *)v9;
      if ( *(_QWORD *)v9 < (unsigned __int64)v6 )
        return 3221225485LL;
      v11 = a1[20];
      if ( (v11 & 0x20) != 0 )
      {
        v15 = *(_DWORD *)(v9 + 12);
        if ( v15 == -2147479552
          || v15 == -2147483136
          || v15 == -2147482624
          || v15 == -2147475456
          || v15 == -2147483392
          || v15 == 0x80000000
          || v15 == -2147483646 )
        {
          return 3221225485LL;
        }
      }
      v12 = *(unsigned int *)(v9 + 12);
      if ( (v11 & 0x400) != 0 )
      {
        if ( (((_DWORD)v12 + 0x80000000) & 0xFFFFFEFD) == 0 && (_DWORD)v12 != -2147483390 )
          return 3221225485LL;
      }
      else if ( (_DWORD)v12 == -2147450880 )
      {
        return 3221225485LL;
      }
      v13 = *(unsigned int *)(v9 + 8);
      if ( (unsigned int)v13 > 0x400 )
      {
        if ( (_DWORD)v12 == -2147483392 )
        {
LABEL_39:
          if ( (unsigned int)v13 > 0x1000 )
            return 3221225485LL;
          goto LABEL_10;
        }
        if ( (_DWORD)v12 != -2147482624 )
          return 3221225485LL;
      }
      if ( (_DWORD)v12 == -2147483392 )
        goto LABEL_39;
LABEL_10:
      if ( ((_DWORD)v12 == -2147482624 || (_DWORD)v12 == -2147475456) && (unsigned int)v13 > 0x1000
        || v10 + v13 < v10
        || v10 + v13 > (unsigned int)a1[1] )
      {
        return 3221225485LL;
      }
      v7 += v13;
      if ( (_DWORD)v12 == -2147483644 )
      {
        *(_QWORD *)(a2 + 80) = v9;
      }
      else if ( (_DWORD)v12 == -2147467264 )
      {
        *(_QWORD *)(a2 + 64) = v9;
      }
      else
      {
        *((_QWORD *)&v16 + 1) = __PAIR64__(v12, v13);
        *(_QWORD *)&v16 = (char *)a1 + v10;
        result = ((__int64 (__fastcall *)(__int64, __int128 *, __int64, _DWORD *))sub_1406CEEB0)(v12, &v16, a2, a1 + 10);
        if ( (int)result < 0 )
          return result;
      }
      if ( (unsigned int)++v8 >= a1[29] )
      {
        v5 = a1[1];
        break;
      }
    }
  }
  if ( v6 + v7 == v5 )
    return 0LL;
  else
    return 3221225485LL;
}
