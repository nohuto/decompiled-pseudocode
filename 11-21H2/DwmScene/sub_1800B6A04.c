/*
 * XREFs of sub_1800B6A04 @ 0x1800B6A04
 * Callers:
 *     sub_1800B706C @ 0x1800B706C (sub_1800B706C.c)
 * Callees:
 *     sub_18003F44C @ 0x18003F44C (sub_18003F44C.c)
 *     sub_1800B6D70 @ 0x1800B6D70 (sub_1800B6D70.c)
 */

__int64 **__fastcall sub_1800B6A04(__int64 **a1, __int64 *a2, __int64 *a3)
{
  __int64 *v3; // rbp
  __int64 v5; // rax
  __int64 v8; // r12
  __int64 v9; // rdi
  __int64 v10; // r12
  __int64 *v11; // rbx
  __int64 v12; // rcx
  __int64 *v13; // r8
  __int64 v14; // r11
  __int64 v15; // rcx
  __int64 v16; // r10
  __int64 *v17; // r11
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *v20; // r14
  __int64 v21; // rcx
  __int64 *v22; // r10
  __int64 *v23; // r11
  __int64 v24; // rcx
  __int64 *v25; // r10
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r11
  __int64 *v29; // r10
  __int64 *v30; // r11
  __int64 v31; // rcx
  __int64 *v32; // r11
  __int64 v33; // rcx
  __int64 v34; // r10
  __int64 *v35; // r11
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 *v38; // r11
  __int64 v39; // rcx
  __int64 *v40; // r10
  __int64 v41; // r11
  __int64 v42; // rcx
  __int64 *v43; // r10
  __int64 *v44; // r11
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 *v47; // rdx
  __int64 v48; // rcx
  __int64 *v49; // r10
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 *v52; // r11
  __int64 *v53; // rbx
  __int64 *v54; // rbx
  __int64 *v55; // rdi
  __int64 *v56; // r14
  __int64 *v57; // rbp
  __int64 *v58; // r9
  __int64 *v59; // r10
  __int64 **result; // rax

  v3 = a3 - 2;
  v5 = ((char *)(a3 - 2) - (char *)a2) >> 4;
  if ( v5 <= 40 )
  {
    if ( (unsigned __int8)sub_1800B6D70(a1, &a2[2 * (((char *)a3 - (char *)a2) >> 5)], a2) )
      sub_18003F44C(v49, a2);
    if ( !(unsigned __int8)sub_1800B6D70(v48, v3, v49) )
      goto LABEL_28;
    sub_18003F44C(v3, v43);
    if ( !(unsigned __int8)sub_1800B6D70(v51, v50, a2) )
      goto LABEL_28;
    v47 = a2;
  }
  else
  {
    v8 = (v5 + 1) >> 3;
    v9 = 16 * v8;
    v10 = 32 * v8;
    v11 = &a2[(unsigned __int64)v9 / 8];
    if ( (unsigned __int8)sub_1800B6D70(a1, &a2[(unsigned __int64)v9 / 8], a2) )
      sub_18003F44C(v11, v13);
    if ( (unsigned __int8)sub_1800B6D70(v12, v14, v11) )
    {
      sub_18003F44C(v17, v11);
      if ( (unsigned __int8)sub_1800B6D70(v19, v18, a2) )
        sub_18003F44C(v11, a2);
    }
    v20 = (__int64 *)(v9 + v16);
    if ( (unsigned __int8)sub_1800B6D70(v15, v16, v16 - v9) )
      sub_18003F44C(v22, v23);
    if ( (unsigned __int8)sub_1800B6D70(v21, v20, v22) )
    {
      sub_18003F44C(v20, v25);
      if ( (unsigned __int8)sub_1800B6D70(v27, v26, v28) )
        sub_18003F44C(v29, v30);
    }
    if ( (unsigned __int8)sub_1800B6D70(v24, &v3[v9 / 0xFFFFFFFFFFFFFFF8uLL], &v3[v10 / 0xFFFFFFFFFFFFFFF8uLL]) )
      sub_18003F44C(v32, &v3[v10 / 0xFFFFFFFFFFFFFFF8uLL]);
    if ( (unsigned __int8)sub_1800B6D70(v31, v3, v32) )
    {
      sub_18003F44C(v3, v35);
      if ( (unsigned __int8)sub_1800B6D70(v37, v36, &v3[v10 / 0xFFFFFFFFFFFFFFF8uLL]) )
        sub_18003F44C(v38, &v3[v10 / 0xFFFFFFFFFFFFFFF8uLL]);
    }
    if ( (unsigned __int8)sub_1800B6D70(v33, v34, v11) )
      sub_18003F44C(v40, v11);
    if ( !(unsigned __int8)sub_1800B6D70(v39, v41, v40) )
      goto LABEL_28;
    sub_18003F44C(v44, v43);
    if ( !(unsigned __int8)sub_1800B6D70(v46, v45, v11) )
      goto LABEL_28;
    v47 = v11;
  }
  sub_18003F44C(v43, v47);
LABEL_28:
  v52 = v43 + 2;
  if ( a2 < v43 )
  {
    do
    {
      v53 = v43 - 2;
      if ( (unsigned __int8)sub_1800B6D70(v42, v43 - 2, v43) )
        break;
      if ( (unsigned __int8)sub_1800B6D70(v42, v43, v53) )
        break;
      v43 = v53;
    }
    while ( a2 < v53 );
  }
  while ( v52 < a3 && !(unsigned __int8)sub_1800B6D70(v42, v52, v43) && !(unsigned __int8)sub_1800B6D70(v42, v43, v52) )
    v52 += 2;
  v54 = v52;
  v55 = v43;
  while ( 1 )
  {
    while ( v54 < a3 )
    {
      if ( !(unsigned __int8)sub_1800B6D70(v42, v43, v54) )
      {
        if ( (unsigned __int8)sub_1800B6D70(v42, v54, v43) )
          break;
        if ( v52 != v54 )
          sub_18003F44C(v52, v54);
        v52 += 2;
      }
      v54 += 2;
    }
    v56 = v54;
    if ( a2 < v55 )
    {
      v57 = v55 - 2;
      do
      {
        if ( !(unsigned __int8)sub_1800B6D70(v42, v57, v43) )
        {
          if ( (unsigned __int8)sub_1800B6D70(v42, v43, v57) )
            break;
          v43 -= 2;
          if ( v43 != v57 )
            sub_18003F44C(v43, v57);
        }
        v55 -= 2;
        v57 -= 2;
      }
      while ( a2 < v55 );
    }
    v58 = v43;
    if ( v55 == a2 )
      break;
    v55 -= 2;
    if ( v54 != a3 )
    {
      v58 = v54;
      v56 = v55;
LABEL_62:
      v54 += 2;
      goto LABEL_63;
    }
    v59 = v43 - 2;
    if ( v55 != v59 )
      sub_18003F44C(v55, v59);
    v58 = v59;
    v56 = v52 - 2;
LABEL_63:
    sub_18003F44C(v58, v56);
  }
  if ( v54 != a3 )
  {
    if ( v52 != v54 )
      sub_18003F44C(v43, v52);
    goto LABEL_62;
  }
  result = a1;
  *a1 = v43;
  a1[1] = v52;
  return result;
}
