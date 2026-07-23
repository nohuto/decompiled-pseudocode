/*
 * XREFs of PoStoreDiagnosticContext @ 0x14032B7E8
 * Callers:
 *     PopTraceThermalRequestActiveActivity @ 0x140595CC8 (PopTraceThermalRequestActiveActivity.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140595EE8 (PopTraceThermalRequestPassiveHistogram.c)
 *     ExGetWakeTimerList @ 0x14060BB78 (ExGetWakeTimerList.c)
 *     PopPowerRequestGetDiagnosticBuffer @ 0x1407A6878 (PopPowerRequestGetDiagnosticBuffer.c)
 *     PopDiagTraceThermalRequest @ 0x140860D34 (PopDiagTraceThermalRequest.c)
 *     PopGetPowerRequestListInfo @ 0x140984450 (PopGetPowerRequestListInfo.c)
 *     ExGetNextWakeTime @ 0x140AAAD5C (ExGetNextWakeTime.c)
 * Callees:
 *     PoStoreRequester @ 0x14032D1D4 (PoStoreRequester.c)
 *     memmove @ 0x140435B00 (memmove.c)
 */

__int64 __fastcall PoStoreDiagnosticContext(__int64 a1, unsigned __int64 *a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r14
  __int64 result; // rax
  __int64 v8; // r9
  unsigned __int64 v9; // rcx
  unsigned int v10; // edi
  bool v11; // r8
  _BYTE *v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = *a3;
  v14 = *a3;
  result = PoStoreRequester(a1, a2, &v14, 0LL);
  v8 = *(_QWORD *)(a1 + 48);
  v9 = v14;
  v10 = result;
  v11 = (int)result >= 0;
  if ( v8 )
  {
    v12 = (_BYTE *)(((unsigned __int64)a2 + v14 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    v13 = v12 - (_BYTE *)a2 + v8;
    *a3 = v13;
    if ( v11 && v3 >= v13 )
    {
      a2[4] = v12 - (_BYTE *)a2;
      *a2 = v13;
      memmove(v12, (const void *)((a1 + 63) & 0xFFFFFFFFFFFFFFF8uLL), *(_QWORD *)(a1 + 48));
      return v10;
    }
    else
    {
      return 3221225507LL;
    }
  }
  else
  {
    if ( (int)result >= 0 )
    {
      a2[4] = 0LL;
      *a2 = v9;
    }
    *a3 = v9;
  }
  return result;
}
