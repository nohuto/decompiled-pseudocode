/*
 * XREFs of sub_180044E0C @ 0x180044E0C
 * Callers:
 *     sub_180047DD0 @ 0x180047DD0 (sub_180047DD0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180011138 @ 0x180011138 (sub_180011138.c)
 *     sub_180029C94 @ 0x180029C94 (sub_180029C94.c)
 *     j_LanguageEnumProc @ 0x18002C8D8 (j_LanguageEnumProc.c)
 *     sub_180044254 @ 0x180044254 (sub_180044254.c)
 *     sub_180044C94 @ 0x180044C94 (sub_180044C94.c)
 *     sub_1800FC250 @ 0x1800FC250 (sub_1800FC250.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180044E0C(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 result; // rax
  volatile signed __int32 *v5; // rcx

  sub_180029C94((__int64 *)(a1 + 200));
  sub_1800FC250(a1 + 184);
  sub_180010884(*(char **)(a1 + 144), (*(_QWORD *)(a1 + 152) - *(_QWORD *)(a1 + 144)) & 0xFFFFFFFFFFFFFFF8uLL);
  *(_QWORD *)(a1 + 144) = 0LL;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  sub_180044C94((char **)(a1 + 128));
  sub_180044254(a1 + 88, a1 + 88, *(char **)(*(_QWORD *)(a1 + 88) + 8LL));
  sub_180010884(*(char **)(a1 + 88), 0x50uLL);
  v2 = *(_QWORD *)(a1 + 80);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 80) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = *(_QWORD *)(a1 + 48);
  if ( v3 )
  {
    sub_180011138(v3, *(_QWORD *)(a1 + 56));
    sub_180010884(*(char **)(a1 + 48), (*(_QWORD *)(a1 + 64) - *(_QWORD *)(a1 + 48)) & 0xFFFFFFFFFFFFFFF0uLL);
    *(_QWORD *)(a1 + 48) = 0LL;
    *(_QWORD *)(a1 + 56) = 0LL;
    *(_QWORD *)(a1 + 64) = 0LL;
  }
  if ( *(_BYTE *)(a1 + 32) )
    j_LanguageEnumProc(*(_QWORD *)(a1 + 24));
  result = sub_1800FC250(a1 + 16);
  v5 = *(volatile signed __int32 **)(a1 + 8);
  if ( v5 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
  }
  return result;
}
