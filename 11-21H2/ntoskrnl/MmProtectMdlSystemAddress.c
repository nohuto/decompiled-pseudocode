/*
 * XREFs of MmProtectMdlSystemAddress @ 0x140585D50
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402137E4 @ 0x1402137E4 (sub_1402137E4.c)
 *     sub_1402155C8 @ 0x1402155C8 (sub_1402155C8.c)
 *     sub_140215774 @ 0x140215774 (sub_140215774.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_1402FDD20 @ 0x1402FDD20 (sub_1402FDD20.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032BCC0 @ 0x14032BCC0 (sub_14032BCC0.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14033DBC0 @ 0x14033DBC0 (sub_14033DBC0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 */

NTSTATUS __stdcall MmProtectMdlSystemAddress(PMDL MemoryDescriptorList, ULONG NewProtect)
{
  int v4; // r15d
  unsigned __int64 MappedSystemVa; // rbp
  unsigned int v7; // eax
  unsigned int v8; // r14d
  __int64 v9; // rsi
  __int64 ByteCount; // rbx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbp
  int v13; // edi
  unsigned __int64 *v14; // rsi
  unsigned __int64 v15; // r12
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rdi
  int v21; // r8d
  int v22; // r15d
  unsigned __int64 v23; // rbx
  int v24; // edi
  int v25; // eax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdi
  int v28; // r15d
  unsigned __int64 v29; // rbx
  int v30; // [rsp+30h] [rbp-128h]
  __int64 v31; // [rsp+38h] [rbp-120h] BYREF
  unsigned __int64 v32; // [rsp+40h] [rbp-118h]
  _QWORD v33[24]; // [rsp+50h] [rbp-108h] BYREF

  memset(v33, 0, 0xB8uLL);
  v4 = 1;
  if ( (MemoryDescriptorList->MdlFlags & 1) == 0 )
    return -1073741799;
  MappedSystemVa = (unsigned __int64)MemoryDescriptorList->MappedSystemVa;
  if ( (unsigned int)sub_1402FDD20(MappedSystemVa) )
    return -1073741637;
  v7 = sub_14032BCC0(NewProtect);
  v8 = v7;
  if ( v7 == -1 || (v7 >> 3) - 1 <= 1 || v7 >> 3 == 3 && (v7 & 7) != 0 || (v7 & 5) == 5 )
    return -1073741755;
  v9 = (MappedSystemVa >> 9) & 0x7FFFFFFFF8LL;
  ByteCount = MemoryDescriptorList->ByteCount;
  v33[3] = 0LL;
  v11 = MappedSystemVa & 0xFFF;
  LODWORD(v33[1]) = 20;
  v12 = MappedSystemVa & 0xFFFFFFFFFFFFF000uLL;
  v13 = 0;
  v14 = (unsigned __int64 *)(v9 - 0x98000000000LL);
  v32 = (v11 + ByteCount + 4095) >> 12;
  v30 = 0;
  v15 = v12;
  while ( v32 )
  {
    BugCheckParameter4 = sub_140317A10((unsigned __int64)v14);
    v31 = BugCheckParameter4;
    if ( (BugCheckParameter4 & 1) != 0 )
    {
      v17 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v31) >> 12) & 0xFFFFFFFFFFLL;
      sub_1402CF280((__int64)v33, v15, 1LL, 0);
      if ( v15 == v12 )
        v30 = sub_140215774(v12);
    }
    else
    {
      if ( (BugCheckParameter4 & 0x800) == 0 || ((BugCheckParameter4 >> 5) & 0x1F) != 0x18 )
        KeBugCheckEx(0x1Au, 0x1235uLL, (ULONG_PTR)MemoryDescriptorList, (ULONG_PTR)v14, BugCheckParameter4);
      v18 = BugCheckParameter4;
      if ( qword_140C50780 )
      {
        if ( (BugCheckParameter4 & 0x10) != 0 )
          v18 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFEFuLL;
        else
          v18 = BugCheckParameter4 & ~qword_140C50780;
      }
      v17 = (v18 >> 12) & 0xFFFFFFFFFFLL;
      v4 = 0;
      if ( v15 == v12 )
      {
        if ( (BugCheckParameter4 & 8) != 0 )
          v13 = 1;
        v30 = v13;
      }
    }
    if ( v8 != 24 )
    {
      if ( v17 <= qword_140C50840 && ((*(_QWORD *)(48 * v17 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
      {
        v24 = sub_14026C61C(v8, 48 * v17 - 0x220000000000LL);
      }
      else
      {
        v24 = v8 & 7;
        v25 = sub_1402137E4(v17, 1);
        if ( v25 )
        {
          if ( v25 == 2 )
            v24 |= 0x18u;
        }
        else
        {
          v24 |= 8u;
        }
      }
      v26 = sub_1402CBD10((unsigned __int64)v14, v17, v24 | 0xA0000000);
      v31 = v26;
      v27 = v26;
      if ( v4 )
      {
        sub_14033DBC0((unsigned __int64)v14, v26);
LABEL_58:
        v13 = v30;
        if ( v30 && v15 == v12 )
          sub_1402155C8(v12);
        goto LABEL_38;
      }
      v28 = 0;
      v29 = v26;
      if ( sub_140317A80((unsigned __int64)v14) )
      {
        if ( (unsigned int)sub_140229550() )
        {
          v28 = 1;
          if ( !HIBYTE(word_140C51864) )
            goto LABEL_54;
        }
        else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
        {
LABEL_54:
          if ( (v27 & 1) != 0 )
            v29 = v27 | 0x8000000000000000uLL;
        }
      }
      *v14 = v29;
      if ( v28 )
        sub_1402294F0((__int64)v14, v29);
      goto LABEL_58;
    }
    v19 = sub_1402E4D28(v17, 24);
    v31 = v19;
    v20 = v19;
    if ( v21 && v15 == v12 )
    {
      v20 = v19 | 8;
      v31 = v19 | 8;
    }
    v22 = 0;
    v23 = v20;
    if ( sub_140317A80((unsigned __int64)v14) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        v22 = 1;
        if ( !HIBYTE(word_140C51864) )
          goto LABEL_33;
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      {
LABEL_33:
        if ( (v20 & 1) != 0 )
          v23 = v20 | 0x8000000000000000uLL;
      }
    }
    *v14 = v23;
    if ( v22 )
      sub_1402294F0((__int64)v14, v23);
    v13 = v30;
LABEL_38:
    v15 += 4096LL;
    ++v14;
    v4 = 1;
    --v32;
  }
  sub_14032F1B0((__int64)v33);
  return 0;
}
