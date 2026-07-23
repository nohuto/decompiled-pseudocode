/*
 * XREFs of sub_140700460 @ 0x140700460
 * Callers:
 *     sub_1406F5F80 @ 0x1406F5F80 (sub_1406F5F80.c)
 *     sub_1406F77DC @ 0x1406F77DC (sub_1406F77DC.c)
 * Callees:
 *     RtlClearAllBitsEx @ 0x1402340F0 (RtlClearAllBitsEx.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_14028DF40 @ 0x14028DF40 (sub_14028DF40.c)
 *     sub_14028E238 @ 0x14028E238 (sub_14028E238.c)
 *     RtlSetBitsEx @ 0x14030B740 (RtlSetBitsEx.c)
 *     RtlClearBitsEx @ 0x14030BB30 (RtlClearBitsEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1406B9830 @ 0x1406B9830 (sub_1406B9830.c)
 *     sub_1406F5BB0 @ 0x1406F5BB0 (sub_1406F5BB0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140700460(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        int a4,
        unsigned __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned int *a8,
        size_t Size)
{
  unsigned __int64 v9; // r10
  __int64 v10; // r14
  ULONG_PTR v11; // r15
  int v12; // ebx
  unsigned int v13; // esi
  unsigned __int64 v14; // r11
  char *v15; // r12
  char *v16; // rdx
  size_t v17; // r9
  unsigned __int64 v18; // rdi
  __int64 v19; // rcx
  unsigned int v20; // ebx
  size_t v21; // rdi
  unsigned int v23; // eax
  unsigned int v24; // r8d
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // edx
  int v28; // r11d
  unsigned int v29; // eax
  int v30; // r8d
  __int64 v31; // r9
  bool v32; // zf
  unsigned int v33; // ecx
  unsigned __int64 v34; // rax
  unsigned int v35; // ebx
  __int64 v36; // rax
  unsigned __int8 *v37; // r9
  __int64 v38; // r10
  unsigned int v39; // eax
  __int64 v40; // rdx
  unsigned int v41; // r10d
  unsigned __int64 v42; // rax
  int *v43; // rax
  unsigned int v44; // ebx
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  unsigned int v47; // edx
  __int64 v48; // rcx
  unsigned int v49; // eax
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  void *v52; // rsp
  char v53; // [rsp+0h] [rbp-100h] BYREF
  int v54; // [rsp+100h] [rbp+0h]
  void *Src; // [rsp+108h] [rbp+8h]
  unsigned int v56; // [rsp+110h] [rbp+10h]
  unsigned int v57; // [rsp+114h] [rbp+14h]
  unsigned __int64 v58; // [rsp+118h] [rbp+18h]
  __int64 v59; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+128h] [rbp+28h]
  __int64 v61; // [rsp+130h] [rbp+30h]
  unsigned __int64 i; // [rsp+138h] [rbp+38h]
  int v63; // [rsp+140h] [rbp+40h]
  unsigned int v64; // [rsp+144h] [rbp+44h]
  unsigned __int64 v65; // [rsp+148h] [rbp+48h]
  _RTL_BITMAP_EX BitMapHeader; // [rsp+150h] [rbp+50h] BYREF
  __int64 v67; // [rsp+160h] [rbp+60h]
  unsigned __int64 v68; // [rsp+168h] [rbp+68h]
  unsigned __int64 v69; // [rsp+170h] [rbp+70h]

  v63 = a4;
  v9 = a2;
  v58 = a2;
  v10 = a1;
  v67 = a1;
  BitMapHeader = 0LL;
  if ( a2 > 1 && *a8 == -1 )
  {
    v9 = 1LL;
    v58 = 1LL;
  }
  v11 = v9;
  v68 = v9;
  v69 = v9;
  v65 = v9;
  v12 = 0;
  v57 = 0;
  v13 = a7;
  v60 = a7;
  v54 = 0;
  v14 = 4096LL;
  v59 = 4096LL;
  if ( v9 > 1 )
  {
    v15 = (char *)sub_1402828F0(64, 0x1000uLL, 0x6554694Du);
    v61 = (__int64)v15;
    v9 = v58;
    if ( v15 )
    {
      v54 = 1;
      v14 = v59;
      goto LABEL_6;
    }
    v14 = 256LL;
    v59 = 256LL;
    v52 = alloca(256LL);
    v15 = &v53;
  }
  else
  {
    v15 = (char *)qword_140C53298;
    if ( !v9 )
      v15 = (char *)qword_140C532A0;
  }
  v61 = (__int64)v15;
LABEL_6:
  v16 = (char *)a5;
  v17 = Size;
  v18 = (Size >> 12) + (((Size & 0xFFF) + (unsigned int)(a5 & 0xFFF) + 4095) >> 12);
  for ( i = v18; ; v18 = i )
  {
    Src = v16;
    if ( !v17 )
      break;
    v19 = (unsigned int)v16 & ((_DWORD)v14 - 1);
    v20 = v14 - v19;
    if ( v14 - v19 >= v17 )
      v20 = v17;
    v64 = v20;
    v21 = v20;
    if ( v9 <= 1 )
      goto LABEL_11;
    if ( v63 == 1 )
    {
      v44 = v57;
      if ( v57 < *(_DWORD *)v65 )
      {
        v45 = (2 * (((*(_QWORD *)(*(_QWORD *)(v65 + 8) + 16LL * v57) - v60) & ~(v14 - 1)) >> 4)) >> 3;
        v16 = (char *)Src;
        if ( v45 >= v14 )
        {
          v60 += (*(_QWORD *)(*(_QWORD *)(v65 + 8) + 16LL * v57) - v60) & ~(v14 - 1);
          v16 = (char *)Src + v45;
          Src = (char *)Src + v45;
          v17 -= v45;
          Size = v17;
        }
      }
      v46 = (unsigned int)v16 & ((_DWORD)v14 - 1);
      if ( v14 - v46 < v17 )
        v21 = (unsigned int)(v14 - v46);
      else
        v21 = (unsigned int)v17;
      memmove(v15, v16, (unsigned int)v21);
      BitMapHeader.Buffer = (PULONG64)v15;
      BitMapHeader.SizeOfBitMap = (unsigned int)(8 * v21);
      while ( 1 )
      {
        v47 = (unsigned int)v21 >> 1 << 7;
        if ( v44 >= *(_DWORD *)v65 )
          break;
        v48 = *(_QWORD *)(v65 + 8) + 16LL * v44;
        v49 = *(_DWORD *)v48 - v60;
        if ( v49 >= v47 )
          break;
        v50 = *(_QWORD *)(v48 + 8);
        v51 = 2 * ((unsigned __int64)v49 >> 4);
        if ( (v50 & 8) != 0 )
        {
          _bittestandset64((signed __int64 *)v15, v51 + 1);
          _bittestandreset64((signed __int64 *)v15, v51);
        }
        else if ( (v50 & 0x15) != 0 )
        {
          _bittestandreset64((signed __int64 *)v15, v51 + 1);
          _bittestandset64((signed __int64 *)v15, v51);
        }
        else
        {
          RtlClearBitsEx((__int64)&BitMapHeader, v51, 2uLL);
        }
        v57 = ++v44;
      }
      v60 += v47;
      goto LABEL_11;
    }
    v21 = v20;
    if ( v63 )
      goto LABEL_11;
    BitMapHeader.Buffer = (PULONG64)v15;
    BitMapHeader.SizeOfBitMap = 8 * v20;
    RtlClearAllBitsEx(&BitMapHeader);
    v23 = v13 + (v20 >> 1 << 7);
    v56 = v23;
    v24 = *a8;
    if ( !*a8 )
    {
      v25 = sub_1406B9830(v11, a8 + 2, a8 + 1);
      *a8 = v25;
      v24 = v25;
      goto LABEL_39;
    }
    while ( 1 )
    {
      if ( v24 < v13 )
        goto LABEL_47;
      if ( v24 >= v23 )
        break;
      v33 = a8[1];
      if ( (v33 & 1) == 0 )
        goto LABEL_47;
      if ( (v24 & 0xF) == *(_DWORD *)(v10 + 24) )
      {
        if ( dword_140C29794 )
        {
          if ( (v33 & 8) != 0 )
            goto LABEL_46;
        }
        else if ( (v33 & 4) != 0 )
        {
LABEL_46:
          v34 = 2 * ((unsigned __int64)(v24 - v13) >> 4);
          _bittestandreset64((signed __int64 *)v15, v34);
          _bittestandset64((signed __int64 *)v15, v34 + 1);
          goto LABEL_47;
        }
        v42 = 2 * ((unsigned __int64)(v24 - v13) >> 4);
        _bittestandset64((signed __int64 *)v15, v42);
        _bittestandreset64((signed __int64 *)v15, v42 + 1);
      }
      else
      {
        RtlSetBitsEx((__int64)&BitMapHeader, 2 * ((unsigned __int64)(v24 - v13) >> 4), 2uLL);
      }
LABEL_47:
      v35 = ++a8[3];
      v24 = a8[2];
      v36 = a8[4];
      v37 = (unsigned __int8 *)(v36 + *(_QWORD *)(v11 + 16));
      v38 = *(_QWORD *)(v11 + 24) - v36;
      if ( v38 )
      {
        while ( 1 )
        {
          v39 = *v37++;
          --v38;
          v40 = v39 >> 6;
          v24 += (v39 & 0x3F) * *((_DWORD *)qword_140015E60 + v40);
          if ( (_DWORD)v40 == 3 )
            break;
          if ( !v38 )
            KeBugCheckEx(0x1Au, 0x43666720uLL, v11, (ULONG_PTR)(a8 + 2), v24);
        }
        a8[2] = v24;
        a8[4] = (_DWORD)v37 - *(_DWORD *)(v11 + 16);
        if ( a8 != (unsigned int *)-4LL )
        {
          v28 = 0;
          v41 = *(_DWORD *)(v11 + 8);
          if ( v41 <= 1 )
          {
            if ( v41 == 1 )
            {
              v43 = *(int **)(v11 + 48);
              if ( v43 )
                v28 = *v43;
              else
                v28 = 1;
            }
          }
          else
          {
            v29 = 0;
            v30 = 1;
            v31 = 0LL;
            do
            {
              if ( _bittest64(*(const signed __int64 **)(v69 + 40), v35 * v41 + v29) )
              {
                v26 = *(_QWORD *)(v11 + 48);
                if ( v26 )
                  v27 = *(_DWORD *)(v31 + v26);
                else
                  v27 = v30;
                v28 |= v27;
              }
              ++v29;
              v30 = __ROL4__(v30, 1);
              v31 += 4LL;
            }
            while ( v29 < v41 );
            v24 = a8[2];
          }
          a8[1] = v28;
        }
      }
      else
      {
        v24 = 0;
      }
      v13 = a7;
      v10 = v67;
LABEL_39:
      v23 = v56;
      v32 = v24 == 0;
      if ( !v24 )
        goto LABEL_59;
    }
    v32 = v24 == 0;
LABEL_59:
    if ( v32 )
      v24 = -1;
    v13 = v23;
    a7 = v23;
    *a8 = v24;
    v21 = v64;
LABEL_11:
    v12 = sub_14028E238((ULONG_PTR)Src, a6);
    if ( v12 < 0 || (v12 = sub_14028DF40((ULONG_PTR)Src, a6, v15, v21), v12 < 0) )
    {
      v18 = i;
      break;
    }
    v9 = v58;
    if ( v57 )
    {
      **(_DWORD **)(v65 + 16) = v57;
LABEL_15:
      v14 = v59;
      goto LABEL_16;
    }
    if ( v58 <= 1 || *a8 != -1 )
      goto LABEL_15;
    if ( v54 )
    {
      ExFreePoolWithTag(v15, 0);
      v54 = 0;
    }
    v9 = 1LL;
    v58 = 1LL;
    v14 = 4096LL;
    v59 = 4096LL;
    v15 = (char *)qword_140C53298;
    v61 = qword_140C53298;
LABEL_16:
    v16 = (char *)Src + v21;
    v17 = Size - v21;
    Size -= v21;
  }
  if ( v54 )
    ExFreePoolWithTag(v15, 0);
  if ( v11 )
  {
    if ( v12 < 0 )
    {
      if ( Src == (void *)a5 || v12 == -1073741818 )
        return (unsigned int)v12;
      v18 = ((unsigned __int64)Src - (a5 & 0xFFFFFFFFFFFFF000uLL)) >> 12;
    }
    sub_1406F5BB0(*((_QWORD *)KeGetCurrentThread() + 23) + 1664LL, a5 & 0xFFFFFFFFFFFFF000uLL, v18 << 12);
  }
  return (unsigned int)v12;
}
