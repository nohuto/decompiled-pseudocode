/*
 * XREFs of sub_1407A34A0 @ 0x1407A34A0
 * Callers:
 *     sub_14066D650 @ 0x14066D650 (sub_14066D650.c)
 *     DnsPrint_RpcZoneInfo_0 @ 0x140701B64 (DnsPrint_RpcZoneInfo_0.c)
 *     sub_1409B25E0 @ 0x1409B25E0 (sub_1409B25E0.c)
 * Callees:
 *     sub_14025E060 @ 0x14025E060 (sub_14025E060.c)
 *     sub_140280CBC @ 0x140280CBC (sub_140280CBC.c)
 *     sub_140293218 @ 0x140293218 (sub_140293218.c)
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
 *     ExInitializeRundownProtection @ 0x1402A0840 (ExInitializeRundownProtection.c)
 *     KeInitializeSemaphore @ 0x1402A4940 (KeInitializeSemaphore.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_1402F0880 @ 0x1402F0880 (sub_1402F0880.c)
 *     KeQuerySystemTimePrecise @ 0x1402F08A0 (KeQuerySystemTimePrecise.c)
 *     sub_1402F3684 @ 0x1402F3684 (sub_1402F3684.c)
 *     sub_1402F509C @ 0x1402F509C (sub_1402F509C.c)
 *     KeQueryMaximumGroupCount @ 0x1402F5110 (KeQueryMaximumGroupCount.c)
 *     PoEnergyEstimationEnabled @ 0x1402F6160 (PoEnergyEstimationEnabled.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405E7C30 @ 0x1405E7C30 (sub_1405E7C30.c)
 *     sub_1406747FC @ 0x1406747FC (sub_1406747FC.c)
 *     MmSecureVirtualMemoryEx @ 0x1406A2440 (MmSecureVirtualMemoryEx.c)
 *     sub_1406C9C7C @ 0x1406C9C7C (sub_1406C9C7C.c)
 *     sub_1406E616C @ 0x1406E616C (sub_1406E616C.c)
 *     sub_1407096A4 @ 0x1407096A4 (sub_1407096A4.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     sub_14079EE84 @ 0x14079EE84 (sub_14079EE84.c)
 *     sub_1407E4964 @ 0x1407E4964 (sub_1407E4964.c)
 *     sub_1409AFB7C @ 0x1409AFB7C (sub_1409AFB7C.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     sub_140A48020 @ 0x140A48020 (sub_140A48020.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall sub_1407A34A0(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        _QWORD *a10,
        char *a11,
        size_t a12)
{
  unsigned __int8 v13; // r11
  _QWORD *v16; // r14
  __int64 v17; // r8
  int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // rcx
  size_t v21; // rdx
  int v22; // ebx
  USHORT MaximumGroupCount; // ax
  unsigned int v24; // r14d
  int v25; // ebx
  char *v26; // rsi
  char *v27; // rcx
  unsigned int v28; // r14d
  char *v29; // rcx
  int v30; // eax
  ULONG_PTR v31; // rbx
  int v32; // r14d
  int v33; // r8d
  __int16 v34; // dx
  __int16 v35; // cx
  __int16 v36; // ax
  char *v37; // rbx
  __int64 v38; // rdx
  __int64 v39; // r9
  __int64 v40; // r12
  __int64 v41; // r9
  __int64 v42; // rbx
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // r9
  int v47; // eax
  __int64 v48; // rax
  unsigned __int16 v49; // ax
  ULONG_PTR v50; // rsi
  __int64 v51; // rax
  _QWORD *v52; // rcx
  PVOID PoolWithTag; // rax
  __int64 v54; // r9
  char *v55; // rax
  __int64 v56; // rax
  _OWORD *v57; // r8
  void *v58; // rcx
  __int64 v59; // [rsp+20h] [rbp-1D8h]
  int v60; // [rsp+50h] [rbp-1A8h]
  char v61; // [rsp+54h] [rbp-1A4h]
  __int16 v62; // [rsp+54h] [rbp-1A4h]
  int v63; // [rsp+58h] [rbp-1A0h]
  _QWORD *v64; // [rsp+60h] [rbp-198h]
  PVOID Object; // [rsp+68h] [rbp-190h] BYREF
  __int64 v66; // [rsp+70h] [rbp-188h] BYREF
  USHORT v67; // [rsp+78h] [rbp-180h]
  __int64 v68; // [rsp+80h] [rbp-178h]
  ULONG_PTR BugCheckParameter2; // [rsp+88h] [rbp-170h]
  size_t Size; // [rsp+90h] [rbp-168h]
  char *v71; // [rsp+98h] [rbp-160h]
  ULONG ContextLength; // [rsp+A0h] [rbp-158h] BYREF
  __int64 v73; // [rsp+A8h] [rbp-150h]
  __int64 v74; // [rsp+B0h] [rbp-148h]
  __int64 CurrentThread; // [rsp+B8h] [rbp-140h]
  _QWORD *v76; // [rsp+C0h] [rbp-138h]
  ULONG_PTR v77; // [rsp+C8h] [rbp-130h]
  __int64 v78; // [rsp+D0h] [rbp-128h]
  _QWORD *v79; // [rsp+D8h] [rbp-120h]
  __int64 v80; // [rsp+E0h] [rbp-118h]
  char v81; // [rsp+E8h] [rbp-110h] BYREF
  int v82; // [rsp+E9h] [rbp-10Fh]
  __int16 v83; // [rsp+EDh] [rbp-10Bh]
  char v84; // [rsp+EFh] [rbp-109h]
  __int64 v85; // [rsp+F0h] [rbp-108h]
  __int64 v86; // [rsp+F8h] [rbp-100h]
  __int64 v87; // [rsp+100h] [rbp-F8h]
  __int64 v88; // [rsp+110h] [rbp-E8h] BYREF
  void *v89; // [rsp+118h] [rbp-E0h]
  __int64 v90; // [rsp+120h] [rbp-D8h]
  __int64 v91; // [rsp+128h] [rbp-D0h]
  __int128 v92; // [rsp+130h] [rbp-C8h]
  ULONG_PTR v93; // [rsp+140h] [rbp-B8h]
  int v94; // [rsp+148h] [rbp-B0h]
  int v95; // [rsp+14Ch] [rbp-ACh]
  __int64 v96; // [rsp+150h] [rbp-A8h]
  int v97; // [rsp+160h] [rbp-98h]
  int v98; // [rsp+164h] [rbp-94h]
  int v99; // [rsp+168h] [rbp-90h]
  int v100; // [rsp+16Ch] [rbp-8Ch]
  __int64 v101; // [rsp+170h] [rbp-88h]
  __int64 v102; // [rsp+178h] [rbp-80h]
  _QWORD *v103; // [rsp+180h] [rbp-78h]
  _OWORD v104[3]; // [rsp+188h] [rbp-70h] BYREF

  v13 = a3;
  v77 = BugCheckParameter1;
  BugCheckParameter2 = a2;
  v78 = a5;
  v79 = a6;
  v74 = a7;
  v80 = a8;
  v103 = a10;
  v71 = a11;
  Size = a12;
  memset(v104, 0, sizeof(v104));
  v66 = 0LL;
  Object = 0LL;
  v82 = 0;
  v83 = 0;
  v84 = 0;
  ContextLength = 0;
  CurrentThread = (__int64)KeGetCurrentThread();
  v63 = 0;
  v68 = 0LL;
  v73 = 0LL;
  if ( a6 )
    v16 = (_QWORD *)*a6;
  else
    v16 = 0LL;
  v76 = v16;
  v64 = v16;
  if ( a4 )
  {
    v17 = 0LL;
    v18 = *(_DWORD *)(a4 + 4);
    v19 = (a4 + 320) & -(__int64)((*(_DWORD *)(a4 + 4) & 0x1000) != 0);
    if ( (v18 & 0x4000) != 0 )
      v17 = qword_140D088C0[*(unsigned int *)(a4 + 252)];
    if ( _bittest64(&qword_140D068D8, 0x37u) )
    {
      v20 = MEMORY[0xFFFFF780000003D8] & ~(unsigned int)*(_QWORD *)(BugCheckParameter1 + 1032) & 0x40000;
      v68 = v20;
      v73 = v20;
    }
    else
    {
      v20 = 0LL;
    }
    if ( (v18 & 0x40000000) != 0 )
    {
      if ( *(_QWORD *)(BugCheckParameter1 + 1408) )
        return 3221225485LL;
      if ( (*(_DWORD *)(BugCheckParameter1 + 2172) & 0x1000) != 0 )
        return 3221225659LL;
      v68 = *(_QWORD *)(a4 + 496) | v20;
      v73 = v68;
    }
    if ( v17 )
    {
      if ( v19 )
      {
        if ( *(unsigned __int8 *)(v17 + 208) != *(_WORD *)(v19 + 8)
          || *(_QWORD *)v19 && (*(_QWORD *)v19 & *(_QWORD *)(v17 + 200)) == 0LL )
        {
          v25 = -1073741776;
          goto LABEL_91;
        }
      }
      else
      {
        *(_DWORD *)(a4 + 4) = v18 | 0x1000;
        *(_WORD *)(a4 + 328) = *(unsigned __int8 *)(v17 + 208);
        *(_QWORD *)(a4 + 320) = qword_140D06E48[*(unsigned __int8 *)(v17 + 208)];
      }
      v63 = (unsigned __int16)sub_14025E060(v17) + 1;
    }
    else if ( v19 && *(_QWORD *)v19 )
    {
      v49 = sub_140293218(BugCheckParameter1, v19);
      *(_DWORD *)(a4 + 252) = v49;
      *(_DWORD *)(a4 + 4) |= 0x4000u;
      v63 = (unsigned __int16)sub_1402F509C(v49) + 1;
      v13 = a3;
    }
  }
  v21 = Size;
  *(_DWORD *)(Size + 384) = 0;
  *(_BYTE *)(v21 + 388) = v13;
  if ( a5 )
  {
    if ( (PEPROCESS)BugCheckParameter1 != PsInitialSystemProcess )
    {
      if ( a2 )
      {
        if ( v13 == 1 && (a2 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        *(_DWORD *)(v21 + 384) = *(_DWORD *)(a2 + 24) & (v13 != 0 ? 7666 : 73714);
      }
      goto LABEL_18;
    }
    v25 = -1073741811;
LABEL_91:
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
    return (unsigned int)v25;
  }
  if ( a2 )
    *(_DWORD *)(v21 + 384) = *(_DWORD *)(a2 + 24) & 0x11FF2;
LABEL_18:
  v61 = PoEnergyEstimationEnabled();
  v22 = v61 != 0 ? 2488 : 2288;
  MaximumGroupCount = KeQueryMaximumGroupCount();
  v67 = MaximumGroupCount;
  v24 = 0;
  if ( MaximumGroupCount > 1u )
  {
    v24 = (v61 != 0 ? 2495 : 2295) & 0xFFFFFFF8;
    v22 = v24 + 8 * MaximumGroupCount;
  }
  LODWORD(BugCheckParameter2) = (v22 + 7) & 0xFFFFFFF8;
  LODWORD(Size) = BugCheckParameter2 + 16 + 16 * MaximumGroupCount;
  v25 = sub_14072B3B0(a3, PsThreadType, a2, a3, v59, Size, 0, Size, &Object, 0LL);
  if ( v25 < 0 )
    goto LABEL_91;
  v26 = (char *)Object;
  memset(Object, 0, (unsigned int)Size);
  if ( v61 )
  {
    *((_QWORD *)v26 + 201) = v26 + 2288;
    _interlockedbittestandset((volatile signed __int32 *)v26, 0x15u);
    v26 = (char *)Object;
  }
  if ( dword_140D06BA0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)v26, 0x16u);
    v26 = (char *)Object;
  }
  if ( v24 )
  {
    *((_DWORD *)v26 + 344) |= 0x20000u;
    *((_QWORD *)v26 + 202) = &v26[v24];
  }
  v27 = &v26[(unsigned int)BugCheckParameter2];
  *((_QWORD *)v26 + 72) = v27;
  *(_WORD *)v27 = 1;
  v28 = v67;
  *((_WORD *)v27 + 1) = v67;
  *((_DWORD *)v27 + 1) = 0;
  memset(v27 + 8, 0, 8LL * v28);
  v29 = &v26[8 * v28 + 8 + (_DWORD)BugCheckParameter2];
  *((_QWORD *)v26 + 69) = v29;
  *(_WORD *)v29 = 1;
  *((_WORD *)v29 + 1) = v28;
  *((_DWORD *)v29 + 1) = 0;
  memset(v29 + 8, 0, 8LL * v28);
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)v26 + 169);
  Size = (size_t)(v26 + 1224);
  *((_QWORD *)v26 + 153) = *(_QWORD *)(BugCheckParameter1 + 1088);
  v30 = *a9;
  if ( (*a9 & 4) != 0 )
  {
    *((_DWORD *)v26 + 344) |= 4u;
    v30 = *a9;
  }
  if ( (v30 & 0x200) != 0 )
    *((_DWORD *)v26 + 29) |= 0x200000u;
  *((_DWORD *)v26 + 257) = 32;
  v31 = (ULONG_PTR)(v26 + 1360);
  BugCheckParameter2 = (ULONG_PTR)(v26 + 1360);
  *((_QWORD *)v26 + 170) = 0LL;
  *((_DWORD *)v26 + 342) = 7;
  KeInitializeSemaphore((PRKSEMAPHORE)(v26 + 1240), 0, 1);
  *((_QWORD *)v26 + 146) = v26 + 1160;
  *((_QWORD *)v26 + 145) = v26 + 1160;
  *((_QWORD *)v26 + 183) = v26 + 1456;
  *((_QWORD *)v26 + 182) = v26 + 1456;
  *((_QWORD *)v26 + 185) = v26 + 1472;
  *((_QWORD *)v26 + 184) = v26 + 1472;
  *((_QWORD *)v26 + 186) = 0LL;
  *((_QWORD *)v26 + 196) = v26 + 1560;
  *((_QWORD *)v26 + 195) = v26 + 1560;
  *((_QWORD *)v26 + 197) = 0LL;
  *((_QWORD *)v26 + 161) = v26 + 1280;
  *((_QWORD *)v26 + 160) = v26 + 1280;
  *((_QWORD *)v26 + 187) = 0LL;
  *((_QWORD *)v26 + 150) = 0LL;
  *((_QWORD *)v26 + 152) = v26 + 1208;
  *((_QWORD *)v26 + 151) = v26 + 1208;
  *((_QWORD *)v26 + 203) = -3LL;
  if ( sub_1402F0880() )
  {
    KeQuerySystemTimePrecise((_QWORD *)v26 + 144);
  }
  else
  {
    v26 = (char *)Object;
    *((_QWORD *)Object + 144) = MEMORY[0xFFFFF78000000014];
  }
  *((_QWORD *)v26 + 208) = v26 + 1656;
  *((_QWORD *)v26 + 207) = v26 + 1656;
  *((_QWORD *)v26 + 209) = 0LL;
  *((_QWORD *)v26 + 211) = v26 + 1680;
  *((_QWORD *)v26 + 210) = v26 + 1680;
  ExAcquirePushLockExclusiveEx(v31, 0LL);
  v32 = sub_1402F3684((__int64)v26);
  v60 = v32;
  if ( v32 < 0 )
  {
    v50 = BugCheckParameter2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v50);
    sub_1402AFC00(v50);
    v26 = (char *)Object;
    goto LABEL_119;
  }
  if ( !a5 )
  {
    v48 = v74;
    *((_QWORD *)v26 + 148) = v74;
    *((_QWORD *)v26 + 164) = v48;
    v89 = sub_1402513D0;
    v90 = v48;
    v43 = v80;
    v92 = 0LL;
    v42 = v66;
    goto LABEL_53;
  }
  v33 = *a9;
  v34 = (16 * (*a9 & 0x40)) | 8;
  if ( (*a9 & 2) == 0 )
    v34 = 16 * (v33 & 0x40);
  v35 = v34 | 0x2000;
  if ( (v33 & 0x80u) == 0 )
    v35 = v34;
  v36 = v35 | 0x4000;
  if ( (v33 & 0x100) == 0 )
    v36 = v35;
  v62 = v36;
  v37 = v71;
  if ( v71 )
  {
    if ( (*(_DWORD *)(BugCheckParameter1 + 2516) & 0x4000) != 0 )
      *((_DWORD *)v26 + 29) |= 0x100000u;
    if ( *(_QWORD *)(BugCheckParameter1 + 1408) )
    {
      v81 = 0;
      v86 = 0x8000LL;
      v87 = 0x40000LL;
      v85 = 0LL;
      v32 = sub_1407E4964(BugCheckParameter1, a5, v64, &v81, v63);
      v60 = v32;
      if ( v32 < 0 )
      {
LABEL_47:
        v40 = (__int64)v64;
        goto LABEL_48;
      }
      *v37 ^= (v81 ^ *v37) & 2;
      v40 = (__int64)v64;
      v47 = sub_1406C9C7C(BugCheckParameter1, v38, (__int64)v64, (__int64)v37, v63);
    }
    else
    {
      v32 = sub_1407E4964(BugCheckParameter1, a5, v64, v37, v63);
      v60 = v32;
      if ( v32 < 0 || (*((_DWORD *)v26 + 29) & 0x100000) == 0 )
        goto LABEL_47;
      v40 = (__int64)v64;
      v47 = sub_1409AFB7C(BugCheckParameter1, v63);
    }
    v32 = v47;
    v60 = v47;
LABEL_48:
    if ( v32 < 0 )
      goto LABEL_119;
    v32 = sub_1407096A4(BugCheckParameter1, v40, (_QWORD *)Size, v39, &v66);
    v60 = v32;
    if ( v32 < 0 )
      goto LABEL_119;
    *((_QWORD *)v26 + 148) = *(_QWORD *)(a5 + 248);
    *((_QWORD *)v26 + 164) = *(_QWORD *)(a5 + 128);
    v42 = v66;
    if ( *(_QWORD *)(BugCheckParameter1 + 1408) )
    {
      v32 = sub_1406747FC(BugCheckParameter1, v40, (_QWORD *)a5, v66);
      v60 = v32;
      if ( v32 < 0 )
        goto LABEL_119;
    }
    if ( !v62 )
      goto LABEL_52;
    sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v104, v41);
    *(_WORD *)(v42 + 6126) = v62;
    if ( *(_QWORD *)(BugCheckParameter1 + 1408) )
    {
      if ( *(_WORD *)(BugCheckParameter1 + 2412) == 0x8664 )
      {
        v101 = v42 + 0x2000;
        *(_WORD *)(v42 + 14318) = v62;
      }
      else
      {
        v102 = v42 + 0x2000;
        *(_WORD *)(v42 + 12234) = v62;
      }
    }
    v32 = 0;
    v60 = 0;
    goto LABEL_60;
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 2240) )
  {
    v51 = *(_QWORD *)(a5 + 248);
    *((_QWORD *)v26 + 148) = v51;
    *((_QWORD *)v26 + 164) = v51;
    v52 = v79;
    *((_QWORD *)v26 + 199) = v79[1];
    *((_QWORD *)v26 + 200) = v52[2];
    _interlockedbittestandset((volatile signed __int32 *)v26, 0x1Au);
    RtlGetExtendedContextLength(MEMORY[0xFFFFF780000003D8] != 0LL ? 1048671 : 1048607, &ContextLength);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, ContextLength, 0x63537350u);
    v26 = (char *)Object;
    *((_QWORD *)Object + 205) = PoolWithTag;
    if ( !PoolWithTag )
    {
      v32 = -1073741670;
      v60 = -1073741670;
      goto LABEL_119;
    }
    v42 = v66;
LABEL_52:
    v89 = sub_140702420;
    v90 = v74;
    v43 = *((_QWORD *)v26 + 148);
    *(_QWORD *)&v92 = a5;
    *((_QWORD *)&v92 + 1) = v42;
LABEL_53:
    v91 = v43;
    v94 = v63;
    v96 = v68;
    v95 = 0;
    v93 = BugCheckParameter1;
    v88 = 0LL;
    v32 = sub_140A48020(v26, &v88);
    v60 = v32;
    if ( v32 >= 0 )
    {
      *v103 = v26;
      return 0LL;
    }
    if ( v42 && v71 )
      sub_14079EE84(BugCheckParameter1, v42, v44, v45);
    goto LABEL_119;
  }
  v42 = *(_QWORD *)(CurrentThread + 240);
  v66 = v42;
  *((_QWORD *)v26 + 148) = sub_140280CBC(CurrentThread, 1);
  *((_QWORD *)v26 + 164) = *(_QWORD *)(CurrentThread + 1312);
  *((_DWORD *)v26 + 345) |= 0x10u;
  if ( (*(_DWORD *)(BugCheckParameter1 + 2516) & 0x4000) != 0
    && (*(_DWORD *)(a5 + 48) & 0x100040) == 0x100040
    && (*(_DWORD *)(*(int *)(a5 + 1248) + a5 + 1232) & 0x800LL) != 0 )
  {
    v55 = sub_1405E7C30((_DWORD *)(a5 + 1232), 0xBu, 0LL);
    if ( v55 )
    {
      if ( (*v55 & 1) != 0 && *((_QWORD *)v55 + 1) )
        *((_DWORD *)v26 + 29) |= 0x100000u;
    }
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 1408) )
  {
    v56 = 14416LL;
    if ( *(_WORD *)(BugCheckParameter1 + 2412) != 0x8664 )
      v56 = 12312LL;
    CurrentThread = v56;
  }
  else
  {
    CurrentThread = 6224LL;
  }
  sub_14030D5C0(BugCheckParameter1, 0LL, (__int64)v104, v54);
  if ( MmSecureVirtualMemoryEx(v42, CurrentThread, 4, 0) )
  {
    v57 = (_OWORD *)Size;
    *(_OWORD *)(v42 + 64) = *(_OWORD *)Size;
    *(_OWORD *)(v42 + 2008) = *v57;
    *(_DWORD *)(v42 + 6044) = 0;
    *(_DWORD *)(v42 + 6120) = 0;
    *(_WORD *)(v42 + 6126) &= 0x62Cu;
    *(_WORD *)(v42 + 6126) |= v62 | 0x40;
    if ( *(_QWORD *)(BugCheckParameter1 + 1408) )
    {
      if ( *(_WORD *)(BugCheckParameter1 + 2412) == 0x8664 )
      {
        v101 = v42 + 0x2000;
        *(_QWORD *)(v42 + 8256) = *(_QWORD *)v57;
        *(_QWORD *)(v42 + 8264) = *((_QWORD *)v26 + 154);
        *(_QWORD *)(v42 + 10200) = *(_QWORD *)v57;
        *(_QWORD *)(v42 + 10208) = *((_QWORD *)v26 + 154);
        *(_DWORD *)(v42 + 14236) = 0;
        *(_DWORD *)(v42 + 14312) = 0;
        *(_WORD *)(v42 + 14318) &= 0x62Cu;
        *(_WORD *)(v42 + 14318) |= v62 | 0x40;
      }
      else
      {
        v102 = v42 + 0x2000;
        v97 = *(_DWORD *)v57;
        *(_DWORD *)(v42 + 8224) = v97;
        v98 = *((_DWORD *)v26 + 308);
        *(_DWORD *)(v42 + 8228) = v98;
        v99 = *(_DWORD *)v57;
        *(_DWORD *)(v42 + 9908) = v99;
        v100 = *((_DWORD *)v26 + 308);
        *(_DWORD *)(v42 + 9912) = v100;
        *(_DWORD *)(v42 + 12188) = 0;
        *(_DWORD *)(v42 + 12228) = 0;
        *(_WORD *)(v42 + 12234) &= 0x62Cu;
        *(_WORD *)(v42 + 12234) |= v62 | 0x40;
      }
    }
  }
  else
  {
    v32 = -1073741503;
    v60 = -1073741503;
  }
LABEL_60:
  sub_1402D0930((__int64)v104, 0LL);
  if ( v32 >= 0 )
    goto LABEL_52;
LABEL_119:
  if ( v71 && *v71 )
    sub_1406E616C(BugCheckParameter1, v38, v64, v71);
  v58 = (void *)*((_QWORD *)v26 + 205);
  if ( v58 )
  {
    ExFreePoolWithTag(v58, 0x63537350u);
    *((_QWORD *)v26 + 205) = 0LL;
  }
  if ( *((_QWORD *)v26 + 154) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v26 + 170, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v26 + 1360);
    sub_1402AFC00((ULONG_PTR)(v26 + 1360));
    v32 = v60;
    v26 = (char *)Object;
  }
  if ( !*((_QWORD *)v26 + 68) )
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
  ObfDereferenceObject(v26);
  return (unsigned int)v32;
}
