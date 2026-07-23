/*
 * XREFs of sub_140593B18 @ 0x140593B18
 * Callers:
 *     sub_140213558 @ 0x140213558 (sub_140213558.c)
 *     sub_1402C8FD0 @ 0x1402C8FD0 (sub_1402C8FD0.c)
 *     sub_140308F00 @ 0x140308F00 (sub_140308F00.c)
 *     sub_1403D77D4 @ 0x1403D77D4 (sub_1403D77D4.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     RtlCaptureStackBackTrace @ 0x140295EF0 (RtlCaptureStackBackTrace.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1402D8E9C @ 0x1402D8E9C (sub_1402D8E9C.c)
 *     RtlAppendUnicodeStringToString @ 0x1402DFA30 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x1402DFAC0 (RtlAppendUnicodeToString.c)
 *     sub_1402FDA80 @ 0x1402FDA80 (sub_1402FDA80.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140593B18(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, unsigned int a3)
{
  char v3; // bl
  unsigned int v4; // r14d
  ULONG_PTR v5; // r15
  unsigned int v6; // r12d
  unsigned __int16 MaximumLength; // di
  BOOL v8; // esi
  wchar_t *Buffer; // rbx
  _QWORD *v10; // r14
  unsigned __int64 *v11; // r13
  _QWORD *v12; // rax
  _QWORD *v13; // r15
  int v14; // eax
  int v15; // ecx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v18; // r9
  int v19; // eax
  bool v20; // zf
  __int64 v21; // r10
  unsigned __int8 v22[8]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v24; // [rsp+50h] [rbp-B0h] BYREF
  ULONG_PTR v25; // [rsp+58h] [rbp-A8h] BYREF
  UNICODE_STRING Destination; // [rsp+60h] [rbp-A0h] BYREF
  ULONG BackTraceHash[4]; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR *v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  int *v31; // [rsp+B0h] [rbp-50h]
  __int64 v32; // [rsp+B8h] [rbp-48h]
  _DWORD *v33; // [rsp+C0h] [rbp-40h]
  __int64 v34; // [rsp+C8h] [rbp-38h]
  wchar_t *v35; // [rsp+D0h] [rbp-30h]
  _DWORD v36[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 *v37; // [rsp+E0h] [rbp-20h]
  __int64 v38; // [rsp+E8h] [rbp-18h]
  PVOID BackTrace[16]; // [rsp+F0h] [rbp-10h] BYREF

  v3 = a3;
  LODWORD(v23) = BugCheckParameter3;
  v4 = BugCheckParameter3;
  v25 = BugCheckParameter2;
  v5 = BugCheckParameter2;
  v24 = a3;
  v6 = 0;
  MaximumLength = 128;
  BackTraceHash[0] = 0;
  v22[0] = 0;
  memset(BackTrace, 0, sizeof(BackTrace));
  Destination = 0LL;
  v8 = dword_140D0521C != 0;
  if ( (v3 & 1) != 0 && !byte_140C09804 && !(_BYTE)KdDebuggerNotPresent )
  {
    v8 = 1;
LABEL_5:
    Buffer = Destination.Buffer;
    goto LABEL_42;
  }
  if ( v8 )
    goto LABEL_5;
  RtlCaptureStackBackTrace(1u, 0x10u, BackTrace, BackTraceHash);
  Destination.MaximumLength = 128;
  Destination.Buffer = (wchar_t *)sub_1402828F0(64, 0x80uLL, 0x20206D4Du);
  Buffer = Destination.Buffer;
  if ( !Destination.Buffer )
  {
    MaximumLength = 0;
    Destination.MaximumLength = 0;
  }
  v10 = 0LL;
  sub_1402D8E9C(v22);
  v11 = (unsigned __int64 *)BackTrace;
  while ( *v11 > 0x7FFFFFFEFFFFLL )
  {
    v12 = sub_1402FDA80(*v11, 0);
    v13 = v12;
    if ( v12 )
    {
      if ( (v24 & 2) != 0 && (v12[13] & 0x2000000) != 0 && (qword_140D01450 & 0x400000) == 0 )
      {
        v8 = 1;
        break;
      }
      if ( Buffer && (!v10 || v10 != v12) )
      {
        v14 = *((unsigned __int16 *)v12 + 44);
        v15 = v14 + 2;
        if ( !v10 )
          v15 = v14;
        if ( (unsigned int)Destination.Length + v15 <= MaximumLength )
        {
          if ( v10 )
            RtlAppendUnicodeToString(&Destination, &word_140438490);
          RtlAppendUnicodeStringToString(&Destination, (PCUNICODE_STRING)(v13 + 11));
          Buffer = Destination.Buffer;
          v10 = v13;
          MaximumLength = Destination.MaximumLength;
        }
        else
        {
          MaximumLength = Destination.Length;
          Destination.MaximumLength = Destination.Length;
        }
      }
    }
    ++v6;
    ++v11;
    if ( v6 >= 0x10 )
      break;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140D311C0);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && v22[0] <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v18 = *((_QWORD *)CurrentPrcb + 4375);
        v19 = ~(unsigned __int16)(-1LL << (v22[0] + 1));
        v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= v19;
        if ( v20 )
          sub_140418E4C((__int64)CurrentPrcb);
        Buffer = Destination.Buffer;
      }
    }
  }
  __writecr8(v22[0]);
  if ( !v8
    && *(_QWORD *)&qword_140C53448
    && **(_DWORD **)&qword_140C53448 > 5u
    && sub_1402A2000(*(__int64 *)&qword_140C53448, 0x400000000080LL) )
  {
    v4 = v23;
    v5 = v25;
    v29 = &v25;
    v31 = (int *)&v24;
    v30 = 8LL;
    v33 = v36;
    v36[0] = Destination.Length;
    v23 = 2164260864LL;
    v37 = &v23;
    v24 = v4;
    v32 = 4LL;
    v34 = 2LL;
    v35 = Buffer;
    v36[1] = 0;
    v38 = 8LL;
    sub_14024A9B0(v21, (unsigned __int8 *)&unk_14002CC90, 0LL, 1u, 0, 0, 7u, &v28);
  }
  else
  {
    v4 = v23;
    v5 = v25;
  }
LABEL_42:
  if ( Buffer )
    ExFreePoolWithTag(Buffer, 0);
  if ( v8 )
    KeBugCheckEx(0x1Au, 0x1233uLL, v5, v4, 0LL);
}
