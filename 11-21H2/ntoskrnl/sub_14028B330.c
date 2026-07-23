/*
 * XREFs of sub_14028B330 @ 0x14028B330
 * Callers:
 *     sub_1403C5160 @ 0x1403C5160 (sub_1403C5160.c)
 * Callees:
 *     sub_14020C810 @ 0x14020C810 (sub_14020C810.c)
 *     sub_1402206C0 @ 0x1402206C0 (sub_1402206C0.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140230680 @ 0x140230680 (sub_140230680.c)
 *     sub_14023CC50 @ 0x14023CC50 (sub_14023CC50.c)
 *     sub_14026C644 @ 0x14026C644 (sub_14026C644.c)
 *     sub_14027A794 @ 0x14027A794 (sub_14027A794.c)
 *     sub_14028B12C @ 0x14028B12C (sub_14028B12C.c)
 *     sub_14028B8B0 @ 0x14028B8B0 (sub_14028B8B0.c)
 *     sub_14028C14C @ 0x14028C14C (sub_14028C14C.c)
 *     sub_14028C230 @ 0x14028C230 (sub_14028C230.c)
 *     sub_14028D3BC @ 0x14028D3BC (sub_14028D3BC.c)
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140310AD0 @ 0x140310AD0 (sub_140310AD0.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_1403342D0 @ 0x1403342D0 (sub_1403342D0.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140366814 @ 0x140366814 (sub_140366814.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14059EDEC @ 0x14059EDEC (sub_14059EDEC.c)
 */

__int64 __fastcall sub_14028B330(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v5; // ebx
  _QWORD *v6; // rax
  int v7; // edi
  __int64 v8; // r14
  __int64 v9; // rbx
  ULONG_PTR v10; // rsi
  unsigned __int8 v11; // di
  __int64 v12; // r12
  __int64 v13; // r12
  __int64 v14; // rdi
  int v15; // eax
  __int64 v16; // rax
  unsigned __int8 v17; // bl
  __int64 v18; // rax
  bool v19; // zf
  struct _FILE_OBJECT *v20; // r14
  __int64 v21; // rax
  unsigned int v22; // eax
  struct _MDL *v23; // rax
  struct _MDL *v24; // rsi
  LARGE_INTEGER v25; // rax
  int v26; // edx
  LARGE_INTEGER v27; // rbx
  __int64 ByteCount; // rax
  _QWORD *v29; // rsi
  unsigned int v30; // edx
  unsigned int v31; // r13d
  int v32; // eax
  int v33; // eax
  NTSTATUS v34; // ebx
  __int64 v35; // rdi
  unsigned __int8 v36; // bl
  __int64 v38; // rcx
  int v39; // eax
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v44; // r9
  int v45; // eax
  unsigned __int8 v46; // al
  __int64 v47; // rdx
  unsigned __int64 v48; // rbx
  __int64 v49; // rbx
  __int64 v50; // r8
  struct _KPRCB *v51; // r10
  __int64 v52; // r9
  int v53; // eax
  unsigned __int8 v54; // al
  struct _KPRCB *v55; // r10
  __int64 v56; // r9
  int v57; // eax
  unsigned int v58; // r8d
  int v59; // eax
  int v60; // eax
  unsigned __int8 v61; // di
  unsigned __int8 v62; // al
  struct _KPRCB *v63; // r9
  __int64 v64; // r8
  int v65; // eax
  unsigned __int8 v66; // al
  struct _KPRCB *v67; // r9
  __int64 v68; // r8
  int v69; // eax
  LARGE_INTEGER v70; // [rsp+60h] [rbp-58h] BYREF
  struct _MDL *v71; // [rsp+68h] [rbp-50h]
  LONGLONG v72; // [rsp+70h] [rbp-48h] BYREF
  __int64 v73; // [rsp+78h] [rbp-40h]
  ULONG v74; // [rsp+C8h] [rbp+10h]
  __int64 v75; // [rsp+D8h] [rbp+20h]

  v5 = a2;
  v72 = 0LL;
  v70.QuadPart = 0LL;
  if ( a2 >= 0x10 )
  {
    v5 = 0;
    v6 = (_QWORD *)(a1 + 5136);
    while ( 1 )
    {
      if ( *v6 != 0x3FFFFFFFFFLL )
        goto LABEL_9;
      if ( v6[11] != 0x3FFFFFFFFFLL )
      {
        ++v5;
        goto LABEL_8;
      }
      if ( v6[22] != 0x3FFFFFFFFFLL )
      {
        v5 += 2;
        goto LABEL_8;
      }
      if ( v6[33] != 0x3FFFFFFFFFLL )
        break;
      v6 += 44;
      v5 += 4;
      if ( v5 >= 0x10 )
        goto LABEL_8;
    }
    v5 += 3;
LABEL_8:
    if ( v5 == 16 )
      return 0LL;
  }
LABEL_9:
  v7 = 0;
  if ( *(_BYTE *)(a1 + 1027) )
  {
    v41 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1020));
    if ( *(_BYTE *)(a1 + 1029) )
    {
      *(_BYTE *)(a1 + 1029) = 0;
      *(_BYTE *)(a1 + 1027) = 0;
      v7 = 1;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1020));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v41 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v44 = *((_QWORD *)CurrentPrcb + 4375);
          v45 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v41 + 1));
          v19 = (v45 & *(_DWORD *)(v44 + 20)) == 0;
          *(_DWORD *)(v44 + 20) &= v45;
          if ( v19 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v41);
  }
  if ( *(_BYTE *)(a1 + 1056) || v7 )
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Interval);
  v8 = 88LL * v5;
  v9 = *(_QWORD *)(v8 + a1 + 5136);
  if ( v9 == 0x3FFFFFFFFFLL )
    return 0LL;
  while ( 1 )
  {
    v10 = 48 * v9 - 0x220000000000LL;
    v11 = sub_1402F2700(v10);
    LOBYTE(v74) = v11;
    if ( v9 == *(_QWORD *)(v8 + a1 + 5136) )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v46 = KeGetCurrentIrql();
        if ( v46 <= 0xFu && v11 <= 0xFu )
        {
LABEL_101:
          if ( v46 >= 2u )
          {
            v51 = KeGetCurrentPrcb();
            v52 = *((_QWORD *)v51 + 4375);
            v53 = ~(unsigned __int16)(-1LL << (v11 + 1));
            v19 = (v53 & *(_DWORD *)(v52 + 20)) == 0;
            *(_DWORD *)(v52 + 20) &= v53;
            if ( v19 )
              sub_140418E4C(v51);
          }
        }
      }
    }
