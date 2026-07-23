/*
 * XREFs of LdrpInitializePerUserWindowsDirectory @ 0x18008939C
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     RtlAppendUnicodeStringToString @ 0x180049410 (RtlAppendUnicodeStringToString.c)
 *     RtlAppendUnicodeToString @ 0x18004F4E0 (RtlAppendUnicodeToString.c)
 *     LdrAddDllDirectory @ 0x180060070 (LdrAddDllDirectory.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpSignalSystemDirsModification @ 0x1800EA79C (RtlpSignalSystemDirsModification.c)
 */

__int64 __fastcall LdrpInitializePerUserWindowsDirectory(__int64 (__fastcall *a1)(_BYTE *, __int64))
{
  int v1; // eax
  unsigned __int16 v3; // bx
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING Source; // [rsp+40h] [rbp-C0h] BYREF
  PVOID Cookie; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v7[528]; // [rsp+60h] [rbp-A0h] BYREF

  v1 = 2 * a1(v7, 260LL);
  if ( !v1 )
    return 0LL;
  Source.Length = v1;
  Source.Buffer = (wchar_t *)v7;
  Source.MaximumLength = 520;
  if ( !RtlpSystemDirs.Buffer )
  {
LABEL_7:
    LdrAddDllDirectory(&Source, &Cookie);
    return 0LL;
  }
  v3 = v1 + RtlpSystemDirs.Length + 2;
  Destination.Buffer = (wchar_t *)RtlAllocateHeap(
                                    NtCurrentPeb()->ProcessHeap,
                                    0,
                                    v1 + (unsigned int)RtlpSystemDirs.Length + 2LL);
  if ( Destination.Buffer )
  {
    Destination.Length = 0;
    Destination.MaximumLength = v3;
    RtlAppendUnicodeStringToString(&Destination, &RtlpSystemDirs);
    RtlAppendUnicodeStringToString(&Destination, &Source);
    RtlAppendUnicodeToString(&Destination, L";");
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, RtlpSystemDirs.Buffer);
    RtlpSystemDirs = Destination;
    *((_QWORD *)&RtlpSystem32Dirs + 1) = _mm_srli_si128((__m128i)Destination, 8).m128i_u64[0];
    RtlpSignalSystemDirsModification();
    goto LABEL_7;
  }
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrinit.c",
    3992,
    (__int64)"LdrpInitializePerUserWindowsDirectory",
    0,
    "Failed to reallocate the system dirs string !\n");
  return 3221225495LL;
}
