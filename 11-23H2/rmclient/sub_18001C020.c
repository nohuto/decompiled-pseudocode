/*
 * XREFs of sub_18001C020 @ 0x18001C020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18001C020(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  unsigned int v5; // ebx

  *a3 = 0LL;
  while ( 1 )
  {
    result = *(unsigned int *)(a1 + 16);
    if ( !(_DWORD)result )
      break;
    if ( (_DWORD)result == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), result + 1, result) )
    {
      v5 = (***(__int64 (__fastcall ****)(_QWORD, __int64, _QWORD *))(a1 + 24))(*(_QWORD *)(a1 + 24), a2, a3);
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24));
      return v5;
    }
  }
  return result;
}
