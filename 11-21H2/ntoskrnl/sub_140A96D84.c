/*
 * XREFs of sub_140A96D84 @ 0x140A96D84
 * Callers:
 *     sub_14045F6A0 @ 0x14045F6A0 (sub_14045F6A0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     PsLookupProcessByProcessId @ 0x1407A8720 (PsLookupProcessByProcessId.c)
 *     sub_1407DB6A4 @ 0x1407DB6A4 (sub_1407DB6A4.c)
 *     RtlUpcaseUnicodeString @ 0x1407E5410 (RtlUpcaseUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140A972B0 @ 0x140A972B0 (sub_140A972B0.c)
 *     sub_140A9755C @ 0x140A9755C (sub_140A9755C.c)
 */

void __fastcall sub_140A96D84(void *a1, char a2)
{
  PEPROCESS v2; // rbx
  unsigned __int64 v3; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v6; // r9
  int v7; // eax
  bool v8; // zf
  UNICODE_STRING SourceString; // [rsp+20h] [rbp-10h] BYREF
  PVOID P; // [rsp+50h] [rbp+20h] BYREF
  PEPROCESS Process; // [rsp+58h] [rbp+28h] BYREF

  if ( a2 )
  {
    Process = 0LL;
    P = 0LL;
    SourceString = 0LL;
    if ( PsLookupProcessByProcessId(a1, &Process) >= 0 )
    {
      v2 = Process;
      if ( (int)sub_1407DB6A4((__int64)Process, &P) >= 0 )
      {
        sub_140A972B0(P, &SourceString);
        RtlUpcaseUnicodeString(&SourceString, &SourceString, 0);
        v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C1ACD0);
        if ( (unsigned int)sub_140A9755C(&SourceString) )
          _InterlockedOr((volatile signed __int32 *)v2 + 280, 0x10000u);
        KeReleaseSpinLockFromDpcLevel(&qword_140C1ACD0);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v6 = *((_QWORD *)CurrentPrcb + 4375);
              v7 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
              v8 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
              *(_DWORD *)(v6 + 20) &= v7;
              if ( v8 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v3);
        ExFreePoolWithTag(P, 0);
      }
      ObfDereferenceObjectWithTag(Process, 0x746C6644u);
    }
  }
}
