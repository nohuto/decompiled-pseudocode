/*
 * XREFs of sub_14030C260 @ 0x14030C260
 * Callers:
 *     sub_14030BBF0 @ 0x14030BBF0 (sub_14030BBF0.c)
 * Callees:
 *     sub_14021803C @ 0x14021803C (sub_14021803C.c)
 *     sub_140233A4C @ 0x140233A4C (sub_140233A4C.c)
 *     sub_140233AA0 @ 0x140233AA0 (sub_140233AA0.c)
 *     sub_140238D0C @ 0x140238D0C (sub_140238D0C.c)
 *     sub_140256548 @ 0x140256548 (sub_140256548.c)
 *     sub_1402B2E40 @ 0x1402B2E40 (sub_1402B2E40.c)
 *     sub_14030C870 @ 0x14030C870 (sub_14030C870.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140334400 @ 0x140334400 (sub_140334400.c)
 *     sub_1403470F0 @ 0x1403470F0 (sub_1403470F0.c)
 *     sub_1403603D0 @ 0x1403603D0 (sub_1403603D0.c)
 *     sub_140366A20 @ 0x140366A20 (sub_140366A20.c)
 *     sub_140373E1C @ 0x140373E1C (sub_140373E1C.c)
 *     sub_1403744D8 @ 0x1403744D8 (sub_1403744D8.c)
 *     sub_1403D2280 @ 0x1403D2280 (sub_1403D2280.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140461B20 @ 0x140461B20 (sub_140461B20.c)
 *     sub_140596528 @ 0x140596528 (sub_140596528.c)
 *     sub_14063D8E0 @ 0x14063D8E0 (sub_14063D8E0.c)
 */

__int64 __fastcall sub_14030C260(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rdi
  char v8; // al
  struct _KTHREAD *CurrentThread; // r8
  ULONG_PTR v10; // rax
  unsigned __int8 v11; // al
  volatile __int32 *v12; // rdi
  unsigned __int8 CurrentIrql; // r15
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v15; // rcx
  signed __int32 v16; // ett
  unsigned __int8 v17; // cl
  unsigned int v18; // edi
  int v19; // r14d
  unsigned int v20; // r13d
  unsigned __int8 v21; // r12
  char *v22; // rdx
  __int64 v23; // rdi
  __int64 v24; // r8
  char v25; // r9
  _BYTE *v26; // rax
  __int64 v27; // r10
  unsigned __int64 v28; // rdx
  char v29; // al
  _QWORD *v30; // r14
  volatile LONG *v31; // r15
  volatile signed __int32 *v32; // r14
  unsigned int v33; // ecx
  unsigned int v34; // edx
  struct _KPRCB *v35; // rcx
  __int64 v36; // rdx
  char v37; // al
  volatile LONG *v39; // rcx
  _QWORD **v40; // rcx
  _QWORD *v41; // rax
  _QWORD *i; // rdx
  _SLIST_ENTRY *v43; // rbp
  __int64 v44; // r8
  __int64 v45; // rcx
  int v46; // eax
  int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rax
  unsigned __int8 v50; // al
  struct _KPRCB *v51; // r9
  __int64 v52; // r8
  int v53; // eax
  bool v54; // zf
  int v55; // eax
  unsigned __int8 v56; // al
  struct _KPRCB *v57; // r9
  __int64 v58; // r8
  int v59; // eax
  unsigned __int8 v60; // [rsp+30h] [rbp-88h]
  __int64 v62; // [rsp+40h] [rbp-78h]
  void *retaddr; // [rsp+B8h] [rbp+0h]

  if ( *(_BYTE *)(a1 + 186) == 2 && (*(_BYTE *)(a1 + 184) & 7) == 0 )
    sub_1403603D0();
  if ( (a3 & 0x300) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) != 0 )
    {
      a3 &= 0xFFFFFCFF;
    }
    else if ( !*(_QWORD *)(a1 - 400) )
    {
      a3 &= ~0x100u;
    }
    if ( !a3 )
      return 0LL;
  }
  v5 = 1LL;
  v6 = qword_140C51F48;
  v7 = *(_QWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 16600LL);
  v62 = v7;
  v8 = *(_BYTE *)(a1 + 184) & 7;
  if ( v8 )
  {
    if ( v8 == 1 )
      sub_140238D0C(
        a1 - 192,
        *(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 16680LL));
  }
  else if ( *((_QWORD *)KeGetCurrentThread() + 68) != a1 - 1664 )
  {
    CurrentThread = KeGetCurrentThread();
    v10 = *((unsigned __int8 *)CurrentThread + 586);
    if ( (_BYTE)v10 )
      KeBugCheckEx(5u, a1 - 1664, *((_QWORD *)CurrentThread + 23), v10, 0LL);
    sub_14030D5C0(a1 - 1664);
  }
  if ( (a3 & 4) != 0 )
    sub_140256548(a1, 0, 0LL, -1LL);
  v11 = *(_BYTE *)(a1 + 184) & 7;
  if ( v11 <= 4u )
  {
    if ( v11 == 2 )
    {
      v12 = (volatile __int32 *)&unk_140C53D00;
LABEL_12:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v5 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        v6 = (-1 << (CurrentIrql + 1)) & 4u | *(_DWORD *)(v5 + 20);
        *(_DWORD *)(v5 + 20) = v6;
      }
      if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      {
        sub_140461B20(v12, CurrentIrql);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v15 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v46 = *(_DWORD *)(v15 + 24);
            *(_DWORD *)(v15 + 24) = v46 + 1;
            if ( v46 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        _m_prefetchw((const void *)v12);
        v16 = *v12 & 0x7FFFFFFF;
        if ( v16 != _InterlockedCompareExchange(v12, v16 + 1, v16) )
        {
          v45 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v45 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v47 = *(_DWORD *)(v45 + 24) - 1;
              *(_DWORD *)(v45 + 24) = v47;
              if ( !v47 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          sub_140366A20(v12, CurrentIrql);
        }
      }
      if ( *((_DWORD *)v12 + 1) )
        _InterlockedExchange(v12 + 1, 0);
      v7 = v62;
      v17 = CurrentIrql;
      v60 = CurrentIrql;
      goto LABEL_19;
    }
LABEL_11:
    v12 = (volatile __int32 *)(a1 + 192);
    goto LABEL_12;
  }
  if ( v11 == 5 )
    goto LABEL_11;
  v17 = KeGetCurrentIrql();
  v60 = v17;
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v17 <= 0xFu )
  {
    v5 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    v6 = (-1 << (v17 + 1)) & 4u | *(_DWORD *)(v5 + 20);
    *(_DWORD *)(v5 + 20) = v6;
  }
