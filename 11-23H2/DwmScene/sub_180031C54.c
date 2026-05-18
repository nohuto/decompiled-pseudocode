/*
 * XREFs of sub_180031C54 @ 0x180031C54
 * Callers:
 *     sub_180031D44 @ 0x180031D44 (sub_180031D44.c)
 *     sub_1800E551F @ 0x1800E551F (sub_1800E551F.c)
 *     sub_1800E5822 @ 0x1800E5822 (sub_1800E5822.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180031C54(__int64 (__fastcall ****a1)(_QWORD, __int64))
{
  __int64 (__fastcall ***v1)(_QWORD, __int64); // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return (**v1)(v1, 1LL);
  return result;
}
