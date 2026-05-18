/*
 * XREFs of sub_18002C358 @ 0x18002C358
 * Callers:
 *     sub_180016BE4 @ 0x180016BE4 (sub_180016BE4.c)
 *     sub_18007DB98 @ 0x18007DB98 (sub_18007DB98.c)
 *     sub_1800D78AC @ 0x1800D78AC (sub_1800D78AC.c)
 *     sub_1800D7B74 @ 0x1800D7B74 (sub_1800D7B74.c)
 *     sub_1800D7E3C @ 0x1800D7E3C (sub_1800D7E3C.c)
 *     sub_1800D8104 @ 0x1800D8104 (sub_1800D8104.c)
 *     sub_1800D83CC @ 0x1800D83CC (sub_1800D83CC.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002C358(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  volatile signed __int32 *v4; // rcx

  result = sub_180010910(a1);
  v4 = *(volatile signed __int32 **)(a2 + 8);
  if ( v4 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return result;
}
