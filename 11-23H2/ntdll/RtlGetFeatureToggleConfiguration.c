/*
 * XREFs of RtlGetFeatureToggleConfiguration @ 0x18009F5C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180026CF0 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180026DB0 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033C40 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     sprintf_s @ 0x18009AA20 (sprintf_s.c)
 *     RtlpFtQueryConfiguration @ 0x18009F998 (RtlpFtQueryConfiguration.c)
 *     __ft_marker_array_find @ 0x18009FBBC (__ft_marker_array_find.c)
 *     __ft_marker_array_set_flags @ 0x18009FD38 (__ft_marker_array_set_flags.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlGetFeatureToggleConfiguration(unsigned int a1, unsigned __int64 a2)
{
  unsigned __int64 v3; // rsi
  BOOL v5; // ebp
  __int64 v6; // rbx
  int v7; // r14d
  __int64 Configuration; // rax
  __int64 v10; // rdi
  __int64 v11; // [rsp+20h] [rbp-88h] BYREF
  char Buffer[64]; // [rsp+30h] [rbp-78h] BYREF

  v3 = HIDWORD(a2);
  v5 = (HIDWORD(a2) & 0xE000000) != 0x8000000 && (HIDWORD(a2) & 0x700000) != 0x400000;
  v6 = 0LL;
  v7 = 0;
  v11 = 0LL;
  if ( v5 )
  {
    RtlAcquireSRWLockShared(&stru_180185F70);
    v7 = _ft_marker_array_find(&_ft_g_api_info, a1, &v11);
    RtlReleaseSRWLockShared(&stru_180185F70);
    v6 = v11;
    if ( v7 )
    {
      if ( (v11 & 0x100) == 0 )
        return v11;
    }
  }
  Configuration = RtlpFtQueryConfiguration(a1, a2);
  v10 = Configuration;
  v11 = Configuration;
  if ( v7 )
  {
    v11 = v6 ^ ((unsigned __int16)v6 ^ Configuration & 0xFF00) & 0x100;
    v10 = v11;
  }
  if ( v5 || (Configuration & 0xF) != 0 )
  {
    RtlAcquireSRWLockExclusive(&stru_180185F70);
    _ft_marker_array_set_flags(&_ft_g_api_info, a1, v10);
    if ( !v7 && (v3 & 0xE000000) == 0x6000000 )
    {
      memset_thunk_772440563353939046(Buffer, 0, 0x40uLL);
      sprintf_s(Buffer, 0x40uLL, "Local\\FT:lock:%d", a1);
    }
    RtlReleaseSRWLockExclusive(&stru_180185F70);
  }
  return v10;
}