LABEL_19:
  if ( (a3 & 0x300) != 0 )
  {
    sub_1403744D8(a1, *(_QWORD *)(a1 + 144), v17, 0, 2);
    v17 = v60;
  }
  if ( (a3 & 0x80u) != 0 )
  {
    sub_1403744D8(a1, *(_QWORD *)(a1 + 144), v17, 0, 4);
    v17 = v60;
  }
  v18 = *(unsigned __int16 *)(v7 + 2346);
  v19 = 0;
  v20 = 0;
  if ( (a3 & 1) != 0 )
  {
    *(_BYTE *)(a2 + 1) = *((_BYTE *)qword_14003BE80 + (*(_BYTE *)a2 & 0x7F));
    v48 = sub_140596528(a2, a1, v6, v5);
    v21 = v60;
    if ( v48 )
    {
      v49 = sub_1403744D8(a1, v48, v60, *(unsigned __int8 *)(a2 + 1), 17);
      v22 = (char *)a2;
      *(_QWORD *)(a2 + 96) += v49;
    }
    else
    {
      v22 = (char *)a2;
    }
    v44 = 0LL;
    if ( ((*v22 & 0x7F) == 0 && *v22 >= 0 || (*v22 & 0x7F) == 4) && *(_WORD *)(v62 + 2346) )
      v44 = 1LL;
    if ( v22[4] != 1 )
      goto LABEL_30;
    goto LABEL_76;
  }
  if ( (a3 & 2) == 0 )
  {
    if ( (a3 & 0x20) != 0 )
    {
      v21 = v60;
      v44 = 1LL;
    }
    else
    {
      if ( (a3 & 0x40) == 0 )
      {
LABEL_70:
        v21 = v60;
        goto LABEL_29;
      }
      v44 = 2LL;
      v21 = v60;
    }
LABEL_76:
    v20 = sub_14030C870(a1, v21, v44, v18);
    v19 = 1;
    goto LABEL_29;
  }
  v20 = sub_14030C870(a1, v17, 1LL, v18);
  v19 = 1;
  if ( v20 || !*(_BYTE *)(v62 + 55) || v18 - 1 > 8 )
    goto LABEL_70;
  v21 = v60;
  v20 = sub_14030C870(a1, v60, 2LL, 10LL);
LABEL_29:
  v22 = (char *)a2;
