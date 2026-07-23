/*
 * XREFs of PspApplyMitigationOptions @ 0x1406B3730
 * Callers:
 *     PspAllocateProcess @ 0x1406B45D8 (PspAllocateProcess.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028B620 (ExReleaseRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     Feature_FsctlProcessMitigation__private_IsEnabledNoReporting @ 0x14040FF30 (Feature_FsctlProcessMitigation__private_IsEnabledNoReporting.c)
 *     ObReferenceProcessHandleTable @ 0x140742830 (ObReferenceProcessHandleTable.c)
 *     ExEnableHandleExceptions @ 0x1407DC294 (ExEnableHandleExceptions.c)
 *     PspSetRedirectionTrustPolicy @ 0x1407DD7F4 (PspSetRedirectionTrustPolicy.c)
 *     PspSetNoChildProcessRestrictedPolicy @ 0x1407E8840 (PspSetNoChildProcessRestrictedPolicy.c)
 *     PspDecodeMitigationExecuteOptions @ 0x1407E9258 (PspDecodeMitigationExecuteOptions.c)
 *     KeSetCheckStackExtentsProcess @ 0x1409745A4 (KeSetCheckStackExtentsProcess.c)
 */

__int64 __fastcall PspApplyMitigationOptions(__int64 a1, __int64 a2, __m128i *a3, __int128 *a4, int a5)
{
  __m128i v5; // xmm2
  unsigned __int64 v8; // xmm3_8
  unsigned __int64 v10; // xmm1_8
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rdx
  int IsEnabledNoReporting; // eax
  int v15; // r10d
  __int64 v16; // r11
  unsigned __int64 v17; // rax
  __int64 v18; // r9
  unsigned __int8 v19; // cl
  __int64 v20; // r8
  int v21; // eax
  char v22; // si
  __int64 v23; // rdx
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // r8
  unsigned __int64 v27; // rax
  __int64 result; // rax
  char v29; // bl
  unsigned __int64 v30; // xmm1_8
  __m128i v31; // [rsp+20h] [rbp-60h] BYREF
  unsigned __int64 v32; // [rsp+30h] [rbp-50h]
  __m128i v33; // [rsp+40h] [rbp-40h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-30h]
  __int128 v35; // [rsp+58h] [rbp-28h]
  unsigned __int64 v36; // [rsp+68h] [rbp-18h]

  v5 = *a3;
  v8 = a3[1].m128i_u64[0];
  v10 = *((_QWORD *)a4 + 2);
  v11 = *a4;
  v33 = *a3;
  v35 = v11;
  v34 = v8;
  v36 = v10;
  if ( *(_WORD *)(a1 + 2412) == 332 )
  {
    v31 = v5;
    v32 = v8;
    *(_BYTE *)(a1 + 643) = PspDecodeMitigationExecuteOptions(&v31);
  }
  if ( (((unsigned __int64)v33.m128i_i64[0] >> 8) & 3) != 1 )
  {
    if ( (((unsigned __int64)v33.m128i_i64[0] >> 8) & 3) != 3 )
      goto LABEL_7;
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 8u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x10u);
LABEL_7:
  if ( (v33.m128i_i8[2] & 3) == 0 )
  {
    if ( (a5 & 1) != 0 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( (v33.m128i_i8[2] & 3) == 2 )
LABEL_11:
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x40u);
LABEL_12:
  if ( (*(_DWORD *)(a1 + 2512) & 0x40) != 0 )
    goto LABEL_18;
  if ( (((unsigned __int64)v33.m128i_i64[0] >> 20) & 3) == 0 )
  {
    if ( (a5 & 2) == 0 )
      goto LABEL_18;
    goto LABEL_17;
  }
  if ( (((unsigned __int64)v33.m128i_i64[0] >> 20) & 3) == 1 )
LABEL_17:
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x20u);
LABEL_18:
  if ( !a2 )
    goto LABEL_27;
  if ( (((unsigned __int64)v33.m128i_i64[0] >> 24) & 3) == 0 )
  {
    if ( (a5 & 4) == 0 )
      goto LABEL_25;
LABEL_23:
    v12 = ObReferenceProcessHandleTable(a1);
    if ( v12 )
    {
      LOBYTE(v13) = 1;
      ExEnableHandleExceptions(v12, v13);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 1112));
    }
    goto LABEL_25;
  }
  if ( (((unsigned __int64)v33.m128i_i64[0] >> 24) & 3) == 1 )
    goto LABEL_23;
LABEL_25:
  if ( _bittest((const signed __int32 *)(a2 + 2512), 0xCu) )
    v33.m128i_i64[0] = v33.m128i_i64[0] & 0xFFFFFFFFCFFFFFFFuLL | 0x10000000;
