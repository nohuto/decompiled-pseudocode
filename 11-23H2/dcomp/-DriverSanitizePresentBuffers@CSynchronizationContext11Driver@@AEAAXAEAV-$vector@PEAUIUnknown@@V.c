/*
 * XREFs of ?DriverSanitizePresentBuffers@CSynchronizationContext11Driver@@AEAAXAEAV?$vector@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@@Z @ 0x1800A7EE8
 * Callers:
 *     ?Present@CSynchronizationContext11Driver@@UEAAJ_KU_LUID@@0PEAXAEAV?$vector@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@@Z @ 0x1801B1C90 (-Present@CSynchronizationContext11Driver@@UEAAJ_KU_LUID@@0PEAXAEAV-$vector@PEAUIUnknown@@V-$allo.c)
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ??$_Emplace_reallocate@PEAUIUnknown@@@?$vector@PEAUIUnknown@@V?$allocator@PEAUIUnknown@@@std@@@std@@QEAAPEAPEAUIUnknown@@QEAPEAU2@$$QEAPEAU2@@Z @ 0x1800A7DF8 (--$_Emplace_reallocate@PEAUIUnknown@@@-$vector@PEAUIUnknown@@V-$allocator@PEAUIUnknown@@@std@@@s.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

char *__fastcall CSynchronizationContext11Driver::DriverSanitizePresentBuffers(__int64 a1, char **a2)
{
  char *result; // rax
  char **v4; // rdi
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  char *v8; // rdx
  int v9; // [rsp+20h] [rbp-58h]
  char *v10; // [rsp+30h] [rbp-48h] BYREF
  __m128i si128; // [rsp+38h] [rbp-40h] BYREF
  int v12; // [rsp+48h] [rbp-30h]
  int v13; // [rsp+4Ch] [rbp-2Ch]
  int v14; // [rsp+50h] [rbp-28h]
  int v15; // [rsp+54h] [rbp-24h]
  int v16; // [rsp+58h] [rbp-20h]
  int v17; // [rsp+5Ch] [rbp-1Ch]
  int v18; // [rsp+60h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  result = a2[1];
  if ( *a2 == result )
  {
    v4 = (char **)(a1 + 56);
    if ( !*(_QWORD *)(a1 + 56) )
    {
      v5 = *(__int64 **)(a1 + 8);
      v14 = 0;
      v15 = 0;
      v17 = 0;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v12 = 87;
      v13 = 1;
      v16 = 40;
      v18 = 2050;
      v6 = *v5;
      *v4 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64 *, __m128i *, _QWORD, char **))(v6 + 40))(v5, &si128, 0LL, v4);
      if ( v7 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x81,
          (unsigned int)"onecoreuap\\windows\\dwm\\present\\presentationimpl\\synchronizationcontext11driver.cpp",
          (const char *)(unsigned int)v7,
          v9);
    }
    v8 = a2[1];
    result = *v4;
    v10 = *v4;
    if ( v8 == a2[2] )
    {
      return std::vector<IUnknown *>::_Emplace_reallocate<IUnknown *>(a2, v8, &v10);
    }
    else
    {
      *(_QWORD *)v8 = result;
      a2[1] += 8;
    }
  }
  return result;
}
