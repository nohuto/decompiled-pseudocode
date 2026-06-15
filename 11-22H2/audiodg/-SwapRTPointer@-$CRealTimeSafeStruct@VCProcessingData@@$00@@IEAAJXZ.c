/*
 * XREFs of ?SwapRTPointer@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14000A8CC
 * Callers:
 *     ?CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z @ 0x1400118B0 (-CommitGraphChanges@CAudioProcessor@@UEAAJ_K@Z.c)
 * Callees:
 *     ??1CProcessingData@@QEAA@XZ @ 0x14000AC30 (--1CProcessingData@@QEAA@XZ.c)
 *     ??4CProcessingData@@QEAAXAEAV0@@Z @ 0x14000D8B0 (--4CProcessingData@@QEAAXAEAV0@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1400381A0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x14006D500 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ?ContinueWaitingForRTActive@?$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ @ 0x14008F35C (-ContinueWaitingForRTActive@-$CRealTimeSafeStruct@VCProcessingData@@$00@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CRealTimeSafeStruct<CProcessingData,1>::SwapRTPointer(__int64 a1)
{
  int v2; // r14d
  __int64 v3; // rdx
  __int64 v4; // r8
  signed __int64 v5; // rax
  signed __int64 i; // rcx
  signed __int64 v7; // rdx
  __int64 v8; // rcx
  int v10; // eax
  unsigned int v11; // esi
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-C8h]
  const char *v15; // [rsp+28h] [rbp-C0h]
  __int128 v16; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v17; // [rsp+50h] [rbp-98h]
  __int64 v18; // [rsp+58h] [rbp-90h]
  __int64 v19; // [rsp+60h] [rbp-88h]
  int v20; // [rsp+68h] [rbp-80h]
  __int128 v21; // [rsp+70h] [rbp-78h]
  __int64 v22; // [rsp+80h] [rbp-68h]
  __int64 v23; // [rsp+88h] [rbp-60h]
  __int64 v24; // [rsp+90h] [rbp-58h]
  int v25; // [rsp+98h] [rbp-50h]
  __int128 v26; // [rsp+A0h] [rbp-48h]
  __int64 v27; // [rsp+B0h] [rbp-38h]
  __int64 v28; // [rsp+B8h] [rbp-30h]
  __int64 v29; // [rsp+C0h] [rbp-28h]
  int v30; // [rsp+C8h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v2 = 0;
  v3 = *(unsigned __int16 *)(a1 + 328);
  v4 = *(_QWORD *)(a1 + 320);
  v5 = v4 ^ (a1 + 144 * v3);
  for ( i = v4 ^ (a1 + 144 * (v3 ^ 1)); ; i = v13 ^ (a1 + 144 * (v12 ^ 1)) )
  {
    v7 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 288), i, v5);
    if ( v7 )
      break;
    v10 = CRealTimeSafeStruct<CProcessingData,1>::ContinueWaitingForRTActive(a1);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1BD,
        (unsigned int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h",
        (const char *)(unsigned int)v10,
        v14);
      return v11;
    }
    ++v2;
    if ( v2 == 100 * (v2 / 100) )
      wil::details::in1diag3::Log_HrMsg(
        retaddr,
        (void *)0x1C1,
        (unsigned int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h",
        (const char *)0x887C0033LL,
        (int)"Non-fatal. Will continue waiting for RT thread...",
        v15);
    v12 = *(unsigned __int16 *)(a1 + 328);
    v13 = *(_QWORD *)(a1 + 320);
    v5 = v13 ^ (a1 + 144 * v12);
  }
  *(_BYTE *)(a1 + 376) = 1;
  v8 = *(unsigned __int16 *)(a1 + 328);
  if ( v7 == (*(_QWORD *)(a1 + 320) ^ (a1 + 144 * v8)) )
  {
    *(_WORD *)(a1 + 328) = v8 ^ 1;
    v16 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v19 = 0LL;
    v20 = 10;
    v21 = 0LL;
    v22 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 10;
    v26 = 0LL;
    v27 = 0LL;
    v28 = 0LL;
    v29 = 0LL;
    v30 = 10;
    CProcessingData::operator=(a1 + 144 * (*(unsigned __int16 *)(a1 + 328) ^ 1LL), &v16);
    CProcessingData::~CProcessingData((CProcessingData *)&v16);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1D2,
      (unsigned int)"avcore\\audiocore\\Engine\\Include\\RealTimeSafeStruct.h",
      (const char *)0x8000000CLL,
      v14);
    return 2147483660LL;
  }
}
