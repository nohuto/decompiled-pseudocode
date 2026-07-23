/*
 * XREFs of sub_1406F3884 @ 0x1406F3884
 * Callers:
 *     sub_14058D310 @ 0x14058D310 (sub_14058D310.c)
 *     sub_1406B79C8 @ 0x1406B79C8 (sub_1406B79C8.c)
 *     sub_1407074F0 @ 0x1407074F0 (sub_1407074F0.c)
 *     sub_140761A2C @ 0x140761A2C (sub_140761A2C.c)
 *     sub_1407E4D40 @ 0x1407E4D40 (sub_1407E4D40.c)
 *     sub_140971DC0 @ 0x140971DC0 (sub_140971DC0.c)
 *     sub_14097638C @ 0x14097638C (sub_14097638C.c)
 *     sub_140981070 @ 0x140981070 (sub_140981070.c)
 * Callees:
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_140280D08 @ 0x140280D08 (sub_140280D08.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     sub_140286DE0 @ 0x140286DE0 (sub_140286DE0.c)
 *     sub_140287380 @ 0x140287380 (sub_140287380.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030EC14 @ 0x14030EC14 (sub_14030EC14.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14058C0E4 @ 0x14058C0E4 (sub_14058C0E4.c)
 *     sub_1406F3FDC @ 0x1406F3FDC (sub_1406F3FDC.c)
 *     sub_14096CE14 @ 0x14096CE14 (sub_14096CE14.c)
 */

__int64 __fastcall sub_1406F3884(__int64 *a1, int a2, __int64 a3)
{
  unsigned int v6; // r14d
  __int64 *v7; // rax
  unsigned int v8; // esi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  unsigned int v12; // r15d
  int v13; // r12d
  char *v14; // rax
  __int64 result; // rax
  ULONG_PTR v16; // r13
  __int64 v17; // r9
  int v18; // r14d
  _QWORD v19[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v20; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v21; // [rsp+C0h] [rbp+50h] BYREF
  __int64 v22; // [rsp+C8h] [rbp+58h] BYREF

  v20 = 0LL;
  memset(v19, 0, sizeof(v19));
  *(_QWORD *)a3 = 0LL;
  v6 = *(_DWORD *)(*(_QWORD *)(*a1 + 56) + 64LL);
  if ( !v6 )
    return 3221225595LL;
  if ( (unsigned int)sub_140287380((__int64)a1) == 1 )
  {
    v7 = 0LL;
  }
  else
  {
    result = sub_140286DE0(a1 + 16, 648, 0x11u);
    if ( (int)result < 0 )
      return result;
    v7 = a1;
  }
  *(_QWORD *)(a3 + 8) = v7;
  if ( (a2 & 1) != 0 )
    v8 = *(_DWORD *)(*a1 + 8);
  else
    v8 = (v6 >> 12) + ((v6 & 0xFFF) != 0);
  v19[6] = (unsigned __int64)v8 << 12;
  v9 = sub_140281750((__int64)a1);
  v10 = v9;
  if ( (*(_DWORD *)(*(_QWORD *)(v9 + 8) + 52LL) & 0x10) != 0 )
    v19[5] = v9 | 1;
  else
    v19[5] = a1;
  v11 = sub_140287F30(*((_QWORD *)KeGetCurrentThread() + 23));
  LODWORD(v19[7]) |= 0x20u;
  v21 = 0LL;
  v12 = a2 | 8;
  HIDWORD(v19[7]) = HIDWORD(v19[7]) & 0x80000002 | ((v11 & 0x7FFFF) << 12) | 2;
  v22 = v8 << 12;
  v13 = sub_1406F3FDC((unsigned int)v19, (unsigned int)&v20, (unsigned int)&v22, (unsigned int)&v21, 1LL, v12);
  sub_140280D08((__int64)a1, v10);
  if ( v13 >= 0 )
  {
    v14 = sub_14026DFC0(1);
LABEL_10:
    *(_QWORD *)(a3 + 24) = v14;
    *(_QWORD *)a3 = v20;
    result = 0LL;
    *(_DWORD *)(a3 + 16) = v8;
    return result;
  }
  if ( (v12 & 2) != 0 )
  {
    v22 = 0LL;
    v16 = *(_QWORD *)(*(_QWORD *)(sub_14030EC14((__int64)a1) + 176) + 104LL);
    sub_14030D5C0(v16, 0LL, a3 + 32, v17);
    v18 = sub_14096CE14(a1, v12, &v20, &v22);
    if ( v18 >= 0 )
    {
      v14 = (char *)(v16 + 1664);
      goto LABEL_10;
    }
    sub_1402D0930(a3 + 32, 0LL);
    if ( *(_QWORD *)(a3 + 8) )
      sub_14058C0E4((__int64)a1);
    return (unsigned int)v18;
  }
  else
  {
    if ( *(_QWORD *)(a3 + 8) )
      sub_14058C0E4((__int64)a1);
    return (unsigned int)v13;
  }
}
