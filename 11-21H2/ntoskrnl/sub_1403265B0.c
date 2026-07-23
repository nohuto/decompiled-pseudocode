/*
 * XREFs of sub_1403265B0 @ 0x1403265B0
 * Callers:
 *     sub_140325B30 @ 0x140325B30 (sub_140325B30.c)
 * Callees:
 *     sub_14027456C @ 0x14027456C (sub_14027456C.c)
 *     sub_1402806E0 @ 0x1402806E0 (sub_1402806E0.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402ED128 @ 0x1402ED128 (sub_1402ED128.c)
 *     sub_1403126F0 @ 0x1403126F0 (sub_1403126F0.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_140327C60 @ 0x140327C60 (sub_140327C60.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_1403941B0 @ 0x1403941B0 (sub_1403941B0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405B7B38 @ 0x1405B7B38 (sub_1405B7B38.c)
 *     sub_1405C3C6C @ 0x1405C3C6C (sub_1405C3C6C.c)
 */

__int64 __fastcall sub_1403265B0(
        unsigned __int64 *a1,
        ULONG_PTR BugCheckParameter2,
        __int64 a3,
        _QWORD *a4,
        unsigned __int64 a5,
        int a6,
        __int64 **a7)
{
  __int64 **v7; // r15
  __int64 v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // r10
  void *BugCheckParameter4; // rdi
  unsigned __int64 v13; // rdx
  __int16 v14; // cx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  __int64 **v17; // r12
  unsigned __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 **v21; // r13
  __int64 v22; // rdx
  __int64 v23; // r12
  __int64 v24; // r12
  __int64 v25; // rbx
  __int64 v26; // rdx
  unsigned __int64 v27; // r13
  __int64 v28; // r8
  __int64 v29; // rax
  ULONG_PTR v31; // r9
  __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 *v37; // rbx
  int v38; // [rsp+88h] [rbp+10h]
  __int64 v40; // [rsp+98h] [rbp+20h] BYREF

  v38 = BugCheckParameter2;
  v7 = a7;
  v8 = a3;
  v9 = (_QWORD *)a5;
  v10 = a4[5];
  BugCheckParameter4 = a4;
  LOBYTE(v40) = 0;
  *a7 = 0LL;
  *v9 = 0LL;
  if ( v10 >= 0 )
  {
    v31 = a4[1];
    if ( BugCheckParameter2 != (v31 | 0x8000000000000000uLL) )
      KeBugCheckEx(0x1Au, 0x888AuLL, BugCheckParameter2, v31, (ULONG_PTR)BugCheckParameter4);
  }
  v13 = *((_QWORD *)BugCheckParameter4 + 2);
  v14 = v13;
  v15 = v13 >> 11;
  v16 = v13 >> 3;
  v17 = 0LL;
  a7 = 0LL;
  v18 = *a1;
  v19 = 1LL;
  if ( (v14 & 0x400) != 0 )
    LOBYTE(v16) = v15;
  a5 = *a1;
  if ( (v16 & 1) != 0 )
  {
    if ( v18 <= 0x7FFFFFFEFFFFLL && v10 >= 0 )
    {
      sub_1402ED128(1);
      a7 = sub_1403126F0(a5);
      v17 = a7;
      sub_1402806E0(1, 0x11u);
    }
    v33 = sub_1405B7B38(BugCheckParameter4, v17, 0LL);
    a1[14] = v33;
    if ( v33 )
      goto LABEL_35;
    v18 = a5;
  }
  v20 = *((_QWORD *)BugCheckParameter4 + 5);
  v21 = v17;
  if ( v20 >= 0
    || (v22 = *((_QWORD *)BugCheckParameter4 + 2), (v22 & 0x400) == 0)
    || (((unsigned __int64)v20 >> 60) & 7) == 3 )
  {
LABEL_15:
    if ( (sub_140326870((ULONG_PTR)BugCheckParameter4) & 3) == 0 )
    {
      v26 = *((_QWORD *)BugCheckParameter4 + 5);
      if ( (v26 & 0x20000000000000LL) != 0 )
      {
LABEL_23:
        v29 = *((_QWORD *)BugCheckParameter4 + 3);
        ++*((_WORD *)BugCheckParameter4 + 16);
        *((_QWORD *)BugCheckParameter4 + 3) = v29 & 0xC000000000000000uLL | 1;
        *((_BYTE *)BugCheckParameter4 + 34) = *((_BYTE *)BugCheckParameter4 + 34) & 0xF8 | 6;
        return 0LL;
      }
      v27 = a5;
      if ( a5 > 0x7FFFFFFEFFFFLL || *((_WORD *)BugCheckParameter4 + 16) )
        goto LABEL_21;
      v28 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1680LL);
      if ( v26 >= 0 )
      {
        if ( !*(_QWORD *)(v28 + 408) )
          goto LABEL_21;
      }
      else if ( (*((_DWORD *)BugCheckParameter4 + 4) & 0x400LL) != 0 || !*(_QWORD *)(v28 + 416) )
      {
        goto LABEL_21;
      }
      if ( v17 || (sub_1402ED128(1), v17 = sub_1403126F0(v27), sub_1402806E0(1, 0x11u), v17) )
      {
        if ( qword_1400161D0[(*((_DWORD *)v17 + 12) >> 19) & 3] == 16 )
        {
          if ( *((__int64 *)BugCheckParameter4 + 5) < 0 )
          {
            if ( ((_DWORD)v17[6] & 0x200000) != 0 )
              goto LABEL_70;
LABEL_65:
            v35 = sub_1405C3C6C((int)a1, (int)v17, v38, a6, BugCheckParameter4, v8, (__int64)&v40);
            v19 = v35;
            if ( v35 )
            {
              if ( BugCheckParameter4 != (void *)v35 )
              {
                BugCheckParameter4 = (void *)v35;
                *v9 = v35;
              }
            }
            else
            {
              _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
              if ( v8 )
              {
                LOBYTE(v36) = 17;
                sub_140334790(v8, v36);
              }
            }
            goto LABEL_70;
          }
          if ( ((_DWORD)v17[6] & 0x200000) != 0 )
            goto LABEL_65;
        }
      }
LABEL_70:
      if ( (_BYTE)v40 )
      {
LABEL_22:
        if ( !v19 )
          goto LABEL_72;
        goto LABEL_23;
      }
      if ( !v19 )
      {
LABEL_72:
        v37 = *v7;
        if ( *v7 )
        {
          if ( *((int *)v37 + 44) > 1 )
            KeSetEvent((PRKEVENT)(v37 + 7), 0, 0);
          sub_14027456C((PSLIST_ENTRY)v37);
          *v7 = 0LL;
        }
        return 3221226548LL;
      }
LABEL_21:
      v19 = sub_140327C60(a1, BugCheckParameter4, v8, v7);
      *v9 = v19;
      BugCheckParameter4 = (void *)v19;
      goto LABEL_22;
    }
    sub_1403941B0(BugCheckParameter4, 0LL);
LABEL_35:
    _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
    if ( v8 )
    {
      LOBYTE(v32) = 17;
      sub_140334790(v8, v32);
    }
    return 3221226548LL;
  }
  v23 = *((_QWORD *)BugCheckParameter4 + 2);
  if ( qword_140C50780 && (v22 & 0x10) == 0 )
    v23 = ~qword_140C50780 & v22;
  v24 = v23 >> 16;
  if ( (*(_DWORD *)(*(_QWORD *)v24 + 56LL) & 0x20) == 0 )
  {
LABEL_14:
    v17 = a7;
    goto LABEL_15;
  }
  v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24 + 96LL) + 40LL);
  if ( !v25 || (v25 & 0xFFFFFFFFFFFFFFF8uLL) == 8 || (v25 & 3) == 2 )
    goto LABEL_13;
  if ( v18 < 0xFFFF800000000000uLL )
  {
    if ( a7 )
    {
LABEL_50:
      v34 = *((_DWORD *)v21 + 12);
      if ( (v34 & 0x70) != 0x20
        || (v34 & 0xF80) != 0x80
        && (((_DWORD)v21[8] & 0x8000000) == 0 || (v25 & 4) != 0)
        && ((dword_140D06880 & 0x400) == 0 || (*(_BYTE *)(v24 + 34) & 2) == 0) )
      {
        goto LABEL_55;
      }
LABEL_13:
      v8 = a3;
      goto LABEL_14;
    }
    sub_1402ED128(1);
    v21 = sub_1403126F0(a5);
    sub_1402806E0(1, 0x11u);
  }
  else if ( (dword_140D06880 & 0x8000) == 0 || (v22 & 0x40) == 0 )
  {
    goto LABEL_13;
  }
  if ( v21 )
    goto LABEL_50;
LABEL_55:
  _InterlockedAnd64((volatile signed __int64 *)BugCheckParameter4 + 3, 0x7FFFFFFFFFFFFFFFuLL);
  if ( a3 )
  {
    LOBYTE(v22) = 17;
    sub_140334790(a3, v22);
  }
  return 3221226536LL;
}
