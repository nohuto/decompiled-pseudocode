/*
 * XREFs of sub_14068578C @ 0x14068578C
 * Callers:
 *     sub_140684450 @ 0x140684450 (sub_140684450.c)
 *     sub_140685680 @ 0x140685680 (sub_140685680.c)
 * Callees:
 *     sub_140209854 @ 0x140209854 (sub_140209854.c)
 *     RtlNumberOfSetBits @ 0x140209960 (RtlNumberOfSetBits.c)
 *     sub_140209B54 @ 0x140209B54 (sub_140209B54.c)
 *     RtlCopyBitMap @ 0x140209CA0 (RtlCopyBitMap.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409B03B4 @ 0x1409B03B4 (sub_1409B03B4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14068578C(__int64 a1, int a2, char a3, _DWORD *a4, int a5)
{
  __int64 result; // rax
  char v7; // r15
  __int64 *v10; // rcx
  __int64 v11; // rdi
  unsigned int v12; // ecx
  unsigned int v13; // esi
  __int64 v14; // r12
  int v15; // ebx
  int v16; // eax
  unsigned int v17; // eax
  void *v18; // rcx
  ULONG v19; // r13d
  unsigned int v20; // ebx
  __int64 *v21; // rdx
  __int64 v22; // rcx
  unsigned int v24; // [rsp+24h] [rbp-4Ch] BYREF
  ULONG TargetBit; // [rsp+28h] [rbp-48h] BYREF
  __int64 v26; // [rsp+30h] [rbp-40h] BYREF
  _RTL_BITMAP BitMapHeader; // [rsp+38h] [rbp-38h] BYREF
  __int128 v28; // [rsp+48h] [rbp-28h] BYREF
  __int128 v29; // [rsp+58h] [rbp-18h]

  result = 0LL;
  v24 = 0;
  TargetBit = 0;
  v26 = 0LL;
  v7 = a3;
  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  LODWORD(BitMapHeader.Buffer) = 0;
  *a4 = 0;
  v28 = 0LL;
  v29 = 0LL;
  if ( a5 == 1 )
  {
    v11 = a1 + 1552;
  }
  else
  {
    result = a1 + 1504;
    v10 = (__int64 *)(a1 + 1200);
    if ( !a5 )
      v10 = (__int64 *)result;
    v11 = *v10;
  }
  if ( v11 )
  {
    if ( a5 )
    {
      if ( a5 == 1 )
      {
        result = sub_140209854(a1, &v26, &v24, &TargetBit);
        if ( (int)result < 0 )
          return result;
      }
      else
      {
        sub_140209B54(v11 + 128, &v26, &v24, &TargetBit);
      }
      v12 = v24;
      v13 = TargetBit;
      v14 = v26;
    }
    else
    {
      DWORD2(v28) = 1;
      *(_QWORD *)&v28 = *(_QWORD *)(v11 + 56);
      result = sub_1409B03B4(&v28);
      if ( (int)result < 0 )
        return result;
      v14 = v29;
      v12 = DWORD2(v29);
      v13 = HIDWORD(v29);
    }
    v15 = a2 - 2;
    if ( v15 )
    {
      if ( v15 == 1 )
        v16 = 600000;
      else
        v16 = 10000;
    }
    else
    {
      v16 = 60000;
    }
    v17 = (v12 + v16 - 1) / v12;
    v18 = *(void **)(v11 + 24);
    v19 = v17;
    v20 = (v17 + 7) >> 3;
    if ( v20 < 8 )
      v20 = 8;
    if ( *(_QWORD *)(v11 + 24) && *(_QWORD *)(v11 + 32) < (unsigned __int64)v20 )
    {
      ExFreePoolWithTag(v18, 0x624A7350u);
      *(_QWORD *)(v11 + 24) = 0LL;
      *(_QWORD *)(v11 + 32) = 0LL;
    }
    else if ( v18 )
    {
      if ( v13 >= 8 * v20 )
      {
        memset(v18, 0, v20);
      }
      else if ( v13 )
      {
        RtlCopyBitMap((PRTL_BITMAP)(v11 + 8), (PRTL_BITMAP)(v11 + 8), v13);
        RtlClearBits((PRTL_BITMAP)(v11 + 8), 0, v13);
      }
LABEL_25:
      v21 = *(__int64 **)(v11 + 24);
      BitMapHeader.SizeOfBitMap = v19;
      if ( v13 > 0x40 )
        LOBYTE(v13) = 64;
      *v21 = v14 & ((1LL << v13) - 1) | *v21 & ~((1LL << v13) - 1);
      BitMapHeader.Buffer = *(PULONG *)(v11 + 24);
      result = 100 * RtlNumberOfSetBits(&BitMapHeader) / v19;
      if ( (unsigned int)result >= 0x3C )
      {
        *a4 = 3;
      }
      else if ( (unsigned int)result >= 0x28 )
      {
        *a4 = 2;
      }
      else if ( (unsigned int)result >= 0x14 )
      {
        *a4 = 1;
      }
      if ( v7 )
        return (__int64)memset(*(void **)(v11 + 24), 0, *(_QWORD *)(v11 + 32));
      return result;
    }
    result = (__int64)ExAllocatePoolWithTag(PagedPool, v20, 0x624A7350u);
    *(_QWORD *)(v11 + 24) = result;
    if ( !result )
      return result;
    memset((void *)result, 0, v20);
    v22 = *(_QWORD *)(v11 + 24);
    *(_DWORD *)(v11 + 8) = 8 * v20;
    *(_QWORD *)(v11 + 16) = v22;
    *(_QWORD *)(v11 + 32) = v20;
    v7 = a3;
    goto LABEL_25;
  }
  return result;
}
