/*
 * XREFs of sub_140664220 @ 0x140664220
 * Callers:
 *     NtConnectPort @ 0x1406640A0 (NtConnectPort.c)
 *     sub_140934110 @ 0x140934110 (sub_140934110.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406640F0 @ 0x1406640F0 (sub_1406640F0.c)
 *     sub_140667114 @ 0x140667114 (sub_140667114.c)
 *     sub_140667F24 @ 0x140667F24 (sub_140667F24.c)
 *     sub_140668084 @ 0x140668084 (sub_140668084.c)
 *     sub_140668444 @ 0x140668444 (sub_140668444.c)
 *     sub_14066846C @ 0x14066846C (sub_14066846C.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_140967A0C @ 0x140967A0C (sub_140967A0C.c)
 *     sub_140967A74 @ 0x140967A74 (sub_140967A74.c)
 *     sub_140967AE4 @ 0x140967AE4 (sub_140967AE4.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall sub_140664220(
        HANDLE *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        void *Src,
        unsigned __int64 a6,
        _DWORD *a7,
        volatile void *a8,
        unsigned int *a9)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  void *v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // r14d
  _DWORD *v23; // r14
  int v24; // edi
  ULONG_PTR v25; // r15
  unsigned int v26; // r13d
  int v27; // eax
  unsigned int v28; // eax
  int v30; // [rsp+20h] [rbp-1A8h]
  int v31; // [rsp+40h] [rbp-188h]
  int v32; // [rsp+48h] [rbp-180h]
  char v33; // [rsp+60h] [rbp-168h]
  int v34; // [rsp+64h] [rbp-164h]
  unsigned int v35; // [rsp+68h] [rbp-160h] BYREF
  __int64 v36; // [rsp+70h] [rbp-158h] BYREF
  volatile void *Address; // [rsp+78h] [rbp-150h]
  PVOID Object; // [rsp+80h] [rbp-148h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-140h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-138h] BYREF
  unsigned __int64 v41; // [rsp+98h] [rbp-130h]
  ULONG_PTR v42; // [rsp+A0h] [rbp-128h] BYREF
  HANDLE *v43; // [rsp+A8h] [rbp-120h]
  _DWORD *v44; // [rsp+B0h] [rbp-118h]
  __m128i v45; // [rsp+B8h] [rbp-110h] BYREF
  __int128 v46; // [rsp+C8h] [rbp-100h]
  __int128 v47; // [rsp+D8h] [rbp-F0h]
  unsigned int *v48; // [rsp+E8h] [rbp-E0h]
  __int128 v49; // [rsp+F0h] [rbp-D8h] BYREF
  __int64 v50; // [rsp+100h] [rbp-C8h]
  _OWORD v51[2]; // [rsp+108h] [rbp-C0h] BYREF
  __int64 v52; // [rsp+128h] [rbp-A0h]
  __int64 v53[8]; // [rsp+130h] [rbp-98h] BYREF
  __int64 v54; // [rsp+170h] [rbp-58h] BYREF
  int v55; // [rsp+178h] [rbp-50h]

  v41 = a2;
  v43 = a1;
  v44 = a7;
  v48 = a9;
  Address = a8;
  Object = 0LL;
  memset(v53, 0, sizeof(v53));
  Handle = 0LL;
  v36 = 0LL;
  v42 = 0LL;
  memset(v51, 0, sizeof(v51));
  v52 = 0LL;
  v35 = 0;
  v54 = 0LL;
  v55 = 0;
  BugCheckParameter2 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  v49 = 0LL;
  v50 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v33 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( !v33 )
  {
    if ( a9 )
      v35 = *a9;
    if ( a4 )
    {
      v45 = *(__m128i *)a4;
      v46 = *(_OWORD *)(a4 + 16);
      v47 = *(_OWORD *)(a4 + 32);
    }
    if ( a3 )
    {
      v54 = *(_QWORD *)a3;
      v55 = *(_DWORD *)(a3 + 8);
    }
    v36 = (__int64)Src;
    goto LABEL_35;
  }
  v12 = 0x7FFFFFFF0000LL;
  v13 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v43 < 0x7FFFFFFF0000LL )
    v13 = (__int64)v43;
  *(_QWORD *)v13 = *(_QWORD *)v13;
  if ( a9 )
  {
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a9 < 0x7FFFFFFF0000LL )
      v14 = (__int64)a9;
    v35 = *(_DWORD *)v14;
    ProbeForWrite(Address, v35, 1u);
  }
  if ( a4 )
  {
    v15 = 0x7FFFFFFF0000LL;
    if ( a4 < 0x7FFFFFFF0000LL )
      v15 = a4;
    v45 = *(__m128i *)v15;
    v46 = *(_OWORD *)(v15 + 16);
    v47 = *(_OWORD *)(v15 + 32);
    if ( _mm_cvtsi128_si32(v45) != 48 )
    {
      v34 = -1073741811;
      goto LABEL_57;
    }
    if ( (a4 & 3) != 0 )
      goto LABEL_33;
    *(_BYTE *)v15 = *(_BYTE *)v15;
    *(_BYTE *)(v15 + 47) = *(_BYTE *)(v15 + 47);
  }
  if ( !a6 )
    goto LABEL_20;
  v16 = 0x7FFFFFFF0000LL;
  if ( a6 < 0x7FFFFFFF0000LL )
    v16 = a6;
  if ( *(_DWORD *)v16 != 24 )
  {
    v34 = -1073741811;
    goto LABEL_57;
  }
  if ( (a6 & 3) != 0 )
LABEL_33:
    ExRaiseDatatypeMisalignment();
  *(_BYTE *)v16 = *(_BYTE *)v16;
  *(_BYTE *)(v16 + 23) = *(_BYTE *)(v16 + 23);
LABEL_20:
  if ( v44 )
  {
    v17 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v44 < 0x7FFFFFFF0000LL )
      v17 = (__int64)v44;
    *(_DWORD *)v17 = *(_DWORD *)v17;
  }
  if ( a3 )
  {
    if ( a3 < 0x7FFFFFFF0000LL )
      v12 = a3;
    v54 = *(_QWORD *)v12;
    v55 = *(_DWORD *)(v12 + 8);
  }
  v36 = (__int64)Src;
  if ( !Src || (v34 = sub_14066846C(Src, v30, 1, (__int64)&v36), v34 >= 0) )
  {
LABEL_35:
    v18 = (void *)v36;
    v22 = sub_140667114(
            (unsigned int)&Handle,
            (unsigned int)&Object,
            0,
            v41,
            0LL,
            0LL,
            0LL,
            0LL,
            v36,
            (unsigned __int64)&v54 & -(__int64)(a3 != 0),
            1);
    v34 = v22;
    if ( v18 != Src )
    {
      LOBYTE(v20) = 1;
      LOBYTE(v19) = v33;
      sub_140668444(v18, v19, v20, v21);
    }
    if ( v22 >= 0 )
    {
      LOWORD(v51[0]) = v35;
      v41 = (unsigned __int64)&v45 & -(__int64)(a4 != 0);
      LOBYTE(v32) = v33;
      LOBYTE(v31) = 1;
      v23 = Object;
      v24 = sub_140668084(&v42, 0LL, Object, Address, v51, 0LL, v41, &BugCheckParameter2, v31, v32);
      v34 = v24;
      if ( v24 >= 0 )
      {
        v25 = v42;
        v26 = *(_DWORD *)(v42 + 264);
        if ( byte_140D01161 )
          sub_140967A74(v42);
        v53[0] = (__int64)v23;
        v53[1] = v25;
        LODWORD(v53[6]) = 0x20000;
        v27 = sub_140667F24(v53);
        v24 = v27;
        v34 = v27;
        if ( v27 < 0 )
        {
          if ( byte_140D01161 )
            sub_140967A0C(v26, (unsigned int)v27);
          sub_1407A7628(v25);
        }
        else
        {
          v28 = sub_1406640F0(
                  v53,
                  (__int64)Address,
                  &v35,
                  BugCheckParameter2,
                  v41,
                  (unsigned __int64)&v49 & -(__int64)(a6 != 0));
          v24 = v28;
          v34 = v28;
          if ( v28 )
          {
            if ( byte_140D01161 )
              sub_140967A0C(v26, v28);
          }
          else
          {
            if ( byte_140D01161 )
              sub_140967AE4(v26);
            *v43 = Handle;
            if ( a4 )
            {
              *(__m128i *)a4 = v45;
              *(_OWORD *)(a4 + 16) = v46;
              *(_OWORD *)(a4 + 32) = v47;
            }
            if ( a6 )
            {
              *(_OWORD *)a6 = v49;
              *(_QWORD *)(a6 + 16) = v50;
            }
            if ( v48 )
              *v48 = v35;
            if ( v44 )
              *v44 = v23[68];
          }
        }
      }
      ObfDereferenceObject(v23);
      if ( BugCheckParameter2 )
        sub_1407A5A54(BugCheckParameter2);
      if ( v24 )
        NtClose(Handle);
    }
  }
LABEL_57:
  sub_1402F9540((__int64)KeGetCurrentThread());
  return (unsigned int)v34;
}
