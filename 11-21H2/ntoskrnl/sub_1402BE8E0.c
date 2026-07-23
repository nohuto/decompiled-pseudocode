/*
 * XREFs of sub_1402BE8E0 @ 0x1402BE8E0
 * Callers:
 *     sub_1402BD970 @ 0x1402BD970 (sub_1402BD970.c)
 * Callees:
 *     sub_14023608C @ 0x14023608C (sub_14023608C.c)
 *     sub_140241138 @ 0x140241138 (sub_140241138.c)
 *     sub_1402738F0 @ 0x1402738F0 (sub_1402738F0.c)
 *     sub_140273AAC @ 0x140273AAC (sub_140273AAC.c)
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402BBEE0 @ 0x1402BBEE0 (sub_1402BBEE0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_140334790 @ 0x140334790 (sub_140334790.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_140367828 @ 0x140367828 (sub_140367828.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     RtlCopyMemoryNonTemporal @ 0x14042A290 (RtlCopyMemoryNonTemporal.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140591EB4 @ 0x140591EB4 (sub_140591EB4.c)
 *     sub_140591F50 @ 0x140591F50 (sub_140591F50.c)
 *     sub_140599EBC @ 0x140599EBC (sub_140599EBC.c)
 *     sub_1405B7728 @ 0x1405B7728 (sub_1405B7728.c)
 *     sub_1405B7B38 @ 0x1405B7B38 (sub_1405B7B38.c)
 *     sub_1405B7EB4 @ 0x1405B7EB4 (sub_1405B7EB4.c)
 *     sub_1405B809C @ 0x1405B809C (sub_1405B809C.c)
 *     sub_14096C9CC @ 0x14096C9CC (sub_14096C9CC.c)
 */

