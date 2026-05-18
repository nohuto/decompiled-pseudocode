/*
 * XREFs of sub_1800AF200 @ 0x1800AF200
 * Callers:
 *     sub_1800B1CA0 @ 0x1800B1CA0 (sub_1800B1CA0.c)
 * Callees:
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800122D0 @ 0x1800122D0 (sub_1800122D0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800AF200(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rsi
  __int64 v6; // rax
  __int64 result; // rax
  _QWORD v8[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(_BYTE *)(a1 + 68) || sub_1800122D0((_QWORD *)(a1 + 24), (_QWORD *)(a1 + 8)) )
  {
    v4 = *(_QWORD *)(a1 + 16);
    v5 = (_QWORD *)(a1 + 24);
    if ( v4 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 8));
      v4 = *(_QWORD *)(a1 + 16);
    }
    v8[0] = *v5;
    *v5 = *(_QWORD *)(a1 + 8);
    v6 = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(a1 + 32) = v4;
    v8[1] = v6;
    sub_180010910((__int64)v8);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 152LL))(a2, a1 + 24);
  }
  if ( *(_BYTE *)(a1 + 68) || (result = *(unsigned int *)(a1 + 56), *(_DWORD *)(a1 + 60) != (_DWORD)result) )
  {
    *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 56);
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 216LL))(a2);
  }
  *(_BYTE *)(a1 + 68) = 0;
  return result;
}
