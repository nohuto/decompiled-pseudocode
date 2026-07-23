/*
 * XREFs of sub_1409AEAA0 @ 0x1409AEAA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402D0930 @ 0x1402D0930 (sub_1402D0930.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1409AEAA0(ULONG_PTR a1, char a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 *v8; // rcx
  _OWORD v10[3]; // [rsp+20h] [rbp-48h] BYREF

  memset(v10, 0, sizeof(v10));
  sub_14030D5C0(a1, 0LL, (__int64)v10, a4);
  v6 = *(_QWORD *)(a1 + 1360);
  if ( v6 )
  {
    v7 = 0LL;
    v8 = *(__int64 **)(a1 + 1408);
    if ( v8 )
      v7 = *v8;
    if ( a2 )
    {
      _InterlockedOr((volatile signed __int32 *)(v6 + 80), 0x60u);
      if ( v7 )
        _InterlockedOr((volatile signed __int32 *)(v7 + 40), 0x60u);
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)(v6 + 80), 0xFFFFFFBF);
      if ( v7 )
        _InterlockedAnd((volatile signed __int32 *)(v7 + 40), 0xFFFFFFBF);
    }
  }
  return sub_1402D0930((__int64)v10, 0LL);
}