LABEL_43:
    __writecr8(v11);
    v9 = *(_QWORD *)(v8 + a1 + 5136);
    if ( v9 == 0x3FFFFFFFFFLL )
      return 0LL;
  }
  v12 = *(_QWORD *)(v10 + 16);
  if ( qword_140C50780 && (v12 & 0x10) == 0 )
    v12 &= ~qword_140C50780;
  v13 = v12 >> 16;
  v14 = *(_QWORD *)v13;
  v15 = *(_DWORD *)(*(_QWORD *)v13 + 56LL);
  if ( (v15 & 0x20) != 0 )
  {
    sub_140326870(v10);
    v48 = (unsigned __int64)sub_140317A10(v10 + 16) >> 5;
    if ( ((*(_QWORD *)(v10 + 40) >> 60) & 7) == 3 )
    {
      sub_14023CC50(v10, 28);
      if ( (dword_140D06880 & 0x8000) != 0 && (v48 & 2) != 0 && (*(_DWORD *)(v14 + 92) & 0xC0000) != 0 )
        sub_14026C644(v10, 32 * ((dword_140D06880 & 0x10000) == 0) + 6);
    }
    v49 = sub_1402CCC50(32 * (v48 & 0x1F), v47);
    if ( (unsigned int)sub_140317A80(v10 + 16) )
    {
      if ( (unsigned int)sub_140229550() )
      {
        if ( !HIBYTE(word_140C51864) && (v49 & 1) != 0 )
          v49 |= 0x8000000000000000uLL;
        *(_QWORD *)(v10 + 16) = v49;
        sub_1402294F0(v10 + 16, v49);
LABEL_90:
        sub_1402206C0(v14, 0LL, v50, 3);
        sub_1402BF9C0(v10);
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !dword_140D06B08 || (dword_140D06B08 & 1) == 0 || (v46 = KeGetCurrentIrql(), v46 > 0xFu) )
        {
LABEL_46:
          v11 = v74;
          goto LABEL_43;
        }
        goto LABEL_100;
      }
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 && (v49 & 1) != 0 )
        v49 |= 0x8000000000000000uLL;
    }
    *(_QWORD *)(v10 + 16) = v49;
    goto LABEL_90;
  }
  if ( (v15 & 8) != 0 )
  {
    sub_140326870(v10);
    sub_1402BF9C0(v10);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !dword_140D06B08 )
      goto LABEL_46;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_46;
    v46 = KeGetCurrentIrql();
    if ( v46 > 0xFu )
      goto LABEL_46;
    goto LABEL_100;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
  if ( (*(_DWORD *)(v14 + 56) & 8) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
    sub_140326870(v10);
    sub_1402BF9C0(v10);
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( !dword_140D06B08 )
      goto LABEL_46;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_46;
    v46 = KeGetCurrentIrql();
    if ( v46 > 0xFu )
      goto LABEL_46;
LABEL_100:
    v11 = v74;
    if ( (unsigned __int8)v74 <= 0xFu )
      goto LABEL_101;
    goto LABEL_43;
  }
  v16 = *(_QWORD *)(v14 + 120);
  ++*(_DWORD *)(v14 + 76);
  v75 = 8 * v16;
  if ( 8 * v16 && _InterlockedIncrement64((volatile signed __int64 *)(8 * v16 + 32)) <= 1 )
    __fastfail(0xEu);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v14 + 72));
  sub_14028C14C(v10);
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (v54 = KeGetCurrentIrql(), v54 <= 0xFu) )
  {
    v17 = v74;
    if ( (unsigned __int8)v74 <= 0xFu && v54 >= 2u )
    {
      v55 = KeGetCurrentPrcb();
      v56 = *((_QWORD *)v55 + 4375);
      v57 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v74 + 1));
      v19 = (v57 & *(_DWORD *)(v56 + 20)) == 0;
      *(_DWORD *)(v56 + 20) &= v57;
      if ( v19 )
        sub_140418E4C(v55);
    }
  }
  else
  {
    v17 = v74;
  }
  __writecr8(v17);
  v18 = sub_14027A794(v14, 1666411853LL);
  v19 = *(_BYTE *)(a1 + 1027) == 0;
  v20 = (struct _FILE_OBJECT *)v18;
  v21 = *(_QWORD *)(v18 + 40);
  v73 = v21;
  if ( v19 )
    v22 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_140310AD0)(v21, (LARGE_INTEGER)v70.QuadPart, 0LL);
  else
    v22 = 0;
  v23 = (struct _MDL *)sub_14028B8B0(v10, a3 + 208, v22);
  *(_QWORD *)(a3 + 200) = v23;
  v24 = v23;
  *(_QWORD *)(a3 + 160) = v14;
  v71 = v23;
  v25.QuadPart = sub_1403342D0(
                   v13,
                   *(_QWORD *)(48 * (__int64)v23[1].Next - 0x220000000000LL + 8) | 0x8000000000000000uLL,
                   0xFFFFFFFFLL);
  v26 = *(_DWORD *)(a3 + 40);
  v27 = v25;
  v70 = v25;
  v25.LowPart = v24->ByteCount;
  *(_DWORD *)(a3 + 136) = v25.LowPart;
  v74 = v25.LowPart >> 12;
  *(_DWORD *)(a3 + 140) = (v25.LowPart >> 12) - 1;
  ByteCount = v24->ByteCount;
  v29 = (_QWORD *)(a3 + 168);
  *(_QWORD *)(a3 + 168) = 0LL;
  v72 = v27.QuadPart + ByteCount;
  if ( (v20->DeviceObject->Characteristics & 0x10) != 0 )
    v30 = v26 | 2;
  else
    v30 = v26 & 0xFFFFFFFD;
  *(_DWORD *)(a3 + 40) = v30;
  v31 = 0;
  v32 = *(_DWORD *)(v14 + 56);
  if ( (v32 & 4) != 0 )
  {
    sub_140230680((signed __int64 *)(v14 + 64), (unsigned __int64)v20, 0x63536D4Du);
    v34 = -1073741740;
    v31 = 1;
  }
  else if ( (v32 & 0x10) != 0 )
  {
    sub_140230680((signed __int64 *)(v14 + 64), (unsigned __int64)v20, 0x63536D4Du);
    v34 = -1073741672;
    v31 = 1;
  }
  else
  {
    *(_QWORD *)(a3 + 152) = v20;
    if ( (int)sub_14028B12C(v20, (struct _DEVICE_OBJECT *)&v72, (struct _DEVICE_OBJECT *)(a3 + 168)) >= 0 )
    {
      v33 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_140310AD0)(
              v73,
              (LARGE_INTEGER)v27.QuadPart,
              v71->ByteCount);
      if ( !v33 )
      {
        sub_14028D3BC(v20);
        sub_140230680((signed __int64 *)(v14 + 64), (unsigned __int64)v20, 0x63536D4Du);
        v34 = -1073741740;
        v31 = 1;
        goto LABEL_32;
      }
      if ( v33 == 1 )
        *v29 |= 1uLL;
      *(LARGE_INTEGER *)(a3 + 176) = v27;
      v38 = 2LL;
      v39 = *(_DWORD *)(a1 + 712);
      v40 = *(_QWORD *)(a1 + 16896);
      if ( v39 )
      {
        v58 = 4;
        v59 = v39 - 1;
        if ( v40 >= 0x420 )
          v58 = 2;
        v38 = v58;
        if ( v40 >= 0x420 )
          v59 = 0;
        *(_DWORD *)(a1 + 712) = v59;
      }
      else if ( v40 < 0x120 )
      {
        v60 = 32;
        if ( v40 >= 0xA0 )
          v60 = 8;
        v38 = 4LL;
        *(_DWORD *)(a1 + 712) = v60;
      }
      __incgsdword(0x2EB4u);
      __addgsdword(0x2EB0u, v74);
      if ( (*(_BYTE *)(v14 + 62) & 0xC) != 0 )
      {
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))sub_14059EDEC)(v38, v71, (LARGE_INTEGER)v70.QuadPart);
        v61 = KeGetCurrentIrql();
        __writecr8(1uLL);
        sub_14028C230(a3, a3 + 16, 0LL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v62 = KeGetCurrentIrql();
            if ( v62 <= 0xFu && v61 <= 0xFu && v62 >= 2u )
            {
              v63 = KeGetCurrentPrcb();
              v64 = *((_QWORD *)v63 + 4375);
              v65 = ~(unsigned __int16)(-1LL << (v61 + 1));
              v19 = (v65 & *(_DWORD *)(v64 + 20)) == 0;
              *(_DWORD *)(v64 + 20) &= v65;
              if ( v19 )
                sub_140418E4C(v63);
            }
          }
        }
        __writecr8(v61);
        v35 = v75;
      }
      else
      {
        v35 = v75;
        v34 = sub_14020C810(
                v20,
                v71,
                &v70,
                (LARGE_INTEGER)sub_14028C230,
                (void *)a3,
                v38,
                0,
                0,
                v75,
                (struct _IO_STATUS_BLOCK *)(a3 + 16),
                (IRP **)(a3 + 32));
        if ( (v34 & 0xC0000000) == 0xC0000000 )
          goto LABEL_34;
      }
      goto LABEL_36;
    }
    v34 = -1073741740;
    sub_140230680((signed __int64 *)(v14 + 64), (unsigned __int64)v20, 0x63536D4Du);
LABEL_32:
    *v29 = 0LL;
  }
  v35 = v75;
LABEL_34:
  *(_QWORD *)(a3 + 24) = 0LL;
  *(_DWORD *)(a3 + 16) = v34;
  v36 = KeGetCurrentIrql();
  __writecr8(1uLL);
  sub_14028C230(a3, a3 + 16, v31);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v66 = KeGetCurrentIrql();
      if ( v66 <= 0xFu && v36 <= 0xFu && v66 >= 2u )
      {
        v67 = KeGetCurrentPrcb();
        v68 = *((_QWORD *)v67 + 4375);
        v69 = ~(unsigned __int16)(-1LL << (v36 + 1));
        v19 = (v69 & *(_DWORD *)(v68 + 20)) == 0;
        *(_DWORD *)(v68 + 20) &= v69;
        if ( v19 )
          sub_140418E4C(v67);
      }
    }
  }
  __writecr8(v36);
LABEL_36:
  if ( v35 )
    sub_140366814(v35);
  return 1LL;
}
