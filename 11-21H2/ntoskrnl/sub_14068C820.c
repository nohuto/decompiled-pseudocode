/*
 * XREFs of sub_14068C820 @ 0x14068C820
 * Callers:
 *     sub_14079C920 @ 0x14079C920 (sub_14079C920.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x140209960 (RtlNumberOfSetBits.c)
 *     sub_14020C5E4 @ 0x14020C5E4 (sub_14020C5E4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14068B144 @ 0x14068B144 (sub_14068B144.c)
 *     sub_14068CEA0 @ 0x14068CEA0 (sub_14068CEA0.c)
 *     sub_14068CF68 @ 0x14068CF68 (sub_14068CF68.c)
 *     sub_14068D0DC @ 0x14068D0DC (sub_14068D0DC.c)
 *     sub_14068D244 @ 0x14068D244 (sub_14068D244.c)
 *     sub_14068D2B8 @ 0x14068D2B8 (sub_14068D2B8.c)
 *     sub_14068D310 @ 0x14068D310 (sub_14068D310.c)
 *     sub_14068D5F8 @ 0x14068D5F8 (sub_14068D5F8.c)
 *     sub_14068DF38 @ 0x14068DF38 (sub_14068DF38.c)
 *     sub_14068EC28 @ 0x14068EC28 (sub_14068EC28.c)
 *     sub_14068F044 @ 0x14068F044 (sub_14068F044.c)
 *     sub_1406C9BF4 @ 0x1406C9BF4 (sub_1406C9BF4.c)
 *     sub_1406D16F8 @ 0x1406D16F8 (sub_1406D16F8.c)
 *     sub_14071F430 @ 0x14071F430 (sub_14071F430.c)
 *     sub_14079B0D0 @ 0x14079B0D0 (sub_14079B0D0.c)
 *     sub_14079CF18 @ 0x14079CF18 (sub_14079CF18.c)
 *     sub_14091A000 @ 0x14091A000 (sub_14091A000.c)
 *     sub_1409221F4 @ 0x1409221F4 (sub_1409221F4.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 */

__int64 __fastcall sub_14068C820(ULONG_PTR BugCheckParameter2, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v4; // edi
  __int64 v6; // rdx
  ULONG_PTR v7; // r15
  __int64 *i; // rbx
  unsigned int v9; // r15d
  unsigned int v10; // r12d
  unsigned int v12; // r13d
  int v13; // r14d
  __int64 v14; // rdx
  int v15; // eax
  char v16; // al
  int v17; // r8d
  bool v18; // sf
  _DWORD *v19; // r14
  void *v20; // rcx
  int v21; // eax
  char v22; // cl
  unsigned int v24; // r13d
  __int64 *v25; // rax
  __int64 **v26; // rcx
  int v27; // r12d
  unsigned int v28; // r8d
  unsigned int j; // edi
  __int64 v30; // rax
  unsigned int v31; // r8d
  unsigned int v32; // r11d
  _QWORD *v33; // r10
  __int64 v34; // rax
  signed __int64 v35; // rax
  int v36; // r8d
  bool v37; // sf
  _DWORD *v38; // rcx
  __int64 v39; // rax
  __int64 *v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 *v43; // rax
  int v44; // ebx
  ULONG v45; // eax
  __int64 v46; // rax
  char v47; // [rsp+30h] [rbp-38h]
  char v48; // [rsp+31h] [rbp-37h]
  size_t Size; // [rsp+34h] [rbp-34h]
  void *v50; // [rsp+40h] [rbp-28h] BYREF
  void *v51; // [rsp+48h] [rbp-20h] BYREF
  __int64 v52; // [rsp+50h] [rbp-18h]
  __int64 v53; // [rsp+58h] [rbp-10h]
  char v54; // [rsp+B0h] [rbp+48h]
  char v55; // [rsp+B8h] [rbp+50h]
  char v57; // [rsp+C0h] [rbp+58h]

  Size = 0LL;
  v4 = (a2 + 4127) & 0xFFFFF000;
  v48 = 0;
  v50 = 0LL;
  v52 = 0LL;
  v51 = 0LL;
  v55 = 0;
  v54 = 0;
  if ( v4 <= 0x3000 && v4 - (unsigned __int64)a2 - 32 < 0xE00 )
    v4 += 4096;
  v6 = 632LL * (int)a3;
  v7 = v6 + BugCheckParameter2 + 888;
  v53 = v6;
  for ( i = *(__int64 **)v7; ; i = (__int64 *)*i )
  {
    if ( i == (__int64 *)v7 )
      goto LABEL_6;
    v24 = *((_DWORD *)i + 4);
    if ( v24 >= v4 && v24 + *((_DWORD *)i + 5) <= *(_DWORD *)(v6 + BugCheckParameter2 + 280) )
      break;
  }
  if ( i )
  {
    v25 = (__int64 *)*i;
    if ( *(__int64 **)(*i + 8) == i )
    {
      v26 = (__int64 **)i[1];
      if ( *v26 == i )
      {
        *v26 = v25;
        v25[1] = (__int64)v26;
        v27 = a3 << 31;
        v13 = sub_14071F430(BugCheckParameter2);
        if ( v13 >= 0 )
        {
          v28 = 0;
          for ( j = v27 + *((_DWORD *)i + 5); v28 < v24; *v33 = v34 )
          {
            v30 = sub_140AB44C0(BugCheckParameter2, v28 + j);
            v33 = (_QWORD *)v30;
            if ( !v30 )
              KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v32, 0x391uLL);
            *(_QWORD *)(v30 + 8) &= ~2uLL;
            v34 = v31;
            v28 = v31 + 4096;
          }
          sub_14042A5E0(i, 24LL);
          *a4 = j;
          return 0;
        }
        v43 = *(__int64 **)v7;
        if ( *(_QWORD *)(*(_QWORD *)v7 + 8LL) == v7 )
        {
          *i = (__int64)v43;
          i[1] = v7;
          v43[1] = (__int64)i;
          *(_QWORD *)v7 = i;
          return (unsigned int)v13;
        }
      }
    }
LABEL_91:
    __fastfail(3u);
  }
