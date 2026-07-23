/*
 * XREFs of sub_14075B270 @ 0x14075B270
 * Callers:
 *     sub_14075E2D8 @ 0x14075E2D8 (sub_14075E2D8.c)
 *     sub_140843160 @ 0x140843160 (sub_140843160.c)
 * Callees:
 *     sub_1402D87F0 @ 0x1402D87F0 (sub_1402D87F0.c)
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_14075B444 @ 0x14075B444 (sub_14075B444.c)
 *     sub_14075CF70 @ 0x14075CF70 (sub_14075CF70.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14075B270(_QWORD *a1, __int64 *a2)
{
  unsigned int v4; // ebx
  _WORD *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rax
  int v9; // r15d
  void *v10; // rbp
  __int64 v11; // rcx
  _WORD *v12; // rax
  unsigned int v13; // r11d
  __int64 v15; // rax
  char *v16; // rdx
  __int64 v17; // r8
  _WORD *v18; // rcx
  __int16 v19; // ax
  _WORD *v20; // rax
  __int64 v21; // rcx
  _WORD *v22; // rax
  _BYTE v23[528]; // [rsp+40h] [rbp-468h] BYREF
  _BYTE v24[528]; // [rsp+250h] [rbp-258h] BYREF

  v4 = 0;
  memset(v24, 0, 0x208uLL);
  v5 = 0LL;
  memset(v23, 0, 0x208uLL);
  if ( !a2 )
  {
    v15 = sub_14075B444(v6, 4LL);
    v16 = (char *)&dword_14000E504 - v15;
    v10 = (void *)v15;
    v17 = 2LL;
    v18 = (_WORD *)v15;
    do
    {
      if ( v17 == -2147483644 )
        break;
      v19 = *(_WORD *)((char *)v18 + (_QWORD)v16);
      if ( !v19 )
        break;
      *v18++ = v19;
      --v17;
    }
    while ( v17 );
    v20 = v18 - 1;
    if ( v17 )
      v20 = v18;
    *v20 = 0;
    v5 = (_WORD *)sub_14075B444(v18, 2LL);
    *v5 = 0;
    v22 = (_WORD *)sub_14075B444(v21, 2LL);
    *v22 = 0;
    a1[3] = v22;
    goto LABEL_9;
  }
  v7 = *a2;
  v8 = -1LL;
  do
    ++v8;
  while ( *(_WORD *)(v7 + 2 * v8) );
  v9 = v8 + 1;
  v10 = (void *)sub_14075B444(v6, 2LL * (unsigned int)(v8 + 1));
  if ( !v10 )
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpCreateSearchDBContext");
    return v4;
  }
  if ( (int)sub_14075CF70(v7, (_DWORD)v10, v9, (unsigned int)v23) >= 0
    && (v12 = (_WORD *)sub_14075B444(v11, 520LL), (v5 = v12) != 0LL) )
  {
    if ( (int)sub_1402E0200(v12, 260LL, (__int64)v23) >= 0 && (int)sub_1402D87F0(v5, v13, (__int64)v24) >= 0 )
    {
LABEL_9:
      a1[7] = 0LL;
      a1[6] = 0LL;
      a1[9] = 0LL;
      a1[8] = 0LL;
      a1[11] = 0LL;
      v4 = 1;
      a1[1] = a2;
      a1[4] = v10;
      a1[5] = v5;
      return v4;
    }
  }
  else
  {
    sub_1406E0C3C(1LL, (__int64)"SdbpCreateSearchDBContext");
  }
  ExFreePoolWithTag(v10, 0x74705041u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x74705041u);
  return v4;
}
