/*
 * XREFs of sub_1C0062414 @ 0x1C0062414
 * Callers:
 *     sub_1C00176A0 @ 0x1C00176A0 (sub_1C00176A0.c)
 * Callees:
 *     sub_1C00031D0 @ 0x1C00031D0 (sub_1C00031D0.c)
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00052B0 @ 0x1C00052B0 (sub_1C00052B0.c)
 *     sub_1C00071D4 @ 0x1C00071D4 (sub_1C00071D4.c)
 *     sub_1C0017AF4 @ 0x1C0017AF4 (sub_1C0017AF4.c)
 *     sub_1C0018028 @ 0x1C0018028 (sub_1C0018028.c)
 *     sub_1C001A194 @ 0x1C001A194 (sub_1C001A194.c)
 *     sub_1C0040778 @ 0x1C0040778 (sub_1C0040778.c)
 *     sub_1C0040D18 @ 0x1C0040D18 (sub_1C0040D18.c)
 *     sub_1C005AA9C @ 0x1C005AA9C (sub_1C005AA9C.c)
 */

void __fastcall sub_1C0062414(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v3; // rbx
  IRP *v5; // r12
  char v6; // r9
  unsigned int v7; // eax
  unsigned __int64 v8; // rdi
  unsigned int v9; // r14d
  __int64 v10; // r8
  unsigned int v11; // r15d
  int v12; // ebp
  __int64 v13; // r8
  int v14; // edx
  __int64 v15; // rcx
  BOOL v16; // eax
  int v17; // r8d
  _QWORD v18[3]; // [rsp+38h] [rbp-70h] BYREF
  int v19; // [rsp+50h] [rbp-58h]
  char v20; // [rsp+B0h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+B8h] [rbp+10h]
  _BYTE *v22; // [rsp+C0h] [rbp+18h]
  int v23; // [rsp+C8h] [rbp+20h]

  v22 = a3;
  v3 = *(_QWORD *)(a2 + 168);
  v5 = *(IRP **)(a2 + 160);
  v18[0] = 0LL;
  v6 = 0;
  v18[1] = 0LL;
  v7 = *(unsigned __int8 *)(v3 + 2);
  v19 = 0;
  v23 = 0;
  v21 = 0;
  v20 = 0;
  v18[2] = a2;
  if ( (_BYTE)v7 == 40 )
  {
    v8 = *(unsigned int *)(v3 + 20);
    v9 = *(_DWORD *)(v3 + 24);
    if ( !(_DWORD)v8 )
    {
      sub_1C0018028(v3, 0LL, 0LL, &v20, 0LL, 0LL);
      v6 = v20;
    }
  }
  else
  {
    v9 = *(_DWORD *)(v3 + 12);
    v8 = v7;
    v6 = *(_BYTE *)(v3 + 4);
  }
  if ( (*(_BYTE *)(v3 + 3) & 0x3F) == 5 || v6 == 8 )
  {
    v21 = *(_DWORD *)(a1 + 1856);
    v23 = 1;
  }
  if ( v6 == 40 )
  {
    v21 = *(_DWORD *)(a1 + 1852);
    v23 = 2;
  }
  v10 = 0x1000D0000LL;
  v11 = (v9 & 0x102) != 0x102 && (v9 & 0x80010) == 0 && ((unsigned int)v8 > 0x20 || !_bittest64(&v10, v8));
  LOBYTE(v10) = 1;
  v12 = sub_1C00071D4(a1, (__int64)v5, v10);
  if ( v12 >= 0 )
    *(_BYTE *)(v3 + 3) &= ~0x80u;
  sub_1C0017AF4((__int64)v5);
  if ( (unsigned __int8)sub_1C00031D0((__int64)v18, 0LL, v13) )
    KeInsertQueueDpc((PRKDPC)(*(_QWORD *)(a1 + 24) + 1648LL), 0LL, 0LL);
  sub_1C0040778(a1 + 656, v11);
  if ( v12 >= 0 )
  {
    sub_1C0040D18(a1 + 656, v23, v21, a1);
    if ( v22 )
      *v22 = 0;
    v14 = (v9 >> 3) & 2 | 4;
    if ( (v9 & 0x80000) == 0 )
      v14 = (v9 >> 3) & 2;
    v16 = 0;
    if ( (v9 & 0x102) != 0x102 && (v9 & 0x80010) == 0 )
    {
      if ( (unsigned int)v8 > 0x20 || (v15 = 0x1000D0000LL, !_bittest64(&v15, v8)) )
        v16 = 1;
    }
    v17 = v14 | 1;
    if ( !v16 )
      v17 = v14;
    if ( !(unsigned int)sub_1C00052B0(a1, (unsigned __int64)v5, v17) )
      sub_1C001A194(a1, 0);
  }
  else
  {
    *(_BYTE *)(v3 + 3) = sub_1C005AA9C(v12);
    sub_1C0003440(v5, 0, v12);
  }
}