LABEL_27:
  if ( (((unsigned __int64)v33.m128i_i64[0] >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x3000u);
  if ( !_bittest((const signed __int32 *)(a1 + 2512), 0xCu) && (((unsigned __int64)v35 >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x2000u);
  IsEnabledNoReporting = Feature_FsctlProcessMitigation__private_IsEnabledNoReporting();
  v15 = 0;
  if ( IsEnabledNoReporting )
  {
    if ( a2 && (*(_DWORD *)(a2 + 2928) & 2) != 0 )
      v34 = v34 & 0xFFFFFFFFCFFFFFFFuLL | 0x10000000;
    if ( ((v34 >> 28) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2928), 6u);
    if ( (*(_DWORD *)(a1 + 2928) & 2) == 0 && ((v36 >> 28) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2928), 4u);
  }
  v16 = 512LL;
  if ( (((unsigned __int64)v33.m128i_i64[0] >> 36) & 3) != 1 )
  {
    if ( (((unsigned __int64)v33.m128i_i64[0] >> 36) & 3) != 3 )
      goto LABEL_45;
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x200u);
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x900u);
LABEL_45:
  v33.m128i_i64[1] = _mm_srli_si128(_mm_loadu_si128(&v33), 8).m128i_u64[0];
  if ( (v33.m128i_i8[15] & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x400u);
  if ( (*(_DWORD *)(a1 + 2512) & 0x100) != 0 )
  {
    v33.m128i_i64[1] = v33.m128i_i64[1] & 0xFFFFFFFFFCCCFFFFuLL | 0x2220000;
    *((_QWORD *)&v35 + 1) = *((_QWORD *)&v35 + 1) & 0xFFFFFFFFFCCCFFFFuLL | 0x2220000;
  }
  else if ( (((unsigned __int64)v35 >> 36) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x800u);
  }
  if ( (v33.m128i_i8[4] & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x80u);
  if ( (((unsigned __int64)v33.m128i_i64[0] >> 40) & 3) != 0 )
  {
    if ( (((unsigned __int64)v33.m128i_i64[0] >> 40) & 3) != 1 )
    {
      if ( (((unsigned __int64)v33.m128i_i64[0] >> 40) & 3) == 3 )
      {
        if ( PspDisableControlFlowGuardExportSuppression || MmEnableControlFlowGuardXfg )
        {
          v33.m128i_i64[0] = v33.m128i_i64[0] & 0xFFFFFCFFFFFFFFFFuLL | 0x10000000000LL;
        }
        else
        {
          _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 2u);
          v33.m128i_i64[0] |= 0x30000000000uLL;
        }
        _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 1u);
        if ( (a5 & 0x10) == 0 )
          KeSetCheckStackExtentsProcess(a1, 1LL);
      }
      goto LABEL_69;
    }
LABEL_67:
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 1u);
    if ( (a5 & 0x10) == 0 )
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 632), 5u);
    goto LABEL_69;
  }
  if ( (a5 & 8) != 0 )
  {
    v17 = v33.m128i_i64[0] & 0xFFFFFCFFFFFFFFFFuLL | 0x10000000000LL;
    v33.m128i_i64[0] = v17;
    if ( (a5 & 0x20) != 0 && !PspDisableControlFlowGuardExportSuppression && !MmEnableControlFlowGuardXfg )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 2u);
      v33.m128i_i64[0] = v17 | 0x30000000000LL;
    }
    goto LABEL_67;
  }
LABEL_69:
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 8) & 3) == 1 && (*(_DWORD *)(a1 + 2512) & 1) != 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 4u);
  if ( ((v34 >> 8) & 3) == 0 )
    goto LABEL_77;
  if ( ((v34 >> 8) & 3) != 1 )
    goto LABEL_78;
  if ( (*(_DWORD *)(a1 + 2512) & 1) != 0 && MmEnableControlFlowGuardXfg != v15 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x2000000u);
  else
LABEL_77:
    v34 = v16 | v34 & 0xFFFFFFFFFFFFFEFFuLL;
