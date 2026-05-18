/*
 * XREFs of ?SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z @ 0x180008440
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x180007E4C (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800076CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x18000825C (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 */

__int64 __fastcall CPortClient::SendComplexAsyncRequest(HANDLE *this, int a2, _OWORD *a3)
{
  unsigned int v3; // ebx
  int v7; // r9d
  _DWORD *v8; // rax
  void *v9; // rdi
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-38h]

  v3 = 0;
  if ( !a3 )
  {
    v7 = -2147024890;
    v14 = 430;
LABEL_3:
    v3 = v7;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 9LL, v7, v14);
    return v3;
  }
  v8 = HeapAlloc(this[6], 8u, 0x50uLL);
  v9 = v8;
  if ( !v8 )
  {
    v7 = -2147024882;
    v14 = 433;
    goto LABEL_3;
  }
  v8[10] = a2;
  *v8 = 5242920;
  *((_OWORD *)v8 + 3) = *a3;
  *((_OWORD *)v8 + 4) = a3[1];
  v10 = NtAlpcSendWaitReceivePort(this[2], 0x10000LL, v8, 0LL, 0LL, 0LL, 0LL, 0LL);
  v11 = CPortClient::CheckStatus((CPortClient *)this, v10);
  if ( v11 < 0 )
  {
    v3 = v11 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(
      v12,
      &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
      9LL,
      v11 | 0x10000000,
      0x1C2u);
  }
  HeapFree(this[6], 0, v9);
  return v3;
}
