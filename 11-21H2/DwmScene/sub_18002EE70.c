/*
 * XREFs of sub_18002EE70 @ 0x18002EE70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002EE70(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // r9
  volatile signed __int32 *v6; // rcx

  result = a1;
  v3 = 0LL;
  v4 = a2[1];
  v5 = 0LL;
  if ( v4 )
  {
    v3 = *a2;
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
    v5 = v4;
  }
  v6 = *(volatile signed __int32 **)(result + 496);
  *(_QWORD *)(result + 488) = v3;
  *(_QWORD *)(result + 496) = v5;
  if ( v6 )
  {
    result = (unsigned int)_InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
      return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
  }
  return result;
}
