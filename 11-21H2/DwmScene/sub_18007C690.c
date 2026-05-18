/*
 * XREFs of sub_18007C690 @ 0x18007C690
 * Callers:
 *     sub_18007CB18 @ 0x18007CB18 (sub_18007CB18.c)
 * Callees:
 *     sub_18003F44C @ 0x18003F44C (sub_18003F44C.c)
 *     sub_18007C5DC @ 0x18007C5DC (sub_18007C5DC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 **__fastcall sub_18007C690(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3,
        unsigned __int8 (__fastcall *a4)(__int64 *, __int64 *))
{
  __int64 *v4; // rbp
  __int64 *v6; // rsi
  __int64 v7; // rbx
  __int64 *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 *v13; // r12
  __int64 v14; // r8
  __int64 *v15; // rbx
  __int64 *v16; // rdi
  __int64 *v17; // rdi
  __int64 *v18; // rbp
  __int64 *v19; // r9
  __int64 *v20; // r12
  __int64 *v21; // r10
  __int64 **result; // rax
  __int64 *v24; // [rsp+68h] [rbp+10h]

  v4 = a3 - 2;
  v6 = &a2[2 * (((char *)a3 - (char *)a2) >> 5)];
  v7 = ((char *)(a3 - 2) - (char *)a2) >> 4;
  v10 = a2;
  if ( v7 <= 40 )
  {
    v13 = a3 - 2;
  }
  else
  {
    v11 = (v7 + 1) >> 3;
    v12 = 16 * v11;
    v11 *= 32LL;
    v24 = &a2[(unsigned __int64)v12 / 8];
    sub_18007C5DC(a2, &a2[(unsigned __int64)v12 / 8], (__int64 *)((char *)a2 + v11), a4);
    sub_18007C5DC(&v6[v12 / 0xFFFFFFFFFFFFFFF8uLL], v6, &v6[(unsigned __int64)v12 / 8], a4);
    v13 = &v4[v12 / 0xFFFFFFFFFFFFFFF8uLL];
    sub_18007C5DC((__int64 *)((char *)v4 - v11), &v4[v12 / 0xFFFFFFFFFFFFFFF8uLL], v4, a4);
    v10 = v24;
  }
  sub_18007C5DC(v10, v6, v13, a4);
  v15 = v6 + 2;
  if ( a2 < v6 )
  {
    do
    {
      v16 = v6 - 2;
      if ( a4(v6 - 2, v6) )
        break;
      if ( a4(v6, v6 - 2) )
        break;
      v6 -= 2;
    }
    while ( a2 < v16 );
  }
  while ( v15 < a3 && !a4(v15, v6) && !a4(v6, v15) )
    v15 += 2;
  v17 = v15;
  v18 = v6;
  while ( 1 )
  {
    while ( v17 < a3 )
    {
      if ( !a4(v6, v17) )
      {
        if ( a4(v17, v6) )
          break;
        if ( v15 != v17 )
          sub_18003F44C(v15, v17);
        v15 += 2;
      }
      v17 += 2;
    }
    v19 = v17;
    if ( a2 < v18 )
    {
      v20 = v18 - 2;
      do
      {
        if ( !((unsigned __int8 (__fastcall *)(__int64 *, __int64 *, __int64, __int64 *))a4)(v20, v6, v14, v19) )
        {
          if ( a4(v6, v20) )
            break;
          v6 -= 2;
          if ( v6 != v20 )
            sub_18003F44C(v6, v20);
        }
        v18 -= 2;
        v20 -= 2;
      }
      while ( a2 < v18 );
      v19 = v17;
    }
    v21 = v6;
    if ( v18 == a2 )
      break;
    v18 -= 2;
    if ( v17 != a3 )
    {
      v21 = v19;
      v19 = v18;
LABEL_39:
      v17 += 2;
      goto LABEL_40;
    }
    v6 -= 2;
    if ( v18 != v6 )
      sub_18003F44C(v18, v6);
    v15 -= 2;
    v21 = v6;
    v19 = v15;
LABEL_40:
    sub_18003F44C(v21, v19);
  }
  if ( v17 != a3 )
  {
    if ( v15 != v17 )
      sub_18003F44C(v6, v15);
    v15 += 2;
    v6 += 2;
    goto LABEL_39;
  }
  result = a1;
  a1[1] = v15;
  *a1 = v6;
  return result;
}
