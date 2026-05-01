/*
 * XREFs of ?PsmSetApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KKPEA_K33PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x18000EC50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180049550 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceEnforcer::PsmSetApplicationProperties(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10,
        enum _PSM_APPLICATION_PRIORITY *a11)
{
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rax
  __int64 result; // rax
  int v18; // eax
  __int128 v19; // [rsp+40h] [rbp-58h] BYREF
  __int128 v20; // [rsp+50h] [rbp-48h]

  if ( __PAIR128__((unsigned __int64)a9, (unsigned __int64)a8) == 0 && !a10 && !a11 )
    return 0LL;
  v19 = 0LL;
  v20 = 0LL;
  if ( a8 )
  {
    v12 = *a8;
    v13 = 2;
    HIDWORD(v20) = 2;
    if ( v12 == -1 )
      v12 = 0LL;
    *(_QWORD *)&v19 = v12;
  }
  else
  {
    v13 = HIDWORD(v20);
  }
  if ( a9 )
  {
    v14 = *a9;
    v13 |= 4u;
    v15 = *a9 == -1LL;
    HIDWORD(v20) = v13;
    if ( v15 )
      v14 = 0LL;
    *((_QWORD *)&v19 + 1) = v14;
  }
  if ( a10 )
  {
    v13 |= 8u;
    HIDWORD(v20) = v13;
    v16 = 0LL;
    if ( *a10 != -1LL )
      v16 = *a10;
    *(_QWORD *)&v20 = v16;
  }
  if ( a11 )
  {
    v18 = *(_DWORD *)a11;
    HIDWORD(v20) = v13 | 0x10;
    DWORD2(v20) = v18;
  }
  result = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, unsigned int, __int128 *))this
            + 1))(
             a3,
             a4,
             a2,
             a5,
             a6,
             a7,
             &v19);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
