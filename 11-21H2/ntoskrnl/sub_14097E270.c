/*
 * XREFs of sub_14097E270 @ 0x14097E270
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405AA6C4 @ 0x1405AA6C4 (sub_1405AA6C4.c)
 *     sub_1405AAF14 @ 0x1405AAF14 (sub_1405AAF14.c)
 *     sub_1405AAF90 @ 0x1405AAF90 (sub_1405AAF90.c)
 *     sub_1405AB994 @ 0x1405AB994 (sub_1405AB994.c)
 *     sub_1405AB9F0 @ 0x1405AB9F0 (sub_1405AB9F0.c)
 *     sub_1405AC910 @ 0x1405AC910 (sub_1405AC910.c)
 *     sub_1405ACB84 @ 0x1405ACB84 (sub_1405ACB84.c)
 *     sub_14097C8DC @ 0x14097C8DC (sub_14097C8DC.c)
 *     sub_14097D2A0 @ 0x14097D2A0 (sub_14097D2A0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14097E270(char *a1, unsigned __int64 a2, char *a3)
{
  struct _KTHREAD *CurrentThread; // r12
  unsigned __int64 *v8; // r14
  __int64 v9; // r15
  unsigned __int64 *v10; // rbp
  unsigned __int64 *v11; // r13
  int v12; // edi
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // r15
  int v16; // ebx
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // r11d
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r9
  _QWORD *v22; // rax
  int v23; // eax
  ULONG_PTR v24; // rbx
  __int64 *v25; // rbx
  __int64 v26; // rsi
  __int64 v27; // [rsp+40h] [rbp-2078h]
  __int64 v28; // [rsp+48h] [rbp-2070h]
  ULONG_PTR v29; // [rsp+50h] [rbp-2068h]
  __int128 v30; // [rsp+58h] [rbp-2060h] BYREF
  _BYTE P[4096]; // [rsp+70h] [rbp-2048h] BYREF
  char v32; // [rsp+1070h] [rbp-1048h] BYREF

  memset(P, 0, sizeof(P));
  v30 = 0LL;
  if ( a2 > 0xFFFFFFFFFFFFFLL )
    return 3221225712LL;
  CurrentThread = KeGetCurrentThread();
  v8 = (unsigned __int64 *)P;
  v9 = 0LL;
  v10 = 0LL;
  if ( a2 > 0x200 )
  {
    v8 = (unsigned __int64 *)sub_1402828F0(
                               64,
                               a2 * ((((unsigned __int128)-(__int128)(unsigned __int64)a3 >> 64) & 8) + 8),
                               0x77526D4Du);
    if ( !v8 )
      return 3221225626LL;
  }
  v11 = v8;
  v12 = sub_14097C8DC(v8, a1, a2);
  if ( v12 >= 0 )
  {
    if ( !a2 )
      return 0LL;
    if ( !a3 )
      goto LABEL_13;
    v10 = (unsigned __int64 *)&v32;
    if ( a2 > 0x200 )
      v10 = &v8[a2];
    v12 = sub_14097C8DC(v10, a3, a2);
    if ( v12 >= 0 )
    {
LABEL_13:
      v13 = *v8;
      v12 = 0;
      v29 = sub_1405AB9F0((__int64)CurrentThread);
      v14 = sub_1405AAF14(v13);
      if ( !v14 || (v14[5] & 3) != 0 )
      {
        v12 = -1073741585;
      }
      else
      {
        v15 = v14[4];
        v27 = (__int64)v14;
        v16 = *(_DWORD *)(v14[3] + 48LL) & 0x2200000;
        v17 = sub_1405AAF90(v15);
        v28 = v17;
        v19 = -1073741585;
        while ( 1 )
        {
          v20 = *v11;
          if ( v17 == 1 )
          {
            v21 = *v11;
          }
          else
          {
            if ( (((v17 << 12) - 1) & v20) != 0 )
              goto LABEL_39;
            v21 = (v17 << 12) + v20 - 1;
          }
          if ( v20 < (*(unsigned int *)(v18 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 32) << 32)) << 12
            || v21 > (((*(unsigned int *)(v18 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v18 + 33) << 32)) << 12) | 0xFFF) )
          {
            v22 = sub_1405AAF14(*v11);
            if ( !v22 || (v22[5] & 3) != 0 || v22[4] != v15 )
            {
LABEL_39:
              v9 = v27;
              v12 = v19;
              goto LABEL_40;
            }
            v18 = v22[3];
            v23 = *(_DWORD *)(v18 + 48) & 0x2200000;
            if ( v16 == 35651584 )
            {
              if ( v23 != 35651584 )
                v12 = v19;
            }
            else if ( v23 == 35651584 )
            {
              v12 = v19;
            }
          }
          if ( ++v11 >= &v8[a2] )
            break;
          v17 = v28;
        }
        v24 = sub_1405AB994(v15, (__int64)CurrentThread);
        if ( v10 && (v12 = sub_14097D2A0(v15, (__int64)v10, a2, (__int64)v8, (__int64 *)&v30, v27, 0LL), v12 < 0) )
        {
          v9 = v27;
        }
        else
        {
          v9 = v27;
          *((_QWORD *)&v30 + 1) = sub_1405ACB84(v27, v10, a2, (__int64)v8, 0LL, 1);
        }
        if ( v24 )
          sub_1405AC910((__int64)CurrentThread, v24);
      }
LABEL_40:
      if ( v29 )
        sub_1405AC910((__int64)CurrentThread, v29);
    }
  }
  v25 = (__int64 *)&v30;
  v26 = 2LL;
  do
  {
    if ( *v25 )
      sub_1405AA6C4(v9, *v25, 0);
    ++v25;
    --v26;
  }
  while ( v26 );
  if ( v8 != (unsigned __int64 *)P )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v12;
}
