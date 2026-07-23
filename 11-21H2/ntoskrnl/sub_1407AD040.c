/*
 * XREFs of sub_1407AD040 @ 0x1407AD040
 * Callers:
 *     NtRequestWaitReplyPort @ 0x140663B40 (NtRequestWaitReplyPort.c)
 *     LpcSendWaitReceivePort @ 0x1406CE2B0 (LpcSendWaitReceivePort.c)
 *     sub_1407AC6B0 @ 0x1407AC6B0 (sub_1407AC6B0.c)
 *     sub_140965F28 @ 0x140965F28 (sub_140965F28.c)
 *     sub_140966120 @ 0x140966120 (sub_140966120.c)
 * Callees:
 *     ObReferenceObjectSafe @ 0x1402240B0 (ObReferenceObjectSafe.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_140662E08 @ 0x140662E08 (sub_140662E08.c)
 *     sub_1406666B4 @ 0x1406666B4 (sub_1406666B4.c)
 *     sub_1406A1CC0 @ 0x1406A1CC0 (sub_1406A1CC0.c)
 *     sub_1406C9174 @ 0x1406C9174 (sub_1406C9174.c)
 *     sub_1406D8084 @ 0x1406D8084 (sub_1406D8084.c)
 *     ProbeForWrite @ 0x14073A2B0 (ProbeForWrite.c)
 *     sub_1407A7628 @ 0x1407A7628 (sub_1407A7628.c)
 *     sub_1407A7B20 @ 0x1407A7B20 (sub_1407A7B20.c)
 *     sub_1407A9220 @ 0x1407A9220 (sub_1407A9220.c)
 *     sub_1407A9ED0 @ 0x1407A9ED0 (sub_1407A9ED0.c)
 *     sub_1407AD8F0 @ 0x1407AD8F0 (sub_1407AD8F0.c)
 *     sub_1407F58C4 @ 0x1407F58C4 (sub_1407F58C4.c)
 *     sub_140966A1C @ 0x140966A1C (sub_140966A1C.c)
 *     sub_140966A84 @ 0x140966A84 (sub_140966A84.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407AD040(
        __int64 a1,
        int a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 *a6,
        int *Address,
        LARGE_INTEGER *a8,
        unsigned __int8 a9)
{
  int v10; // r15d
  unsigned __int8 v11; // di
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  int *v18; // rax
  ULONG v19; // r10d
  ULONG v20; // eax
  ULONG v21; // ecx
  ULONG v22; // eax
  bool v23; // zf
  unsigned int v24; // ecx
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // edx
  __int64 v29; // rax
  int v30; // ecx
  void **v31; // r15
  void *v32; // r12
  int v34; // eax
  int v35; // edx
  unsigned int v36; // edi
  ULONG_PTR v37; // rdi
  int v38; // edx
  int v39; // eax
  unsigned __int64 v40; // rax
  __int16 v41; // ax
  __int16 v42; // cx
  char *v43; // rdx
  void *v44; // rcx
  __int64 v45; // rsi
  size_t v46; // rsi
  size_t v47; // rax
  const void *v48; // rdx
  size_t v49; // r8
  signed __int64 v50; // rax
  int v51; // ecx
  ULONG_PTR v52; // rsi
  __int64 v53; // rdx
  signed __int64 BugCheckParameter4; // rcx
  __int64 v55; // r15
  __int64 v56; // rdx
  _SLIST_HEADER *v57; // rcx
  void *v58; // rcx
  int v59; // [rsp+30h] [rbp-E8h]
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-E0h] BYREF
  char v61; // [rsp+40h] [rbp-D8h]
  unsigned __int64 v62; // [rsp+48h] [rbp-D0h]
  unsigned int v63; // [rsp+50h] [rbp-C8h]
  unsigned __int64 v64; // [rsp+58h] [rbp-C0h]
  __int64 v65; // [rsp+60h] [rbp-B8h]
  unsigned __int64 v66; // [rsp+68h] [rbp-B0h]
  __int64 v67; // [rsp+70h] [rbp-A8h] BYREF
  int v68[2]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v69; // [rsp+88h] [rbp-90h]
  __int128 v70; // [rsp+90h] [rbp-88h]
  __int128 v71; // [rsp+A0h] [rbp-78h]
  int v72; // [rsp+B0h] [rbp-68h]
  __int64 v73; // [rsp+B4h] [rbp-64h]
  int v74; // [rsp+BCh] [rbp-5Ch]
  _OWORD v75[5]; // [rsp+C0h] [rbp-58h] BYREF
  int v79; // [rsp+160h] [rbp+48h]

  v69 = 0LL;
  v70 = 0LL;
  v71 = 0LL;
  v73 = 0LL;
  v74 = 0;
  v67 = 0LL;
  v10 = 0;
  v59 = 0;
  v64 = -1LL;
  v11 = a9;
  if ( a9 )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( a8 )
    {
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a8 < 0x7FFFFFFF0000LL )
        v13 = (__int64)a8;
      v67 = *(_QWORD *)v13;
      a8 = (LARGE_INTEGER *)&v67;
    }
    if ( (a2 & 0xC0000000) == 0x80000000 )
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v14 = a5;
      *(_BYTE *)v14 = *(_BYTE *)v14;
      *(_BYTE *)(v14 + 23) = *(_BYTE *)(v14 + 23);
    }
    else
    {
      if ( (a5 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = 0x7FFFFFFF0000LL;
      if ( a5 < 0x7FFFFFFF0000LL )
        v15 = a5;
      *(_BYTE *)v15 = *(_BYTE *)v15;
      *(_BYTE *)(v15 + 39) = *(_BYTE *)(v15 + 39);
    }
    if ( a6 )
    {
      v16 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v16 = (__int64)a6;
      v64 = *(_QWORD *)v16;
      v17 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)a6 < 0x7FFFFFFF0000LL )
        v17 = (__int64)a6;
      *(_QWORD *)v17 = *(_QWORD *)v17;
    }
    if ( Address )
    {
      v61 = 1;
      v18 = (int *)0x7FFFFFFF0000LL;
      if ( (unsigned __int64)Address < 0x7FFFFFFF0000LL )
        v18 = Address;
      v10 = *v18;
      v19 = 8;
      if ( (a2 & 0xC0000000) == 0x80000000 )
      {
        if ( v10 < 0 )
          v19 = 20;
        v20 = v19 + 16;
        if ( (v10 & 0x40000000) == 0 )
          v20 = v19;
        v21 = v20 + 20;
        if ( (v10 & 0x20000000) == 0 )
          v21 = v20;
        v22 = v21 + 16;
        if ( (v10 & 0x10000000) == 0 )
          v22 = v21;
        v23 = (v10 & 0x8000000) == 0;
        v24 = v22 + 24;
        v19 = 4;
      }
      else
      {
        v25 = 8;
        if ( v10 < 0 )
          v25 = 32;
        v26 = v25 + 32;
        if ( (v10 & 0x40000000) == 0 )
          v26 = v25;
        v27 = v26 + 32;
        if ( (v10 & 0x20000000) == 0 )
          v27 = v26;
        v28 = v27 + 24;
        if ( (v10 & 0x10000000) == 0 )
          v28 = v27;
        v22 = v28 + 24;
        if ( (v10 & 0x8000000) == 0 )
          v22 = v28;
        v23 = (v10 & 0x4000000) == 0;
        v24 = v22 + 8;
      }
      if ( v23 )
        v24 = v22;
      v29 = v24 + 8;
      if ( (v10 & 0x2000000) == 0 )
        v29 = v24;
      if ( (unsigned __int64)(v29 - 1) > 0xFFE )
      {
        ProbeForWrite(Address, (unsigned int)v29, v19);
        v59 = v10;
      }
      else
      {
        if ( ((v19 - 1) & (unsigned int)Address) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)Address < 0x7FFFFFFF0000LL )
          v12 = (__int64)Address;
        *(_BYTE *)v12 = *(_BYTE *)v12;
        *(_BYTE *)((unsigned int)v29 + v12 - 1) = *(_BYTE *)((unsigned int)v29 + v12 - 1);
        v59 = v10;
      }
    }
    else
    {
      v10 = 0;
    }
  }
  else
  {
    if ( a6 )
      v64 = *a6;
    if ( Address )
    {
      v10 = *Address;
      v59 = *Address;
    }
  }
  v30 = *(_DWORD *)(a1 + 416);
  if ( (*(_BYTE *)(a1 + 416) & 6) != 6 )
  {
    v32 = (void *)a1;
    v65 = a1;
    goto LABEL_70;
  }
  v31 = *(void ***)(a1 + 16);
  ExAcquirePushLockSharedEx((ULONG_PTR)(v31 - 2), 0LL);
  v32 = *v31;
  v65 = (__int64)v32;
  if ( v32 && ObReferenceObjectSafe((__int64)v32) )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v31 - 2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v31 - 2);
    sub_1402AFC00((ULONG_PTR)(v31 - 2));
    v30 = *(_DWORD *)(a1 + 416);
    v10 = v59;
    v11 = a9;
LABEL_70:
    *(_QWORD *)v68 = a1;
    v72 = a2;
    if ( (v30 & 0x1000) != 0 )
      v34 = sub_1406666B4(a1, (__int64)v68, a3, v11);
    else
      v34 = sub_1407A9ED0((__int64)v68, (__m256i *)a3, a4, v11);
    v36 = v34;
    if ( v34 < 0 )
      goto LABEL_138;
    if ( (a2 & 0x100000) != 0 )
    {
      LOBYTE(v35) = 1;
    }
    else
    {
      v35 = *((unsigned __int8 *)KeGetCurrentThread() + 562);
      v10 = v59;
    }
    BugCheckParameter2 = 0LL;
    *(_QWORD *)v68 = v32;
    v36 = sub_1407AD8F0((int)v68, v35, (int)&BugCheckParameter2, v10, a8);
    v79 = v36;
    if ( v36 )
      goto LABEL_138;
    v37 = BugCheckParameter2;
    v38 = *(unsigned __int16 *)(BugCheckParameter2 + 240);
    v39 = 24;
    if ( (a2 & 0xC0000000) != 0x80000000 )
      v39 = 40;
    v40 = (unsigned int)(v38 + v39);
    v63 = v40;
    if ( a6 )
    {
      v62 = v40;
      if ( v40 > v64 )
      {
        memset(v75, 0, 32);
        v79 = sub_1406C9174((__int64)v32, (_QWORD *)BugCheckParameter2, v75);
        if ( v79 == -1073741789 )
        {
          sub_1407A7628(v37);
          *a6 = v62;
          sub_1406D8084(a2, v75, v10, (__int64)Address);
          v36 = -1073741789;
LABEL_138:
          if ( v32 != (void *)a1 )
            ObfDereferenceObject(v32);
          return v36;
        }
        sub_140662E08((__int64)v32, v37, 0x10000);
LABEL_137:
        v36 = v79;
        goto LABEL_138;
      }
    }
    LODWORD(v62) = 0;
    if ( (a2 & 0xC0000000) == 0x80000000 )
    {
      *(_WORD *)a5 = v38;
      LODWORD(v62) = *(unsigned __int16 *)(v37 + 240) + 24;
      *(_WORD *)(a5 + 2) = v62;
      v41 = *(_WORD *)(v37 + 246);
      if ( v41 )
        *(_WORD *)(a5 + 6) = v41 - 16;
      else
        *(_WORD *)(a5 + 6) = 0;
      v42 = *(_WORD *)(v37 + 244) | 0x1000;
      *(_WORD *)(a5 + 4) = v42;
      *(_DWORD *)(a5 + 8) = *(_DWORD *)(v37 + 248);
      *(_DWORD *)(a5 + 12) = *(_DWORD *)(v37 + 256);
      *(_DWORD *)(a5 + 16) = *(_DWORD *)(v37 + 264);
      *(_DWORD *)(a5 + 20) = *(_DWORD *)(v37 + 272);
      *(_DWORD *)(a5 + 20) = *(_DWORD *)(v37 + 272);
      if ( (*(_DWORD *)(a1 + 256) & 0x1000) != 0 )
        *(_WORD *)(a5 + 4) = v42 & 0xC00F;
      v43 = (char *)(a5 + 24);
      if ( *(_QWORD *)(v37 + 176) )
        sub_1407F58C4(v37, v43);
      else
        sub_1407A7B20(v37, v43);
    }
    else
    {
      *(_OWORD *)a5 = *(_OWORD *)(BugCheckParameter2 + 240);
      *(_OWORD *)(a5 + 16) = *(_OWORD *)(v37 + 256);
      *(_QWORD *)(a5 + 32) = *(_QWORD *)(v37 + 272);
      if ( _bittest((const signed __int32 *)(a1 + 256), 0xCu) )
        *(_WORD *)(a5 + 4) = *(_WORD *)(v37 + 244) & 0xC00F;
      LODWORD(v62) = *(unsigned __int16 *)(v37 + 242);
      v44 = (void *)(a5 + 40);
      v66 = a5 + 40;
      if ( *(_QWORD *)(v37 + 176) )
      {
        sub_1407F58C4(v37, a5 + 40);
      }
      else
      {
        v45 = *(_QWORD *)(v37 + 96);
        if ( v45 )
          v46 = *(_QWORD *)(v45 + 32) - 40LL;
        else
          v46 = 512LL;
        v47 = *(unsigned __int16 *)(v37 + 240);
        v62 = v47;
        v48 = (const void *)(v37 + 280);
        if ( v47 > v46 )
        {
          memmove(v44, v48, v46);
          v49 = v62 - v46;
          v44 = (void *)(v46 + v66);
          v48 = *(const void **)(v37 + 224);
        }
        else
        {
          v49 = (unsigned int)v47;
        }
        memmove(v44, v48, v49);
      }
    }
    if ( a6 )
      *a6 = v63;
    if ( Address )
      sub_1407A9220(a1, a2, v37, v10, (__int64)Address);
    if ( (*(_DWORD *)(v37 + 40) & 0x200) != 0 && !*(_QWORD *)(v37 + 96) && (*(_DWORD *)(a1 + 416) & 0x2000) != 0 )
    {
      v50 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 440), v37, 0LL);
      v37 = BugCheckParameter2;
      if ( !v50 )
      {
        ++*(_WORD *)(BugCheckParameter2 - 30);
        sub_1406A1CC0(v37);
        if ( !dword_140C2A158 )
        {
LABEL_117:
          v51 = 0;
          v52 = v37 - 48;
          v53 = *(unsigned __int8 *)(v37 - 48 + 16);
          if ( (v53 & 1) != 0 )
          {
            v51 = 0x10000 - *(__int16 *)(v52 + 18);
            LOBYTE(v53) = v53 & 0xFE;
            *(_BYTE *)(v52 + 16) = v53;
            *(_WORD *)(v52 + 18) = 0;
          }
          if ( v51 > 0 )
          {
            BugCheckParameter4 = -v51 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v52 + 24), -v51);
            if ( BugCheckParameter4 <= 0 )
            {
              if ( BugCheckParameter4 )
                KeBugCheckEx(0x18u, 0LL, BugCheckParameter2, 0x28uLL, BugCheckParameter4);
              v55 = qword_140007310[*(unsigned __int8 *)(v52 + 17)];
              sub_14042A5E0(BugCheckParameter2, v53);
              if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v37 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                ExfTryToWakePushLock(v37 - 16);
              sub_1402AFC00(v37 - 16);
              if ( (int)sub_14042A5E0(BugCheckParameter2, v56) >= 0 )
              {
                if ( (*(_BYTE *)(v52 + 16) & 2) != 0 )
                {
                  v57 = &stru_140CF5A80 + 8 * (unsigned __int64)*(unsigned int *)(v55 + 8);
                  ++*((_DWORD *)&v57[1].HeaderX64 + 3);
                  if ( LOWORD(v57->Alignment) < LOWORD(v57[1].Alignment) )
                  {
                    ExpInterlockedPushEntrySList(v57, (PSLIST_ENTRY)(v37 - 48));
                  }
                  else
                  {
                    ++LODWORD(v57[2].Alignment);
                    sub_14042A5E0(v37 - 48, &stru_140CF5A80);
                  }
                }
                else
                {
                  v58 = (void *)(v37 - 48);
                  if ( *(_QWORD *)(v55 + 48) )
                    sub_14042A5E0(v58, &stru_140CF5A80);
                  else
                    ExFreePoolWithTag(v58, *(_DWORD *)(v55 + 4));
                }
              }
              v37 = 0LL;
            }
          }
          if ( v37 )
          {
            if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v52 + 32), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(v52 + 32);
            sub_1402AFC00(v52 + 32);
          }
          goto LABEL_137;
        }
        sub_140966A1C(v37);
      }
    }
    if ( dword_140C2A158 )
      sub_140966A84(v37);
    goto LABEL_117;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v31 - 2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v31 - 2);
  sub_1402AFC00((ULONG_PTR)(v31 - 2));
  return 3221225527LL;
}
