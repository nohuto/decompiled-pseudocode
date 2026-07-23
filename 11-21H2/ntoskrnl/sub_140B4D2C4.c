/*
 * XREFs of sub_140B4D2C4 @ 0x140B4D2C4
 * Callers:
 *     sub_1403BB76C @ 0x1403BB76C (sub_1403BB76C.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140213DA0 (MmFreeContiguousMemory.c)
 *     MmAllocateContiguousNodeMemory @ 0x140214190 (MmAllocateContiguousNodeMemory.c)
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_1403AEF08 @ 0x1403AEF08 (sub_1403AEF08.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140B4D2C4(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  int v3; // r14d
  int v4; // ebp
  __int64 v5; // rsi
  __int64 Pool2; // rax
  __int64 v7; // r9
  PVOID *v8; // r15
  unsigned int v10; // r13d
  _QWORD *v11; // rax
  char *ContiguousNodeMemory; // rax
  char *v13; // rdx
  char *v14; // rax
  __int64 v15; // rdx
  unsigned int i; // edi
  PVOID *v17; // rdi
  _QWORD *v18; // [rsp+30h] [rbp-48h]
  __int128 v19; // [rsp+38h] [rbp-40h] BYREF
  __int64 v20; // [rsp+48h] [rbp-30h]

  v19 = 0LL;
  v20 = 0LL;
  v2 = 0;
  v3 = 0;
  if ( !qword_140C4C558 )
    return 3221225659LL;
  sub_14042A5E0(&v19, a2);
  if ( (v19 & 1) == 0 )
    return 3221225659LL;
  v4 = DWORD2(v19);
  if ( HIDWORD(v20) && HIDWORD(v20) < DWORD2(v19) )
    v4 = HIDWORD(v20);
  v5 = v20;
  if ( !(_DWORD)v20 )
    v5 = 1LL;
  Pool2 = ExAllocatePool2(64LL, (unsigned int)((_DWORD)v5 << 6), 0x496C6148u);
  v8 = (PVOID *)Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v10 = 0;
  if ( (_DWORD)v5 )
  {
    v11 = (_QWORD *)(Pool2 + 16);
    v18 = v11;
    while ( 1 )
    {
      *((_DWORD *)v11 - 4) = v10;
      ContiguousNodeMemory = (char *)MmAllocateContiguousNodeMemory(0x2000LL, 0, -1, 0, 4, 0x80000000);
      v13 = ContiguousNodeMemory;
      *(v18 - 1) = ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
        break;
      *v18 = ContiguousNodeMemory + 4096;
      MmGetPhysicalAddress(ContiguousNodeMemory);
      v3 = sub_14042A5E0(v10, 85LL);
      if ( v3 < 0 )
        goto LABEL_21;
      ++v2;
      v11 = v18 + 8;
      ++v10;
      v18 += 8;
      if ( v10 >= (unsigned int)v5 )
        goto LABEL_15;
    }
    v3 = -1073741670;
LABEL_21:
    for ( i = 0; i < v2; ++i )
      sub_14042A5E0(i, v13);
    v17 = v8 + 1;
    do
    {
      if ( *v17 )
        MmFreeContiguousMemory(*v17);
      v17 += 8;
      --v5;
    }
    while ( v5 );
    ExFreePoolWithTag(v8, 0x496C6148u);
  }
  else
  {
LABEL_15:
    byte_140C4A119 = 1;
    dword_140C4A120 = v4;
    dword_140C4A11C = v5;
    qword_140C4A128 = (__int64)v8;
    if ( (_DWORD)v5 )
    {
      v14 = (char *)(v8 + 4);
      v15 = (unsigned int)v5;
      do
      {
        *((_QWORD *)v14 - 1) = 0LL;
        *(_QWORD *)v14 = 0LL;
        *((_DWORD *)v14 + 2) = 0;
        *((_QWORD *)v14 + 2) = sub_1405276C0;
        *((_QWORD *)v14 + 3) = sub_1405274F0;
        *((_DWORD *)v14 + 3) = 48;
        v14 += 64;
        --v15;
      }
      while ( v15 );
    }
    sub_1403AEF08(0xCEu, (int)sub_140527890, 12, v7, -1LL);
  }
  return (unsigned int)v3;
}
