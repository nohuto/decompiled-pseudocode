/*
 * XREFs of LdrpInitializePerUserWindowsDirectory @ 0x180085A44
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x18000B3D0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1800192F0 (RtlAppendUnicodeStringToString.c)
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     LdrAddDllDirectory @ 0x180078AB0 (LdrAddDllDirectory.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlpSignalSystemDirsModification @ 0x1800EAE2C (RtlpSignalSystemDirsModification.c)
 */

__int64 __fastcall LdrpInitializePerUserWindowsDirectory(__int64 (__fastcall *a1)(_BYTE *, __int64))
{
  int v1; // eax
  __int16 v3; // bx
  __m128i v4; // [rsp+30h] [rbp-D0h] BYREF
  const void *v5[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v6; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v7[528]; // [rsp+60h] [rbp-A0h] BYREF

  v1 = 2 * a1(v7, 260LL);
  if ( !v1 )
    return 0LL;
  LOWORD(v5[0]) = v1;
  v5[1] = v7;
  WORD1(v5[0]) = 520;
  if ( !*((_QWORD *)&RtlpSystemDirs + 1) )
  {
LABEL_7:
    LdrAddDllDirectory((unsigned __int16 *)v5, &v6);
    return 0LL;
  }
  v3 = v1 + RtlpSystemDirs + 2;
  v4.m128i_i64[1] = RtlAllocateHeap(
                      (__int64)NtCurrentPeb()->ProcessHeap,
                      0,
                      v1 + (unsigned int)(unsigned __int16)RtlpSystemDirs + 2LL);
  if ( v4.m128i_i64[1] )
  {
    v4.m128i_i16[0] = 0;
    v4.m128i_i16[1] = v3;
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v4, (const void **)&RtlpSystemDirs);
    RtlAppendUnicodeStringToString((unsigned __int16 *)&v4, v5);
    RtlAppendUnicodeToString((unsigned __int16 *)&v4, L";");
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, *((__int64 *)&RtlpSystemDirs + 1));
    RtlpSystemDirs = (__int128)v4;
    *((_QWORD *)&RtlpSystem32Dirs + 1) = _mm_srli_si128(v4, 8).m128i_u64[0];
    RtlpSignalSystemDirsModification();
    goto LABEL_7;
  }
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrinit.c",
    4100LL,
    (__int64)"LdrpInitializePerUserWindowsDirectory",
    0LL,
    "Failed to reallocate the system dirs string !\n");
  return 3221225495LL;
}