LABEL_78:
  v18 = 0x4000000LL;
  if ( ((v36 >> 8) & 3) == 1 )
  {
    if ( (BYTE1(v34) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x4000000u);
    else
      v36 = v16 | v36 & 0xFFFFFFFFFFFFFEFFuLL;
  }
  if ( (((unsigned __int64)v33.m128i_i64[0] >> 44) & 3) == 1 )
  {
    if ( *(_BYTE *)(a1 + 2168) < 8u )
      *(_BYTE *)(a1 + 2168) = 8;
    if ( *(_BYTE *)(a1 + 2169) < 8u )
      *(_BYTE *)(a1 + 2169) = 8;
  }
  else
  {
    if ( (((unsigned __int64)v33.m128i_i64[0] >> 44) & 3) != 3 )
      goto LABEL_93;
    if ( *(_BYTE *)(a1 + 2168) < 6u )
      *(_BYTE *)(a1 + 2168) = 6;
    if ( *(_BYTE *)(a1 + 2169) < 6u )
      *(_BYTE *)(a1 + 2169) = 6;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x800000u);
LABEL_93:
  if ( (*(_DWORD *)(a1 + 2512) & 0x800000) == 0 )
  {
    if ( (((unsigned __int64)v35 >> 44) & 3) == 1 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x1000000u);
    }
    else if ( (((unsigned __int64)v35 >> 44) & 3) == 3 )
    {
      _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x2000000u);
    }
  }
  v19 = v33.m128i_i8[0];
  if ( (((unsigned __int8)v33.m128i_i8[0] >> 4) & 3) == 0 && (*(_DWORD *)(a1 + 2512) & 1) != 0 )
  {
    v33.m128i_i64[0] = v33.m128i_i64[0] & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    v19 = v33.m128i_i8[0];
  }
  if ( ((v19 >> 4) & 3) != 1 && (((unsigned __int64)v35 >> 4) & 3) == 1 )
    v33.m128i_i64[0] |= 0x30uLL;
  if ( (a5 & 0x30000) == 0x10000 )
  {
    v33.m128i_i64[0] = v33.m128i_i64[0] & 0xFFFCFFFFFFFFFFFFuLL | 0x1000000000000LL;
  }
  else if ( (a5 & 0x30000) == 0x30000 && (v33.m128i_i8[6] & 3) != 1 )
  {
    v33.m128i_i64[0] |= 0x3000000000000uLL;
  }
  if ( (HIWORD(v33.m128i_i64[0]) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x10000u);
  }
  else if ( (HIWORD(v33.m128i_i64[0]) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x20000u);
  }
  if ( (*(_DWORD *)(a1 + 2512) & 0x30000) == 0 && (WORD3(v35) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x20000u);
  if ( a2 && (*(_DWORD *)(a2 + 2512) & 0x80000) != 0 )
    v33.m128i_i64[0] = v33.m128i_i64[0] & 0xFFCFFFFFFFFFFFFFuLL | 0x10000000000000LL;
  if ( (((unsigned __int64)v33.m128i_i64[0] >> 52) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x80000u);
  if ( (*(_DWORD *)(a1 + 2512) & 0x80000) == 0 && (((unsigned __int64)v35 >> 52) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x100000u);
  if ( a2 && (*(_DWORD *)(a2 + 2512) & 0x200000) != 0 )
    v33.m128i_i64[0] = v33.m128i_i64[0] & 0xFCFFFFFFFFFFFFFFuLL | 0x100000000000000LL;
  if ( (v33.m128i_i8[7] & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x200000u);
  if ( (*(_DWORD *)(a1 + 2512) & 0x200000) == 0 && (BYTE7(v35) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x400000u);
  if ( a2 && (*(_DWORD *)(a2 + 2512) & 0x40000) != 0 )
    v33.m128i_i64[0] = v33.m128i_i64[0] & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
  if ( (((unsigned __int64)v33.m128i_i64[0] >> 60) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x40000u);
  v20 = 0x8000000LL;
  if ( a2 )
  {
    v21 = *(_DWORD *)(a2 + 2512);
    if ( (v21 & 0x4000000) != 0 )
    {
      v33.m128i_i64[1] = v33.m128i_i64[1] & 0xFFFFFFFFFFFFFFCFuLL | 0x10;
    }
    else if ( (v21 & 0x8000000) != 0 )
    {
      v33.m128i_i64[1] |= 0x30uLL;
    }
  }
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 4) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0xC000000u);
  }
  else if ( (((unsigned __int64)v33.m128i_i64[1] >> 4) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x8000000u);
  }
  if ( (*(_DWORD *)(a1 + 2512) & 0xC000000) == 0 && ((*((_QWORD *)&v35 + 1) >> 4) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x8000000u);
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 1u);
  if ( (*(_DWORD *)(a1 + 2516) & 1) == 0 && ((*((_QWORD *)&v35 + 1) >> 28) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 2u);
  if ( (v33.m128i_i8[12] & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 4u);
  if ( (HIWORD(v33.m128i_i64[1]) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x40000000u);
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 52) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x2000u);
  if ( (*(_DWORD *)(a1 + 2516) & 4) == 0 && (BYTE12(v35) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 8u);
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 40) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x400u);
  if ( (*(_DWORD *)(a1 + 2516) & 0x400) == 0 && ((*((_QWORD *)&v35 + 1) >> 40) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x800u);
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 16) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x10u);
  if ( (*(_DWORD *)(a1 + 2516) & 0x10) == 0 && ((*((_QWORD *)&v35 + 1) >> 16) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x20u);
  if ( *(_WORD *)(a1 + 2412) == 332 )
  {
    if ( (((unsigned __int64)v33.m128i_i64[1] >> 20) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x40u);
    if ( (*(_DWORD *)(a1 + 2516) & 0x40) == 0 && ((*((_QWORD *)&v35 + 1) >> 20) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x80u);
    if ( (((unsigned __int64)v33.m128i_i64[1] >> 24) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x100u);
    if ( (*(_DWORD *)(a1 + 2516) & 0x100) == 0 && ((*((_QWORD *)&v35 + 1) >> 24) & 3) == 1 )
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x200u);
  }
  v22 = (unsigned __int64)v33.m128i_i64[1] >> 36;
  if ( (v22 & 3) == 1 )
  {
    v23 = 1LL;
    goto LABEL_188;
  }
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 36) & 3) == 3 )
  {
    v23 = 2LL;
LABEL_188:
    PspSetNoChildProcessRestrictedPolicy(a1, v23, 0x8000000LL, 0x4000000LL);
  }
  if ( (v22 & 3) != 1 && ((*((_QWORD *)&v35 + 1) >> 36) & 3) == 1 )
    PspSetNoChildProcessRestrictedPolicy(a1, 3LL, v20, v18);
  v24 = 0x10000000LL;
  if ( a2 )
  {
    v25 = *(_DWORD *)(a2 + 2512);
    if ( (v25 & 0x10000000) != 0 && (v25 & 0x20000000) == 0 )
      v33.m128i_i64[1] = v33.m128i_i64[1] & 0xFFFFCFFFFFFFFFFFuLL | 0x100000000000LL;
  }
  if ( (((unsigned __int64)v33.m128i_i64[1] >> 44) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x10000000u);
  }
  else if ( (((unsigned __int64)v33.m128i_i64[1] >> 44) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2512), 0x30000000u);
  }
  v26 = 0x4000LL;
  switch ( ((unsigned __int64)v33.m128i_i64[1] >> 60) & 3 )
  {
    case 0uLL:
      if ( (a5 & 0x40000) == 0 || (a5 & 0x800000) != 0 || (a5 & 0x1000000) != 0 )
        break;
      if ( (a5 & 0x100000) != 0 )
        _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x100000u);
      v33.m128i_i64[1] = v33.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
LABEL_210:
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x4000u);
      break;
    case 1uLL:
      goto LABEL_210;
    case 3uLL:
      v33.m128i_i64[1] = v33.m128i_i64[1] & 0xCFFFFFFFFFFFFFFFuLL | 0x1000000000000000LL;
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x4000u);
      _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x100000u);
      break;
  }
  if ( ((*((_QWORD *)&v35 + 1) >> 60) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x8000u);
  if ( (*(_DWORD *)(a1 + 2516) & 0x4000) == 0 )
  {
    v27 = v34 & 0xFFFFFFFFFFFFFFFCuLL | 2;
    goto LABEL_221;
  }
  _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x20000u);
  if ( (v34 & 3) != 0 )
  {
    if ( (v34 & 3) != 3 )
      goto LABEL_220;
    goto LABEL_219;
  }
  if ( (a5 & 0x200000) != 0 )
