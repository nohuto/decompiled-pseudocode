/*
 * XREFs of sub_1C00684E4 @ 0x1C00684E4
 * Callers:
 *     sub_1C0001770 @ 0x1C0001770 (sub_1C0001770.c)
 *     StorPortNotification @ 0x1C000EAB0 (StorPortNotification.c)
 * Callees:
 *     sub_1C0018028 @ 0x1C0018028 (sub_1C0018028.c)
 *     sub_1C0067414 @ 0x1C0067414 (sub_1C0067414.c)
 */

int __fastcall sub_1C00684E4(__int64 a1, char a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi
  char v5; // r15
  unsigned __int64 v6; // r14
  LARGE_INTEGER v10; // rax
  __int64 QuadPart; // rcx
  LARGE_INTEGER v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // r10
  __int64 v17; // r11
  unsigned __int64 v18; // r8
  LONGLONG v19; // r9
  unsigned __int64 v20; // r8
  __int64 v21; // r8
  unsigned __int64 v22; // r8
  __int64 v23; // r8
  LONGLONG v24; // r9
  unsigned __int64 v25; // r8
  char *v26; // rax
  int v27; // r10d
  char v28; // r11
  char v29; // dl
  char v30; // r9
  const EVENT_DESCRIPTOR *v31; // rdx
  __int64 v33; // [rsp+28h] [rbp-80h]
  char v34; // [rsp+50h] [rbp-58h]
  char v35; // [rsp+58h] [rbp-50h]
  char v36; // [rsp+60h] [rbp-48h]
  int v37; // [rsp+68h] [rbp-40h]
  unsigned __int64 v38; // [rsp+70h] [rbp-38h]
  unsigned __int64 v39; // [rsp+78h] [rbp-30h]
  union _LARGE_INTEGER v40; // [rsp+B0h] [rbp+8h] BYREF
  char v41; // [rsp+B8h] [rbp+10h] BYREF

  v40.QuadPart = 0LL;
  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 168);
  v5 = 0;
  v6 = 0LL;
  v41 = 0;
  if ( byte_1C0093BA0 )
    v10 = KeQueryPerformanceCounter(&v40);
  else
    v10.QuadPart = KeQueryUnbiasedInterruptTime();
  QuadPart = v40.QuadPart;
  v12 = v10;
  if ( !a2 )
  {
    if ( v10.QuadPart <= 0 || (v13 = *(_QWORD *)(a1 + 696), v12.QuadPart >= v13) )
      v14 = v12.QuadPart - *(_QWORD *)(a1 + 696);
    else
      v14 = v12.QuadPart - v13 - 1;
    if ( byte_1C0093BA0 )
    {
      a3 = 0LL;
      if ( v40.QuadPart && v14 )
        a3 = 10000 * (1000 * (v14 % v40.QuadPart) % v40.QuadPart) / v40.QuadPart
           + 10000 * (1000 * (v14 / v40.QuadPart) + 1000 * (v14 % v40.QuadPart) / v40.QuadPart);
    }
    else
    {
      a3 = v14;
    }
  }
  LODWORD(v15) = 696;
  if ( qword_1C0094158 && a3 < qword_1C0094158 )
    return v15;
  v16 = *(_QWORD *)(a1 + 704);
  v17 = *(_QWORD *)(a1 + 696);
  if ( v16 >= v17 )
  {
    v18 = v16 - v17;
    if ( byte_1C0093BA0 )
    {
      if ( v40.QuadPart && v18 )
      {
        v19 = v18 / v40.QuadPart;
        v20 = 1000 * (v18 % v40.QuadPart);
        v15 = 10000 * (v20 % v40.QuadPart) / v40.QuadPart;
        v6 = v15 + 10000 * (1000 * v19 + v20 / v40.QuadPart);
      }
    }
    else
    {
      v6 = v16 - v17;
    }
  }
  if ( v16 && (v21 = *(_QWORD *)(a1 + 712), v21 >= v16) )
  {
    v22 = v21 - v16;
  }
  else
  {
    v23 = *(_QWORD *)(a1 + 712);
    if ( v23 < v17 )
      goto LABEL_32;
    v22 = v23 - v17;
  }
  if ( byte_1C0093BA0 )
  {
    if ( v40.QuadPart && v22 )
    {
      v24 = v22 / v40.QuadPart;
      v25 = 1000 * (v22 % v40.QuadPart);
      v15 = 10000 * (v25 % v40.QuadPart) / v40.QuadPart;
      v3 = v15 + 10000 * (1000 * v24 + v25 / v40.QuadPart);
    }
  }
  else
  {
    v3 = v22;
  }
LABEL_32:
  if ( *(_BYTE *)(v4 + 2) == 40 )
  {
    v26 = (char *)sub_1C0018028(v4, 0LL, 0LL, &v41, 0LL, 0LL);
    if ( v26 )
      v5 = *v26;
    v15 = *(unsigned int *)(v4 + 52);
    v27 = *(_DWORD *)(v4 + 60);
    v28 = v41;
    LOBYTE(QuadPart) = *(_BYTE *)(v15 + v4 + 8);
    v29 = *(_BYTE *)(v15 + v4 + 9);
    v30 = *(_BYTE *)(v15 + v4 + 10);
  }
  else
  {
    v5 = *(_BYTE *)(v4 + 72);
    v28 = *(_BYTE *)(v4 + 4);
    LOBYTE(QuadPart) = *(_BYTE *)(v4 + 5);
    v29 = *(_BYTE *)(v4 + 6);
    v30 = *(_BYTE *)(v4 + 7);
    v27 = *(_DWORD *)(v4 + 16);
  }
  if ( a2 )
  {
    if ( (byte_1C0093A01 & 1) != 0 )
    {
      v39 = v3;
      v38 = v6;
      v37 = v27;
      v36 = v28;
      v35 = v30;
      v34 = v29;
      v31 = (const EVENT_DESCRIPTOR *)&unk_1C0088FC8;
      goto LABEL_42;
    }
  }
  else if ( (byte_1C0093A01 & 1) != 0 )
  {
    v39 = v3;
    v38 = v6;
    v37 = v27;
    v36 = v28;
    v35 = v30;
    v34 = v29;
    v31 = (const EVENT_DESCRIPTOR *)&unk_1C0089760;
LABEL_42:
    LOBYTE(v33) = v5;
    LODWORD(v15) = sub_1C0067414(
                     QuadPart,
                     v31,
                     (const GUID *)(a1 + 728),
                     a3,
                     *(_QWORD *)(a1 + 160),
                     v33,
                     *(_BYTE *)(v4 + 3),
                     *(_QWORD *)(a1 + 768),
                     *(_BYTE *)(*(_QWORD *)(a1 + 216) + 56LL),
                     QuadPart,
                     v34,
                     v35,
                     v36,
                     v37,
                     v38,
                     v39);
  }
  return v15;
}
