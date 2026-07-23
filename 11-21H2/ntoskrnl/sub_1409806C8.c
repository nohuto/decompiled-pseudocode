/*
 * XREFs of sub_1409806C8 @ 0x1409806C8
 * Callers:
 *     sub_14070A4FC @ 0x14070A4FC (sub_14070A4FC.c)
 * Callees:
 *     sub_1402365F4 @ 0x1402365F4 (sub_1402365F4.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     PsReturnProcessNonPagedPoolQuota @ 0x1403107C0 (PsReturnProcessNonPagedPoolQuota.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405B99AC @ 0x1405B99AC (sub_1405B99AC.c)
 *     sub_1405BA158 @ 0x1405BA158 (sub_1405BA158.c)
 *     sub_1405BA3BC @ 0x1405BA3BC (sub_1405BA3BC.c)
 *     sub_1405BB8B4 @ 0x1405BB8B4 (sub_1405BB8B4.c)
 *     sub_1405BB938 @ 0x1405BB938 (sub_1405BB938.c)
 *     sub_1406F7D78 @ 0x1406F7D78 (sub_1406F7D78.c)
 *     sub_1406F7F40 @ 0x1406F7F40 (sub_1406F7F40.c)
 *     sub_1409800F4 @ 0x1409800F4 (sub_1409800F4.c)
 *     sub_14098056C @ 0x14098056C (sub_14098056C.c)
 *     sub_140980A20 @ 0x140980A20 (sub_140980A20.c)
 *     sub_140980D40 @ 0x140980D40 (sub_140980D40.c)
 *     sub_140980FA0 @ 0x140980FA0 (sub_140980FA0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409806C8(_QWORD *BugCheckParameter1, ULONG_PTR a2, int a3)
{
  char v3; // r12
  int v6; // r13d
  int v7; // r15d
  _QWORD *v8; // r14
  _QWORD *v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r12d
  int v16; // edi
  _QWORD *v17; // r12
  _QWORD *v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // r9
  unsigned __int64 v21; // r8
  __int64 v22; // rcx
  unsigned int v23; // edx
  __int64 v24; // rax
  int v25; // [rsp+30h] [rbp-49h] BYREF
  PVOID P; // [rsp+38h] [rbp-41h] BYREF
  int v27; // [rsp+40h] [rbp-39h]
  __int64 v28; // [rsp+48h] [rbp-31h] BYREF
  __int64 v29; // [rsp+50h] [rbp-29h]
  __int64 v30; // [rsp+58h] [rbp-21h]
  _QWORD *v31; // [rsp+60h] [rbp-19h]
  _OWORD v32[3]; // [rsp+68h] [rbp-11h] BYREF

  v27 = a3;
  v28 = 0LL;
  memset(v32, 0, sizeof(v32));
  v3 = a3;
  v6 = 0;
  v7 = 1;
  P = 0LL;
  v8 = 0LL;
  v25 = 0;
  v9 = (_QWORD *)*((_QWORD *)KeGetCurrentThread() + 23);
  v31 = v9;
  if ( (unsigned int)sub_1402365F4((__int64)BugCheckParameter1) )
    return 3221225659LL;
  sub_1405BB938(a2, 1, v10, v11);
  if ( v9 != BugCheckParameter1 )
  {
    v6 = 1;
    sub_14030D5C0((ULONG_PTR)BugCheckParameter1, 0LL, (__int64)v32, v14);
  }
  v15 = v3 & 1;
  v30 = BugCheckParameter1[210];
  if ( !*(_QWORD *)(v30 + 344) || v15 )
  {
    v29 = sub_1406F7D78((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, 0xFFFFFFFFFFFFFFFFuLL, 1);
    if ( v29 )
    {
      v16 = sub_1405BA158(a2, &P);
      if ( v16 < 0 )
        goto LABEL_10;
      v16 = sub_1409800F4(a2, &v28);
      if ( v16 < 0 )
        goto LABEL_10;
      if ( v15 )
      {
        v19 = sub_14098056C(a2, 2LL, *(_QWORD *)(v30 + 344));
        v8 = v19;
        if ( !v19 )
        {
          v16 = -1073741670;
          goto LABEL_10;
        }
        memset((void *)v19[3], 0, 32LL * v19[5]);
        *(_QWORD *)(v8[3] + 16LL) = *(_QWORD *)(v8[3] + 16LL) & 0x7FFFFFFFFFFFFFFLL | 0x2000000000000000LL;
        *(_QWORD *)(v8[3] + 48LL) = *(_QWORD *)(v8[3] + 48LL) & 0x7FFFFFFFFFFFFFFLL | 0x800000000000000LL;
      }
      v16 = sub_1405B99AC(BugCheckParameter1, a2, (__int64)P, (__int64)v8, v27, &v25);
      if ( v16 >= 0 )
      {
        P = 0LL;
        v16 = sub_140980FA0(a2, v28);
        sub_1406F7F40((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v29, 1);
        if ( v6 )
        {
          sub_1402D0930((__int64)v32, 0LL);
          v6 = 0;
        }
        if ( v31 != (_QWORD *)a2 )
        {
          v6 = 1;
          sub_14030D5C0(a2, 0LL, (__int64)v32, v20);
        }
        sub_1405BA3BC();
        if ( v8 )
        {
          v21 = v8[5];
          v22 = 0LL;
          v23 = 0;
          if ( !v21 )
            goto LABEL_38;
          v24 = 0LL;
          do
          {
            ++v23;
            v22 += *(_QWORD *)(32 * v24 + v8[3] + 24);
            v24 = v23;
          }
          while ( v23 < v21 );
          if ( v22 )
          {
            v8[6] = v22;
            sub_1405BB8B4(a2, v8, 0);
          }
          else
          {
LABEL_38:
            sub_140980D40(a2, v8);
          }
          v8 = 0LL;
        }
        if ( v16 >= 0 )
        {
          sub_1405BB938(a2, 0, v13, v14);
          v7 = 0;
          if ( v6 )
          {
            sub_1402D0930((__int64)v32, 0LL);
            v6 = 0;
          }
          if ( !v25 )
            return (unsigned int)v16;
          v16 = -1073741670;
          goto LABEL_13;
        }
LABEL_11:
        v17 = P;
        if ( P )
        {
          do
          {
            v18 = (_QWORD *)*v17;
            PsReturnProcessNonPagedPoolQuota(a2, v17[8]);
            ExFreePoolWithTag(v17, 0);
            v17 = v18;
          }
          while ( v18 );
        }
LABEL_13:
        if ( v8 )
          sub_140980D40(a2, v8);
        goto LABEL_15;
      }
    }
    else
    {
      v16 = -1073741558;
    }
LABEL_10:
    sub_1406F7F40((__int64)BugCheckParameter1, 0xFFFFFFFFFFFFFFFFuLL, v29, 1);
    goto LABEL_11;
  }
  v16 = -1073741637;
LABEL_15:
  if ( v6 )
    sub_1402D0930((__int64)v32, 0LL);
  if ( v7 )
    sub_1405BB938(a2, 0, v13, v14);
  sub_140980A20(a2);
  return (unsigned int)v16;
}
