/*
 * XREFs of sub_1C006882C @ 0x1C006882C
 * Callers:
 *     sub_1C0001770 @ 0x1C0001770 (sub_1C0001770.c)
 *     StorPortNotification @ 0x1C000EAB0 (StorPortNotification.c)
 * Callees:
 *     sub_1C0018028 @ 0x1C0018028 (sub_1C0018028.c)
 *     sub_1C00672D4 @ 0x1C00672D4 (sub_1C00672D4.c)
 */

int __fastcall sub_1C006882C(__int64 a1, char a2, __int64 a3)
{
  __int64 QuadPart; // rax
  __int64 v4; // rdi
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rsi
  int v7; // r15d
  __int64 v8; // r13
  char v9; // r14
  char v10; // bp
  __int64 v12; // r11
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  __int64 v15; // rbp
  unsigned __int64 v16; // r8
  unsigned __int64 v17; // r9
  __int64 v18; // r8
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r9
  __int64 v21; // r8
  __int64 v22; // rcx
  char v23; // dl
  char v24; // r9
  char v25; // r10
  union _LARGE_INTEGER v27[11]; // [rsp+80h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+0h] BYREF
  int v29; // [rsp+E0h] [rbp+8h] BYREF
  char v30; // [rsp+E8h] [rbp+10h]
  __int64 v31; // [rsp+F0h] [rbp+18h]
  unsigned __int64 v32; // [rsp+F8h] [rbp+20h]

  QuadPart = (__int64)&retaddr;
  v31 = a3;
  v30 = a2;
  v4 = *(_QWORD *)(a1 + 168);
  LOBYTE(v5) = 0;
  v32 = 0LL;
  LOBYTE(v6) = 0;
  v27[0].QuadPart = 0LL;
  v7 = 0;
  v8 = 0LL;
  v29 = 0;
  v9 = a3;
  v10 = a2;
  if ( !a2 )
  {
    if ( byte_1C0093BA0 )
      QuadPart = KeQueryPerformanceCounter(v27).QuadPart;
    else
      QuadPart = KeQueryUnbiasedInterruptTime();
    if ( QuadPart <= 0 || (v12 = *(_QWORD *)(a1 + 696), QuadPart >= v12) )
    {
      v12 = *(_QWORD *)(a1 + 696);
      v13 = QuadPart - v12;
    }
    else
    {
      v13 = QuadPart - v12 - 1;
    }
    if ( byte_1C0093BA0 )
    {
      if ( v27[0].QuadPart && v13 )
      {
        v14 = 1000 * (v13 % v27[0].QuadPart);
        QuadPart = 10000 * (v14 % v27[0].QuadPart) / v27[0].QuadPart;
        v5 = QuadPart + 10000 * (1000 * (v13 / v27[0].QuadPart) + v14 / v27[0].QuadPart);
      }
    }
    else
    {
      LOBYTE(v5) = v13;
    }
    v15 = *(_QWORD *)(a1 + 704);
    if ( v15 >= v12 )
    {
      v16 = v15 - v12;
      if ( byte_1C0093BA0 )
      {
        v32 = 0LL;
        if ( v27[0].QuadPart && v16 )
        {
          v17 = 1000 * (v16 % v27[0].QuadPart);
          QuadPart = 10000 * (v17 % v27[0].QuadPart) / v27[0].QuadPart;
          v32 = QuadPart + 10000 * (1000 * (v16 / v27[0].QuadPart) + v17 / v27[0].QuadPart);
        }
      }
      else
      {
        v32 = v15 - v12;
      }
    }
    if ( v15 && (v18 = *(_QWORD *)(a1 + 712), v18 >= v15) )
    {
      v19 = v18 - v15;
    }
    else
    {
      v21 = *(_QWORD *)(a1 + 712);
      if ( v21 < v12 )
      {
LABEL_30:
        v10 = v30;
        v9 = v31;
        goto LABEL_31;
      }
      v19 = v21 - v12;
    }
    if ( byte_1C0093BA0 )
    {
      if ( v27[0].QuadPart && v19 )
      {
        v20 = 1000 * (v19 % v27[0].QuadPart);
        QuadPart = 10000 * (v20 % v27[0].QuadPart) / v27[0].QuadPart;
        v6 = QuadPart + 10000 * (1000 * (v19 / v27[0].QuadPart) + v20 / v27[0].QuadPart);
      }
    }
    else
    {
      LOBYTE(v6) = v19;
    }
    goto LABEL_30;
  }
LABEL_31:
  if ( *(_BYTE *)(v4 + 2) == 40 )
  {
    if ( !*(_DWORD *)(v4 + 20) )
    {
      QuadPart = sub_1C0018028(v4, &v29, &v29, 0LL, 0LL, 0LL);
      v7 = v29;
      v8 = QuadPart;
    }
    v22 = *(unsigned int *)(v4 + 52);
    v23 = *(_BYTE *)(v22 + v4 + 8);
    v24 = *(_BYTE *)(v22 + v4 + 9);
    v25 = *(_BYTE *)(v22 + v4 + 10);
  }
  else
  {
    v23 = *(_BYTE *)(v4 + 5);
    v8 = v4 + 72;
    v24 = *(_BYTE *)(v4 + 6);
    v7 = 16;
    v25 = *(_BYTE *)(v4 + 7);
  }
  if ( v10 )
  {
    if ( (byte_1C0093A03 & 2) != 0 )
      LODWORD(QuadPart) = sub_1C00672D4(
                            *(_QWORD *)(a1 + 216),
                            &stru_1C00897A0,
                            (const GUID *)(a1 + 728),
                            *(_BYTE *)(*(_QWORD *)(a1 + 216) + 56LL),
                            v23,
                            v24,
                            v25,
                            v9,
                            v7,
                            v8,
                            *(_BYTE *)(v4 + 3),
                            *(_QWORD *)(a1 + 160),
                            *(_QWORD *)(a1 + 768),
                            0,
                            0,
                            0);
  }
  else if ( (byte_1C0093A03 & 2) != 0 )
  {
    LODWORD(QuadPart) = sub_1C00672D4(
                          *(_QWORD *)(a1 + 216),
                          &stru_1C0088C70,
                          (const GUID *)(a1 + 728),
                          *(_BYTE *)(*(_QWORD *)(a1 + 216) + 56LL),
                          v23,
                          v24,
                          v25,
                          v5,
                          v7,
                          v8,
                          *(_BYTE *)(v4 + 3),
                          *(_QWORD *)(a1 + 160),
                          *(_QWORD *)(a1 + 768),
                          v32,
                          v6,
                          *(_QWORD *)(a1 + 720));
  }
  return QuadPart;
}
