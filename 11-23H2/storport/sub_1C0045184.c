/*
 * XREFs of sub_1C0045184 @ 0x1C0045184
 * Callers:
 *     StorPortNotification @ 0x1C000EAB0 (StorPortNotification.c)
 * Callees:
 *     sub_1C00441C8 @ 0x1C00441C8 (sub_1C00441C8.c)
 *     StorPortPause @ 0x1C0046980 (StorPortPause.c)
 */

__int64 __fastcall sub_1C0045184(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rdi
  _QWORD *v5; // rsi
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+28h] [rbp-10h]

  v3 = (unsigned int *)(a1 + 2008);
  v5 = (_QWORD *)(a1 + 576);
  if ( (byte_1C0093A00 & 2) != 0 )
  {
    v8 = *v3;
    v7 = *(_DWORD *)(a1 + 56);
    sub_1C00441C8(a1, &stru_1C0088B60, a3, *v5 + 16LL, v7, v8);
  }
  result = StorPortPause(*v5 + 16LL, *v3);
  if ( (_BYTE)result )
    _InterlockedExchange((volatile __int32 *)(a1 + 2012), 0);
  return result;
}
