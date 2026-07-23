/*
 * XREFs of KeLoadMTRR @ 0x140A8F7D0
 * Callers:
 *     KiLoadMTRRTarget @ 0x140A8F7B0 (KiLoadMTRRTarget.c)
 *     HalpPostSleepMP @ 0x140A96E18 (HalpPostSleepMP.c)
 * Callees:
 *     KeFlushCurrentTbImmediately @ 0x14039AFB0 (KeFlushCurrentTbImmediately.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiLockStepExecution @ 0x140A8FA04 (KiLockStepExecution.c)
 *     KiCompareVarMtrr @ 0x140A8FA4C (KiCompareVarMtrr.c)
 *     KiWriteFixedMtrr @ 0x140A8FB0C (KiWriteFixedMtrr.c)
 *     KiReadFixedMtrr @ 0x140A8FC18 (KiReadFixedMtrr.c)
 */

__int64 __fastcall KeLoadMTRR(__int64 a1)
{
  __int64 v2; // rdx
  PVOID v3; // r8
  __int16 v4; // di
  volatile signed __int32 *SchedulerAssist; // rcx
  bool v6; // di
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned int v11; // r12d
  __int64 v12; // r9
  unsigned int v13; // r10d
  _QWORD *v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // r8
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *v19; // r8
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  _QWORD *v23; // rcx
  _BYTE v24[96]; // [rsp+20h] [rbp-98h] BYREF
  int v25; // [rsp+B0h] [rbp-8h]

  if ( byte_140C418F0 )
  {
    if ( !(unsigned __int8)KiCompareVarMtrr() )
      KeMtrrComparisonFailed = 1;
    if ( qword_140C41900 )
    {
      KiReadFixedMtrr(v24);
      v3 = qword_140C41900;
      if ( !KeGetCurrentPrcb()->Number )
      {
        v2 = 0LL;
        v3 = (PVOID)((_BYTE *)qword_140C41900 - v24);
        v23 = v24;
        while ( *(_QWORD *)((char *)v23 + (_QWORD)v3) == *v23 )
        {
          v2 = (unsigned int)(v2 + 1);
          ++v23;
          if ( (unsigned int)v2 >= 0xB )
            goto LABEL_6;
        }
        KeMtrrComparisonFailed = 1;
      }
    }
LABEL_6:
    v4 = v25;
    _disable();
    SchedulerAssist = (volatile signed __int32 *)KeGetCurrentPrcb()->SchedulerAssist;
    if ( SchedulerAssist )
      _InterlockedOr(SchedulerAssist, 0x200000u);
    v6 = (v4 & 0x200) != 0;
    KiLockStepExecution(a1, v2, v3);
    v7 = __readcr0();
    __writecr0(v7 & 0xFFFFFFFF9FFFFFFFuLL | 0x40000000);
    __wbinvd();
    v8 = __readcr4();
    if ( (v8 & 0x80) != 0 )
      __writecr4(v8 & 0xFFFFFFFFFFFFFF7FuLL);
    else
      KeFlushCurrentTbImmediately();
    v9 = KiMtrrInfo & 0xFFFFFFFFFFFFF7FFuLL;
    v10 = (KiMtrrInfo & 0xFFFFFFFFFFFFF7FFuLL) >> 32;
    __writemsr(0x2FFu, KiMtrrInfo & 0xFFFFFFFFFFFFF7FFuLL);
    v11 = 0;
    if ( (_BYTE)qword_140C418E8 )
    {
      v12 = 0LL;
      v13 = 513;
      do
      {
        v14 = qword_140C418F8;
        v15 = 2 * v12;
        __writemsr(v13 - 1, *((_QWORD *)qword_140C418F8 + v15));
        v10 = HIDWORD(v14[v15 + 1]);
        __writemsr(v13, v14[v15 + 1]);
        v12 = ++v11;
        v13 += 2;
      }
      while ( v11 < (unsigned __int64)(unsigned __int8)qword_140C418E8 );
    }
    if ( qword_140C41900 )
      KiWriteFixedMtrr(qword_140C41900, v10);
    __writemsr(0x2FFu, v9 | 0x800);
    __wbinvd();
    KeFlushCurrentTbImmediately();
    __writecr0(v7);
    if ( (v8 & 0x80) != 0 )
      __writecr4(v8);
    KiLockStepExecution(a1, v16, v17);
    if ( v6 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v19 = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( v19 )
      {
        _m_prefetchw(v19);
        v21 = *v19;
        do
        {
          v22 = v21;
          v21 = _InterlockedCompareExchange(v19, v21 & 0xFFDFFFFF, v21);
        }
        while ( v22 != v21 );
        if ( (v21 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
    }
  }
  return 0LL;
}
