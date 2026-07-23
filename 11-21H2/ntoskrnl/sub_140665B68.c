/*
 * XREFs of sub_140665B68 @ 0x140665B68
 * Callers:
 *     sub_140662D80 @ 0x140662D80 (sub_140662D80.c)
 *     sub_140665AD0 @ 0x140665AD0 (sub_140665AD0.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1406622B8 @ 0x1406622B8 (sub_1406622B8.c)
 *     sub_140662E08 @ 0x140662E08 (sub_140662E08.c)
 *     sub_14066666C @ 0x14066666C (sub_14066666C.c)
 *     sub_140666BAC @ 0x140666BAC (sub_140666BAC.c)
 *     sub_140666C64 @ 0x140666C64 (sub_140666C64.c)
 *     sub_140666C9C @ 0x140666C9C (sub_140666C9C.c)
 *     sub_140667554 @ 0x140667554 (sub_140667554.c)
 *     sub_1406675AC @ 0x1406675AC (sub_1406675AC.c)
 *     sub_140667864 @ 0x140667864 (sub_140667864.c)
 *     sub_1406679E8 @ 0x1406679E8 (sub_1406679E8.c)
 *     PsReleaseProcessWakeCounter @ 0x140668680 (PsReleaseProcessWakeCounter.c)
 *     sub_14066C1DC @ 0x14066C1DC (sub_14066C1DC.c)
 *     PsDereferencePrimaryToken @ 0x1406DADF0 (PsDereferencePrimaryToken.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     sub_14074DC30 @ 0x14074DC30 (sub_14074DC30.c)
 *     sub_1407A6660 @ 0x1407A6660 (sub_1407A6660.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407A7F84 @ 0x1407A7F84 (sub_1407A7F84.c)
 *     sub_1407AB790 @ 0x1407AB790 (sub_1407AB790.c)
 *     sub_1407ABD80 @ 0x1407ABD80 (sub_1407ABD80.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall sub_140665B68(
        unsigned __int64 a1,
        int a2,
        void *a3,
        __int64 a4,
        unsigned __int64 a5,
        void *a6,
        __int128 *a7,
        __int64 a8,
        char a9,
        __m128i *a10,
        unsigned __int64 a11,
        char a12)
{
  __m128i *v14; // r9
  KPROCESSOR_MODE v15; // al
  unsigned int v16; // edx
  __int64 v17; // rcx
  char v18; // r10
  _BYTE *v19; // rax
  __m128i *v20; // rax
  NTSTATUS result; // eax
  __m128i *v22; // rcx
  _DWORD *v23; // rax
  void ***v24; // r15
  int v25; // r8d
  int v26; // esi
  ULONG_PTR v27; // r14
  int v28; // edx
  int v29; // ebx
  void ***v30; // r8
  int v31; // ecx
  __int64 v32; // r13
  PVOID *v33; // rsi
  signed __int64 *v34; // rbx
  bool v35; // si
  void **v36; // rax
  void *v37; // r13
  void **v38; // rcx
  __int64 v39; // r13
  int v40; // eax
  _DWORD *v41; // rbx
  bool v42; // cf
  ULONG_PTR v43; // rsi
  volatile signed __int64 *v44; // rsi
  _QWORD *v45; // rbx
  ULONG_PTR v46; // rax
  int v47; // ecx
  unsigned int v48; // ebx
  __int64 v49; // rcx
  __int64 v50; // rcx
  HANDLE v51; // rcx
  __m128i *v52; // rax
  _OWORD *v53; // rax
  HANDLE v54; // rax
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-248h]
  PVOID PrimaryToken; // [rsp+48h] [rbp-240h]
  ULONG_PTR v57; // [rsp+50h] [rbp-238h] BYREF
  PVOID v58; // [rsp+58h] [rbp-230h] BYREF
  int v59; // [rsp+60h] [rbp-228h]
  int v60; // [rsp+64h] [rbp-224h]
  int v61; // [rsp+68h] [rbp-220h]
  HANDLE Handle; // [rsp+70h] [rbp-218h] BYREF
  unsigned __int64 v63; // [rsp+78h] [rbp-210h]
  PVOID v64; // [rsp+88h] [rbp-200h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-1F8h]
  PVOID Object; // [rsp+98h] [rbp-1F0h] BYREF
  _QWORD *v67; // [rsp+A0h] [rbp-1E8h]
  __m128i *v68; // [rsp+A8h] [rbp-1E0h]
  PVOID v69; // [rsp+B0h] [rbp-1D8h]
  __int128 v70; // [rsp+B8h] [rbp-1D0h] BYREF
  __int128 v71; // [rsp+C8h] [rbp-1C0h]
  __int64 v72; // [rsp+D8h] [rbp-1B0h]
  __int64 v73; // [rsp+E0h] [rbp-1A8h]
  __int128 *v74; // [rsp+E8h] [rbp-1A0h]
  __int64 v75; // [rsp+F0h] [rbp-198h]
  _OWORD *v76; // [rsp+F8h] [rbp-190h]
  __m128i v77; // [rsp+100h] [rbp-188h]
  __m128i v78; // [rsp+110h] [rbp-178h]
  __m128i v79; // [rsp+120h] [rbp-168h]
  __int128 v80; // [rsp+130h] [rbp-158h] BYREF
  __int64 v81; // [rsp+140h] [rbp-148h]
  __int128 v82; // [rsp+148h] [rbp-140h] BYREF
  __int64 v83; // [rsp+158h] [rbp-130h]
  _OWORD v84[5]; // [rsp+160h] [rbp-128h] BYREF
  _QWORD v85[8]; // [rsp+1B0h] [rbp-D8h] BYREF
  _OWORD v86[5]; // [rsp+1F0h] [rbp-98h] BYREF

  v73 = a4;
  v59 = a2;
  v67 = (_QWORD *)a1;
  v76 = (_OWORD *)a11;
  v68 = a10;
  v63 = a5;
  v74 = a7;
  v75 = a8;
  memset(v85, 0, sizeof(v85));
  v70 = 0LL;
  v71 = 0LL;
  v72 = 0LL;
  memset(v86, 0, 0x48uLL);
  memset(v84, 0, 0x48uLL);
  v77 = 0LL;
  v78 = 0LL;
  v79 = 0LL;
  v80 = 0LL;
  v81 = 0LL;
  v58 = 0LL;
  PrimaryToken = 0LL;
  v69 = 0LL;
  v60 = 0;
  v61 = 0;
  v57 = 0LL;
  Handle = 0LL;
  v15 = *((_BYTE *)KeGetCurrentThread() + 562);
  AccessMode = v15;
  if ( v15 )
  {
    if ( a12 || a9 )
    {
      v16 = v59;
      v17 = 0x7FFFFFFF0000LL;
      if ( v59 >= 0 )
      {
        if ( a1 < 0x7FFFFFFF0000LL )
          v17 = a1;
        *(_QWORD *)v17 = *(_QWORD *)v17;
      }
      else
      {
        if ( a1 < 0x7FFFFFFF0000LL )
          v17 = a1;
        *(_DWORD *)v17 = *(_DWORD *)v17;
      }
    }
    else
    {
      v16 = v59;
    }
    sub_140666BAC(a7, &v70, v16);
    if ( a5 )
    {
      v19 = v14;
      if ( a5 < (unsigned __int64)v14 )
        v19 = (_BYTE *)a5;
      v86[0] = *(_OWORD *)v19;
      v86[1] = *((_OWORD *)v19 + 1);
      v86[2] = *((_OWORD *)v19 + 2);
      v86[3] = *((_OWORD *)v19 + 3);
      *(_QWORD *)&v86[4] = *((_QWORD *)v19 + 8);
    }
    if ( a10 )
    {
      v20 = v14;
      if ( a10 < v14 )
        v20 = a10;
      v77 = *v20;
      v78 = v20[1];
      v79 = v20[2];
      if ( _mm_cvtsi128_si32(v77) != 48 )
        return -1073741811;
      if ( ((unsigned __int8)a10 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v22 = v14;
      if ( a10 < v14 )
        v22 = a10;
      v22->m128i_i8[0] = v22->m128i_i8[0];
      v22[2].m128i_i8[15] = v22[2].m128i_i8[15];
    }
    if ( a11 )
    {
      v23 = v14;
      if ( a11 < (unsigned __int64)v14 )
        v23 = (_DWORD *)a11;
      if ( *v23 != 24 )
        return -1073741811;
      if ( (a11 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a11 < (unsigned __int64)v14 )
        v14 = (__m128i *)a11;
      v14->m128i_i8[0] = v14->m128i_i8[0];
      v14[1].m128i_i8[7] = v14[1].m128i_i8[7];
    }
    v15 = AccessMode;
  }
  else
  {
    if ( a5 )
    {
      v86[0] = *(_OWORD *)a5;
      v86[1] = *(_OWORD *)(a5 + 16);
      v86[2] = *(_OWORD *)(a5 + 32);
      v86[3] = *(_OWORD *)(a5 + 48);
      *(_QWORD *)&v86[4] = *(_QWORD *)(a5 + 64);
    }
    v70 = *a7;
    v71 = a7[1];
    v72 = *((_QWORD *)a7 + 4);
    v18 = a12;
  }
  if ( !DWORD2(v71) )
    return -1073741281;
  v24 = 0LL;
  v64 = 0LL;
  if ( a3 )
  {
    Object = 0LL;
    result = ObReferenceObjectByHandle(a3, 1u, qword_140D069D8, v15, &Object, 0LL);
    v24 = (void ***)Object;
    v64 = Object;
    PrimaryToken = Object;
    if ( result < 0 )
      return result;
    v69 = Object;
    v25 = v72;
  }
  else
  {
    if ( !v18 )
      return -1073741504;
    v25 = 0;
    LODWORD(v72) = 0;
  }
  v26 = sub_1407ABD80((_DWORD)v24, DWORD2(v71), v25, (_DWORD)v14, (__int64)&v57);
  v27 = v57;
  if ( v26 < 0 )
    goto LABEL_69;
  if ( !v24 )
  {
    v24 = *(void ****)(v57 + 16);
    v64 = v24;
  }
  v28 = *(_DWORD *)(v57 + 40);
  if ( (v28 & 0x80u) == 0 )
  {
    if ( (*(unsigned __int16 *)(v57 + 244) & 0xFFFF00FF) != 0xA )
    {
LABEL_51:
      v26 = -1073741281;
LABEL_69:
      v29 = 0;
      goto LABEL_70;
    }
    v30 = *(void ****)(v57 + 16);
    if ( v30 != *(void ****)(v57 + 192) )
    {
LABEL_68:
      v26 = -1073740030;
      goto LABEL_69;
    }
    if ( v30 == v24 )
    {
      v31 = *(_DWORD *)(v57 + 40) & 7;
    }
    else
    {
      v31 = *(_DWORD *)(v57 + 40) & 7;
      if ( (v28 & 7) == 0 )
      {
        v32 = *(_QWORD *)(v57 + 24);
        if ( !v32 )
          goto LABEL_68;
        v33 = *(PVOID **)(v32 + 16);
        v34 = (signed __int64 *)(v33 - 2);
        ExAcquirePushLockSharedEx((ULONG_PTR)(v33 - 2), 0LL);
        if ( ((*(_DWORD *)(v32 + 416) >> 1) & 3) == 2 )
          v35 = *v33 == v24 || v33[1] == v24;
        else
          v35 = v33[2] == v24;
        if ( _InterlockedCompareExchange64(v34, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared(v34);
        sub_1402AFC00((ULONG_PTR)v34);
        v27 = v57;
        goto LABEL_80;
      }
      if ( ((_BYTE)v24[52] & 6) != 6 )
        goto LABEL_68;
      v36 = v24[2];
      if ( !v36 || *v36 != v30 )
        goto LABEL_68;
    }
    if ( v31 != 3 || (v28 & 0x2000) != 0 )
      goto LABEL_68;
    v35 = 1;
LABEL_80:
    if ( v35 )
    {
      LOBYTE(v30) = a12;
      v26 = sub_14066666C(v24, &v70, v30);
      if ( v26 < 0 )
        goto LABEL_69;
      v39 = *(_QWORD *)(v27 + 24);
      BugCheckParameter2 = *(_QWORD *)(v39 + 16);
      if ( (*(_DWORD *)(v39 + 416) & 0x20) != 0 )
      {
        v29 = 1;
        v26 = -1073741769;
        goto LABEL_70;
      }
      if ( ((_DWORD)v24[32] & 0x100000) != 0
        || (v38 = (void **)*((_QWORD *)KeGetCurrentThread() + 23), v27 = v57, v38 == v24[3]) )
      {
        if ( !a9 )
        {
          ExAcquirePushLockExclusiveEx(v39 + 352, 0LL);
          v40 = *(_DWORD *)(v39 + 416) | 0x10;
          *(_DWORD *)(v39 + 416) = v40;
          if ( (v40 & 0x100) != 0 )
            *(_QWORD *)(v39 + 56) = a6;
          if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v39 + 352), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v39 + 352);
          sub_1402AFC00(v39 + 352);
          v29 = 1;
          v26 = 0;
          v27 = v57;
          goto LABEL_70;
        }
        LOBYTE(v38) = AccessMode;
        v26 = sub_1406679E8(v38, v73, &v58);
        if ( v26 >= 0 )
        {
          v41 = v58;
          v26 = sub_140667864(v58, 3LL, 0LL);
          if ( v26 >= 0 )
          {
            v26 = sub_1406675AC(
                    (_DWORD)v41,
                    (unsigned __int64)v86 & ((unsigned __int128)-(__int128)v63 >> 64),
                    (_DWORD)v24,
                    0,
                    0,
                    0,
                    a12);
            if ( v26 >= 0 )
            {
              v42 = v63 != 0;
              v63 = -(__int64)v63;
              sub_140667554(v41, (unsigned __int64)v86 & -(__int64)v42);
              if ( a12 )
                v41[104] |= 0x1000u;
              v43 = BugCheckParameter2;
              sub_1407A7F84(BugCheckParameter2);
              v44 = (volatile signed __int64 *)(v43 - 16);
              ExAcquirePushLockExclusiveEx((ULONG_PTR)v44, 0LL);
              v45 = v58;
              v46 = BugCheckParameter2;
              *((_QWORD *)v58 + 2) = BugCheckParameter2;
              *(_QWORD *)(v46 + 8) = v45;
              *(_QWORD *)(v39 + 424) = v24;
              *(_QWORD *)(v39 + 432) = v45;
              v45[53] = v39;
              v45[54] = v39;
              v47 = *(_DWORD *)(v39 + 416);
              if ( (v47 & 0x1000) != 0 && (v45[52] & 0x1000) != 0 )
              {
                *(_DWORD *)(v39 + 416) = v47 | 0x2000;
                *((_DWORD *)v45 + 104) |= 0x2000u;
              }
              if ( (_InterlockedExchangeAdd64(v44, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v44);
              sub_1402AFC00((ULONG_PTR)v44);
              WORD2(v85[6]) = v70 + 40;
              *(_DWORD *)((char *)&v85[6] + 6) = 11;
              v48 = v59;
              v27 = v57;
              v26 = sub_140666C9C(v57, (_DWORD)v74, v59, (unsigned __int16)v70, 0, AccessMode);
              if ( v26 >= 0 )
              {
                if ( !a12
                  || !*(_QWORD *)(v27 + 144)
                  || (v26 = sub_1406622B8((signed __int64 *)v58, v27 + 104, (__int64)&v80), v26 >= 0) )
                {
                  v60 = 1;
                  if ( v68 )
                  {
                    v82 = 0LL;
                    LODWORD(v83) = 0;
                    v26 = sub_14066C1DC(v58);
                    if ( v26 >= 0 )
                    {
                      v26 = sub_1406622B8((signed __int64 *)v39, (__int64)v84, (__int64)&v82);
                      if ( v26 >= 0 )
                        v79.m128i_i64[1] = v83;
                    }
                  }
                  else
                  {
                    v26 = sub_1407AB790(v24, v48, v75, v27, v84);
                  }
                  if ( v26 >= 0 )
                  {
                    ObfReferenceObject(v58);
                    v26 = sub_140729C30(v58, 0LL, 0, 0LL, (__int64)&Handle);
                    if ( v26 >= 0 )
                    {
                      sub_1407A6660(v27 + 104);
                      *(_OWORD *)(v27 + 104) = v84[0];
                      *(_OWORD *)(v27 + 120) = v84[1];
                      *(_OWORD *)(v27 + 136) = v84[2];
                      *(_OWORD *)(v27 + 152) = v84[3];
                      *(_QWORD *)(v27 + 168) = *(_QWORD *)&v84[4];
                      v60 = 0;
                      v49 = *(_QWORD *)(v27 + 208);
                      if ( v49 )
                      {
                        PsReleaseProcessWakeCounter(v49, *(unsigned int *)(v27 + 264));
                        *(_QWORD *)(v27 + 208) = 0LL;
                      }
                      v50 = *(_QWORD *)(v27 + 216);
                      if ( v50 )
                      {
                        PsReleaseProcessWakeCounter(v50, *(unsigned int *)(v27 + 264));
                        *(_QWORD *)(v27 + 216) = 0LL;
                      }
                      if ( v59 >= 0 )
                        *v67 = Handle;
                      else
                        *(_DWORD *)v67 = (_DWORD)Handle;
                      v51 = a6;
                      if ( !a6 )
                        v51 = Handle;
                      *((_QWORD *)v58 + 7) = v51;
                      v52 = v68;
                      if ( v68 )
                      {
                        *v68 = v77;
                        v52[1] = v78;
                        v52[2] = v79;
                      }
                      v53 = v76;
                      if ( v76 )
                      {
                        *v76 = v80;
                        *((_QWORD *)v53 + 2) = v81;
                      }
                      v29 = 0;
                      v37 = PrimaryToken;
                      v85[0] = v58;
                      v85[1] = v27;
                      LODWORD(v85[6]) = 0x10000;
                      v26 = sub_140666C64(v85);
                      v54 = Handle;
                      if ( v26 >= 0 )
                        v54 = 0LL;
                      Handle = v54;
                      v27 = 0LL;
                      goto LABEL_71;
                    }
                  }
                }
              }
            }
          }
        }
        goto LABEL_69;
      }
      goto LABEL_51;
    }
    goto LABEL_68;
  }
  v29 = 1;
  v26 = -1073740029;
LABEL_70:
  v37 = PrimaryToken;
LABEL_71:
  if ( v27 )
  {
    if ( v60 )
    {
      sub_1407A6660(v84);
      v61 = 1;
    }
    if ( v29 )
      sub_140662E08((__int64)v24, v27, 0x10000);
    else
      sub_1407A7628(v27);
  }
  if ( v37 )
    PsDereferencePrimaryToken(v37);
  if ( v58 )
  {
    if ( v61 )
      sub_14074DC30(v58);
    PsDereferencePrimaryToken(v58);
  }
  if ( Handle )
    NtClose(Handle);
  return v26;
}
