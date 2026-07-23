/*
 * XREFs of sub_1403BF6EC @ 0x1403BF6EC
 * Callers:
 *     sub_1405437A4 @ 0x1405437A4 (sub_1405437A4.c)
 *     sub_140824AA0 @ 0x140824AA0 (sub_140824AA0.c)
 *     sub_140B315C0 @ 0x140B315C0 (sub_140B315C0.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     HviGetHypervisorFeatures @ 0x1403BF8B0 (HviGetHypervisorFeatures.c)
 *     sub_1403C0314 @ 0x1403C0314 (sub_1403C0314.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403BF6EC(__int64 a1)
{
  unsigned __int64 v2; // rsi
  __int64 result; // rax
  __int64 v4; // rax
  __int64 (*v5)(); // r8
  bool v6; // r9
  unsigned __int64 v7; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int128 v9; // [rsp+38h] [rbp-30h] BYREF
  __int128 v10; // [rsp+48h] [rbp-20h] BYREF

  v9 = 0LL;
  HviGetHypervisorFeatures(&v9);
  v2 = ((unsigned __int64)v9 >> 44) & 1;
  if ( !(unsigned __int8)sub_1403C0314() || (v10 = 0LL, HviGetHypervisorFeatures(&v10), (v10 & 0x20) == 0) )
  {
    qword_140E01850 = 0LL;
    return 3224702976LL;
  }
  if ( a1 )
  {
    v4 = *(_QWORD *)(a1 + 240);
    v5 = *(__int64 (**)())(v4 + 2952);
    v6 = (*(_DWORD *)(v4 + 132) & 0x200) != 0;
    if ( v5 )
      goto LABEL_16;
  }
  else
  {
    v6 = 0;
  }
  __writemsr(0x40000000u, (unsigned __int16)NtBuildNumber | ((BYTE1(dword_140C4E588) | 0x1040A0000LL) << 16));
  v7 = __readmsr(0x40000001u) | 1;
  if ( (_BYTE)v2 || v6 )
  {
    v5 = (__int64 (*)())sub_14042A5E0(v7 & 0xFFFFFFFFFFFFF000uLL, 1LL);
    if ( v5 )
      goto LABEL_15;
  }
  else
  {
    if ( !a1 )
    {
      PhysicalAddress = MmGetPhysicalAddress(qword_140E01850);
      v5 = (__int64 (*)())qword_140E01850;
      goto LABEL_14;
    }
    v5 = (__int64 (*)())sub_14042A5E0(a1, 1LL);
    if ( v5 )
    {
      PhysicalAddress.QuadPart = 0LL;
LABEL_14:
      v7 = PhysicalAddress.QuadPart ^ (LOWORD(PhysicalAddress.LowPart) ^ (unsigned __int16)v7) & 0xFFF;
LABEL_15:
      __writemsr(0x40000001u, v7);
LABEL_16:
      off_140E01860 = v5;
      result = 0LL;
      _InterlockedExchange64((volatile __int64 *)&qword_140E01850, (__int64)v5);
      return result;
    }
  }
  return 3221225626LL;
}
