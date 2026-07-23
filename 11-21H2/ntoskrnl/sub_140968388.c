/*
 * XREFs of sub_140968388 @ 0x140968388
 * Callers:
 *     sub_140968AF4 @ 0x140968AF4 (sub_140968AF4.c)
 *     sub_1409704A0 @ 0x1409704A0 (sub_1409704A0.c)
 * Callees:
 *     sub_14022B0E0 @ 0x14022B0E0 (sub_14022B0E0.c)
 *     sub_14023502C @ 0x14023502C (sub_14023502C.c)
 *     sub_14023FCF0 @ 0x14023FCF0 (sub_14023FCF0.c)
 *     sub_14023FF18 @ 0x14023FF18 (sub_14023FF18.c)
 *     KePulseEvent @ 0x14026A0D0 (KePulseEvent.c)
 *     sub_1402C38D0 @ 0x1402C38D0 (sub_1402C38D0.c)
 *     sub_14036071C @ 0x14036071C (sub_14036071C.c)
 *     sub_140360A00 @ 0x140360A00 (sub_140360A00.c)
 *     sub_1403B7624 @ 0x1403B7624 (sub_1403B7624.c)
 *     ZwUpdateWnfStateData @ 0x14041F2A0 (ZwUpdateWnfStateData.c)
 *     sub_14056AF98 @ 0x14056AF98 (sub_14056AF98.c)
 *     sub_1405827E0 @ 0x1405827E0 (sub_1405827E0.c)
 *     sub_140583428 @ 0x140583428 (sub_140583428.c)
 *     sub_1405835E0 @ 0x1405835E0 (sub_1405835E0.c)
 *     sub_140586A44 @ 0x140586A44 (sub_140586A44.c)
 *     sub_14059E2C0 @ 0x14059E2C0 (sub_14059E2C0.c)
 *     sub_1405BD66C @ 0x1405BD66C (sub_1405BD66C.c)
 *     sub_1405BDF64 @ 0x1405BDF64 (sub_1405BDF64.c)
 *     sub_1405BE81C @ 0x1405BE81C (sub_1405BE81C.c)
 *     sub_1405BF6B4 @ 0x1405BF6B4 (sub_1405BF6B4.c)
 *     sub_1407FD710 @ 0x1407FD710 (sub_1407FD710.c)
 *     sub_14081DDB0 @ 0x14081DDB0 (sub_14081DDB0.c)
 *     sub_14082AFE0 @ 0x14082AFE0 (sub_14082AFE0.c)
 *     sub_140969004 @ 0x140969004 (sub_140969004.c)
 *     sub_140969514 @ 0x140969514 (sub_140969514.c)
 *     sub_14097079C @ 0x14097079C (sub_14097079C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140968388(unsigned __int16 *a1, __int64 *a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 *v5; // r12
  ULONG_PTR *v6; // r15
  unsigned int v7; // edi
  __int64 *v8; // r14
  __int64 v9; // r13
  __int64 v10; // rsi
  int v11; // ebx
  unsigned int v12; // edx
  ULONG_PTR v13; // rsi
  ULONG_PTR v14; // r14
  unsigned __int64 v15; // r12
  unsigned int v16; // r15d
  unsigned __int64 v17; // rax
  struct _KTHREAD *v18; // rbx
  unsigned __int64 v19; // r8
  _QWORD *v20; // rcx
  unsigned __int64 v21; // rax
  bool v22; // zf
  int v23; // eax
  int v24; // eax
  WNF_CHANGE_STAMP *v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // ebx
  __int64 v28; // r13
  WNF_CHANGE_STAMP *i; // rdi
  int v31; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-D0h]
  __int64 v33; // [rsp+50h] [rbp-C8h] BYREF
  int v34; // [rsp+58h] [rbp-C0h]
  int v35; // [rsp+5Ch] [rbp-BCh]
  WNF_CHANGE_STAMP v36[2]; // [rsp+60h] [rbp-B8h] BYREF
  WNF_CHANGE_STAMP *v37; // [rsp+68h] [rbp-B0h]
  __int64 v38; // [rsp+70h] [rbp-A8h]
  int v39; // [rsp+78h] [rbp-A0h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-98h]
  char *v41; // [rsp+88h] [rbp-90h] BYREF
  unsigned __int64 v42; // [rsp+90h] [rbp-88h] BYREF
  unsigned __int64 *v43; // [rsp+98h] [rbp-80h] BYREF
  __int128 v44; // [rsp+A0h] [rbp-78h]
  int v45; // [rsp+B0h] [rbp-68h]
  int v46; // [rsp+B4h] [rbp-64h]
  _QWORD v47[12]; // [rsp+B8h] [rbp-60h] BYREF

  v5 = a2;
  CurrentThread = KeGetCurrentThread();
  v6 = (ULONG_PTR *)a1;
  v37 = v36;
  v7 = a4;
  v8 = a3;
  *(_QWORD *)v36 = v36;
  v9 = 0LL;
  v47[1] = 0LL;
  v10 = 0LL;
  v47[4] = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v38 = 0LL;
  v34 = 0;
  v35 = 0;
  if ( (*(_DWORD *)a2 & 0xFFF) != 0 )
  {
    v11 = -1073741585;
LABEL_3:
    v31 = v11;
    goto LABEL_97;
  }
  if ( (*(_DWORD *)a3 & 0xFFF) != 0 )
  {
    v11 = -1073741584;
    goto LABEL_3;
  }
  sub_140583428(a1, a2, a3, a4, 0LL);
  v7 |= 1u;
  v12 = v7;
  v13 = (unsigned __int64)*v5 >> 12;
  v14 = (unsigned __int64)*v8 >> 12;
  if ( (v7 & 0x10000) == 0 )
  {
LABEL_14:
    v15 = v13 + v14;
    if ( v13 >= v13 + v14 )
      goto LABEL_15;
    if ( v15 - 1 > qword_140C50840 )
    {
      if ( (v7 & 2) != 0 )
      {
        v11 = -1073741584;
        goto LABEL_16;
      }
      v15 = qword_140C50840 + 1;
      v14 = qword_140C50840 + 1 - v13;
      if ( v13 >= qword_140C50840 + 1 )
      {
LABEL_15:
        v11 = -1073741585;
LABEL_16:
        v31 = v11;
        v10 = 0LL;
LABEL_95:
        v5 = a2;
        goto LABEL_96;
      }
    }
    if ( v13 + v14 >= qword_140C52CE0 && v13 < qword_140C52CE0 + 2048 || v13 + v14 >= 0x3FFFFFFFFELL )
    {
      v11 = -1073741800;
      goto LABEL_16;
    }
    v7 |= 8u;
    if ( v6 == &StartContext )
      v7 = v12;
    v16 = v7;
    if ( (v7 & 0x1F2) != 0 && (v7 & 0x200) != 0 )
    {
      v11 = -1073741582;
      v10 = 0LL;
      v31 = -1073741582;
LABEL_94:
      v6 = (ULONG_PTR *)a1;
      goto LABEL_95;
    }
    v39 = v7 & 2;
    if ( (v7 & 2) != 0 )
    {
      sub_14059E2C0(0LL);
    }
    else
    {
      if ( (v7 & 0x20000) == 0 )
      {
        v35 = 1;
        sub_140360A00((__int64)&StartContext, (__int64)CurrentThread);
      }
      if ( !byte_140C4F2E8 )
        goto LABEL_69;
    }
    v17 = sub_14097079C(v13, v14, v7);
    if ( v17 >= v13 && v17 < v15 )
    {
LABEL_36:
      v11 = -1073741800;
LABEL_37:
      v31 = v11;
LABEL_87:
      if ( v35 )
        sub_14036071C((__int64)&StartContext, (__int64)CurrentThread);
      if ( v41 )
        ExFreePoolWithTag(v41 - 16, 0);
      if ( v9 )
        ExFreePoolWithTag((PVOID)(v9 - 16), 0);
      v10 = v32;
      goto LABEL_94;
    }
    if ( (v7 & 2) != 0 )
    {
      v18 = CurrentThread;
      sub_14023502C((__int64)&StartContext, (__int64)CurrentThread);
      v19 = 0LL;
      if ( *(_DWORD *)qword_140D06950 )
      {
        v20 = (char *)qword_140D06950 + 24;
        do
        {
          v21 = *(v20 - 1);
          if ( *v20 )
          {
            if ( v13 >= v21 )
            {
              if ( v13 < *v20 + v21 )
              {
LABEL_44:
                sub_14022B0E0((__int64)&StartContext, (__int64)v18);
                goto LABEL_36;
              }
            }
            else if ( v15 > v21 )
            {
              goto LABEL_44;
            }
          }
          ++v19;
          v20 += 2;
        }
        while ( v19 < *(unsigned int *)qword_140D06950 );
      }
      byte_140C4F2E8 = 1;
      sub_14022B0E0((__int64)&StartContext, (__int64)v18);
LABEL_48:
      v31 = sub_140969514(v13, v15, a5);
      v11 = v31;
      v7 = v16;
      if ( v31 >= 0 )
      {
        v22 = v39 == 0;
        *a3 = v14 << 12;
        if ( v22 )
        {
          sub_1405835E0(v13, v14, (void **)&v41, &v33, v16, (__int64 ***)v36);
          sub_14081DDB0(&StartContext, 1);
          if ( (v16 & 8) != 0 )
            sub_14081DDB0((ULONG_PTR *)a1, 1);
          _InterlockedAdd64(&qword_140C51850, 1uLL);
          if ( (v16 & 0x40000) != 0 )
          {
            v46 = 0;
            v43 = &v42;
            v45 = 257;
            v44 = 0LL;
            sub_1405BE81C((__int16 *)&StartContext, (__int64)a1, (__int64)&v43, v14, 1LL);
          }
          if ( (v16 & 0x100000) == 0 )
          {
            v23 = -1;
            if ( qword_140C590D0 <= 0xFFFFFFFF )
              v23 = qword_140C590D0;
            MEMORY[0xFFFFF780000002E8] = v23;
          }
          sub_1402C38D0((__int64)a1, v13, v14, (v16 & 0x80) != 0, 0);
          if ( (v16 & 8) != 0 )
            sub_1402C38D0((__int64)&StartContext, v13, v14, 1, 0);
          if ( (v16 & 0x10000) != 0 )
            sub_140586A44(v13, v14, 0);
          if ( (v16 & 0x80) == 0 )
            sub_1405827E0((__int64)a1, v13, v15, v16);
          if ( stru_140C51E68.Header.SignalState && (dword_140D06880 & 0x30u) >= 0x20 )
            ZwUpdateWnfStateData(&stru_1400148A0, 0LL, 0, 0LL, 0LL, 0, 0);
          KePulseEvent(qword_140C550C8, 0, 0);
        }
        v11 = 0;
        v7 = v16;
        v31 = 0;
LABEL_86:
        v9 = v33;
        goto LABEL_87;
      }
      goto LABEL_84;
    }
LABEL_69:
    if ( (v7 & 0x100000) == 0 && qword_140C590D0 + v14 > qword_140C50730 )
    {
      if ( (v7 & 0x10000) != 0 )
        goto LABEL_72;
      v14 = qword_140C50730 - qword_140C590D0;
      v15 = v13 + qword_140C50730 - qword_140C590D0;
    }
    v32 = sub_14023FF18((__int64)&StartContext, 1u);
    if ( v13 < v15 )
    {
      if ( (v7 & 0x800) == 0 )
      {
        v31 = sub_14056AF98(v13, v15 - 1, 0LL);
        v11 = v31;
        if ( v31 < 0 )
          goto LABEL_87;
        v34 = 1;
      }
      if ( (unsigned int)sub_1403B7624((__int64)v36, v13, v14) )
      {
        v47[0] = 0LL;
        v47[2] = v13;
        v47[3] = v14;
        v31 = sub_140969004(&v41, qword_140D06950, v47);
        v11 = v31;
        if ( v31 < 0 )
          goto LABEL_84;
        if ( (v7 & 8) != 0 )
          v24 = sub_1405BF6B4((ULONG_PTR *)a1);
        else
          v24 = sub_14082AFE0(&StartContext, v13, v14);
        if ( v24 )
        {
          v27 = 0;
          while ( (unsigned int)sub_1407FD710((unsigned __int64 *)&qword_140C52A10[2 * v27], v13, v14) )
          {
            if ( ++v27 >= 2 )
            {
              v28 = v32;
              for ( i = *(WNF_CHANGE_STAMP **)v36; i != v36; i = *(WNF_CHANGE_STAMP **)i )
              {
                v11 = sub_140969004(&v33, v28, i);
                v31 = v11;
                if ( v28 != v32 )
                  ExFreePoolWithTag((PVOID)(v28 - 16), 0);
                if ( v11 < 0 )
                {
                  v7 = v16;
                  goto LABEL_84;
                }
                v28 = v33;
              }
              if ( (v16 & 0x40000) != 0 && !sub_1405BD66C(&v42, v13, v14, 0) )
              {
                v7 = v16;
                break;
              }
              goto LABEL_48;
            }
          }
        }
      }
      v11 = -1073741670;
      v31 = -1073741670;
LABEL_84:
      if ( v34 )
        sub_14056AF98(v13, v15 - 1, 8LL);
      goto LABEL_86;
    }
LABEL_72:
    v11 = -1073741585;
    goto LABEL_37;
  }
  if ( (v13 & 0x3FFFF) == 0 )
  {
    if ( (v14 & 0x3FFFF) != 0 )
    {
      v11 = -1073741584;
      goto LABEL_9;
    }
    if ( (v7 & 0x2000) == 0 )
    {
      v11 = -1073741582;
      goto LABEL_9;
    }
    goto LABEL_14;
  }
  v11 = -1073741585;
LABEL_9:
  v31 = v11;
  v10 = 0LL;
LABEL_96:
  v8 = a3;
LABEL_97:
  while ( 1 )
  {
    v25 = *(WNF_CHANGE_STAMP **)v36;
    if ( *(WNF_CHANGE_STAMP **)v36 == v36 )
      break;
    if ( *(WNF_CHANGE_STAMP **)(*(_QWORD *)v36 + 8LL) != v36
      || (v26 = **(_QWORD **)v36, *(_QWORD *)(**(_QWORD **)v36 + 8LL) != *(_QWORD *)v36) )
    {
      __fastfail(3u);
    }
    *(_QWORD *)v36 = **(_QWORD **)v36;
    *(_QWORD *)(v26 + 8) = v36;
    ExFreePoolWithTag(v25, 0);
  }
  sub_1405BDF64(&v42);
  if ( (v7 & 2) == 0 && v10 )
    sub_14023FCF0(v10);
  sub_140583428((unsigned __int16 *)v6, v5, v8, v7, (__int64)&v31);
  return (unsigned int)v11;
}
