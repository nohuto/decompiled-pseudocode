/*
 * XREFs of sub_1405C8FE4 @ 0x1405C8FE4
 * Callers:
 *     sub_1403A1620 @ 0x1403A1620 (sub_1403A1620.c)
 * Callees:
 *     HalRequestIpi @ 0x14023DD20 (HalRequestIpi.c)
 *     KeIsEmptyAffinityEx @ 0x140292F90 (KeIsEmptyAffinityEx.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     KeAddProcessorAffinityEx @ 0x140294460 (KeAddProcessorAffinityEx.c)
 *     KeRemoveProcessorAffinityEx @ 0x1402F4410 (KeRemoveProcessorAffinityEx.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     KeInterlockedClearProcessorAffinityEx @ 0x1403B49A0 (KeInterlockedClearProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1405C8FE4(unsigned __int16 *a1, __int64 a2)
{
  int LockArray_high; // esi
  __int64 v5; // rdx
  __int64 v6; // rbx
  unsigned __int32 v7; // eax
  unsigned __int32 v8; // r9d
  signed __int32 v9; // ecx
  __int64 result; // rax
  __int64 v11; // [rsp+28h] [rbp-E0h] BYREF
  unsigned __int16 *v12[3]; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD v13[68]; // [rsp+48h] [rbp-C0h] BYREF

  LODWORD(v11) = 0;
  v13[0] = 2097153;
  memset(&v13[1], 0, 0x104uLL);
  LockArray_high = HIDWORD(KeGetPcr()[1].LockArray);
  v12[1] = *(unsigned __int16 **)(a2 + 8);
  memset(&v12[2], 0, sizeof(unsigned __int16 *));
  v12[0] = (unsigned __int16 *)a2;
  while ( !(unsigned int)KeEnumerateNextProcessor(&v11, v12) )
  {
    v5 = sub_140348800(v11);
    v6 = *(_QWORD *)(v5 + 33600);
    _m_prefetchw((const void *)(v5 + 33672));
    v7 = *(_DWORD *)(v5 + 33672);
    do
    {
      v8 = v7;
      v9 = v7 ^ (v7 ^ (v7 - 1)) & 0xFFFFFF;
      if ( (v9 & 0xFFFFFF) == 0 )
      {
        if ( HIBYTE(v7) == 5 )
        {
          v9 = v9 & 0xFFFFFF | 0x4000000;
        }
        else if ( HIBYTE(v7) == 7 )
        {
          v9 = v9 & 0xFFFFFF | 0x6000000;
        }
      }
      v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 33672), v9, v7);
    }
    while ( v7 != v8 );
    if ( HIBYTE(v9) == 6 )
      KeAddProcessorAffinityEx((unsigned __int16 *)v13, v11);
    KeInterlockedClearProcessorAffinityEx(v6 + 72, LockArray_high);
    KeRemoveProcessorAffinityEx(a1, v11);
  }
  result = KeIsEmptyAffinityEx(v13);
  if ( !(_DWORD)result )
    return HalRequestIpi(0, (__int64)v13);
  return result;
}
