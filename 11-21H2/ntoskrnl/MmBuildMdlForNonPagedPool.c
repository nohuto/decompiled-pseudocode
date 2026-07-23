/*
 * XREFs of MmBuildMdlForNonPagedPool @ 0x14027C410
 * Callers:
 *     sub_14037A8BC @ 0x14037A8BC (sub_14037A8BC.c)
 *     sub_1403A0F08 @ 0x1403A0F08 (sub_1403A0F08.c)
 *     sub_1403A108C @ 0x1403A108C (sub_1403A108C.c)
 *     sub_14051416C @ 0x14051416C (sub_14051416C.c)
 *     sub_140543148 @ 0x140543148 (sub_140543148.c)
 *     sub_1405FB99C @ 0x1405FB99C (sub_1405FB99C.c)
 *     sub_140616CB0 @ 0x140616CB0 (sub_140616CB0.c)
 *     sub_1407084B0 @ 0x1407084B0 (sub_1407084B0.c)
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 *     sub_140931378 @ 0x140931378 (sub_140931378.c)
 *     sub_14096D10C @ 0x14096D10C (sub_14096D10C.c)
 *     sub_1409D7390 @ 0x1409D7390 (sub_1409D7390.c)
 *     sub_1409EC8CC @ 0x1409EC8CC (sub_1409EC8CC.c)
 * Callees:
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_14027C3BC @ 0x14027C3BC (sub_14027C3BC.c)
 *     sub_14027DD28 @ 0x14027DD28 (sub_14027DD28.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_1403B8520 @ 0x1403B8520 (sub_1403B8520.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

void __stdcall MmBuildMdlForNonPagedPool(PMDL MemoryDescriptorList)
{
  unsigned __int64 StartVa; // rdi
  PMDL v2; // r15
  ULONG_PTR v3; // rbx
  char *v4; // rdx
  unsigned __int64 v5; // r14
  int v7; // ebp
  ULONG_PTR v8; // rdi
  int v9; // r13d
  ULONG_PTR v10; // r12
  int v11; // r10d
  __int64 v12; // r9
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  CSHORT MdlFlags; // r8
  ULONG_PTR BugCheckParameter4; // rax
  __int64 v18; // rdx
  char v19; // r8
  __int64 v20; // rax
  __int64 v21; // [rsp+28h] [rbp-60h]
  unsigned __int64 v22; // [rsp+30h] [rbp-58h]
  unsigned __int64 v23; // [rsp+38h] [rbp-50h]
  unsigned __int64 v24; // [rsp+40h] [rbp-48h]
  __int64 v25; // [rsp+48h] [rbp-40h]
  ULONG_PTR v26; // [rsp+98h] [rbp+10h] BYREF

  StartVa = (unsigned __int64)MemoryDescriptorList->StartVa;
  v2 = MemoryDescriptorList + 1;
  v3 = 0LL;
  v4 = (char *)(StartVa + MemoryDescriptorList->ByteOffset);
  MemoryDescriptorList->Process = 0LL;
  MemoryDescriptorList->MappedSystemVa = v4;
  v5 = -1LL;
  v26 = 0LL;
  v7 = 0;
  v8 = ((StartVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v9 = 0;
  v10 = v8 + 8 * ((((unsigned __int16)v4 & 0xFFF) + (unsigned __int64)MemoryDescriptorList->ByteCount + 4095) >> 12);
  if ( v8 < v10 )
  {
    while ( v7 )
    {
      if ( v7 >= 2 )
        goto LABEL_24;
LABEL_12:
      v2->Next = (struct _MDL *)v5;
      MdlFlags = MemoryDescriptorList->MdlFlags;
      if ( (MdlFlags & 0x800) == 0
        && (v5 > qword_140C50840 || ((*(_QWORD *)(48 * v5 - 0x21FFFFFFFFD8LL) >> 54) & 1) == 0) )
      {
        MemoryDescriptorList->MdlFlags = MdlFlags | 0x800;
      }
      v2 = (PMDL)((char *)v2 + 8);
      v8 += 8LL;
      if ( (v8 & 0xFFF) != 0 )
      {
        if ( v7 == 1 )
          ++v5;
      }
      else
      {
        v7 = 0;
      }
      if ( v8 >= v10 )
        goto LABEL_19;
    }
    v11 = 4;
    v12 = 4LL;
    v22 = (((unsigned __int64)((__int64)(v8 << 25) >> 16) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v23 = ((v22 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v24 = ((v23 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v25 = ((v24 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      v13 = *(&v21 + v12--);
      --v11;
      v14 = *(_QWORD *)v13;
      if ( v13 >= 0xFFFFF6FB7DBED000uLL
        && v13 <= 0xFFFFF6FB7DBED7F8uLL
        && (dword_140D06880 & 0xC00000) != 0
        && *(_BYTE *)(*((_QWORD *)KeGetCurrentThread() + 23) + 912LL) != 1
        && (v14 & 1) != 0
        && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
      {
        v18 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1928LL);
        if ( v18 )
        {
          v19 = v14 | 0x20;
          v20 = *(_QWORD *)(v18 + 8 * ((v13 >> 3) & 0x1FF));
          if ( (v20 & 0x20) == 0 )
            v19 = v14;
          LOBYTE(v14) = v19;
          if ( (v20 & 0x42) != 0 )
            LOBYTE(v14) = v19 | 0x42;
        }
      }
      if ( (v14 & 1) == 0 )
        break;
      if ( (v14 & 0x80u) != 0LL )
      {
        if ( v11 )
        {
          v15 = sub_1403B8520((__int64)(v8 << 25) >> 16);
          v3 = v26;
          v5 = v15;
          v7 = 1;
          goto LABEL_12;
        }
        break;
      }
    }
    while ( v12 != 1 );
    v3 = sub_140317A10(v8);
    v9 = sub_14027B080((__int64)(v8 << 25) >> 16);
    if ( v9 == 5 )
      v7 = 3;
    else
      v7 = 2;
LABEL_24:
    if ( (v3 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x1240uLL, (ULONG_PTR)MemoryDescriptorList, v8, v3);
    if ( v7 == 3 )
      sub_14027C3BC((volatile signed __int64 *)v8);
    BugCheckParameter4 = sub_140317A10(v8);
    v26 = BugCheckParameter4;
    v3 = BugCheckParameter4;
    if ( (BugCheckParameter4 & 1) == 0 )
      KeBugCheckEx(0x1Au, 0x1241uLL, (ULONG_PTR)MemoryDescriptorList, v8, BugCheckParameter4);
    v5 = ((unsigned __int64)sub_140317A10(&v26) >> 12) & 0xFFFFFFFFFFLL;
    if ( v9 == 12 )
      sub_14027DD28((__int64)(v8 << 25) >> 16, v3, 1LL);
    goto LABEL_12;
  }
LABEL_19:
  MemoryDescriptorList->MdlFlags |= 4u;
}
