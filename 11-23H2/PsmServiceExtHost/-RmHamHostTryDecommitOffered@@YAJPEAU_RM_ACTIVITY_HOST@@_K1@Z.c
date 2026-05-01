/*
 * XREFs of ?RmHamHostTryDecommitOffered@@YAJPEAU_RM_ACTIVITY_HOST@@_K1@Z @ 0x180011A04
 * Callers:
 *     ?HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETTINGS_CONTEXT@@@Z @ 0x180021270 (-HampHostCheckUpdateEnforcementSettings@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ENFORCEMENT_SETT.c)
 * Callees:
 *     ?RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x180011B0C (-RmpActivityHostQueryOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     __security_check_cookie @ 0x1800494C0 (__security_check_cookie.c)
 *     ?RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@@Z @ 0x180084CD8 (-RmpActivityHostDecommitOfferedMemory@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_OFFERED_DECOMMIT_INFO@@.c)
 */

__int64 __fastcall RmHamHostTryDecommitOffered(struct _RM_ACTIVITY_HOST *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int64 v7; // r9
  __m128i v8; // xmm0
  int v9; // r8d
  __int64 v10; // rdx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-30h] BYREF
  __int128 v17; // [rsp+30h] [rbp-28h]

  result = RmpActivityHostQueryOfferedMemory(a1, &v15);
  if ( (int)result >= 0 )
  {
    v7 = v15;
    if ( v15 )
    {
      v17 = 0LL;
      v8 = _mm_srli_si128((__m128i)0LL, 8);
      v9 = 0;
      v10 = ((unsigned __int64)(95 * a3) * (unsigned __int128)0x47AE147AE147AE15uLL) >> 64;
      v11 = 20971520LL;
      v12 = v10 + ((unsigned __int64)(95 * a3 - v10) >> 1);
      v13 = *((_DWORD *)a1 + 317);
      v14 = a2 - (v12 >> 6);
      if ( v14 > 0x1400000 )
        v11 = v14;
      LOBYTE(v9) = v11 >= v15;
      if ( v9 )
        v7 = -1LL;
      v16 = v7;
      DWORD2(v17) = _mm_cvtsi128_si32(v8) & 0xFFFFFFF8 | (4 * v9) | (v13 >> 4) & 1;
      result = RmpActivityHostDecommitOfferedMemory(a1, (struct _RM_OFFERED_DECOMMIT_INFO *)&v16);
      if ( (int)result >= 0 )
        return 0LL;
    }
    else
    {
      return 3221225517LL;
    }
  }
  return result;
}
