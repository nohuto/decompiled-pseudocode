/*
 * XREFs of MmUnmapVideoDisplay @ 0x140215660
 * Callers:
 *     sub_140213908 @ 0x140213908 (sub_140213908.c)
 *     sub_140213AC0 @ 0x140213AC0 (sub_140213AC0.c)
 *     sub_140213C5C @ 0x140213C5C (sub_140213C5C.c)
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     sub_140214244 @ 0x140214244 (sub_140214244.c)
 *     sub_140215144 @ 0x140215144 (sub_140215144.c)
 *     sub_140396A68 @ 0x140396A68 (sub_140396A68.c)
 *     sub_1403AA8D8 @ 0x1403AA8D8 (sub_1403AA8D8.c)
 *     sub_1403BED70 @ 0x1403BED70 (sub_1403BED70.c)
 *     HalInitializeBios @ 0x1403D0150 (HalInitializeBios.c)
 *     sub_1403D9B80 @ 0x1403D9B80 (sub_1403D9B80.c)
 *     sub_140506DF0 @ 0x140506DF0 (sub_140506DF0.c)
 *     sub_140512EF0 @ 0x140512EF0 (sub_140512EF0.c)
 *     sub_140586E78 @ 0x140586E78 (sub_140586E78.c)
 *     sub_14062C800 @ 0x14062C800 (sub_14062C800.c)
 *     sub_140693800 @ 0x140693800 (sub_140693800.c)
 *     sub_14085FAA4 @ 0x14085FAA4 (sub_14085FAA4.c)
 *     sub_140931100 @ 0x140931100 (sub_140931100.c)
 *     sub_140969514 @ 0x140969514 (sub_140969514.c)
 *     sub_1409DC350 @ 0x1409DC350 (sub_1409DC350.c)
 *     sub_1409DC494 @ 0x1409DC494 (sub_1409DC494.c)
 *     sub_1409DC58C @ 0x1409DC58C (sub_1409DC58C.c)
 *     sub_1409DC80C @ 0x1409DC80C (sub_1409DC80C.c)
 *     sub_1409DCAD0 @ 0x1409DCAD0 (sub_1409DCAD0.c)
 *     sub_140A092FC @ 0x140A092FC (sub_140A092FC.c)
 *     sub_140A52AD8 @ 0x140A52AD8 (sub_140A52AD8.c)
 *     sub_140A52D84 @ 0x140A52D84 (sub_140A52D84.c)
 *     sub_140A5AEB0 @ 0x140A5AEB0 (sub_140A5AEB0.c)
 *     sub_140A61D50 @ 0x140A61D50 (sub_140A61D50.c)
 *     sub_140AF8D68 @ 0x140AF8D68 (sub_140AF8D68.c)
 *     sub_140AF8F6C @ 0x140AF8F6C (sub_140AF8F6C.c)
 *     sub_140AF910C @ 0x140AF910C (sub_140AF910C.c)
 *     sub_140B0F20C @ 0x140B0F20C (sub_140B0F20C.c)
 *     sub_140B1D9DC @ 0x140B1D9DC (sub_140B1D9DC.c)
 *     sub_140B2388C @ 0x140B2388C (sub_140B2388C.c)
 * Callees:
 *     sub_140215774 @ 0x140215774 (sub_140215774.c)
 *     sub_1402157EC @ 0x1402157EC (sub_1402157EC.c)
 *     sub_1402285E8 @ 0x1402285E8 (sub_1402285E8.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402BBAD0 @ 0x1402BBAD0 (sub_1402BBAD0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_1403A111C @ 0x1403A111C (sub_1403A111C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405B6E94 @ 0x1405B6E94 (sub_1405B6E94.c)
 */

void __stdcall MmUnmapVideoDisplay(PVOID BaseAddress, SIZE_T NumberOfBytes)
{
  SIZE_T v2; // r15
  unsigned __int64 v3; // rbp
  SIZE_T v4; // rbx
  int v5; // edi
  int v6; // r14d
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  SIZE_T v9; // r14
  unsigned int v10; // r13d
  __int64 v11; // rdi
  __int64 v12; // rbp
  unsigned __int64 v13; // rbx
  int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rcx
  bool v17; // zf
  _QWORD v20[24]; // [rsp+30h] [rbp-108h] BYREF

  v2 = NumberOfBytes;
  v3 = (unsigned __int64)BaseAddress;
  v4 = (((unsigned __int16)BaseAddress & 0xFFF) + NumberOfBytes + 4095) >> 12;
  if ( (dword_140D051BC & 1) != 0 )
    sub_1405B6E94(0LL);
  v5 = sub_140215774(v3);
  v6 = sub_1402FDD20(v3);
  if ( v5 )
    sub_1402157EC(v3, v4, 0LL);
  v7 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( !v6 )
  {
    sub_1402BB6D0(&qword_140C534C0, ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, (unsigned int)v4);
    return;
  }
  if ( (v2 & 0x1FFFFF) != 0 )
    goto LABEL_9;
  memset(v20, 0, 0xB8uLL);
  do
  {
    v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v6;
  }
  while ( v6 );
  v20[3] = 0LL;
  v9 = v2 >> 21;
  LODWORD(v20[1]) = 20;
  if ( v5 )
    goto LABEL_28;
  v10 = 0;
  v11 = sub_1402CCC50(768LL, v8);
  if ( !(_DWORD)v9 )
    goto LABEL_27;
  v12 = (unsigned int)v9;
  v10 = v2 >> 21;
  do
  {
    v13 = v11;
    v14 = 0;
    if ( !(unsigned int)sub_140317A80(v7) )
      goto LABEL_23;
    if ( (unsigned int)sub_140229550(v16, v15) )
    {
      v14 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_23;
      v17 = (v11 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_23;
      v17 = (v11 & 1) == 0;
    }
    if ( !v17 )
      v13 = v11 | 0x8000000000000000uLL;
LABEL_23:
    *(_QWORD *)v7 = v13;
    if ( v14 )
      sub_1402294F0(v7, v13);
    sub_1402285E8(v20, 1LL, v7);
    v7 += 8LL;
    --v12;
  }
  while ( v12 );
  v3 = (unsigned __int64)BaseAddress;
  v2 = NumberOfBytes;
LABEL_27:
  v7 -= 8LL * v10;
LABEL_28:
  if ( !(unsigned int)sub_1402BBAD0(&qword_140C534C0, v7, (unsigned int)v9) )
  {
    sub_14032F1B0(v20);
LABEL_9:
    sub_1403A111C(v3, v2, 9LL);
  }
}
