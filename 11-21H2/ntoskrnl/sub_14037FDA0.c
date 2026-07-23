/*
 * XREFs of sub_14037FDA0 @ 0x14037FDA0
 * Callers:
 *     sub_14037FC84 @ 0x14037FC84 (sub_14037FC84.c)
 *     sub_1405FA770 @ 0x1405FA770 (sub_1405FA770.c)
 * Callees:
 *     sub_1402210C0 @ 0x1402210C0 (sub_1402210C0.c)
 *     sub_14022B568 @ 0x14022B568 (sub_14022B568.c)
 *     sub_140238A40 @ 0x140238A40 (sub_140238A40.c)
 *     RtlCompressBuffer @ 0x140244760 (RtlCompressBuffer.c)
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     sub_14034EE30 @ 0x14034EE30 (sub_14034EE30.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlComputeCrc32 @ 0x140369820 (RtlComputeCrc32.c)
 *     sub_14037E8DC @ 0x14037E8DC (sub_14037E8DC.c)
 *     sub_14037EC9C @ 0x14037EC9C (sub_14037EC9C.c)
 *     sub_1403800F0 @ 0x1403800F0 (sub_1403800F0.c)
 *     sub_1403812B0 @ 0x1403812B0 (sub_1403812B0.c)
 *     sub_1403815D4 @ 0x1403815D4 (sub_1403815D4.c)
 *     sub_1403817C4 @ 0x1403817C4 (sub_1403817C4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1405FD8C0 @ 0x1405FD8C0 (sub_1405FD8C0.c)
 */

