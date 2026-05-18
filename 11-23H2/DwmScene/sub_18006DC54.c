/*
 * XREFs of sub_18006DC54 @ 0x18006DC54
 * Callers:
 *     sub_180067610 @ 0x180067610 (sub_180067610.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18006DC54(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  __int64 result; // rax
  unsigned int v10; // esi

  v7 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)a4 + 72LL))(a4, &unk_1801D42C8, 0LL);
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL))(a2);
  if ( v7 != v8 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, v7);
  result = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)a4 + 72LL))(a4, &unk_1801D42E8, 0LL);
  if ( (_DWORD)result )
  {
    v10 = dword_180112DD0[(int)result];
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a3 + 264LL))(a3, 0LL);
    if ( v10 != (_DWORD)result )
    {
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a3 + 256LL))(a3, 0LL, v10);
      return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a2 + 56LL))(a2, v8);
    }
  }
  return result;
}
