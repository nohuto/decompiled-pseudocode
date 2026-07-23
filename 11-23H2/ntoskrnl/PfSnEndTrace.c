/*
 * XREFs of PfSnEndTrace @ 0x14074AA38
 * Callers:
 *     PfSnEndTraceWorkerThreadRoutine @ 0x14074AA20 (PfSnEndTraceWorkerThreadRoutine.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140230810 (ExAcquireFastMutex.c)
 *     ExReleaseFastMutex @ 0x140230950 (ExReleaseFastMutex.c)
 *     KeSetEvent @ 0x14023C6B0 (KeSetEvent.c)
 *     EtwWrite @ 0x140257960 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1402584E0 (EtwEventEnabled.c)
 *     PfSnDeactivateTrace @ 0x1402F54AC (PfSnDeactivateTrace.c)
 *     PfFbBufferListFlushStandby @ 0x1402F59CC (PfFbBufferListFlushStandby.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     PfSnBuildDumpFromTrace @ 0x14074AC80 (PfSnBuildDumpFromTrace.c)
 *     PfSnCleanupTrace @ 0x14074BCB8 (PfSnCleanupTrace.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PfSnEndTrace(struct _EX_RUNDOWN_REF *P)
{
  char PreviousMode; // r14
  int Ptr_high; // edx
  int v4; // ecx
  __int64 Count_low; // rax
  int v6; // edi
  _QWORD *v7; // rsi
  _QWORD *v8; // rax
  unsigned int v9; // eax
  int v11; // eax
  PVOID v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  __int16 v15; // [rsp+38h] [rbp-29h] BYREF
  PVOID Pa; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-19h] BYREF
  struct _EX_RUNDOWN_REF *v18; // [rsp+58h] [rbp-9h]
  int v19; // [rsp+60h] [rbp-1h]
  int v20; // [rsp+64h] [rbp+3h]
  char *v21; // [rsp+68h] [rbp+7h]
  __int64 v22; // [rsp+70h] [rbp+Fh]
  struct _EX_RUNDOWN_REF *v23; // [rsp+78h] [rbp+17h]
  __int64 v24; // [rsp+80h] [rbp+1Fh]
  struct _EX_RUNDOWN_REF *v25; // [rsp+88h] [rbp+27h]
  __int64 v26; // [rsp+90h] [rbp+2Fh]

  Pa = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  KeGetCurrentThread()->PreviousMode = 0;
  PfSnDeactivateTrace(P);
  if ( P && qword_140C6A708 && EtwEventEnabled(qword_140C6A708, &PfSnEvt_EndTrace_Info) )
  {
    v14 = -1LL;
    do
      ++v14;
    while ( *((_WORD *)&P[3].Count + v14) );
    v15 = v14;
    UserData.Ptr = (ULONGLONG)&v15;
    v19 = 2 * (unsigned __int16)v14;
    v18 = P + 3;
    v21 = (char *)&P[10].Ptr + 4;
    v23 = P + 11;
    v25 = P + 50;
    *(_QWORD *)&UserData.Size = 2LL;
    v20 = 0;
    v22 = 4LL;
    v24 = 4LL;
    v26 = 4LL;
    EtwWrite(qword_140C6A708, &PfSnEvt_EndTrace_Info, 0LL, 5u, &UserData);
  }
  Ptr_high = HIDWORD(P[40].Ptr);
  v4 = HIDWORD(P[41].Ptr);
  if ( Ptr_high > v4 )
  {
    HIDWORD(P[40].Ptr) = v4;
    Ptr_high = v4;
  }
  Count_low = SLODWORD(P[41].Count);
  if ( (int)Count_low < dword_140C64F84 )
  {
    *((_DWORD *)&P[35].Ptr + Count_low + 1) = v4 - Ptr_high;
    v11 = HIDWORD(P[41].Ptr);
    ++LODWORD(P[41].Count);
    HIDWORD(P[40].Ptr) = v11;
  }
  else
  {
    if ( (int)Count_low > 10 )
    {
      LODWORD(P[41].Count) = 10;
      LODWORD(Count_low) = 10;
    }
    if ( Ptr_high != v4 )
      *((_DWORD *)&P[35].Count + (int)Count_low) += v4 - Ptr_high;
  }
  if ( LODWORD(P[11].Count) != 1 || LODWORD(P[50].Count) == 8 )
    v6 = PfSnBuildDumpFromTrace(&Pa, P);
  else
    v6 = -2147483614;
  v7 = Pa;
  P[56].Count = (unsigned __int64)Pa;
  LODWORD(P[57].Count) = v6;
  PfSnCleanupTrace(P);
  ExFreePoolWithTag(P, 0);
  if ( v6 >= 0 )
  {
    PfFbBufferListFlushStandby((_SLIST_ENTRY *)&stru_140C65220);
    ExAcquireFastMutex(&FastMutex);
    if ( dword_140C6A664 == 1 )
    {
      ExReleaseFastMutex(&FastMutex);
      ExFreePoolWithTag(v7, 0);
    }
    else
    {
      v8 = qword_140C6A620;
      if ( *(PVOID **)qword_140C6A620 != &qword_140C6A618 )
LABEL_27:
        __fastfail(3u);
      v7[1] = qword_140C6A620;
      *v7 = &qword_140C6A618;
      *v8 = v7;
      v9 = dword_140C6A660 + 1;
      qword_140C6A620 = v7;
      while ( 1 )
      {
        dword_140C6A660 = v9;
        if ( v9 <= dword_140C64E1C )
          break;
        v12 = qword_140C6A618;
        if ( qword_140C6A618 == &qword_140C6A618 )
          break;
        if ( *((PVOID **)qword_140C6A618 + 1) != &qword_140C6A618 )
          goto LABEL_27;
        v13 = *(_QWORD *)qword_140C6A618;
        if ( *(PVOID *)(*(_QWORD *)qword_140C6A618 + 8LL) != qword_140C6A618 )
          goto LABEL_27;
        qword_140C6A618 = *(PVOID *)qword_140C6A618;
        *(_QWORD *)(v13 + 8) = &qword_140C6A618;
        ExFreePoolWithTag(v12, 0);
        v9 = dword_140C6A660 - 1;
      }
      ExReleaseFastMutex(&FastMutex);
      if ( qword_140C6A668 )
        KeSetEvent(qword_140C6A668, 0, 0);
      v6 = 0;
    }
  }
  KeGetCurrentThread()->PreviousMode = PreviousMode;
  return (unsigned int)v6;
}
