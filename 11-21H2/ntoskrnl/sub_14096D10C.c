/*
 * XREFs of sub_14096D10C @ 0x14096D10C
 * Callers:
 *     MmRotatePhysicalView @ 0x140660170 (MmRotatePhysicalView.c)
 * Callees:
 *     sub_140200CF0 @ 0x140200CF0 (sub_140200CF0.c)
 *     sub_140215AA8 @ 0x140215AA8 (sub_140215AA8.c)
 *     MmSizeOfMdl @ 0x140231480 (MmSizeOfMdl.c)
 *     MmBuildMdlForNonPagedPool @ 0x14027C410 (MmBuildMdlForNonPagedPool.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     sub_1402B2E00 @ 0x1402B2E00 (sub_1402B2E00.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14059519C @ 0x14059519C (sub_14059519C.c)
 *     sub_1405952D8 @ 0x1405952D8 (sub_1405952D8.c)
 *     sub_1405954F4 @ 0x1405954F4 (sub_1405954F4.c)
 *     sub_14096D0B8 @ 0x14096D0B8 (sub_14096D0B8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14096D10C(__int64 a1, __int64 a2, SIZE_T a3, __int64 a4, __int64 a5, SIZE_T *a6)
{
  SIZE_T v9; // rax
  struct _MDL *v10; // r14
  SIZE_T v11; // rax
  struct _MDL *v12; // r15
  CSHORT v13; // di
  unsigned int v14; // eax
  int v15; // eax
  __int64 ByteCount; // rcx
  int v17; // ebx
  unsigned __int64 *v18; // rdi
  unsigned __int64 i; // rbx
  __int64 v20; // rsi
  int v22; // [rsp+20h] [rbp-1F8h]
  _BYTE v23[192]; // [rsp+40h] [rbp-1D8h] BYREF
  _BYTE v24[192]; // [rsp+100h] [rbp-118h] BYREF

  memset(v23, 0, 0xB8uLL);
  memset(v24, 0, 0xB8uLL);
  if ( a3 <= 0x10000 )
    goto LABEL_7;
  if ( a3 > 0xFFFFFFFF
    || (v9 = MmSizeOfMdl((PVOID)a2, a3), (v10 = (struct _MDL *)sub_1402828F0(64, v9, 0x6F666E49u)) == 0LL) )
  {
    a3 = 0x10000LL;
LABEL_7:
    v10 = (struct _MDL *)v23;
    goto LABEL_8;
  }
  v11 = MmSizeOfMdl((PVOID)a2, a3);
  v12 = (struct _MDL *)sub_1402828F0(64, v11, 0x6F666E49u);
  if ( v12 )
    goto LABEL_9;
  a3 = 0x10000LL;
LABEL_8:
  v12 = (struct _MDL *)v24;
LABEL_9:
  v10->Next = 0LL;
  v10->MdlFlags = 0;
  v10->ByteCount = a3;
  v10->ByteOffset = a2 & 0xFFF;
  v10->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  v13 = 8 * (((a3 + (a2 & 0xFFF) + 4095) >> 12) + 6);
  v10->Size = v13;
  MmBuildMdlForNonPagedPool(v10);
  v10->MdlFlags |= 0x2000u;
  v12->Next = 0LL;
  v12->Size = v13;
  v12->StartVa = (PVOID)(a2 & 0xFFFFFFFFFFFFF000uLL);
  v12->ByteOffset = a2 & 0xFFF;
  v12->ByteCount = a3;
  v12->MdlFlags = 0x2000;
  v14 = sub_140200CF0(a1);
  v15 = sub_1405954F4((ULONG_PTR)v12, a1, v14);
  ByteCount = v12->ByteCount;
  v17 = v15;
  v22 = v15;
  if ( ByteCount != a3 )
  {
    a3 = (unsigned int)ByteCount;
    v10->ByteCount = ByteCount;
    LODWORD(ByteCount) = v12->ByteCount;
  }
  if ( (_DWORD)ByteCount )
  {
    if ( (int)sub_14042A5E0(v12, v10) < 0 )
      sub_1405952D8((__int64)v12, (__int64)v10, a1);
    sub_14059519C((__int64)v12, a1);
    v18 = (unsigned __int64 *)&v10[1];
    for ( i = (unsigned __int64)v10->ByteCount >> 12; i; --i )
    {
      v20 = *v18;
      if ( !(unsigned int)sub_1402B2E00(*v18) )
        sub_140215AA8(1, v20, 1uLL);
      ++v18;
    }
    v17 = v22;
  }
  if ( (WORD2(xmmword_140D06900[0]) & 0x8000) != 0 && a3 )
    sub_14096D0B8(a2, a3, 2);
  if ( v10 != (struct _MDL *)v23 )
    ExFreePoolWithTag(v10, 0);
  if ( v12->ByteCount )
    MmUnlockPages(v12);
  if ( v12 != (struct _MDL *)v24 )
    ExFreePoolWithTag(v12, 0);
  *a6 = a3;
  return v17 != 0 ? 0x40000019 : 0;
}
