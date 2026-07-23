/*
 * XREFs of sub_140908F2C @ 0x140908F2C
 * Callers:
 *     sub_14084685C @ 0x14084685C (sub_14084685C.c)
 *     sub_140846BEC @ 0x140846BEC (sub_140846BEC.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     MmFreePagesFromMdl @ 0x140221A10 (MmFreePagesFromMdl.c)
 *     RtlSetAllBits @ 0x140262CA0 (RtlSetAllBits.c)
 *     MmUnmapLockedPages @ 0x1402BB4E0 (MmUnmapLockedPages.c)
 *     RtlClearBits @ 0x140347580 (RtlClearBits.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     sub_1403CDDB0 @ 0x1403CDDB0 (sub_1403CDDB0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140456892 @ 0x140456892 (sub_140456892.c)
 *     sub_140512B00 @ 0x140512B00 (sub_140512B00.c)
 *     sub_140513BCC @ 0x140513BCC (sub_140513BCC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140908F2C(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r14d
  unsigned int v3; // esi
  _RTL_BITMAP *v5; // rax
  _RTL_BITMAP *v6; // rbx
  char v8; // r15
  ULONG v9; // eax
  unsigned __int64 v10; // rcx
  __int64 v11; // rsi
  bool v12; // zf
  int v13; // r12d
  __int64 v14; // rax
  __int64 v15; // rcx
  PVOID v16; // rbx
  __int64 v17; // r13
  void *v18; // rax
  __int64 v19; // rcx
  void *v20; // r12
  unsigned __int64 QuadPart; // r8
  __int64 v22; // rcx
  struct _MDL *v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rbx
  ULONG v26; // eax
  __int64 v27; // rdx
  _QWORD *v28; // r12
  unsigned __int64 v29; // r13
  _QWORD *v30; // rax
  _QWORD *v31; // rdx
  _QWORD *v32; // rbx
  unsigned __int64 v33; // rbx
  PVOID BaseAddress; // [rsp+30h] [rbp-18h] BYREF
  PHYSICAL_ADDRESS v35; // [rsp+38h] [rbp-10h]
  int v36; // [rsp+90h] [rbp+48h]
  ULONG v37; // [rsp+90h] [rbp+48h]
  ULONG NumberToClear; // [rsp+98h] [rbp+50h]
  PMDL MemoryDescriptorList; // [rsp+A0h] [rbp+58h] BYREF
  PHYSICAL_ADDRESS v40; // [rsp+A8h] [rbp+60h] BYREF

  BaseAddress = 0LL;
  v40.QuadPart = 0LL;
  v2 = a2;
  MemoryDescriptorList = 0LL;
  v3 = (a2 + 31) & 0xFFFFFFE0;
  v5 = (_RTL_BITMAP *)sub_1403B1F04(a1, ((unsigned __int64)v3 >> 3) + 16);
  v6 = v5;
  if ( !v5 )
    return 3221225626LL;
  v5->SizeOfBitMap = v3;
  v5->Buffer = &v5[1].SizeOfBitMap;
  RtlSetAllBits(v5);
  *(_QWORD *)(a1 + 16) = v6;
  v8 = 1;
LABEL_4:
  v9 = sub_140512B00(a1, v2, &BaseAddress, &v40, &MemoryDescriptorList);
  v11 = v9;
  NumberToClear = v9;
  if ( !v9 )
    goto LABEL_18;
  v12 = *(_BYTE *)(a1 + 145) == 0;
  v35 = v40;
  if ( v12 )
  {
    v10 = (unsigned __int64)v40.QuadPart >> 16;
    v13 = ((((unsigned __int64)v9 << 12) + v40.QuadPart - 1) >> 16) - ((unsigned __int64)v40.QuadPart >> 16);
  }
  else
  {
    v13 = 0;
  }
  v14 = sub_1403B1F04(v10, 24LL);
  v16 = BaseAddress;
  v17 = v14;
  if ( !v14 )
  {
LABEL_13:
    v23 = MemoryDescriptorList;
    if ( MemoryDescriptorList )
    {
      if ( v16 )
        MmUnmapLockedPages(v16, MemoryDescriptorList);
      MmFreePagesFromMdl(v23);
      ExFreePoolWithTag(v23, 0);
    }
    else
    {
      MmFreeContiguousMemory(v16);
    }
LABEL_18:
    v25 = sub_140456892(a1);
    if ( !v25 )
      goto LABEL_19;
    v11 = NumberToClear;
    v26 = 0;
    v27 = 0LL;
    v28 = 0LL;
    v24 = 0LL;
    v29 = v25;
    while ( 1 )
    {
      v37 = v26;
      if ( v26 >= NumberToClear )
      {
        RtlClearBits(*(PRTL_BITMAP *)(a1 + 16), 0, NumberToClear);
        goto LABEL_43;
      }
      if ( v25 == v29 || v27 != v25 - 72 )
      {
        v30 = (_QWORD *)sub_1403B1F04(v24, 24LL);
        v24 = (__int64)v30;
        if ( !v30 )
        {
          if ( v28 )
          {
            v31 = *(_QWORD **)(a1 + 40);
            if ( v31 )
            {
              do
              {
                v32 = (_QWORD *)*v31;
                sub_1403B1B5C(v24, (__int64)v31);
                v31 = v32;
              }
              while ( v32 );
            }
          }
          if ( NumberToClear )
          {
            do
            {
              v33 = *(_QWORD *)(v29 + 8);
              sub_140513BCC(a1, v29);
              v29 = v33;
              --v11;
            }
            while ( v11 );
          }
LABEL_19:
          if ( v2 <= 1 )
          {
            sub_1403B1B5C(v24, *(_QWORD *)(a1 + 16));
            return 3221225626LL;
          }
          v2 >>= 1;
          goto LABEL_4;
        }
        if ( v28 )
          *v28 = v30;
        else
          *(_QWORD *)(a1 + 40) = v30;
        *v30 = 0LL;
        v28 = v30;
        v30[1] = 0LL;
        v30[2] = v25;
      }
      ++*(_DWORD *)(v24 + 8);
      v27 = v25;
      *(_QWORD *)(v25 + 48) &= 0xFFFFFFFFFFFFFFF3uLL;
      v25 = *(_QWORD *)(v25 + 8);
      v26 = v37 + 1;
    }
  }
  v36 = v13 + v11;
  v18 = (void *)sub_1403B1F04(v15, 72LL * (unsigned int)(v13 + v11));
  v20 = v18;
  if ( !v18 )
  {
LABEL_12:
    sub_1403B1B5C(v19, v17);
    goto LABEL_13;
  }
  *(_QWORD *)v17 = 0LL;
  *(_DWORD *)(v17 + 12) = 0;
  memset(v18, 0, 72 * v11);
  QuadPart = v35.QuadPart;
  *(_DWORD *)(v17 + 8) = v36;
  *(_QWORD *)(v17 + 16) = v20;
  *(_DWORD *)(a1 + 64) = 0;
  *(_QWORD *)(a1 + 40) = v17;
  *(_QWORD *)(a1 + 56) = v17;
  if ( !sub_1403CDDB0(a1, (__int64)v16, QuadPart, v11) )
  {
    sub_1403B1B5C(v22, *(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL));
    goto LABEL_12;
  }
  if ( MemoryDescriptorList )
  {
    *(_QWORD *)(a1 + 320) = MemoryDescriptorList;
    *(_QWORD *)(a1 + 328) = v16;
  }
  else
  {
    *(_QWORD *)(a1 + 320) = v16;
    v8 = 0;
  }
  *(_BYTE *)(a1 + 336) = v8;
LABEL_43:
  *(_DWORD *)(a1 + 224) = v11;
  return 0LL;
}
