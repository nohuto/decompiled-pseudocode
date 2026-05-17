/*
 * XREFs of RtlGetFeatureToggleConfiguration @ 0x18009F600
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     sprintf_s @ 0x18009AA20 (sprintf_s.c)
 *     RtlpFtQueryConfiguration @ 0x18009F9D8 (RtlpFtQueryConfiguration.c)
 *     __ft_marker_array_find @ 0x18009FBFC (__ft_marker_array_find.c)
 *     __ft_marker_array_set_flags @ 0x18009FD78 (__ft_marker_array_set_flags.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlGetFeatureToggleConfiguration(
        unsigned int a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v5; // rsi
  BOOL v7; // ebp
  __int64 v8; // rbx
  int v9; // r14d
  __int64 Configuration; // rax
  __int64 v12; // rdi
  __int64 v13; // [rsp+20h] [rbp-88h] BYREF
  char Buffer[64]; // [rsp+30h] [rbp-78h] BYREF

  v5 = HIDWORD(a2);
  v7 = (HIDWORD(a2) & 0xE000000) != 0x8000000 && (HIDWORD(a2) & 0x700000) != 0x400000;
  v8 = 0LL;
  v9 = 0;
  v13 = 0LL;
  if ( v7 )
  {
    RtlAcquireSRWLockShared(&qword_180185F70, a2, a3, a4);
    v9 = _ft_marker_array_find(&_ft_g_api_info, a1, &v13);
    RtlReleaseSRWLockShared(&qword_180185F70);
    v8 = v13;
    if ( v9 )
    {
      if ( (v13 & 0x100) == 0 )
        return v13;
    }
  }
  Configuration = RtlpFtQueryConfiguration(a1, a2);
  v12 = Configuration;
  v13 = Configuration;
  if ( v9 )
  {
    v13 = v8 ^ ((unsigned __int16)v8 ^ Configuration & 0xFF00) & 0x100;
    v12 = v13;
  }
  if ( v7 || (Configuration & 0xF) != 0 )
  {
    RtlAcquireSRWLockExclusive(&qword_180185F70);
    _ft_marker_array_set_flags(&_ft_g_api_info, a1, v12);
    if ( !v9 && (v5 & 0xE000000) == 0x6000000 )
    {
      memset_thunk_772440563353939046(Buffer, 0, 0x40uLL);
      sprintf_s(Buffer, 0x40uLL, "Local\\FT:lock:%d", a1);
    }
    RtlReleaseSRWLockExclusive(&qword_180185F70);
  }
  return v12;
}
