/*
 * XREFs of ?PsmSetApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KKPEA_K33PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180037EB0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
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
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 result; // rax
  int v20; // eax
  __int128 v21; // [rsp+40h] [rbp-58h] BYREF
  __int128 v22; // [rsp+50h] [rbp-48h]

  if ( __PAIR128__((unsigned __int64)a9, (unsigned __int64)a8) == 0 && !a10 && !a11 )
    return 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( a8 )
  {
    v13 = *a8;
    v14 = 2;
    HIDWORD(v22) = 2;
    if ( v13 == -1 )
      v13 = 0LL;
    *(_QWORD *)&v21 = v13;
  }
  else
  {
    v14 = HIDWORD(v22);
  }
  if ( a9 )
  {
    v15 = *a9;
    v14 |= 4u;
    v16 = *a9 == -1LL;
    HIDWORD(v22) = v14;
    if ( v16 )
      v15 = 0LL;
    *((_QWORD *)&v21 + 1) = v15;
  }
  if ( a10 )
  {
    v17 = *a10;
    v14 |= 8u;
    HIDWORD(v22) = v14;
    v18 = 0LL;
    if ( v17 != -1 )
      v18 = v17;
    *(_QWORD *)&v22 = v18;
  }
  if ( a11 )
  {
    v20 = *(_DWORD *)a11;
    HIDWORD(v22) = v14 | 0x10;
    DWORD2(v22) = v20;
  }
  result = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, unsigned int, __int128 *))this
            + 1))(
             a3,
             a4,
             a2,
             a5,
             a6,
             a7,
             &v21);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
