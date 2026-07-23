/*
 * XREFs of sub_140689424 @ 0x140689424
 * Callers:
 *     sub_1406885A4 @ 0x1406885A4 (sub_1406885A4.c)
 * Callees:
 *     RtlClearAllBits @ 0x14020AE80 (RtlClearAllBits.c)
 *     sub_14020AF90 @ 0x14020AF90 (sub_14020AF90.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140688318 @ 0x140688318 (sub_140688318.c)
 *     sub_140689848 @ 0x140689848 (sub_140689848.c)
 *     sub_14068A024 @ 0x14068A024 (sub_14068A024.c)
 *     sub_14079878C @ 0x14079878C (sub_14079878C.c)
 *     sub_14079AE04 @ 0x14079AE04 (sub_14079AE04.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140689424(ULONG_PTR BugCheckParameter2, char a2, char a3)
{
  bool v3; // zf
  void *v5; // r14
  PVOID *v6; // r15
  ULONG *v7; // r12
  PVOID *v8; // r13
  unsigned int v9; // eax
  SIZE_T v10; // rsi
  PVOID PoolWithTag; // rax
  int v12; // eax
  ULONG SizeOfBitMap; // esi
  unsigned int v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ebx
  PVOID v18; // rax
  __int64 v19; // rdx
  _OWORD *v20; // rax
  _OWORD *v21; // rcx
  __int128 v22; // xmm1
  ULONG *v23; // rax
  PVOID *v24; // rax
  char *v25; // rsi
  __int64 v26; // rdx
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  unsigned int v30; // eax
  PVOID v31; // rax
  PVOID *v32; // rsi
  __int64 v33; // r14
  PVOID *v34; // rsi
  __int64 v35; // r14
  unsigned int Size; // [rsp+40h] [rbp-39h]
  unsigned int Size_4; // [rsp+44h] [rbp-35h] BYREF
  int v38; // [rsp+48h] [rbp-31h] BYREF
  unsigned int v39; // [rsp+4Ch] [rbp-2Dh]
  int v40; // [rsp+50h] [rbp-29h]
  unsigned int v41; // [rsp+54h] [rbp-25h] BYREF
  PVOID P; // [rsp+58h] [rbp-21h] BYREF
  PVOID v43; // [rsp+60h] [rbp-19h]
  int v44; // [rsp+68h] [rbp-11h]
  _RTL_BITMAP BitMapHeader; // [rsp+70h] [rbp-9h] BYREF
  __int64 v46; // [rsp+80h] [rbp+7h]
  __int128 v47; // [rsp+88h] [rbp+Fh] BYREF
  unsigned int v48; // [rsp+E0h] [rbp+67h]
  __int64 v51; // [rsp+F8h] [rbp+7Fh] BYREF

  v3 = (*(_DWORD *)(BugCheckParameter2 + 160) & 0x8000) == 0;
  v46 = 0LL;
  v38 = 0;
  v5 = 0LL;
  LODWORD(v51) = 0;
  v6 = 0LL;
  P = 0LL;
  v7 = 0LL;
  Size_4 = 0;
  v8 = 0LL;
  v41 = 0;
  v48 = 0;
  v43 = 0LL;
  v47 = 0LL;
  BitMapHeader = 0LL;
  if ( !v3 )
    return 1;
  *(_DWORD *)(BugCheckParameter2 + 1728) = (unsigned __int8)sub_140689848(BugCheckParameter2);
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 1) != 0 )
    return 1;
  v9 = *(_DWORD *)(BugCheckParameter2 + 108);
  v10 = v9;
  Size = v9;
  if ( *(_DWORD *)(BugCheckParameter2 + 104) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x30354D43u);
    v5 = PoolWithTag;
    if ( !PoolWithTag )
      return 2;
    memmove(PoolWithTag, *(const void **)(BugCheckParameter2 + 96), (unsigned int)v10);
    v40 = *(_DWORD *)(BugCheckParameter2 + 88);
    LODWORD(v47) = v40;
    *((_QWORD *)&v47 + 1) = v5;
    v12 = sub_140688318(BugCheckParameter2, (PVOID **)&P, &Size_4, &v41);
    v6 = (PVOID *)P;
    if ( v12 < 0 )
    {
      v16 = 2;
      goto LABEL_48;
    }
  }
  else
  {
    v40 = v47;
  }
  if ( !a2 && !a3 )
    goto LABEL_8;
  v18 = ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x30354D43u);
  v43 = v18;
  if ( !v18 )
  {
LABEL_49:
    v16 = 2;
    goto LABEL_16;
  }
  memset(v18, 0, 0x1000uLL);
  v19 = 4LL;
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter2 + 64) + 40LL) = *(_DWORD *)(BugCheckParameter2 + 280);
  v20 = *(_OWORD **)(BugCheckParameter2 + 64);
  v21 = v43;
  do
  {
    *v21 = *v20;
    v21[1] = v20[1];
    v21[2] = v20[2];
    v21[3] = v20[3];
    v21[4] = v20[4];
    v21[5] = v20[5];
    v21[6] = v20[6];
    v21 += 8;
    v22 = v20[7];
    v20 += 8;
    *(v21 - 1) = v22;
    --v19;
  }
  while ( v19 );
  if ( a3 )
  {
    v23 = (ULONG *)ExAllocatePoolWithTag(PagedPool, v10, 0x30354D43u);
    v7 = v23;
    if ( v23 )
    {
      memmove(v23, *(const void **)(BugCheckParameter2 + 120), v10);
      LODWORD(P) = *(_DWORD *)(BugCheckParameter2 + 112);
      BitMapHeader.SizeOfBitMap = (unsigned int)P;
      BitMapHeader.Buffer = v7;
      if ( *(_DWORD *)(BugCheckParameter2 + 104) )
        sub_14020AF90((__int64)&BitMapHeader, (unsigned int *)&v47);
      v48 = sub_14079878C(&BitMapHeader);
      v24 = (PVOID *)ExAllocatePoolWithTag(PagedPool, 24LL * v48, 0x32354D43u);
      v8 = v24;
      if ( v24 )
      {
        memset(v24, 0, 24LL * v48);
        v39 = 0;
        v44 = 0;
        if ( v48 )
        {
          v25 = (char *)(v8 + 1);
          do
          {
            if ( !(unsigned __int8)sub_14079AE04(BugCheckParameter2, (__int64)&v38, (__int64)&v51, 1) )
              break;
            v26 = v46;
            if ( !v46 )
              goto LABEL_49;
            v27 = v51;
            v28 = v38;
            *((_DWORD *)v25 + 2) = v38;
            *((_DWORD *)v25 - 2) = v27;
            v29 = v28 + v27;
            v30 = v39 + 1;
            *(_QWORD *)v25 = v26;
            v25 += 24;
            LODWORD(v51) = v29;
            v39 = v30;
          }
          while ( v30 < v48 );
        }
        memmove(v7, *(const void **)(BugCheckParameter2 + 120), Size);
        SizeOfBitMap = (unsigned int)P;
        goto LABEL_9;
      }
    }
    goto LABEL_49;
  }
LABEL_8:
  SizeOfBitMap = BitMapHeader.SizeOfBitMap;
LABEL_9:
  v14 = *(_DWORD *)(BugCheckParameter2 + 280);
  if ( *(_DWORD *)(BugCheckParameter2 + 1792) < v14 || *(_DWORD *)(BugCheckParameter2 + 1728) )
    *(_DWORD *)(BugCheckParameter2 + 1792) = v14;
  if ( *(_DWORD *)(BugCheckParameter2 + 104) )
  {
    *(_DWORD *)(BugCheckParameter2 + 1688) = v40;
    *(_QWORD *)(BugCheckParameter2 + 1696) = v5;
    v5 = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1704) = Size;
    *(_DWORD *)(BugCheckParameter2 + 1720) = Size_4;
    v15 = v41;
    *(_QWORD *)(BugCheckParameter2 + 1712) = v6;
    v6 = 0LL;
    *(_DWORD *)(BugCheckParameter2 + 1724) = v15;
    sub_14068A024(BugCheckParameter2);
  }
  if ( a2 || a3 )
  {
    v31 = v43;
    v43 = 0LL;
    v3 = *(_BYTE *)(BugCheckParameter2 + 195) == 0;
    *(_QWORD *)(BugCheckParameter2 + 1776) = v31;
    if ( !v3 )
      *(_BYTE *)(BugCheckParameter2 + 1732) = 1;
    if ( a3 )
    {
      *(_QWORD *)(BugCheckParameter2 + 1744) = v7;
      v7 = 0LL;
      *(_DWORD *)(BugCheckParameter2 + 1736) = SizeOfBitMap;
      *(_QWORD *)(BugCheckParameter2 + 1760) = v8;
      v8 = 0LL;
      *(_DWORD *)(BugCheckParameter2 + 1752) = Size;
      *(_DWORD *)(BugCheckParameter2 + 1768) = v48;
      if ( *(_QWORD *)(BugCheckParameter2 + 120) )
      {
        RtlClearAllBits((PRTL_BITMAP)(BugCheckParameter2 + 112));
        *(_DWORD *)(BugCheckParameter2 + 128) = 0;
        *(_BYTE *)(BugCheckParameter2 + 195) = 0;
      }
    }
  }
  v16 = 0;
LABEL_16:
  if ( v5 )
LABEL_48:
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
  {
    if ( Size_4 )
    {
      v32 = v6 + 1;
      v33 = Size_4;
      do
      {
        if ( *v32 )
        {
          ExFreePoolWithTag(*v32, 0);
          *v32 = 0LL;
        }
        v32 += 3;
        --v33;
      }
      while ( v33 );
    }
    ExFreePoolWithTag(v6, 0);
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v8 )
  {
    if ( v48 )
    {
      v34 = v8 + 1;
      v35 = v48;
      do
      {
        if ( *v34 )
          ExFreePoolWithTag(*v34, 0);
        v34 += 3;
        --v35;
      }
      while ( v35 );
    }
    ExFreePoolWithTag(v8, 0);
  }
  if ( v43 )
    ExFreePoolWithTag(v43, 0);
  return v16;
}