__int64 __fastcall sub_1402BE8E0(
        ULONG_PTR BugCheckParameter2,
        void *a2,
        unsigned int a3,
        ULONG_PTR a4,
        unsigned int a5)
{
  unsigned int v6; // r11d
  void *v7; // r10
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 *v13; // rcx
  __int64 v14; // r9
  ULONG_PTR v15; // rdi
  unsigned int v16; // r14d
  __int64 v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rbx
  ULONG_PTR v20; // rbx
  unsigned __int64 v21; // rax
  int v22; // eax
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  int v28; // eax
  __int64 v29; // r8
  int v30; // r13d
  void *v31; // rcx
  __int64 *v32; // rdx
  __int64 v33; // rax
  bool v34; // zf
  int v35; // eax
  int v36; // eax
  int v37; // eax
  unsigned __int64 v38; // rbx
  __int64 v39; // rbx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v41; // bl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v43; // r9
  int v44; // eax
  int v45; // [rsp+40h] [rbp-88h] BYREF
  __int64 v46; // [rsp+48h] [rbp-80h]
  __int64 v47; // [rsp+50h] [rbp-78h]
  unsigned __int64 v48; // [rsp+58h] [rbp-70h] BYREF
  int v49; // [rsp+60h] [rbp-68h]
  PSLIST_ENTRY ListEntry; // [rsp+68h] [rbp-60h]
  _QWORD *v51; // [rsp+70h] [rbp-58h]
  __int64 v52; // [rsp+78h] [rbp-50h]
  __int64 v53; // [rsp+80h] [rbp-48h]
  unsigned __int8 v54; // [rsp+D0h] [rbp+8h] BYREF
  void *Src; // [rsp+D8h] [rbp+10h]
  unsigned int v56; // [rsp+E0h] [rbp+18h]
  unsigned int v57; // [rsp+E8h] [rbp+20h]

  v56 = a3;
  Src = a2;
  v6 = a3;
  v7 = a2;
  v9 = 0LL;
  v45 = 0;
  v10 = 0LL;
  v46 = 0LL;
  v49 = 1;
  ListEntry = 0LL;
  v11 = *(_QWORD *)(48
                  * ((*(_QWORD *)(((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFFLL)
                  - 0x220000000000LL
                  + 16);
  if ( v11 )
    v11 += 40 * ((BugCheckParameter2 >> 18) & 7);
  v12 = *(_QWORD *)(v11 + 24);
  v13 = (__int64 *)(v12 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v12 & 1) == 0 )
    v13 = (__int64 *)v12;
  v53 = *v13;
  v14 = *(_QWORD *)(qword_140C51F48 + 8LL * (*(_WORD *)(v53 + 60) & 0x3FF)) + 17024LL;
  v52 = v14;
  if ( a3 + a4 > 0x1000 || a3 + a4 < a4 )
    KeBugCheckEx(0x1Au, 0x776uLL, BugCheckParameter2, a4, a3);
  v15 = ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = a5;
  v17 = a5 & 4;
  v57 = a5 & 4;
  if ( (a5 & 4) != 0 && ((a3 & 0x3F) != 0 || (a4 & 0x3F) != 0) )
    return 3221226612LL;
  if ( (a5 & 8) != 0 )
  {
    v18 = (_QWORD *)sub_1403095B0(&qword_140C534C0, 1LL);
    v51 = v18;
    if ( !v18 )
      return 3221225626LL;
    v17 = v57;
    v7 = Src;
    v6 = v56;
    v14 = v52;
  }
  else
  {
    v18 = 0LL;
    v51 = 0LL;
  }
  if ( (*(_QWORD *)v15 & 1) != 0 )
  {
    v32 = (__int64 *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( !v18 )
    {
      sub_140241138(v14, v32, *(_QWORD *)v15);
      goto LABEL_52;
    }
    v10 = sub_140591F50(v18, v32, v16);
    v46 = v10;
    v17 = v57;
    v7 = Src;
    v6 = v56;
    if ( v10 )
      goto LABEL_42;
    v18 = v51;
  }
  v19 = *(_QWORD *)v15;
  if ( (*(_QWORD *)v15 & 1) != 0 )
  {
    if ( !v18 )
    {
      v10 = v46;
      goto LABEL_42;
    }
    v33 = sub_140591F50(v18, ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v16);
    v46 = v33;
    v7 = Src;
    v6 = v56;
    if ( v33 )
    {
      v10 = v33;
      goto LABEL_53;
    }
  }
  if ( qword_140C50780 )
  {
    if ( (v19 & 0x10) != 0 )
      v19 &= ~0x10uLL;
    else
      v19 &= ~qword_140C50780;
  }
  v20 = v19 >> 16;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        LOBYTE(v17) = 17;
        v54 = 17;
        v21 = *(_QWORD *)v20;
        v48 = v21;
        if ( (v21 & 1) == 0 && (v21 & 0x400) != 0 )
          break;
        v9 = sub_140273AAC(v20, (__int64)&v54);
        v24 = sub_1402738F0((unsigned __int64 *)v20, 2LL);
        v47 = v24;
        v25 = *(_QWORD *)v20;
        v48 = *(_QWORD *)v20;
        if ( !v24 )
        {
          v17 = v54;
          v7 = Src;
          v6 = v56;
          break;
        }
        v45 = 0;
        if ( (v25 & 1) != 0 )
        {
          v29 = 0x3FFFFFFFFFFFFFFFLL;
          *(_QWORD *)(v24 + 24) ^= (((*(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFLL) + 1) ^ *(_QWORD *)(v24 + 24)) & 0x3FFFFFFFFFFFFFFFLL;
          v30 = 0;
LABEL_33:
          if ( v51 && !v30 )
          {
            v34 = (unsigned int)sub_140274508(v24, 0LL, v29) == 0;
            v35 = v45;
            if ( v34 )
              v35 = -1073741670;
            v45 = v35;
            v24 = v47;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          sub_140334790(v9, v54);
          if ( ListEntry )
          {
            sub_1405B7EB4();
            sub_1405B7728(ListEntry);
            ListEntry = 0LL;
          }
          LODWORD(v9) = v45;
          if ( v45 < 0 )
            goto LABEL_48;
          v7 = Src;
          v6 = v56;
          v9 = 0LL;
          if ( v30 != 1 )
          {
            if ( v30 != 2 )
            {
              if ( v51 )
              {
                v10 = sub_140591EB4(v51, (v48 >> 12) & 0xFFFFFFFFFFLL);
                goto LABEL_41;
              }
LABEL_40:
              v10 = v46;
LABEL_41:
              sub_140367828(v52, ((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v48, v16);
              LODWORD(v17) = v57;
              v7 = Src;
              v6 = v56;
              goto LABEL_42;
            }
            LODWORD(v9) = sub_14031C860(0LL, BugCheckParameter2);
            v45 = v9;
            if ( (int)v9 < 0 )
              goto LABEL_48;
            v7 = Src;
            v6 = v56;
            v9 = 0LL;
          }
        }
        else
        {
          if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v24 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x100) == 0 )
            goto LABEL_27;
          v24 = sub_140599EBC(0LL, (__int64)(v15 << 25) >> 16, v20);
          v47 = v24;
          if ( v24 )
          {
            v48 = *(_QWORD *)v20;
LABEL_27:
            v26 = *(_QWORD *)(v24 + 16);
            if ( (v26 & 0x400) != 0 )
              v27 = v26 >> 11;
            else
              v27 = v26 >> 3;
            if ( (v27 & 1) == 0
              || (ListEntry = (PSLIST_ENTRY)sub_1405B7B38(v24, 0LL, 0LL), ListEntry != (PSLIST_ENTRY)-1LL) )
            {
              v28 = sub_14023608C((__int64 *)v20, v16);
              v30 = v28;
              if ( v28 )
              {
                if ( v28 == 3 )
                  v45 = -1073740023;
              }
              else
              {
                v48 = *(_QWORD *)v20;
              }
              v24 = v47;
              goto LABEL_33;
            }
            _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            sub_140334790(v9, v54);
            sub_1405B809C();
            v9 = 0LL;
            ListEntry = 0LL;
            v7 = Src;
            v6 = v56;
          }
          else
          {
            sub_140334790(v9, v54);
            v7 = Src;
            v6 = v56;
            v9 = 0LL;
          }
        }
      }
      if ( v9 )
      {
        sub_140334790(v9, v17);
        v7 = Src;
        v6 = v56;
      }
      if ( (*(_BYTE *)(v53 + 62) & 0xC) == 0 )
        break;
      LODWORD(v9) = sub_14031C860(0LL, BugCheckParameter2);
      v45 = v9;
      if ( (int)v9 < 0 )
        goto LABEL_48;
      v7 = Src;
      v6 = v56;
      v9 = 0LL;
    }
    v22 = sub_1402BBEE0(v20, v7, v6, a4, v16, &v48, &v45);
    if ( !v22 )
      return (unsigned int)v45;
    v36 = v22 - 1;
    if ( v36 )
      break;
    v7 = Src;
    v6 = v56;
    v9 = 0LL;
  }
  v37 = v36 - 2;
  if ( !v37 )
  {
    LODWORD(v9) = 0;
    v49 = 0;
    goto LABEL_40;
  }
  v10 = v46;
  LODWORD(v9) = 0;
  if ( v37 != 1 )
    goto LABEL_41;
LABEL_52:
  v6 = v56;
  v7 = Src;
LABEL_53:
  LODWORD(v17) = v57;
LABEL_42:
  v45 = 0;
  if ( v49 )
  {
    if ( !v10 )
      v10 = BugCheckParameter2;
    v31 = (void *)(v6 + v10);
    if ( (_DWORD)v17 )
      RtlCopyMemoryNonTemporal(v31, v7, a4);
    else
      memmove(v31, v7, a4);
  }
LABEL_48:
  if ( v51 )
  {
    v38 = *v51;
    sub_1402BB6D0((__int64)&qword_140C534C0, v51, 1u);
    if ( (v38 & 1) != 0 )
    {
      v39 = 48 * ((v38 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      v54 = sub_1402F2700(v39);
      sub_140336AD8(v39);
      _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
      {
        v41 = v54;
        if ( v54 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v43 = *((_QWORD *)CurrentPrcb + 4375);
          v41 = v54;
          v44 = ~(unsigned __int16)(-1LL << (v54 + 1));
          v34 = (v44 & *(_DWORD *)(v43 + 20)) == 0;
          *(_DWORD *)(v43 + 20) &= v44;
          if ( v34 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      else
      {
        v41 = v54;
      }
      __writecr8(v41);
      LODWORD(v9) = v45;
    }
  }
  return (unsigned int)v9;
}
