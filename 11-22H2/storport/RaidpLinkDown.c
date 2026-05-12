/*
 * XREFs of RaidpLinkDown @ 0x1C0044BB4
 * Callers:
 *     StorPortNotification @ 0x1C000E120 (StorPortNotification.c)
 * Callees:
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x1C0043BF8 (McTemplateK0pqq_EtwWriteTransfer.c)
 *     StorPortPause @ 0x1C00463B0 (StorPortPause.c)
 */

__int64 __fastcall RaidpLinkDown(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rdi
  _QWORD *v5; // rsi
  __int64 result; // rax
  int v7; // [rsp+20h] [rbp-18h]
  int v8; // [rsp+28h] [rbp-10h]

  v3 = (unsigned int *)(a1 + 2008);
  v5 = (_QWORD *)(a1 + 576);
  if ( (Microsoft_Windows_StorPortEnableBits & 2) != 0 )
  {
    v8 = *v3;
    v7 = *(_DWORD *)(a1 + 56);
    McTemplateK0pqq_EtwWriteTransfer(a1, &EventLinkDown, a3, *v5 + 16LL, v7, v8);
  }
  result = StorPortPause(*v5 + 16LL, *v3);
  if ( (_BYTE)result )
    _InterlockedExchange((volatile __int32 *)(a1 + 2012), 0);
  return result;
}