LABEL_219:
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x80000000);
LABEL_220:
  v27 = v34 & 0xFFFFFFFFFFFFFFFCuLL | 1;
LABEL_221:
  v34 = v27;
  if ( (v36 & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x40000u);
  if ( ((v34 >> 4) & 3) == 1 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x200000u);
  }
  else if ( ((v34 >> 4) & 3) == 3 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x200000u);
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x400000u);
  }
  if ( ((v36 >> 4) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x800000u);
  if ( ((v34 >> 12) & 3) == 0 )
  {
    v34 = v34 & 0xFFFFFFFFFFFFCFFFuLL | 0x1000;
    goto LABEL_233;
  }
  if ( ((v34 >> 12) & 3) == 1 )
LABEL_233:
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x8000000u);
  if ( ((v36 >> 12) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x10000000u);
  if ( ((v34 >> 16) & 3) == 0 )
  {
    if ( (a5 & 0x400000) != 0 )
      goto LABEL_241;
    goto LABEL_240;
  }
  if ( ((v34 >> 16) & 3) == 1 )
LABEL_240:
    _InterlockedOr((volatile signed __int32 *)(a1 + 2516), 0x40000000u);
LABEL_241:
  result = v34 >> 20;
  v29 = v34 >> 20;
  if ( (v29 & 3) == 1 )
    result = PspSetRedirectionTrustPolicy(a1, 1LL, 0x4000LL, 0x10000000LL);
  if ( (v29 & 3) != 1 && ((v36 >> 20) & 3) == 1 )
    result = PspSetRedirectionTrustPolicy(a1, 2LL, v26, v24);
  if ( ((v34 >> 24) & 3) == 1 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 2928), 1u);
  v30 = v34;
  *a3 = v33;
  a3[1].m128i_i64[0] = v30;
  return result;
}
