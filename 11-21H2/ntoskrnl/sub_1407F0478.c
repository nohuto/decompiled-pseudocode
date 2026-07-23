/*
 * XREFs of sub_1407F0478 @ 0x1407F0478
 * Callers:
 *     sub_1407F0310 @ 0x1407F0310 (sub_1407F0310.c)
 *     sub_140A047F0 @ 0x140A047F0 (sub_140A047F0.c)
 * Callees:
 *     sub_14022CB60 @ 0x14022CB60 (sub_14022CB60.c)
 *     sub_140280D08 @ 0x140280D08 (sub_140280D08.c)
 *     sub_140281750 @ 0x140281750 (sub_140281750.c)
 *     KeAreAllApcsDisabled @ 0x140281980 (KeAreAllApcsDisabled.c)
 *     sub_1402867DC @ 0x1402867DC (sub_1402867DC.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_14030E7C0 @ 0x14030E7C0 (sub_14030E7C0.c)
 *     sub_14030EA70 @ 0x14030EA70 (sub_14030EA70.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     sub_140329730 @ 0x140329730 (sub_140329730.c)
 *     sub_14036B354 @ 0x14036B354 (sub_14036B354.c)
 *     sub_14036B408 @ 0x14036B408 (sub_14036B408.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407F0748 @ 0x1407F0748 (sub_1407F0748.c)
 *     sub_1407F099C @ 0x1407F099C (sub_1407F099C.c)
 */

__int64 __fastcall sub_1407F0478(ULONG_PTR a1, unsigned __int64 *a2, _QWORD *a3, __int64 a4)
{
  unsigned __int64 v4; // r12
  unsigned int v5; // edi
  __int64 v7; // r14
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r14
  unsigned int v10; // ebx
  __int64 v11; // rax
  char *v12; // rsi
  unsigned __int64 v13; // rcx
  int v14; // edx
  __int64 v15; // r13
  __int64 v16; // r15
  int v17; // eax
  struct _KTHREAD *v18; // rax
  __int64 v19; // r14
  __int64 *v20; // r12
  struct _FILE_OBJECT *v21; // rsi
  int *v22; // r15
  int v23; // ebx
  int *v25; // rax
  BOOLEAN v26; // [rsp+40h] [rbp-59h]
  unsigned int v27; // [rsp+44h] [rbp-55h]
  unsigned __int64 v28; // [rsp+48h] [rbp-51h] BYREF
  __int64 v29; // [rsp+50h] [rbp-49h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+58h] [rbp-41h]
  __int64 *v31; // [rsp+60h] [rbp-39h] BYREF
  int *v32; // [rsp+68h] [rbp-31h]
  _QWORD *v33; // [rsp+70h] [rbp-29h] BYREF
  _OWORD v34[3]; // [rsp+78h] [rbp-21h] BYREF

  v4 = *a2;
  v5 = 0;
  v32 = (int *)a4;
  v34[0] = 0LL;
  v33 = a3;
  v7 = *a3 + v4 - 1;
  v8 = v4 & 0xFFFFFFFFFFFFF000uLL;
  v31 = 0LL;
  *a2 = v8;
  v9 = v7 | 0xFFF;
  memset(&v34[1], 0, 32);
  v28 = 0LL;
  v10 = 0;
  LODWORD(v29) = 0;
  CurrentThread = KeGetCurrentThread();
  if ( *((_QWORD *)CurrentThread + 23) != a1 )
  {
    v10 = 2;
    sub_14030D5C0(a1, 0LL, (__int64)v34, a4);
  }
  v27 = 0;
  v26 = KeAreAllApcsDisabled();
  v11 = sub_14030E7C0(v8, 2, (int *)&v29);
  v12 = (char *)v11;
  if ( !v11 )
  {
    v5 = v29;
    if ( (_DWORD)v29 == -1073741664 )
      v5 = -1073741799;
    goto LABEL_25;
  }
  v13 = *(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32);
  if ( !*a3 )
  {
    v9 = (v13 << 12) | 0xFFF;
    v10 |= 1u;
  }
  v14 = *(_DWORD *)(v11 + 48);
  if ( (v14 & 0x200000) != 0 || (v15 = v9 >> 12, v9 >> 12 > v13) )
  {
LABEL_31:
    v5 = -1073741799;
    goto LABEL_24;
  }
  v16 = **(_QWORD **)(v11 + 72);
  v29 = v16;
  if ( *(_QWORD *)(v16 + 64) && (v14 & 0x70) != 0x20 )
  {
    *v33 = v9 - v8 + 1;
    if ( !v26 )
    {
      v17 = 0;
      if ( (*(_DWORD *)(v16 + 56) & 0x20000) != 0 )
        v17 = 4;
      v27 = v17;
    }
    sub_14036B408(v8, v9, (__int64)CurrentThread);
    sub_140319600((__int64)v12, v9 >> 12, 0, (__int64 *)&v28);
    v18 = (struct _KTHREAD *)sub_140319600((__int64)v12, v8 >> 12, 0, (__int64 *)&v31);
    v19 = v28;
    v20 = v31;
    CurrentThread = v18;
    if ( v28 )
    {
      v28 = sub_140319600((__int64)v12, v15, 0, (__int64 *)&v33);
LABEL_16:
      if ( (unsigned int)sub_14036B354(v16, (ULONG_PTR)v20, v19) )
      {
        sub_14030EA70(v12);
        if ( v10 >= 2 )
          sub_1402D0930((__int64)v34, 0LL);
        v21 = (struct _FILE_OBJECT *)sub_140281750(v16);
        v22 = v32;
        while ( 1 )
        {
          v23 = sub_1407F099C(v21);
          if ( v23 < 0 )
            break;
          v23 = sub_140329730((ULONG_PTR)CurrentThread, v28, v20, v19, 0LL, v27, v22);
          sub_1407F0748(v21);
          if ( v23 != -1073741740 )
            break;
          KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&stru_1400156D0);
        }
        sub_140280D08(v29, (unsigned __int64)v21);
        sub_1402867DC(v29, (ULONG_PTR)v20, v19);
        return (unsigned int)v23;
      }
      v5 = -1073741670;
      goto LABEL_24;
    }
    if ( v31 )
    {
      if ( (v10 & 1) != 0 )
      {
        v19 = sub_14022CB60(v16, 0);
        v28 = *(_QWORD *)(v19 + 8)
            + 8 * (*(unsigned int *)(v19 + 44) - (unsigned __int64)(*(_DWORD *)(v19 + 52) & 0x3FFFFFFF) - 1);
        goto LABEL_16;
      }
    }
    else if ( (v10 & 1) != 0 )
    {
      v25 = v32;
      *v32 = 0;
      *((_QWORD *)v25 + 1) = 0LL;
      goto LABEL_24;
    }
    goto LABEL_31;
  }
  v5 = -1073741688;
LABEL_24:
  sub_14030EA70(v12);
LABEL_25:
  if ( v10 >= 2 )
    sub_1402D0930((__int64)v34, 0LL);
  return v5;
}
