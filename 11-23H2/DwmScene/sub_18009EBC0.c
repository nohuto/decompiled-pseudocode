/*
 * XREFs of sub_18009EBC0 @ 0x18009EBC0
 * Callers:
 *     sub_18009FCE0 @ 0x18009FCE0 (sub_18009FCE0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18009EBC0(__int64 a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 result; // rax
  char v5; // [rsp+20h] [rbp-28h]
  __int128 v6; // [rsp+30h] [rbp-18h] BYREF

  if ( *(_BYTE *)(a1 + 61) )
  {
    v3 = *a2;
    v6 = *(_OWORD *)(a1 + 44);
    v5 = *(_BYTE *)(a1 + 60);
    result = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, __int128 *, char))(v3 + 168))(
               a2,
               a1 + 24,
               *(unsigned int *)(a1 + 40),
               &v6,
               v5);
    *(_BYTE *)(a1 + 61) = 0;
  }
  return result;
}
