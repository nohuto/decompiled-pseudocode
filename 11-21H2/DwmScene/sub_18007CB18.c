/*
 * XREFs of sub_18007CB18 @ 0x18007CB18
 * Callers:
 *     sub_18007C3B4 @ 0x18007C3B4 (sub_18007C3B4.c)
 *     sub_18007CB18 @ 0x18007CB18 (sub_18007CB18.c)
 *     sub_1800B70F4 @ 0x1800B70F4 (sub_1800B70F4.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_18007C690 @ 0x18007C690 (sub_18007C690.c)
 *     sub_18007C93C @ 0x18007C93C (sub_18007C93C.c)
 *     sub_18007CB18 @ 0x18007CB18 (sub_18007CB18.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18007CB18(
        __int64 *a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int8 (__fastcall *a4)(__int64 *, __int64 *))
{
  __int64 *v6; // r14
  __int64 *v7; // rdi
  signed __int64 i; // rax
  __int64 *v9; // rsi
  __int64 *v10; // r15
  __int64 result; // rax
  __int64 *j; // rsi
  __int64 v13; // r15
  __int64 *v14; // rbx
  __int64 *v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 *v18; // r12
  __int64 *v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 *k; // rbx
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // [rsp+20h] [rbp-50h]
  __int128 v27; // [rsp+30h] [rbp-40h] BYREF
  __int128 v28; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v29[2]; // [rsp+50h] [rbp-20h] BYREF
  _QWORD v30[2]; // [rsp+60h] [rbp-10h] BYREF

  v6 = a2;
  v7 = a1;
  for ( i = (char *)a2 - (char *)a1; ; i = (char *)v6 - (char *)v7 )
  {
    result = i & 0xFFFFFFFFFFFFFFF0uLL;
    if ( result <= 512 )
    {
      if ( v7 != v6 )
      {
        for ( j = v7 + 2; j != v6; j += 2 )
        {
          v18 = j;
          v27 = *(_OWORD *)j;
          v19 = j + 1;
          *j = 0LL;
          j[1] = 0LL;
          if ( a4((__int64 *)&v27, v7) )
          {
            if ( j != v7 )
            {
              do
              {
                v19 -= 2;
                v20 = *(v19 - 1);
                v21 = *v19;
                *(v19 - 1) = 0LL;
                *v19 = 0LL;
                v29[0] = v19[1];
                v19[1] = v20;
                v29[1] = v19[2];
                v19[2] = v21;
                sub_180010910((__int64)v29);
              }
              while ( v19 - 1 != v7 );
            }
            v28 = v27;
            *(_QWORD *)&v28 = *v7;
            *v7 = v27;
            v22 = v7[1];
            v7[1] = *((_QWORD *)&v28 + 1);
          }
          else
          {
            for ( k = j; ; v18 = k )
            {
              k -= 2;
              if ( !a4((__int64 *)&v27, k) )
                break;
              v24 = *k;
              v25 = k[1];
              *k = 0LL;
              k[1] = 0LL;
              v30[0] = *v18;
              *v18 = v24;
              v30[1] = v18[1];
              v18[1] = v25;
              sub_180010910((__int64)v30);
            }
            v28 = v27;
            *(_QWORD *)&v28 = *v18;
            *v18 = v27;
            v22 = v18[1];
            v18[1] = *((_QWORD *)&v28 + 1);
          }
          v27 = 0LL;
          *((_QWORD *)&v28 + 1) = v22;
          sub_180010910((__int64)&v28);
          result = sub_180010910((__int64)&v27);
        }
      }
      return result;
    }
    if ( a3 <= 0 )
      break;
    sub_18007C690((__int64 **)&v28, v7, v6, a4);
    a3 = (a3 >> 2) + (a3 >> 1);
    v9 = (__int64 *)*((_QWORD *)&v28 + 1);
    v10 = (__int64 *)v28;
    if ( ((v28 - (unsigned __int64)v7) & 0xFFFFFFFFFFFFFFF0uLL) >= (__int64)(((unsigned __int64)v6
                                                                            - *((_QWORD *)&v28 + 1)) & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      sub_18007CB18(*((_QWORD *)&v28 + 1), v6, a3, a4, v26);
      v6 = v10;
    }
    else
    {
      sub_18007CB18(v7, v28, a3, a4, v26);
      v7 = v9;
    }
  }
  v13 = ((char *)v6 - (char *)v7) >> 5;
  if ( v13 > 0 )
  {
    v14 = &v7[2 * v13];
    do
    {
      --v13;
      v14 -= 2;
      v28 = *(_OWORD *)v14;
      *v14 = 0LL;
      v14[1] = 0LL;
      sub_18007C93C(
        (__int64)v7,
        v13,
        ((char *)v6 - (char *)v7) >> 4,
        (__int64 *)&v28,
        (unsigned __int8 (__fastcall *)(__int64, __int64))a4);
      result = sub_180010910((__int64)&v28);
    }
    while ( v13 > 0 );
  }
  if ( ((char *)v6 - (char *)v7) >> 4 >= 2 )
  {
    v15 = v6 - 1;
    do
    {
      v28 = *(_OWORD *)(v15 - 1);
      *(v15 - 1) = 0LL;
      *v15 = 0LL;
      v16 = *v7;
      v17 = v7[1];
      *v7 = 0LL;
      v7[1] = 0LL;
      *(_QWORD *)&v27 = *(v15 - 1);
      *(v15 - 1) = v16;
      *((_QWORD *)&v27 + 1) = *v15;
      *v15 = v17;
      sub_180010910((__int64)&v27);
      sub_18007C93C(
        (__int64)v7,
        0LL,
        ((__int64)v15 - 8 - (__int64)v7) >> 4,
        (__int64 *)&v28,
        (unsigned __int8 (__fastcall *)(__int64, __int64))a4);
      sub_180010910((__int64)&v28);
      v15 -= 2;
      result = ((unsigned __int64)v15 + 8LL - (_QWORD)v7) & 0xFFFFFFFFFFFFFFF0uLL;
    }
    while ( result >= 32 );
  }
  return result;
}
