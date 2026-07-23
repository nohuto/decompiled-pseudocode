/*
 * XREFs of sub_14020EFEC @ 0x14020EFEC
 * Callers:
 *     sub_14020EC24 @ 0x14020EC24 (sub_14020EC24.c)
 *     sub_140292884 @ 0x140292884 (sub_140292884.c)
 * Callees:
 *     sub_140293268 @ 0x140293268 (sub_140293268.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14020EFEC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-28h] BYREF

  v5 = *(_QWORD *)(a1 + 544);
  v9[0] = *(_QWORD *)(a3 + 34928);
  v6 = *(unsigned __int16 *)(a2 + 8);
  v9[1] = *(_QWORD *)(*(_QWORD *)(a3 + 192) + 128LL);
  if ( (unsigned __int16)v6 >= *(_WORD *)(v5 + 2576) )
    v7 = 0LL;
  else
    v7 = *(_QWORD *)(v5 + 8 * v6 + 2584);
  v9[2] = v7;
  return ((__int64 (__fastcall *)(__int64, __int64, _QWORD *, __int64))sub_140293268)(a2, a4, v9, 3LL);
}