LABEL_30:
  v23 = 0LL;
  if ( v20 )
    goto LABEL_41;
  if ( v19 )
  {
    v24 = 8LL;
    v25 = 3;
    if ( *(_BYTE *)(a1 + 186) != 2 )
      v25 = 1;
    v26 = v22 + 8;
    v27 = a1 - (_QWORD)v22;
    do
    {
      v28 = *(_QWORD *)&v26[v27 + 32];
      v26 += 8;
      *((_QWORD *)v26 - 1) += v28 >> v25;
      --v24;
    }
    while ( v24 );
  }
  if ( (a3 & 0x10) != 0 || (a3 & 8) != 0 )
    sub_1403D2280(a1, v21, a3);
  v23 = MEMORY[0xFFFFF78000000320];
  v29 = *(_BYTE *)(a1 + 184) & 7;
  v30 = v29 == 2 ? &unk_140C53D00 : (_QWORD *)(a1 + 192);
  v31 = (volatile LONG *)(a1 + 192);
  if ( v30[5] )
  {
    v39 = (volatile LONG *)(a1 + 192);
    if ( v29 == 2 )
      v39 = (volatile LONG *)&unk_140C53D00;
    ExAcquireSpinLockExclusiveAtDpcLevel(v39 + 16);
    v40 = (_QWORD **)v30[5];
    if ( v40 )
    {
      v41 = *v40;
      for ( i = (_QWORD *)v30[5]; v41; v41 = (_QWORD *)*v41 )
        i = v41;
      if ( v23 - i[2] > (unsigned __int64)qword_140CF5E00 )
      {
        sub_140334400(v40, i);
        v30[5] = 0LL;
      }
    }
    v32 = (volatile signed __int32 *)&unk_140C53D00;
    if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
      v31 = (volatile LONG *)&unk_140C53D00;
    ExReleaseSpinLockExclusiveFromDpcLevel(v31 + 16);
  }
  else
  {
LABEL_41:
    v32 = (volatile signed __int32 *)&unk_140C53D00;
  }
  v33 = *(_DWORD *)(a1 + 184);
  v34 = HIBYTE(v33);
  if ( (v33 & 7) <= 4 || (LOBYTE(v34) = HIBYTE(v33), (v33 & 7) == 5) )
  {
    if ( (*(_DWORD *)(a1 + 188) & 3) != 0 || (v34 & 0x10) != 0 )
    {
      sub_140373E1C(a1, v21);
      LOBYTE(v33) = *(_BYTE *)(a1 + 184);
    }
    if ( (v33 & 7) != 2 )
      v32 = (volatile signed __int32 *)(a1 + 192);
    sub_1402B2E40(a1, 1u);
    if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
    {
      sub_14063D8E0(v32, retaddr);
    }
    else
    {
      _InterlockedAnd(v32, 0xBFFFFFFF);
      _InterlockedDecrement(v32);
    }
    v35 = KeGetCurrentPrcb();
    v36 = *((_QWORD *)v35 + 4375);
    if ( v36 )
    {
      if ( *((_BYTE *)v35 + 32) <= 1u )
      {
        v55 = *(_DWORD *)(v36 + 24) - 1;
        *(_DWORD *)(v36 + 24) = v55;
        if ( !v55 )
          sub_140418E4C(v35);
      }
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v56 = KeGetCurrentIrql();
        if ( v56 <= 0xFu && v21 <= 0xFu && v56 >= 2u )
        {
          v57 = KeGetCurrentPrcb();
          v58 = *((_QWORD *)v57 + 4375);
          v59 = ~(unsigned __int16)(-1LL << (v21 + 1));
          v54 = (v59 & *(_DWORD *)(v58 + 20)) == 0;
          *(_DWORD *)(v58 + 20) &= v59;
          if ( v54 )
            sub_140418E4C(v57);
        }
      }
    }
  }
  else if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v50 = KeGetCurrentIrql();
      if ( v50 <= 0xFu && v21 <= 0xFu && v50 >= 2u )
      {
        v51 = KeGetCurrentPrcb();
        v52 = *((_QWORD *)v51 + 4375);
        v53 = ~(unsigned __int16)(-1LL << (v21 + 1));
        v54 = (v53 & *(_DWORD *)(v52 + 20)) == 0;
        *(_DWORD *)(v52 + 20) &= v53;
        if ( v54 )
          sub_140418E4C(v51);
      }
    }
  }
  __writecr8(v21);
  v37 = *(_BYTE *)(a1 + 184) & 7;
  if ( v37 )
  {
    if ( v37 == 1 )
      sub_14021803C(*(_QWORD *)(qword_140C51F48 + 8LL * *(unsigned __int16 *)(a1 + 174)) + 16680LL);
  }
  else if ( *((_QWORD *)KeGetCurrentThread() + 68) != a1 - 1664 )
  {
    sub_1403470F0((char *)KeGetCurrentThread() + 600, 1LL);
  }
  if ( !v20 )
  {
    if ( qword_140C52B40 )
    {
      v43 = (_SLIST_ENTRY *)_InterlockedExchange64(&qword_140C52B40, 0LL);
      if ( v43 )
      {
        if ( v23 - (unsigned __int64)v43[1].Next > qword_140CF5E00 || (a3 & 0x18) != 0 )
          sub_140233AA0(v43);
        else
          sub_140233A4C(v43, 0);
      }
    }
  }
  return v20;
}
