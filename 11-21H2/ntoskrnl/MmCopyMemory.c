/*
 * XREFs of MmCopyMemory @ 0x14026BBB0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14026BE94 @ 0x14026BE94 (sub_14026BE94.c)
 *     sub_14026C808 @ 0x14026C808 (sub_14026C808.c)
 *     sub_14027A168 @ 0x14027A168 (sub_14027A168.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14027B520 @ 0x14027B520 (sub_14027B520.c)
 *     sub_140284EB0 @ 0x140284EB0 (sub_140284EB0.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402E670C @ 0x1402E670C (sub_1402E670C.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14041BF40 @ 0x14041BF40 (sub_14041BF40.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405A473C @ 0x1405A473C (sub_1405A473C.c)
 */

__int64 __fastcall MmCopyMemory(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, int a4, _QWORD *a5)
{
  _QWORD *v5; // r13
  unsigned __int64 v10; // rsi
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  int v13; // ecx
  int v14; // edi
  __int64 v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // r13
  unsigned __int64 v20; // r8
  __int64 v21; // rsi
  __int64 v22; // rdx
  char v24; // al
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  unsigned int v28; // edi
  __int64 v29; // rax
  __int64 v30; // r13
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // [rsp+28h] [rbp-D8h]
  int v34; // [rsp+38h] [rbp-C8h]
  __int64 v35; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+48h] [rbp-B8h]
  __int64 v37; // [rsp+50h] [rbp-B0h]
  int v38; // [rsp+58h] [rbp-A8h]
  __int64 v39; // [rsp+60h] [rbp-A0h]
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h]
  __int128 v45; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v46[16]; // [rsp+A0h] [rbp-60h] BYREF

  v5 = a5;
  v36 = a1;
  v38 = a4;
  memset(v46, 0, sizeof(v46));
  v39 = 0LL;
  *a5 = 0LL;
  if ( !a4 || (a4 & 0xFFFFFFFC) != 0 || ((a4 - 1) & a4) != 0 || KeGetCurrentIrql() > 1u )
    return 3221225714LL;
  v34 = a4 & 1;
  if ( (a4 & 1) != 0 )
  {
    if ( (unsigned int)sub_1405A473C(a2, a3) )
      goto LABEL_9;
    return 3221225496LL;
  }
  if ( a2 + a3 <= a2 )
    return 3221225496LL;
  if ( a2 <= 0x7FFFFFFEFFFFLL )
  {
    if ( a2 + a3 <= 0x7FFFFFFEFFFFLL )
      return sub_14041BF40(-1LL, a2, a1, a3, a5);
    return 3221225496LL;
  }
  if ( a2 < 0xFFFF800000000000uLL )
    return 3221225496LL;
LABEL_9:
  v10 = a2 & 0xFFF;
  v11 = (v10 + a3 + 4095) >> 12;
  if ( v11 >= 0x100000000LL )
    return 3221225713LL;
  CurrentThread = KeGetCurrentThread();
  v43 = *((_QWORD *)CurrentThread + 23);
  v12 = sub_1403095B0(&qword_140C534C0, (unsigned int)v11);
  v13 = a4 & 1;
  v14 = 0;
  v44 = v12;
  v15 = 4096 - v10;
  v37 = v12;
  v16 = v12;
  if ( 4096 - v10 > a3 )
    v15 = a3;
  if ( v34 )
    v17 = a2 >> 12;
  else
    v17 = -1LL;
  v35 = v17;
  if ( !a3 )
    goto LABEL_30;
  while ( 1 )
  {
    v41 = 0LL;
    v40 = 0LL;
    if ( v13 )
    {
      v19 = 0LL;
      goto LABEL_19;
    }
    v18 = sub_14026C808(a2, v46, &v35, &v41);
    v14 = v18;
    if ( v18 >= 0 )
    {
      v19 = v46[3];
      if ( v18 == 273 )
      {
        sub_14027A168(v46);
        v14 = 0;
        v31 = v15;
        if ( v15 )
        {
          v32 = v36 - v10;
          do
          {
            *(_BYTE *)(v32 + v10) = *((_BYTE *)&v40 + (v10 & 7));
            ++v10;
            --v31;
          }
          while ( v31 );
        }
LABEL_24:
        v39 += v15;
        a3 -= v15;
        v36 += v15;
        a2 += v15;
        ++v35;
        v16 = v37;
        v15 = a3;
        if ( a3 > 0x1000 )
          v15 = 4096LL;
        v10 = 0LL;
        if ( v37 )
        {
          v16 = v37 + 8;
          v37 += 8LL;
        }
        goto LABEL_28;
      }
      v16 = v37;
LABEL_19:
      v20 = v10;
      v21 = v35;
      LODWORD(v33) = v38;
      v14 = sub_14026BE94(v36, v35, v20, v15, v16);
      if ( v19 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(48 * v21 - 0x21FFFFFFFFE8LL), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v41 )
        {
          LOBYTE(v22) = 2;
          sub_140334790(v41, v22);
        }
        sub_14027A168(v46);
      }
      if ( v14 < 0 )
        goto LABEL_29;
      goto LABEL_24;
    }
    if ( v18 != -1073741608 )
      goto LABEL_29;
    v45 = 0LL;
    v24 = sub_1402E670C(CurrentThread);
    *(_QWORD *)&v45 = a2;
    v28 = v24 & 7 | 0x80B8;
    v29 = a3;
    v30 = 1LL;
    if ( a3 > 0x200000 - (a2 & 0x1FFFFF) )
      v29 = 0x200000 - (a2 & 0x1FFFFF);
    *((_QWORD *)&v45 + 1) = v29;
    if ( (unsigned int)sub_14027B080(a2, v25, v26, v27) == 1 )
      break;
LABEL_49:
    if ( a2 >= qword_140C540C0 && a2 <= qword_140C51BF0 )
    {
      v14 = -1073741585;
      goto LABEL_29;
    }
    v14 = sub_140284EB0(1LL, &v45, v30, v28, &v40, v33);
    if ( v14 < 0 )
      goto LABEL_29;
    v16 = v37;
LABEL_28:
    if ( !a3 )
      goto LABEL_29;
    v13 = v34;
  }
  if ( *(_QWORD *)(v43 + 1368) && (*(_DWORD *)(v43 + 2172) & 0x1000) == 0 )
  {
    v30 = sub_14027B520();
    goto LABEL_49;
  }
  v14 = -1073741819;
LABEL_29:
  v5 = a5;
LABEL_30:
  if ( v44 )
    sub_1402BB6D0(&qword_140C534C0, v44, (unsigned int)v11);
  *v5 += v39;
  return (unsigned int)v14;
}
