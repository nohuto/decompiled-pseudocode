/*
 * XREFs of sub_1800CA57C @ 0x1800CA57C
 * Callers:
 *     sub_1800CA310 @ 0x1800CA310 (sub_1800CA310.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 *     sub_18001D3F8 @ 0x18001D3F8 (sub_18001D3F8.c)
 *     sub_180028C50 @ 0x180028C50 (sub_180028C50.c)
 *     sub_1800C8870 @ 0x1800C8870 (sub_1800C8870.c)
 *     sub_1800C88CC @ 0x1800C88CC (sub_1800C88CC.c)
 *     sub_1800C891C @ 0x1800C891C (sub_1800C891C.c)
 *     sub_1800C8A10 @ 0x1800C8A10 (sub_1800C8A10.c)
 *     sub_1800C8AFC @ 0x1800C8AFC (sub_1800C8AFC.c)
 *     sub_1800CA060 @ 0x1800CA060 (sub_1800CA060.c)
 *     sub_1800CB584 @ 0x1800CB584 (sub_1800CB584.c)
 */

__int64 __fastcall sub_1800CA57C(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // r15
  signed int v4; // esi
  __int64 v5; // rcx
  unsigned int v6; // r10d
  __int64 v7; // rax
  __int64 v8; // rbx
  char *v9; // rdx
  unsigned int v10; // r10d
  __int64 v11; // rcx
  __int64 *v12; // rbx
  __int64 *v13; // rax
  __int64 *i; // rax
  __int64 v15; // r14
  unsigned int v16; // esi
  __int64 *v17; // rsi
  __int64 v18; // r9
  __int64 v19; // r10
  __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  __int64 v22; // r11
  unsigned __int64 v23; // rdx
  __int64 v24; // r11
  __int64 v25; // r9
  __int64 *v26; // rax
  _BYTE v27[16]; // [rsp+20h] [rbp-50h] BYREF
  char v28; // [rsp+30h] [rbp-40h] BYREF
  char v29; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v30[32]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+48h] BYREF
  __int64 v33; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v34; // [rsp+C8h] [rbp+58h] BYREF

  result = *(unsigned int *)(a1 + 1640);
  if ( !(_DWORD)result )
    return result;
  v3 = (__int64 *)(a1 + 1648);
  v4 = (*(_DWORD *)(a1 + 1644) - (int)result + 21) % 0x14u;
  do
  {
    LODWORD(v31) = *(_DWORD *)(56LL * v4 + a1 + 536);
    v5 = *(_QWORD *)(sub_1800C88CC(v3, (__int64)v30, (unsigned int *)&v31) + 16);
    if ( !*(_BYTE *)(v5 + 25) && v6 >= *(_DWORD *)(v5 + 32) )
    {
      v7 = sub_1800C8A10(v3, (__int64)v27, (unsigned int *)&v31);
      result = (__int64)sub_1800CA060(a1, &v32, *(_DWORD *)(*(_QWORD *)v7 + 44LL));
      v8 = v32;
      if ( v32 <= 0 )
        break;
      v9 = &v28;
      goto LABEL_27;
    }
    result = sub_1800C88CC(v3, (__int64)v30, (unsigned int *)&v31);
    v11 = *v3;
    v12 = *(__int64 **)(result + 16);
    if ( v12 == *(__int64 **)*v3 )
      break;
    if ( *((_BYTE *)v12 + 25) )
    {
      v12 = (__int64 *)v12[2];
    }
    else
    {
      v13 = (__int64 *)*v12;
      if ( *(_BYTE *)(*v12 + 25) )
      {
        for ( i = (__int64 *)v12[1]; !*((_BYTE *)i + 25) && v12 == (__int64 *)*i; i = (__int64 *)i[1] )
          v12 = i;
        if ( !*((_BYTE *)v12 + 25) )
          v12 = i;
      }
      else
      {
        do
        {
          v12 = v13;
          v13 = (__int64 *)v13[2];
        }
        while ( !*((_BYTE *)v13 + 25) );
      }
    }
    result = *(_QWORD *)(v11 + 8);
    v15 = *v3;
    if ( *(_BYTE *)(result + 25) )
      break;
    do
    {
      if ( v10 >= *(_DWORD *)(result + 32) )
      {
        result = *(_QWORD *)(result + 16);
      }
      else
      {
        v15 = result;
        result = *(_QWORD *)result;
      }
    }
    while ( !*(_BYTE *)(result + 25) );
    if ( v15 == v11 )
      break;
    sub_1800CA060(a1, &v33, *((_DWORD *)v12 + 11));
    result = (__int64)sub_1800CA060(a1, &v34, *(_DWORD *)(v15 + 44));
    if ( v33 <= 0 )
      break;
    result = v34;
    if ( v34 <= 0 )
      break;
    v9 = &v29;
    v8 = v33
       + ((int)v31 - *((_DWORD *)v12 + 8))
       * ((v34 - v33)
        / (unsigned int)(*(_DWORD *)(v15 + 32) - *((_DWORD *)v12 + 8)));
LABEL_27:
    *(_QWORD *)(*(_QWORD *)sub_1800C891C((__int64 *)(a1 + 1680), (__int64)v9, (unsigned int *)&v31) + 40LL) = v8;
    --*(_DWORD *)(a1 + 1640);
    v16 = v4 + 1;
    result = 20 * (v16 / 0x14);
    v4 = v16 % 0x14;
  }
  while ( *(_DWORD *)(a1 + 1640) );
  if ( *(_QWORD *)(a1 + 1656) > 0x14uLL )
  {
    v17 = *(__int64 **)(a1 + 1648);
    v31 = *v17;
    do
      result = (__int64)sub_18001D3F8(&v31);
    while ( v19 != 1 );
    v20 = v31;
    v31 = v18;
    if ( *(_BYTE *)(v20 + 25) )
    {
      result = sub_1800C8870(a1 + 1648, a1 + 1648, v17[1]);
      v17[1] = (__int64)v17;
      *v17 = (__int64)v17;
      v17[2] = (__int64)v17;
      *(_QWORD *)(a1 + 1656) = 0LL;
    }
    else
    {
      while ( v18 != v20 )
      {
        sub_18001D3F8(&v31);
        v26 = sub_180028C50((_QWORD *)(a1 + 1648), v25);
        result = sub_1800100E8(v26, 0x48uLL);
        v18 = v31;
      }
    }
  }
  v21 = *(_QWORD *)(a1 + 1672);
  if ( v21 > 0x14 )
  {
    v31 = **(_QWORD **)(a1 + 1664);
    sub_1800C8AFC(&v31, v21 - 20);
    result = sub_1800CB584(a1 + 1664, &v31, v22, v31);
  }
  v23 = *(_QWORD *)(a1 + 1688);
  if ( v23 > 0x14 )
  {
    v31 = **(_QWORD **)(a1 + 1680);
    sub_1800C8AFC(&v31, v23 - 20);
    return sub_1800CB584(a1 + 1680, &v31, v24, v31);
  }
  return result;
}
