/*
 * XREFs of sub_14070F3A8 @ 0x14070F3A8
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 * Callees:
 *     sub_14027A794 @ 0x14027A794 (sub_14027A794.c)
 *     sub_140287970 @ 0x140287970 (sub_140287970.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1407103B0 @ 0x1407103B0 (sub_1407103B0.c)
 *     sub_14071123C @ 0x14071123C (sub_14071123C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_14070F3A8(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  int v5; // eax
  int v6; // edi
  char *v7; // rax
  void *v8; // rbx
  PVOID PoolWithTag; // rax
  PVOID v11; // rax
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  SIZE_T NumberOfBytes; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v15; // [rsp+38h] [rbp-C8h] BYREF
  void *Src[34]; // [rsp+50h] [rbp-B0h] BYREF

  memset(Src, 0, sizeof(Src));
  if ( (*(_DWORD *)(a2 + 2172) & 1) != 0 )
    goto LABEL_16;
  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 176);
  }
  else
  {
    v12 = *(_QWORD *)(a2 + 1304);
    if ( !v12 )
      goto LABEL_16;
    v13 = sub_140287970(v12);
    v4 = sub_14027A794(v13, 1953261124LL);
  }
  v15 = *(_OWORD *)(v4 + 88);
  sub_14071123C(a2, &v15);
  LODWORD(NumberOfBytes) = 272;
  v5 = sub_1407103B0(v4, (unsigned int)Src, 272, (unsigned int)&NumberOfBytes, 0);
  v6 = v5;
  if ( v5 == -2147483643 || v5 == -1073741789 || v5 == -1073741820 )
  {
    if ( (unsigned int)NumberOfBytes > 0x110 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6E497350u);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        v6 = sub_1407103B0(v4, (_DWORD)PoolWithTag, NumberOfBytes, (unsigned int)&NumberOfBytes, 0);
        if ( v6 >= 0 )
          goto LABEL_11;
        ExFreePoolWithTag(v8, 0);
      }
    }
  }
  else if ( v5 >= 0 && (unsigned int)(NumberOfBytes - 17) <= 0xFF )
  {
    v7 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)NumberOfBytes, 0x6E497350u);
    v8 = v7;
    if ( v7 )
    {
      *(_OWORD *)v7 = *(_OWORD *)Src;
      *((_QWORD *)v7 + 1) = v7 + 16;
      memmove(v7 + 16, Src[1], WORD1(Src[0]));
      goto LABEL_11;
    }
  }
LABEL_16:
  LODWORD(NumberOfBytes) = 16;
  v11 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x10uLL, 0x6E497350u);
  v8 = v11;
  if ( v11 )
  {
    memset(v11, 0, (unsigned int)NumberOfBytes);
    v6 = 0;
  }
  else
  {
    v6 = -1073741801;
  }
LABEL_11:
  *(_QWORD *)(a2 + 1472) = v8;
  return (unsigned int)v6;
}