__int64 __fastcall sub_14037FDA0(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  int v5; // eax
  unsigned int v8; // edx
  int v9; // edi
  __int64 v10; // rsi
  int v11; // ecx
  UCHAR *v12; // r14
  void *v13; // r15
  ULONG v14; // edx
  int v15; // r13d
  unsigned int v16; // r12d
  size_t v17; // r8
  UCHAR *v18; // rcx
  UCHAR *v19; // rdx
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  ULONG v22; // ecx
  int *v23; // rdi
  int v24; // eax
  __int64 v25; // rax
  ULONG_PTR v27; // rsi
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v29; // ecx
  __int64 v30; // rdi
  unsigned int v31; // edx
  int v32; // r8d
  struct _KTHREAD *v33; // rcx
  bool v34; // zf
  int v35; // eax
  UCHAR *v36; // rdi
  unsigned int v37; // ecx
  int v38; // ecx
  ULONG v39; // r9d
  int v40; // r9d
  ULONG *v41; // rcx
  __int64 v42; // rcx
  ULONG32 v43; // eax
  char UncompressedChunkSize; // [rsp+28h] [rbp-51h]
  PULONG FinalCompressedSize; // [rsp+30h] [rbp-49h]
  ULONG Length; // [rsp+40h] [rbp-39h] BYREF
  int v47; // [rsp+44h] [rbp-35h] BYREF
  ULONG32 *v48; // [rsp+48h] [rbp-31h] BYREF
  ULONG32 *v49; // [rsp+50h] [rbp-29h]
  unsigned int *v50; // [rsp+58h] [rbp-21h]
  int *v51; // [rsp+60h] [rbp-19h]
  __int64 v52; // [rsp+68h] [rbp-11h]
  __int64 v53; // [rsp+70h] [rbp-9h] BYREF
  int v54; // [rsp+78h] [rbp-1h]

  v51 = (int *)a2;
  v53 = 0LL;
  v54 = 0;
  v5 = *(_DWORD *)(a1 + 776);
  v8 = *(_DWORD *)a2 & 7;
  v52 = a3;
  v50 = a4;
  v48 = 0LL;
  v47 = 0;
  if ( ((unsigned __int8)v5 == 0 ? 7 : 0) < v8 )
    v8 = (unsigned __int8)v5 == 0 ? 7 : 0;
  v9 = sub_1403817C4(a1, v8, *a4, (unsigned int)&v48, (__int64)&v47);
  if ( v9 >= 0 )
  {
    v10 = *(_QWORD *)(a1 + 800);
    if ( (*(_BYTE *)(v10 + 6021) & 4) != 0 )
    {
      v27 = v10 + 6024;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v27, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v27);
      CurrentThread = KeGetCurrentThread();
      if ( v27 - qword_140C50630 >= 0x8000000000LL )
        v29 = -1;
      else
        v29 = sub_140287F30(*((_QWORD *)CurrentThread + 23));
      _disable();
      v30 = (__int64)CurrentThread + 1696;
      v31 = 0;
      while ( (*(_QWORD *)v30 & 0x7FFFFFFFFFFFFFFCLL) != (v27 & 0x7FFFFFFFFFFFFFFCLL)
           || !*(_BYTE *)(v30 + 18)
           || (*(_DWORD *)v30 & 1) != 0
           || *(_DWORD *)(v30 + 8) != v29 )
      {
        ++v31;
        v30 += 96LL;
        if ( v31 >= 6 )
          goto LABEL_34;
      }
      *(_BYTE *)(v30 + 18) = 0;
      if ( !v30 )
      {
LABEL_34:
        if ( (*((_DWORD *)CurrentThread + 30) & 0x10000) == 0 )
          KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v27, v29, 0LL);
        _enable();
        goto LABEL_41;
      }
      if ( *(__int64 *)v30 < 0 )
      {
        *(_BYTE *)v30 |= 2u;
        _enable();
        sub_14034EE30(v30);
        _disable();
      }
      v32 = *(_DWORD *)(v30 + 88);
      *(_DWORD *)(v30 + 88) = 0;
      *(_BYTE *)(v30 + 17) = 0;
      *(_QWORD *)v30 = 0LL;
      *((_BYTE *)CurrentThread + 792) |= 1 << *(_BYTE *)(v30 + 16);
      _enable();
      if ( v32 )
        sub_14022B568((ULONG_PTR)CurrentThread, v27, v32);
LABEL_41:
      v33 = KeGetCurrentThread();
      v34 = (*((_WORD *)v33 + 243))++ == 0xFFFF;
      if ( v34 && *((struct _KTHREAD **)v33 + 19) != (struct _KTHREAD *)((char *)v33 + 152) )
        KiCheckForKernelApcDelivery();
    }
    v11 = *(_DWORD *)a2;
    v12 = (UCHAR *)v48 + *(unsigned int *)(a1 + 824);
    v13 = *(void **)(a2 + 8);
    v49 = v48;
    if ( v11 >= 0 )
    {
      v35 = *(_DWORD *)(a1 + 776);
      if ( (v35 & 0x400) != 0 )
      {
        v14 = 4096;
      }
      else
      {
        if ( (v35 & 0x8000) != 0 )
        {
          memmove((void *)(*(_QWORD *)(a1 + 1784) + 4096LL), v13, 0x1000uLL);
          v11 = *(_DWORD *)a2;
          v13 = (void *)(*(_QWORD *)(a1 + 1784) + 4096LL);
        }
        v14 = 0;
      }
    }
    else
    {
      v14 = *(_DWORD *)(*(_QWORD *)(a3 + 16) + 40LL);
    }
    v15 = v47;
    v16 = *(_DWORD *)(a1 + 816) - (v47 & *(_DWORD *)(a1 + 808));
    Length = v14;
    if ( v11 < 0 )
    {
      v17 = v14;
      v18 = v12;
      v19 = (UCHAR *)v13;
      goto LABEL_9;
    }
    if ( v16 >= *(_DWORD *)(a1 + 820) )
      v36 = v12;
    else
      v36 = *(UCHAR **)(a1 + 1784);
    if ( !v14 )
    {
      if ( RtlCompressBuffer(
             *(_WORD *)(a1 + 992),
             (PUCHAR)v13,
             0x1000u,
             v36,
             0x1000u,
             0x1000u,
             &Length,
             *(PVOID *)(a1 + 896)) >= 0 )
      {
        v14 = Length;
      }
      else
      {
        v14 = 4096;
        Length = 4096;
      }
    }
    if ( v36 != v12 )
    {
      v37 = (v14 + *(_DWORD *)(a1 + 824) + 15) >> 4;
      *v50 = v37;
      if ( v37 > v16 )
      {
        v9 = -1073741267;
LABEL_62:
        sub_140238A40(*(_QWORD *)(a1 + 800));
        return (unsigned int)v9;
      }
    }
    if ( v14 > 0xFF0 )
    {
      if ( (*(_DWORD *)(a1 + 776) & 0x200) != 0 )
      {
        v9 = -1073740762;
        goto LABEL_62;
      }
      v14 = 4096;
      v36 = (UCHAR *)v13;
      Length = 4096;
    }
    if ( v36 == v12 )
      goto LABEL_10;
    v17 = v14;
    v18 = v12;
    v19 = v36;
