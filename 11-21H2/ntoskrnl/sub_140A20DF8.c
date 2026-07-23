/*
 * XREFs of sub_140A20DF8 @ 0x140A20DF8
 * Callers:
 *     sub_140A1E590 @ 0x140A1E590 (sub_140A1E590.c)
 * Callees:
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_14064D064 @ 0x14064D064 (sub_14064D064.c)
 *     sub_14080271C @ 0x14080271C (sub_14080271C.c)
 *     sub_140803250 @ 0x140803250 (sub_140803250.c)
 *     sub_1408123B4 @ 0x1408123B4 (sub_1408123B4.c)
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_140812D00 @ 0x140812D00 (sub_140812D00.c)
 *     sub_140812D44 @ 0x140812D44 (sub_140812D44.c)
 *     sub_140812F84 @ 0x140812F84 (sub_140812F84.c)
 *     sub_140A1FFC0 @ 0x140A1FFC0 (sub_140A1FFC0.c)
 *     sub_140A20144 @ 0x140A20144 (sub_140A20144.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_140A20DF8(__int64 a1, __int64 a2)
{
  ULONG *v2; // rsi
  PVOID v4; // r13
  PVOID v5; // r14
  GUID *PoolWithTag; // r15
  int v7; // eax
  void *v8; // rdi
  int v9; // ebx
  ULONG v10; // eax
  __int64 v11; // r8
  _WORD *v12; // r12
  __int64 v13; // rax
  SIZE_T v14; // rbx
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // rax
  char *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r8
  int v23; // [rsp+30h] [rbp-30h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-2Ch] BYREF
  PVOID P; // [rsp+38h] [rbp-28h] BYREF
  PVOID v26; // [rsp+40h] [rbp-20h] BYREF
  void *Source2; // [rsp+48h] [rbp-18h] BYREF
  void *v28; // [rsp+50h] [rbp-10h] BYREF
  SIZE_T NumberOfBytes; // [rsp+B0h] [rbp+50h] BYREF
  unsigned int v31; // [rsp+B8h] [rbp+58h] BYREF

  v2 = *(ULONG **)(a2 + 40);
  v31 = 0;
  v24 = 0;
  v4 = 0LL;
  P = 0LL;
  v5 = 0LL;
  v26 = 0LL;
  PoolWithTag = 0LL;
  Source2 = 0LL;
  v23 = 0;
  v28 = 0LL;
  LODWORD(NumberOfBytes) = 0;
  v7 = sub_140812B74(a1, (unsigned int *)(a2 + 16), &v28);
  v8 = v28;
  v9 = v7;
  if ( v7 < 0 )
    goto LABEL_31;
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0
    && (int)sub_140812F84((__int64)v28, L"FirmwareVariable", (__int64)L"Description", 3u, &Source2, &v23) >= 0 )
  {
    v10 = v2[1];
    if ( v10 == v23 && RtlCompareMemory(v2, Source2, v10) == v2[1] )
    {
LABEL_8:
      v12 = (_WORD *)((char *)v2 + v2[4]);
      v13 = -1LL;
      do
        ++v13;
      while ( v12[v13] );
      v14 = (unsigned int)(2 * v13 + 2);
      v15 = sub_140812D44((__int64)v8, 0x12000004u, v11, 0LL, (unsigned int *)&NumberOfBytes);
      if ( v15 == -1073741789 )
      {
        PoolWithTag = (GUID *)ExAllocatePoolWithTag(PagedPool, (unsigned int)NumberOfBytes, 0x4B444342u);
        if ( !PoolWithTag )
        {
LABEL_17:
          sub_14080271C(v8, 0x12000004u);
          sub_140803250(v8, 0x12000004u, v17, (__int64)v12, v14);
LABEL_18:
          v18 = v2[5];
          if ( *(ULONG *)((char *)v2 + v18 + 8) == 4 )
          {
            v19 = (char *)v2 + v18;
            if ( (int)sub_140A1FFC0((char *)v2 + v18 + 12, &P, &v31) < 0 )
            {
              v4 = P;
            }
            else
            {
              sub_14080271C(v8, 0x11000001u);
              sub_14064D064(a2, (const void **)&P, &v31);
              v4 = P;
              sub_140803250(v8, 0x11000001u, v20, (__int64)P, v31);
            }
            if ( (int)sub_140A20144((__int64)(v19 + 12), &v26, &v24) < 0 )
            {
              v5 = v26;
            }
            else
            {
              sub_14080271C(v8, 0x12000002u);
              v5 = v26;
              sub_140803250(v8, 0x12000002u, v21, (__int64)v26, v24);
            }
          }
          v9 = 0;
          if ( v4 )
            ExFreePoolWithTag(v4, 0x4B444342u);
          if ( v5 )
            ExFreePoolWithTag(v5, 0x4B444342u);
          goto LABEL_29;
        }
        v15 = sub_140812D44((__int64)v8, 0x12000004u, v16, PoolWithTag, (unsigned int *)&NumberOfBytes);
      }
      if ( v15 >= 0
        && PoolWithTag
        && (_DWORD)NumberOfBytes == (_DWORD)v14
        && RtlCompareMemory(v12, PoolWithTag, v14) == v14 )
      {
        goto LABEL_18;
      }
      goto LABEL_17;
    }
  }
  v9 = sub_1408123B4((__int64)v8, L"FirmwareVariable", (__int64)L"Description", 3u, v2, v2[1]);
  if ( v9 >= 0 )
  {
    *(_DWORD *)(a2 + 48) |= 2u;
    goto LABEL_8;
  }
LABEL_29:
  if ( Source2 )
    ExFreePoolWithTag(Source2, 0x4B444342u);
LABEL_31:
  if ( v8 )
    sub_140812D00((__int64)v8);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x4B444342u);
  return (unsigned int)v9;
}
