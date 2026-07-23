/*
 * XREFs of sub_1405FECBC @ 0x1405FECBC
 * Callers:
 *     sub_1402D8A7C @ 0x1402D8A7C (sub_1402D8A7C.c)
 *     sub_140A800C4 @ 0x140A800C4 (sub_140A800C4.c)
 * Callees:
 *     sub_1405FEE84 @ 0x1405FEE84 (sub_1405FEE84.c)
 */

__int64 __fastcall sub_1405FECBC(_QWORD *a1)
{
  __int64 v1; // r9
  _QWORD *v3; // r8
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 (__fastcall *v7)(__int64, IRP *); // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // r10
  __int64 v17; // r8
  __int64 (__fastcall **v18)(__int64, IRP *); // r9
  __int64 v19; // r11
  __int64 (__fastcall *v20)(__int64, IRP *); // rcx
  __int64 v21; // r11
  signed __int64 v22; // r10
  __int64 (__fastcall **v23)(__int64, IRP *); // rax
  __int64 v24; // r8
  __int64 (__fastcall *v25)(__int64, IRP *); // rcx
  __int64 (__fastcall *v26)(__int64, IRP *); // rax
  __int64 *v27; // r8
  __int64 *v28; // rdx

  v1 = a1[6];
  v3 = *(_QWORD **)(v1 + 64);
  if ( (qword_140D01450 & 0x800000000LL) != 0 )
  {
    v4 = sub_1405FEE84(268435485LL, a1);
    if ( v4 )
    {
      if ( (*(_DWORD *)(v4 + 8) & 1) != 0 )
      {
        v7 = *(__int64 (__fastcall **)(__int64, IRP *))(v5 + 96);
        if ( v7 )
        {
          if ( v7 != sub_14023EE50 )
          {
            *(_QWORD *)(v6 + 8) = v7;
            *(_QWORD *)(v5 + 96) = qword_140C1A990;
          }
        }
      }
    }
    v8 = sub_1405FEE84(268435487LL, v5);
    if ( v8 )
    {
      if ( (*(_DWORD *)(v8 + 8) & 1) != 0 )
      {
        v11 = *(_QWORD *)(v9 + 104);
        if ( v11 )
        {
          *(_QWORD *)(v10 + 16) = v11;
          *(_QWORD *)(v9 + 104) = qword_140C1A988;
        }
      }
    }
    result = sub_1405FEE84(268435486LL, v9);
    if ( result )
    {
      result = *(unsigned int *)(result + 8);
      if ( (result & 1) != 0 )
      {
        result = *(_QWORD *)(v15 + 8);
        if ( result )
        {
          *(_QWORD *)(v14 + 24) = result;
          result = qword_140C1A998;
          *(_QWORD *)(v15 + 8) = qword_140C1A998;
        }
      }
    }
    v16 = (__int64 *)&off_140D4E260;
    v17 = v14 - v13;
    v18 = (__int64 (__fastcall **)(__int64, IRP *))(v13 + 112);
    v19 = 28LL;
    do
    {
      v20 = *v18;
      if ( *v18 && v20 != sub_14023EE50 )
      {
        result = *((unsigned int *)v16 - 2);
        if ( (result & 1) != 0 )
        {
          *(__int64 (__fastcall **)(__int64, IRP *))((char *)v18 + v17 - 80) = v20;
          result = *v16;
          *v18 = *(__int64 (__fastcall **)(__int64, IRP *))*v16;
        }
      }
      ++v18;
      v16 += 4;
      --v19;
    }
    while ( v19 );
  }
  else
  {
    v3[1] = a1[12];
    v21 = 28LL;
    v3[2] = a1[13];
    v22 = (char *)a1 - (char *)v3;
    v3[3] = *(_QWORD *)(v1 + 8);
    v23 = (__int64 (__fastcall **)(__int64, IRP *))(v3 + 4);
    v24 = 28LL;
    do
    {
      v25 = *(__int64 (__fastcall **)(__int64, IRP *))((char *)v23 + v22 + 80);
      if ( v25 && v25 != sub_14023EE50 )
        *v23 = v25;
      ++v23;
      --v24;
    }
    while ( v24 );
    v26 = (__int64 (__fastcall *)(__int64, IRP *))a1[12];
    if ( v26 && v26 != sub_14023EE50 )
      a1[12] = qword_140C1A990;
    if ( a1[13] )
      a1[13] = qword_140C1A988;
    if ( *(_QWORD *)(v1 + 8) )
      *(_QWORD *)(v1 + 8) = qword_140C1A998;
    v27 = (__int64 *)&off_140D4E260;
    v28 = a1 + 14;
    do
    {
      result = *v28;
      if ( *v28 && (__int64 (__fastcall *)(__int64, IRP *))result != sub_14023EE50 )
      {
        result = *v27;
        *v28 = *(_QWORD *)*v27;
      }
      ++v28;
      v27 += 4;
      --v21;
    }
    while ( v21 );
  }
  return result;
}
