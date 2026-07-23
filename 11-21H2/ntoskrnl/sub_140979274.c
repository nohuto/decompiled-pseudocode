/*
 * XREFs of sub_140979274 @ 0x140979274
 * Callers:
 *     sub_14097B500 @ 0x14097B500 (sub_14097B500.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14024B428 @ 0x14024B428 (sub_14024B428.c)
 *     sub_140250BDC @ 0x140250BDC (sub_140250BDC.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CBF80 @ 0x1402CBF80 (sub_1402CBF80.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     sub_140313C70 @ 0x140313C70 (sub_140313C70.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     MmProbeAndLockPages @ 0x140319E90 (MmProbeAndLockPages.c)
 *     sub_14032BCC0 @ 0x14032BCC0 (sub_14032BCC0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056D1E8 @ 0x14056D1E8 (sub_14056D1E8.c)
 *     sub_14058DE04 @ 0x14058DE04 (sub_14058DE04.c)
 *     sub_1405A8968 @ 0x1405A8968 (sub_1405A8968.c)
 *     sub_1405A9530 @ 0x1405A9530 (sub_1405A9530.c)
 *     sub_1405A95FC @ 0x1405A95FC (sub_1405A95FC.c)
 *     sub_1405A9F00 @ 0x1405A9F00 (sub_1405A9F00.c)
 *     sub_1405AA07C @ 0x1405AA07C (sub_1405AA07C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140979274(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        char a3,
        unsigned __int64 a4,
        void *Src,
        __int64 a6,
        int a7,
        _QWORD *a8,
        _DWORD *a9)
{
  unsigned __int64 v11; // r12
  char *v12; // r14
  unsigned int v13; // eax
  int v14; // r8d
  __int64 v15; // r9
  int v16; // r13d
  int v18; // ecx
  int v19; // ebx
  signed int v20; // ebx
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rbx
  int v23; // esi
  __int64 v24; // r9
  unsigned __int64 v25; // rax
  unsigned int v26; // ebx
  char v27; // al
  unsigned __int64 v28; // rcx
  char *v29; // r15
  char *v30; // r15
  unsigned __int64 v31; // rax
  ULONG_PTR v32; // r12
  unsigned __int64 v33; // rax
  BOOL v36; // [rsp+40h] [rbp-1C8h]
  unsigned int v37; // [rsp+44h] [rbp-1C4h]
  int v38; // [rsp+50h] [rbp-1B8h]
  unsigned __int64 v40; // [rsp+60h] [rbp-1A8h]
  unsigned __int64 v41; // [rsp+68h] [rbp-1A0h]
  unsigned __int64 v42; // [rsp+78h] [rbp-190h]
  __int64 v44; // [rsp+90h] [rbp-178h]
  __int64 v45; // [rsp+A0h] [rbp-168h]
  char *v46; // [rsp+A8h] [rbp-160h]
  __int128 v47; // [rsp+B0h] [rbp-158h] BYREF
  __int64 v48; // [rsp+C0h] [rbp-148h]
  _OWORD v49[3]; // [rsp+C8h] [rbp-140h] BYREF
  struct _MDL MemoryDescriptorList[4]; // [rsp+100h] [rbp-108h] BYREF

  v11 = (unsigned __int64)Src;
  memset(v49, 0, sizeof(v49));
  v47 = 0LL;
  v48 = 0LL;
  memset(MemoryDescriptorList, 0, 0xB8uLL);
  v12 = 0LL;
  v13 = sub_14032BCC0(a7 & 0x5FFFFFFF);
  v16 = v13;
  if ( (v13 & 7) == 0 || v13 > 7 || (v13 & 5) == 5 )
    return 3221225541LL;
  if ( (v13 & 2) != 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2512LL) & 0x100) != 0
      && (*((_DWORD *)KeGetCurrentThread() + 344) & 0x40000) == 0 )
    {
      return 3221227012LL;
    }
    v14 |= 4u;
  }
  v18 = v14 | 2;
  if ( (v13 & 4) == 0 )
    v18 = v14;
  v38 = (32 * (*(_DWORD *)(a2 + 64) & 2)) | v18 | 1;
  if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
    v16 = v13 & 2 | 4;
  sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v49, v15);
  v19 = -(sub_1405A8968(a4, a6 + a4 - 1, a2, BugCheckParameter1 + 1664) != 0);
  sub_1402D0930((__int64)v49, 0LL);
  v20 = v19 & 0xC0000018;
  if ( v20 < 0 )
    return (unsigned int)v20;
  v22 = sub_140313C70(a4);
  v40 = v22;
  v42 = v22 + 8 * (v21 - 1);
  if ( v21 > 0x14 )
    v21 = 20LL;
  sub_14024B428(v21 + 1, v21 + 1, (__int64)&v47);
  if ( !DWORD1(v47) )
    return 3221225626LL;
  if ( ((unsigned __int16)Src & 0xFFF) == 0 || (v12 = (char *)sub_1402828F0(256, 0x10000uLL, 0x44456D4Du)) != 0LL )
  {
    v44 = sub_14058DE04(BugCheckParameter1 + 1664);
    v23 = 0;
    *a8 = 0LL;
    v45 = (__int64)(*(_QWORD *)(a2 + 80) << 25) >> 16;
    while ( v22 <= v42 )
    {
      v25 = (__int64)(v42 - v22 + 8) >> 3;
      v26 = 16;
      if ( v25 < 0x10 )
        v26 = v25;
      v37 = v26;
      v27 = a3;
      if ( a3 == 1 )
      {
        if ( v26 )
        {
          v28 = ((unsigned __int64)v26 << 12) + v11;
          if ( v28 > 0x7FFFFFFF0000LL || v28 < v11 )
            MEMORY[0x7FFFFFFF0000] = 0;
        }
        v27 = 1;
      }
      if ( v12 )
      {
        memmove(v12, (const void *)v11, (unsigned __int64)v26 << 12);
        v29 = v12;
      }
      else if ( v27 == 1 )
      {
        MemoryDescriptorList[0].Next = 0LL;
        MemoryDescriptorList[0].Size = 8 * (((((unsigned __int64)v26 << 12) + (v11 & 0xFFF) + 4095) >> 12) + 6);
        MemoryDescriptorList[0].MdlFlags = 0;
        MemoryDescriptorList[0].StartVa = (PVOID)(v11 & 0xFFFFFFFFFFFFF000uLL);
        MemoryDescriptorList[0].ByteOffset = v11 & 0xFFF;
        MemoryDescriptorList[0].ByteCount = v26 << 12;
        MmProbeAndLockPages(MemoryDescriptorList, 0, IoReadAccess);
        v29 = (char *)MmMapLockedPagesSpecifyCache(MemoryDescriptorList, 0, MmCached, 0LL, 0, 0xC0000000);
        if ( !v29 )
          goto LABEL_21;
      }
      else
      {
        v29 = (char *)v11;
      }
      v46 = (char *)(((unsigned __int64)v26 << 12) + v11);
      sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v49, v24);
      v30 = &v29[-a4];
      while ( v26 )
      {
        v31 = sub_1405A9530(a2, v44);
        v32 = v31;
        if ( v31 == -1LL )
        {
          v23 = -1073741801;
          break;
        }
        v41 = (unsigned __int64)sub_1402CBF80((unsigned int *)&v47, v31, -1LL);
        v23 = sub_14056D1E8(v45, (__int64)&v30[a4], (__int64)(v41 << 25) >> 16, a4, v38, a9);
        v36 = 0;
        if ( sub_140317A80(v41) )
          v36 = sub_140229550() != 0;
        *(_QWORD *)v41 = 0LL;
        if ( v36 )
          sub_1402294F0(v41, 0LL);
        if ( v23 < 0 )
        {
          sub_1405A9F00(v32);
          break;
        }
        sub_1405A95FC(v32, v40, v16);
        v33 = sub_1402CBD10(v40, v32, v16 | 0x80000000);
        sub_1405AA07C(v40, v33, a2, 0, 1);
        a4 += 4096LL;
        v40 += 8LL;
        v26 = --v37;
        *a8 += 4096LL;
      }
      if ( (MemoryDescriptorList[0].MdlFlags & 2) != 0 )
        MmUnlockPages(MemoryDescriptorList);
      sub_1402D0930((__int64)v49, 0LL);
      v11 = (unsigned __int64)v46;
      v22 = v40;
    }
  }
  else
  {
LABEL_21:
    v23 = -1073741670;
  }
  if ( (MemoryDescriptorList[0].MdlFlags & 2) != 0 )
    MmUnlockPages(MemoryDescriptorList);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  sub_140250BDC((__int64)&v47);
  return (unsigned int)v23;
}
