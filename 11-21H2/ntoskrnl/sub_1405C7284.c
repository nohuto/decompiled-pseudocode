/*
 * XREFs of sub_1405C7284 @ 0x1405C7284
 * Callers:
 *     sub_1403A1620 @ 0x1403A1620 (sub_1403A1620.c)
 * Callees:
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     sub_14039D6B0 @ 0x14039D6B0 (sub_14039D6B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056839C @ 0x14056839C (sub_14056839C.c)
 *     sub_14056C810 @ 0x14056C810 (sub_14056C810.c)
 */

unsigned __int64 *__fastcall sub_1405C7284(
        __int64 a1,
        char a2,
        unsigned __int8 a3,
        unsigned __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7,
        int *a8,
        int *a9)
{
  __int64 v13; // rax
  unsigned __int64 v14; // rbx
  char v15; // dl
  int v16; // eax
  unsigned int v17; // edx
  unsigned __int64 v18; // rdi
  unsigned int v19; // r8d
  int v20; // ecx
  unsigned int v21; // eax
  unsigned __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 *result; // rax
  __int64 v26; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v27; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int64 *v28; // [rsp+58h] [rbp-B0h]
  unsigned __int64 *v29; // [rsp+60h] [rbp-A8h]
  unsigned __int16 *v30[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int16 v31; // [rsp+78h] [rbp-90h]
  int v32; // [rsp+7Ah] [rbp-8Eh]
  __int16 v33; // [rsp+7Eh] [rbp-8Ah]
  _QWORD v34[34]; // [rsp+88h] [rbp-80h] BYREF

  v29 = a6;
  v28 = a7;
  v32 = 0;
  v33 = 0;
  memset(&v34[1], 0, 0x100uLL);
  v13 = *(_QWORD *)(a1 + 33600);
  v14 = -1LL;
  v27 = 0LL;
  LODWORD(v26) = 0;
  v15 = *(_BYTE *)(v13 + 732);
  v16 = 0;
  *a9 = 0;
  if ( *(_BYTE *)(a1 + 33) )
  {
    v16 = 8;
    *a9 = 8;
  }
  if ( a2 )
    *a9 = v16 | 4;
  sub_14056C810(a1, v15, a2, a3, a4, (__int64 *)&v27, a8);
  v18 = (unsigned int)sub_14056839C(a1, 0);
  v19 = v17 + 1;
  if ( !a2 )
  {
    v20 = *(_DWORD *)(a1 + 11684);
    if ( v20 )
    {
      v21 = __PAIR64__(v17, DesiredTime) / (unsigned int)(v20 + 1);
      if ( v21 < v19 )
        v21 = v17 + 1;
      v14 = v21;
    }
  }
  if ( v27 <= v14 )
  {
    v14 = v27;
    v18 = v27;
  }
  else
  {
    if ( v27 < v18 )
      v18 = v27;
    *a9 |= v19;
  }
  LODWORD(v34[0]) = 2097153;
  memset((char *)v34 + 4, 0, 0x104uLL);
  if ( qword_140D06CB0 && *(_BYTE *)(a1 + 33) && (unsigned __int8)sub_14039D6B0((unsigned __int16 *)v34) )
  {
    v22 = 0LL;
    v30[1] = (unsigned __int16 *)v34[1];
    v30[0] = (unsigned __int16 *)v34;
    v31 = 0;
    while ( !(unsigned int)KeEnumerateNextProcessor(&v26, v30) )
    {
      v23 = sub_140348800(v26);
      v24 = *(_QWORD *)(v23 + 33648);
      if ( v24 != -1LL && v24 > v22 )
        v22 = *(_QWORD *)(v23 + 33648);
    }
    if ( v22 && v18 + a4 > v22 )
    {
      *a9 |= 0x2000u;
      v18 = v22 > a4 ? (unsigned int)(v22 - a4) : 1LL;
      if ( v18 < v14 )
        v14 = v18;
    }
  }
  if ( v14 < a5 )
  {
    *a9 |= 0x1000u;
    v14 = a5;
    v18 = a5;
  }
  *v28 = v18;
  result = v29;
  *v29 = v14;
  return result;
}
