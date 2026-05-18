/*
 * XREFs of sub_1800B4684 @ 0x1800B4684
 * Callers:
 *     sub_180064098 @ 0x180064098 (sub_180064098.c)
 *     sub_180064450 @ 0x180064450 (sub_180064450.c)
 *     sub_18007F0F0 @ 0x18007F0F0 (sub_18007F0F0.c)
 *     sub_18007F724 @ 0x18007F724 (sub_18007F724.c)
 *     sub_1800A8370 @ 0x1800A8370 (sub_1800A8370.c)
 *     unknown_libname_54 @ 0x1801038EB (unknown_libname_54.c)
 *     sub_180103957 @ 0x180103957 (sub_180103957.c)
 *     sub_1801039F9 @ 0x1801039F9 (sub_1801039F9.c)
 *     sub_180104898 @ 0x180104898 (sub_180104898.c)
 *     sub_1801048AA @ 0x1801048AA (sub_1801048AA.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122C0 @ 0x1800122C0 (sub_1800122C0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B4684(__int128 *a1)
{
  __int64 v2; // rdx
  signed __int32 v3; // eax
  signed __int32 v4; // ett
  void (__fastcall ***v5)(_QWORD); // rdx
  __int64 result; // rax
  volatile signed __int32 *v7; // rcx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  v8 = 0LL;
  v2 = *((_QWORD *)a1 + 1);
  if ( v2 )
  {
    v3 = *(_DWORD *)(v2 + 8);
    while ( v3 )
    {
      v4 = v3;
      v3 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 8), v3 + 1, v3);
      if ( v4 == v3 )
      {
        v8 = *a1;
        break;
      }
    }
  }
  if ( sub_1800122C0(&v8) )
    (**v5)(v5);
  result = sub_180010910((__int64)&v8);
  v7 = (volatile signed __int32 *)*((_QWORD *)a1 + 1);
  if ( v7 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  return result;
}
