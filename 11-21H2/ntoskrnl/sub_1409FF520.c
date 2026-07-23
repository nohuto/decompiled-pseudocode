/*
 * XREFs of sub_1409FF520 @ 0x1409FF520
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402A3D80 (ExReleaseFastMutexUnsafe.c)
 *     ExAcquireFastMutexUnsafe @ 0x1402A3DC0 (ExAcquireFastMutexUnsafe.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_14093E520 @ 0x14093E520 (sub_14093E520.c)
 *     sub_14093E830 @ 0x14093E830 (sub_14093E830.c)
 */

__int64 __fastcall sub_1409FF520(unsigned int a1)
{
  KPROCESSOR_MODE v3; // dl
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v5; // edi
  int v6; // [rsp+30h] [rbp-38h] BYREF
  wchar_t Dst[12]; // [rsp+38h] [rbp-30h] BYREF

  if ( dword_140C15C70 != 2 )
    return 3221225474LL;
  if ( a1 > 0xFFFF )
    return 3221225485LL;
  v3 = *((_BYTE *)KeGetCurrentThread() + 562);
  if ( v3 && !SeSinglePrivilegeCheck(stru_140D3CA50, v3) )
    return 3221225569LL;
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireFastMutexUnsafe(&stru_140C11680);
  swprintf_s(Dst, 0xBuLL, L"Driver%04X", a1);
  v6 = 0;
  v5 = sub_14093E520(Dst, (__int64)&qword_140042080, 0LL, &v6, 0LL);
  if ( v5 != -1073741568 )
    goto LABEL_11;
  if ( ((2 * ((a1 | (2 * a1)) & 0xC4444444)) & a1) != 0 )
  {
    swprintf_s(Dst, 0xBuLL, L"Driver%04x", a1);
    v6 = 0;
    v5 = sub_14093E520(Dst, (__int64)&qword_140042080, 0LL, &v6, 0LL);
LABEL_11:
    if ( !v5 || v5 == -1073741789 )
      v5 = sub_14093E830(Dst, (__int64)&qword_140042080, 0LL, 0, 1);
  }
  ExReleaseFastMutexUnsafe(&stru_140C11680);
  sub_1402F9540((__int64)KeGetCurrentThread());
  return v5;
}
