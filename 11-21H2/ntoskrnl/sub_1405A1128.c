/*
 * XREFs of sub_1405A1128 @ 0x1405A1128
 * Callers:
 *     sub_14027AEA0 @ 0x14027AEA0 (sub_14027AEA0.c)
 *     sub_14059EDEC @ 0x14059EDEC (sub_14059EDEC.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     sub_1402BB6D0 @ 0x1402BB6D0 (sub_1402BB6D0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CF280 @ 0x1402CF280 (sub_1402CF280.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_1403095B0 @ 0x1403095B0 (sub_1403095B0.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_14032F1B0 @ 0x14032F1B0 (sub_14032F1B0.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140424FC0 @ 0x140424FC0 (sub_140424FC0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     KeInvalidateRangeAllCaches @ 0x140570E60 (KeInvalidateRangeAllCaches.c)
 *     sub_14059EF54 @ 0x14059EF54 (sub_14059EF54.c)
 *     sub_14059F4C4 @ 0x14059F4C4 (sub_14059F4C4.c)
 */

__int64 __fastcall sub_1405A1128(
        PMDL MemoryDescriptorList,
        _QWORD *BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        int a4,
        __int64 a5)
{
  __int64 v5; // rdi
  unsigned __int64 v10; // r14
  __int64 result; // rax
  int v12; // ecx
  __int64 v13; // rdi
  unsigned __int64 MappedSystemVa; // r12
  __int64 v15; // r13
  ULONG_PTR v16; // rax
  _QWORD *v17; // r15
  __int64 v18; // r14
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  int v21; // esi
  int v22; // eax
  unsigned int v23; // r11d
  unsigned int v24; // edi
  unsigned int v25; // esi
  int v26; // eax
  unsigned __int64 v27; // rdi
  int v28; // eax
  int v29; // r11d
  int v30; // eax
  int v31; // ecx
  size_t v32; // r8
  _DWORD *v33; // rdx
  unsigned __int64 v34; // r14
  __int64 v35; // r15
  struct _KTHREAD *CurrentThread; // rax
  BOOL v37; // eax
  __int64 *p_Size; // rcx
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // rbx
  int v41; // esi
  bool v42; // zf
  __int64 *v43; // rbx
  unsigned __int64 v44; // rax
  int v45; // r11d
  __int64 v46; // rdx
  int v47; // r8d
  bool v48; // zf
  __int64 v49; // r15
  __int64 *v50; // rsi
  int v51; // eax
  struct _KTHREAD *v52; // rdi
  unsigned int v53; // ecx
  __int64 v54; // rbx
  unsigned int v55; // edx
  int v56; // r9d
  struct _KTHREAD *v57; // rax
  int v58; // [rsp+30h] [rbp-D0h]
  unsigned int v59; // [rsp+30h] [rbp-D0h]
  unsigned int v61; // [rsp+38h] [rbp-C8h]
  unsigned int v62; // [rsp+3Ch] [rbp-C4h]
  unsigned int v63; // [rsp+40h] [rbp-C0h]
  __int64 v64; // [rsp+48h] [rbp-B8h] BYREF
  int v65; // [rsp+50h] [rbp-B0h]
  BOOL v66; // [rsp+54h] [rbp-ACh]
  __int64 v67; // [rsp+58h] [rbp-A8h]
  PMDL v68; // [rsp+60h] [rbp-A0h]
  __int64 v69; // [rsp+68h] [rbp-98h]
  ULONG_PTR BugCheckParameter3a; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter2a; // [rsp+78h] [rbp-88h]
  unsigned __int64 v72; // [rsp+80h] [rbp-80h]
  __int64 v73; // [rsp+88h] [rbp-78h]
  __int64 *v74; // [rsp+90h] [rbp-70h]
  __int64 v75; // [rsp+98h] [rbp-68h]
  __int128 v76; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v77; // [rsp+B0h] [rbp-50h]
  __int64 v78; // [rsp+C0h] [rbp-40h]
  _QWORD v79[24]; // [rsp+D0h] [rbp-30h] BYREF

  v5 = a5;
  BugCheckParameter3a = BugCheckParameter3;
  BugCheckParameter2a = (ULONG_PTR)BugCheckParameter2;
  v69 = a5;
  v78 = 0LL;
  v76 = 0LL;
  v77 = 0LL;
  memset(v79, 0, 0xB8uLL);
  v10 = (((LODWORD(MemoryDescriptorList->StartVa) + MemoryDescriptorList->ByteOffset) & 0xFFF)
       + (unsigned __int64)MemoryDescriptorList->ByteCount
       + 4095) >> 12;
  v63 = v10;
  v58 = a4 != 0 ? 4 : 1;
  v65 = a4 != 0 ? 1 : 4;
  result = sub_14059F4C4((__int64)&v76, BugCheckParameter2, BugCheckParameter3, a4 == 0);
  v12 = result;
  if ( (int)result < 0 )
  {
LABEL_4:
    if ( a4 )
      KeBugCheckEx(0x1Au, 0x14000uLL, (ULONG_PTR)BugCheckParameter2, BugCheckParameter3, v12);
    *(_QWORD *)(v5 + 8) = 0LL;
    *(_DWORD *)v5 = v12;
    return result;
  }
  v13 = v77;
  result = 0x8000000000000000uLL;
  if ( (_QWORD)v77 == 0x8000000000000000uLL )
  {
    v5 = v69;
    v12 = -1073740023;
    goto LABEL_4;
  }
  v42 = (MemoryDescriptorList->MdlFlags & 5) == 0;
  v64 = v77;
  if ( v42 )
    MappedSystemVa = (unsigned __int64)MmMapLockedPagesSpecifyCache(
                                         MemoryDescriptorList,
                                         0,
                                         MmCached,
                                         0LL,
                                         0,
                                         a4 != 0 ? -1073741808 : 1073741840);
  else
    MappedSystemVa = (unsigned __int64)MemoryDescriptorList->MappedSystemVa;
  if ( !MappedSystemVa )
  {
    v15 = 0LL;
    v67 = 2LL;
LABEL_49:
    v34 = qword_140C53268;
    WORD2(v79[0]) = 0;
    v79[1] = 20LL;
    LODWORD(v79[0]) = 0;
    v79[2] = 0LL;
    v72 = qword_140C53268 + 8;
    v79[3] = 0LL;
    v74 = (__int64 *)qword_140C53268;
    v73 = 0LL;
    v35 = qword_140C53268 << 25 >> 16;
    v68 = MemoryDescriptorList + 1;
    v25 = 0;
    CurrentThread = KeGetCurrentThread();
    v75 = v35;
    v61 = 0;
    --*((_WORD *)CurrentThread + 243);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4F470, 0LL);
    v62 = 0;
    if ( !v63 )
    {
LABEL_90:
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4F470, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&qword_140C4F470);
      v52 = KeGetCurrentThread();
      if ( (unsigned __int64)&qword_140C4F470 - qword_140C50630 >= 0x8000000000LL )
        v53 = -1;
      else
        v53 = sub_140287F30(*((_QWORD *)v52 + 23));
      _disable();
      v54 = (__int64)v52 + 1696;
      v55 = 0;
      while ( (*(_QWORD *)v54 & 0x7FFFFFFFFFFFFFFCLL) != ((unsigned __int64)&qword_140C4F470 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(v54 + 18)
           || (*(_DWORD *)v54 & 1) != 0
           || *(_DWORD *)(v54 + 8) != v53 )
      {
        ++v55;
        v54 += 96LL;
        if ( v55 >= 6 )
          goto LABEL_103;
      }
      *(_BYTE *)(v54 + 18) = 0;
      if ( !v54 )
      {
LABEL_103:
        if ( (*((_DWORD *)v52 + 30) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)v52, (ULONG_PTR)&qword_140C4F470, v53, 0LL);
        _enable();
        goto LABEL_111;
      }
      if ( *(__int64 *)v54 < 0 )
      {
        *(_BYTE *)v54 |= 2u;
        _enable();
        sub_14034EE30(v54);
        _disable();
      }
      v56 = *(_DWORD *)(v54 + 88);
      *(_DWORD *)(v54 + 88) = 0;
      *(_BYTE *)(v54 + 17) = 0;
      *(_QWORD *)v54 = 0LL;
      *((_BYTE *)v52 + 792) |= 1 << *(_BYTE *)(v54 + 16);
      _enable();
      if ( v56 )
        sub_14022B568((ULONG_PTR)v52, (__int64)&qword_140C4F470, v56);
LABEL_111:
      v57 = KeGetCurrentThread();
      v42 = (*((_WORD *)v57 + 243))++ == 0xFFFF;
      if ( v42 && *((struct _KTHREAD **)v57 + 19) != (struct _KTHREAD *)((char *)v57 + 152) )
        KiCheckForKernelApcDelivery();
      v33 = (_DWORD *)v69;
      *(_QWORD *)(v69 + 8) = v25 << 12;
      goto LABEL_47;
    }
    v59 = v58 | 0xA0000000;
    v37 = sub_140317A80(v34);
    p_Size = (__int64 *)v68;
    v66 = v37;
    while ( 1 )
    {
      if ( v15 )
        goto LABEL_63;
      v39 = v72;
      v40 = sub_1402CBD10(v72, *p_Size, v65 | 0x20000000u);
      v41 = 0;
      if ( sub_140317A80(v39) )
      {
        if ( (unsigned int)sub_140229550() )
        {
          v41 = 1;
          if ( !HIBYTE(word_140C51864) )
          {
            v42 = (v40 & 1) == 0;
            goto LABEL_58;
          }
        }
        else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
        {
          v42 = (v40 & 1) == 0;
LABEL_58:
          if ( !v42 )
            v40 |= 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v39 = v40;
      if ( v41 )
        sub_1402294F0(v39, v40);
      v25 = v61;
      MappedSystemVa = (__int64)((v39 << 25) - v73) >> 16;
LABEL_63:
      v43 = v74;
      v44 = sub_1402CBD10((unsigned __int64)v74, v64, v59);
      v45 = 0;
      v46 = v44;
      v47 = 0;
      if ( !v66 )
        goto LABEL_71;
      if ( (unsigned int)sub_140229550() )
      {
        v47 = v45 + 1;
        if ( HIBYTE(word_140C51864) != (_BYTE)v45 )
          goto LABEL_71;
        v48 = ((unsigned __int8)v46 & (unsigned __int8)(v45 + 1)) == 0;
      }
      else
      {
        if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
          goto LABEL_71;
        v48 = (v46 & 1) == 0;
      }
      if ( !v48 )
        v46 |= 0x8000000000000000uLL;
LABEL_71:
      *v43 = v46;
      if ( v47 )
        sub_1402294F0((__int64)v43, v46);
      if ( a4 == v45 )
      {
        memmove((void *)MappedSystemVa, (const void *)v35, 0x1000uLL);
      }
      else
      {
        memmove((void *)v35, (const void *)MappedSystemVa, 0x1000uLL);
        if ( !byte_140C5072C )
        {
          if ( _bittest64(&qword_140D068D8, 0x24u) )
            sub_140424FC0(v35, 4096LL);
          else
            KeInvalidateRangeAllCaches((PVOID)v35, 0x1000u);
        }
      }
      v61 = v25 + 1;
      if ( v15 )
        MappedSystemVa += 4096LL;
      v49 = v67;
      v50 = v43;
      do
      {
        if ( sub_140317A80((unsigned __int64)v50) && (unsigned int)sub_140229550() )
        {
          *v50 = 0LL;
          sub_1402294F0((__int64)v50, 0LL);
        }
        else
        {
          *v50 = 0LL;
        }
        ++v50;
        --v49;
      }
      while ( v49 );
      v35 = v75;
      sub_1402CF280((__int64)v79, v75, v67, 0);
      sub_14032F1B0((__int64)v79);
      v25 = v61;
      if ( v61 != v63 )
      {
        v51 = sub_14059EF54((__int64)&v76, &v64);
        if ( v51 < 0 )
        {
          if ( a4 )
            KeBugCheckEx(0x1Au, 0x14000uLL, BugCheckParameter2a, BugCheckParameter3a, v51);
          goto LABEL_90;
        }
      }
      p_Size = (__int64 *)&v68->Size;
      ++v62;
      v68 = (PMDL)((char *)v68 + 8);
      if ( v62 >= v63 )
        goto LABEL_90;
    }
  }
  v15 = ((MappedSystemVa >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v16 = sub_1403095B0((__int64)&qword_140C534C0, v10);
  v17 = (_QWORD *)v16;
  if ( !v16 )
  {
    v67 = 1LL;
    goto LABEL_49;
  }
  v18 = (__int64)(v16 << 25) >> 16;
  v19 = sub_1402CBD10(v16, v13, v58 | 0xA0000000);
  v20 = v19;
  v21 = 0;
  if ( sub_140317A80((unsigned __int64)v17) )
  {
    v22 = sub_140229550();
    v23 = 1;
    if ( v22 )
    {
      v21 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_20;
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
    {
      goto LABEL_20;
    }
    if ( (v19 & 1) != 0 )
      v20 = v19 | 0x8000000000000000uLL;
  }
  else
  {
    v23 = 1;
  }
LABEL_20:
  *v17 = v20;
  if ( v21 )
    sub_1402294F0((__int64)v17, v20);
  v24 = v63;
  v25 = v23;
  if ( v63 <= v23 )
  {
LABEL_37:
    v31 = a4;
    goto LABEL_38;
  }
  while ( 1 )
  {
    v26 = sub_14059EF54((__int64)&v76, &v64);
    if ( v26 < 0 )
      break;
    v19 ^= (v19 ^ (v64 << 12)) & 0xFFFFFFFFFF000LL;
    v27 = v19;
    if ( sub_140317A80((unsigned __int64)&v17[v25]) )
    {
      v28 = sub_140229550();
      v29 = 1;
      if ( v28 )
      {
        v30 = 1;
        if ( !HIBYTE(word_140C51864) && (v19 & 1) != 0 )
          v27 = v19 | 0x8000000000000000uLL;
        goto LABEL_34;
      }
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v19 & 1) != 0 )
        v27 = v19 | 0x8000000000000000uLL;
    }
    else
    {
      v29 = 1;
    }
    v30 = 0;
LABEL_34:
    v17[v25] = v27;
    if ( v30 )
      sub_1402294F0((__int64)&v17[v25], v27);
    v24 = v63;
    v25 += v29;
    if ( v25 >= v63 )
      goto LABEL_37;
  }
  v31 = a4;
  if ( a4 )
    KeBugCheckEx(0x1Au, 0x14000uLL, BugCheckParameter2a, BugCheckParameter3a, v26);
LABEL_38:
  v32 = v25 << 12;
  if ( v31 )
  {
    memmove((void *)v18, (const void *)MappedSystemVa, v32);
    if ( !byte_140C5072C )
    {
      if ( _bittest64(&qword_140D068D8, 0x24u) )
        sub_140424FC0(v18, 4096LL);
      else
        KeInvalidateRangeAllCaches((PVOID)v18, 0x1000u);
    }
  }
  else
  {
    memmove((void *)MappedSystemVa, (const void *)v18, v32);
  }
  sub_1402BB6D0((__int64)&qword_140C534C0, v17, v24);
  v33 = (_DWORD *)v69;
  *(_QWORD *)(v69 + 8) = v25 << 12;
LABEL_47:
  result = v25 == 0 ? 0xC0000709 : 0;
  *v33 = result;
  return result;
}