LABEL_6:
  v9 = *(_DWORD *)(v6 + BugCheckParameter2 + 280);
  v10 = v9;
  v12 = v9 + v4;
  if ( !a3 && v4 <= 0x40000 && (((v9 + 4096) ^ (v12 + 4095)) & 0xFFFC0000) != 0 )
  {
    v10 = ((v9 + 266239) & 0xFFFC0000) - 4096;
    LODWORD(Size) = v10 - v9;
    v12 = v10 + v4;
  }
  if ( v12 < v9 || !(unsigned __int8)sub_14068D244(BugCheckParameter2, v12, 4096LL) )
    return (unsigned int)-1073741670;
  v13 = sub_14068D0DC(BugCheckParameter2, a3, v9, v12);
  if ( v13 >= 0 )
  {
    *(_DWORD *)(v53 + BugCheckParameter2 + 280) = v12;
    v13 = sub_14068CF68(BugCheckParameter2, v12, a3);
    if ( v13 < 0 )
    {
LABEL_77:
      sub_1409221F4(BugCheckParameter2, a3, v12, v9);
      *(_DWORD *)(v53 + BugCheckParameter2 + 280) = v9;
      if ( v48 )
      {
        *(_QWORD *)(BugCheckParameter2 + 96) = *(_QWORD *)(BugCheckParameter2 + 96);
        *(_DWORD *)(BugCheckParameter2 + 88) = v9 >> 9;
        v44 = *(_DWORD *)(BugCheckParameter2 + 104);
        v45 = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 88));
        *(_DWORD *)(BugCheckParameter2 + 104) = v45;
        _InterlockedExchangeAdd(&dword_140C48DF4, v45 - v44);
        v46 = *(_QWORD *)(BugCheckParameter2 + 120);
        *(_DWORD *)(BugCheckParameter2 + 112) = v9 >> 9;
        *(_QWORD *)(BugCheckParameter2 + 120) = v46;
        *(_DWORD *)(BugCheckParameter2 + 128) = RtlNumberOfSetBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
      }
      if ( v54 )
        sub_14091A000(BugCheckParameter2 + 224, v9);
      if ( v50 && !v55 )
        sub_1406D16F8(BugCheckParameter2, v10 - v9, v50);
      if ( v52 )
        sub_14042A5E0(v52, 24LL);
      if ( v51 && !v55 )
        sub_1406D16F8(BugCheckParameter2, v12 - v10, v51);
      if ( HIDWORD(Size) )
        sub_14079CF18(HIDWORD(Size));
      return (unsigned int)v13;
    }
    v57 = 1;
    v47 = 1;
    if ( a3 )
      goto LABEL_18;
    v15 = *(_DWORD *)(BugCheckParameter2 + 160);
    if ( (v15 & 1) == 0 )
    {
      v13 = sub_14020C5E4(BugCheckParameter2, v12);
      if ( v13 < 0 )
        goto LABEL_76;
      v15 = *(_DWORD *)(BugCheckParameter2 + 160);
      v48 = 1;
    }
    if ( (v15 & 0x8001) == 0 )
    {
      v13 = sub_14068EC28(BugCheckParameter2, 0LL, v12 + 4096, 1LL);
      if ( v13 < 0 )
        goto LABEL_76;
      if ( (*(_DWORD *)(BugCheckParameter2 + 4112) & 0x800) != 0 && !*(_DWORD *)(BugCheckParameter2 + 4228) )
        *(_DWORD *)(BugCheckParameter2 + 4228) = v9;
    }
    v57 = 1;
    v47 = 1;
    if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) == 0 )
      goto LABEL_18;
    v14 = 2147479552LL;
    if ( (*(_DWORD *)(BugCheckParameter2 + 256) & 1) == 0
      || (v35 = *(_QWORD *)(BugCheckParameter2 + 240) & 0xFFFFFFFFFFFFF000uLL, v35 >= 2147479552) )
    {
      LODWORD(v35) = 2147479552;
    }
    v57 = 1;
    v47 = 1;
    if ( v12 > (int)v35 - 4096 )
    {
LABEL_18:
      v16 = 0;
    }
    else
    {
      v13 = sub_14068F044(BugCheckParameter2 + 224, v12);
      if ( v13 < 0 )
        goto LABEL_76;
      v16 = 1;
      v57 = 0;
      v55 = 1;
      v47 = 0;
    }
    if ( (_DWORD)Size )
    {
      if ( v16 )
      {
        if ( !sub_14068B144((unsigned int)Size, v14) )
          goto LABEL_75;
        HIDWORD(Size) = Size;
        v13 = sub_14068D310(BugCheckParameter2 + 224, v9, (unsigned int)Size, &v50);
        v54 = v55;
        if ( v13 < 0 )
          goto LABEL_76;
        v13 = sub_14068DF38(BugCheckParameter2 + 224, v9, (unsigned int)Size);
        v54 = v55;
        v37 = v13 < 0;
      }
      else
      {
        v54 = 0;
        v13 = sub_14068D2B8(BugCheckParameter2, Size, a3, 808602947, (__int64)&v50);
        if ( v13 < 0 )
          goto LABEL_76;
        v13 = sub_1406C9BF4(BugCheckParameter2, (_DWORD)v50, v36, 0, Size, 1);
        v54 = 0;
        v37 = v13 < 0;
      }
      if ( v37 )
        goto LABEL_76;
      memset(v50, 0, (unsigned int)Size);
      v38 = v50;
      *((_DWORD *)v50 + 7) = 0;
      v38[1] = v9 & 0x7FFFFFFF;
      v38[8] = Size - 32;
      *v38 = 1852400232;
      v38[2] = Size;
      v39 = sub_14042A5E0(24LL, 0LL);
      v52 = v39;
      if ( !v39 )
      {
LABEL_75:
        v13 = -1073741670;
        v54 = v55;
        goto LABEL_76;
      }
      *(_DWORD *)(v39 + 16) = Size;
      *(_DWORD *)(v39 + 20) = v9;
    }
    if ( !v55 )
    {
      v54 = 0;
      v13 = sub_14068D2B8(BugCheckParameter2, v4, a3, 909200707, (__int64)&v51);
      if ( v13 < 0 )
        goto LABEL_76;
      v13 = sub_1406C9BF4(BugCheckParameter2, (_DWORD)v51, v17, 0, v4, 1);
      v54 = 0;
      v18 = v13 < 0;
LABEL_23:
      if ( !v18 )
      {
        v19 = v51;
        memset(v51, 0, v4);
        v19[7] = 0;
        v20 = v50;
        v19[1] = v10 & 0x7FFFFFFF;
        v19[8] = v4 - 32;
        v21 = a3 << 31;
        *v19 = 1852400232;
        v19[2] = v4;
        if ( v20 )
        {
          sub_14068CEA0(BugCheckParameter2, v57, v52);
          v40 = (__int64 *)(BugCheckParameter2 + v53 + 888);
          v41 = *v40;
          if ( *(__int64 **)(*v40 + 8) != v40 )
            goto LABEL_91;
          v42 = v52;
          *(_QWORD *)v52 = v41;
          *(_QWORD *)(v42 + 8) = v40;
          *(_QWORD *)(v41 + 8) = v42;
          v22 = v57;
          *v40 = v42;
          v21 = a3 << 31;
        }
        else
        {
          v22 = v47;
        }
        v10 += v21;
        sub_14068CEA0(BugCheckParameter2, v22, 0LL);
        if ( !a3 )
        {
          if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) == 0 )
          {
            v13 = sub_14071F430(BugCheckParameter2);
            v54 = v55;
            if ( v13 < 0 )
              goto LABEL_76;
          }
          sub_14068D5F8(BugCheckParameter2, v12, v9);
          sub_14079B0D0(BugCheckParameter2, v9);
        }
        *a4 = v10;
        return 0;
      }
LABEL_76:
      sub_14068CF68(BugCheckParameter2, v9, a3);
      goto LABEL_77;
    }
    if ( sub_14068B144(v4, v14) )
    {
      HIDWORD(Size) += v4;
      v13 = sub_14068D310(BugCheckParameter2 + 224, v10, v4, &v51);
      v54 = v55;
      if ( v13 < 0 )
        goto LABEL_76;
      v13 = sub_14068DF38(BugCheckParameter2 + 224, v10, v4);
      v54 = v55;
      v18 = v13 < 0;
      goto LABEL_23;
    }
    goto LABEL_75;
  }
  return (unsigned int)v13;
}