LABEL_9:
    memmove(v18, v19, v17);
LABEL_10:
    if ( !*(_QWORD *)(a1 + 760) )
    {
      v9 = sub_14037E8DC(a1);
      if ( v9 < 0 )
        goto LABEL_62;
    }
    sub_140238A40(*(_QWORD *)(a1 + 800));
    v20 = sub_1403815D4(a1 + 192);
    v21 = v20;
    if ( !v20 )
      return (unsigned int)-1073741670;
    sub_1403812B0(a1, v20);
    *(_QWORD *)(v21 + 4) = 0LL;
    *(_DWORD *)v21 = v15;
    v22 = Length;
    if ( Length < 0x1000 )
    {
      *(_DWORD *)(v21 + 4) ^= ((unsigned __int16)Length ^ (unsigned __int16)*(_DWORD *)(v21 + 4)) & 0xFFF;
      v22 = Length;
    }
    v23 = v51;
    if ( *v51 >= 0 )
    {
      v48 = 0LL;
      sub_1402210C0(v12, v22, (__int64 *)&v48, 0LL);
      v24 = (int)v48;
    }
    else
    {
      v24 = *(_DWORD *)(v52 + 96);
    }
    *(_DWORD *)(v21 + 8) = v24;
    v25 = *(_QWORD *)(a1 + 1016);
    if ( *(_DWORD *)(v25 + 24) )
    {
      v38 = *(_DWORD *)(v25 + 8);
      v39 = Length;
      ++*(_QWORD *)(a1 + 1024);
      *(_DWORD *)(v21 + 12) = *(_DWORD *)(a1 + 1024);
      v40 = -v38 & (v38 + v39 - 1);
      v41 = v49;
      *(_WORD *)(v21 + 6) = *(_WORD *)(a1 + 1028);
      LODWORD(v53) = Length;
      HIDWORD(v53) = *(_DWORD *)(v21 + 12);
      FinalCompressedSize = v41;
      v42 = *(_QWORD *)(a1 + 1016);
      v54 = *(unsigned __int16 *)(v21 + 6);
      if ( (int)sub_1405FD8C0(
                  v42,
                  (_DWORD)v12,
                  (_DWORD)v12,
                  v40,
                  (__int64)&v53,
                  UncompressedChunkSize,
                  (__int64)FinalCompressedSize) < 0 )
      {
        v9 = -1073741174;
        goto LABEL_73;
      }
    }
    else if ( *(_BYTE *)(a1 + 776) )
    {
      v43 = RtlComputeCrc32(0, v12, Length);
      *v49 = v43;
    }
    v9 = sub_1403800F0(a1, v23, v21);
    if ( v9 >= 0 )
      return 0;
LABEL_73:
    sub_14037EC9C((_DWORD *)(a1 + 192), v21);
  }
  return (unsigned int)v9;
}
