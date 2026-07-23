/*
 * XREFs of ShipAssert @ 0x1800E9520
 * Callers:
 *     ShipAssertMsgA @ 0x1800E9690 (ShipAssertMsgA.c)
 *     ShipAssertMsgW @ 0x1800E96A0 (ShipAssertMsgW.c)
 * Callees:
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     GetShipAssertBuffer @ 0x1800E93A4 (GetShipAssertBuffer.c)
 *     WerReportSQMEvent @ 0x1800E9B70 (WerReportSQMEvent.c)
 */

__int64 __fastcall ShipAssert(int a1, int a2)
{
  struct _TEB *v4; // rax
  unsigned int *p_LastErrorValue; // rdi
  unsigned int LastErrorValue; // esi
  $DF4FA9F692459BA109B62B4026D83C94 *v7; // rbx
  __int64 result; // rax
  _DWORD *ShipAssertBuffer; // rax
  unsigned int v10; // ecx
  _DWORD v11[4]; // [rsp+40h] [rbp-28h] BYREF

  v4 = NtCurrentTeb();
  p_LastErrorValue = &v4->LastErrorValue;
  LastErrorValue = v4->LastErrorValue;
  v7 = &v4->6126;
  result = v4->SameTebFlags;
  if ( (result & 0x10) == 0 )
  {
    v7->SameTebFlags = result | 0x10;
    ShipAssertBuffer = GetShipAssertBuffer();
    if ( ShipAssertBuffer && ShipAssertBuffer != (_DWORD *)255 && ShipAssertBuffer != (_DWORD *)238 )
    {
      v10 = ((unsigned __int16)_InterlockedExchangeAdd(&dword_180184864, 1u) + 1) & 0x3FF;
      ShipAssertBuffer[2 * v10] = a1;
      ShipAssertBuffer[2 * v10 + 1] = a2;
    }
    v11[0] = a1;
    v11[1] = a2;
    v11[2] = 0;
    WerReportSQMEvent(1LL, v11, 3LL);
    result = 65519LL;
    v7->SameTebFlags &= ~0x10u;
    *p_LastErrorValue = LastErrorValue;
  }
  return result;
}
