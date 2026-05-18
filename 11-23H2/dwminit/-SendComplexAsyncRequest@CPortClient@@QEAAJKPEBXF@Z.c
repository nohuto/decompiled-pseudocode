/*
 * XREFs of ?SendComplexAsyncRequest@CPortClient@@QEAAJKPEBXF@Z @ 0x18000E810
 * Callers:
 *     ?SendNotification@CApiPortClient@@QEAAJPEAXF@Z @ 0x18000DE08 (-SendNotification@CApiPortClient@@QEAAJPEAXF@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18000CEAC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x18000E55C (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 */

__int64 __fastcall CPortClient::SendComplexAsyncRequest(CPortClient *this, int a2, _OWORD *a3)
{
  unsigned int v3; // ebx
  int v7; // r9d
  HANDLE ProcessHeap; // rax
  _DWORD *v9; // rax
  void *v10; // rdi
  unsigned int v11; // eax
  int v12; // eax
  __int64 v13; // rcx
  HANDLE v14; // rax
  unsigned int v16; // [rsp+20h] [rbp-38h]

  v3 = 0;
  if ( !a3 )
  {
    v7 = -2147024890;
    v16 = 473;
LABEL_3:
    v3 = v7;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 9LL, v7, v16);
    return v3;
  }
  ProcessHeap = GetProcessHeap();
  v9 = HeapAlloc(ProcessHeap, 8u, 0x50uLL);
  v10 = v9;
  if ( !v9 )
  {
    v7 = -2147024882;
    v16 = 476;
    goto LABEL_3;
  }
  v9[10] = a2;
  *v9 = 5242920;
  *((_OWORD *)v9 + 3) = *a3;
  *((_OWORD *)v9 + 4) = a3[1];
  v11 = NtAlpcSendWaitReceivePort(*((_QWORD *)this + 2), 0x10000LL, v9, 0LL, 0LL, 0LL, 0LL, 0LL);
  v12 = CPortClient::CheckStatus(this, v11);
  if ( v12 < 0 )
  {
    v3 = v12 | 0x10000000;
    MilInstrumentationCheckHR_MaybeFailFast(
      v13,
      &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
      9LL,
      v12 | 0x10000000,
      0x1EDu);
  }
  v14 = GetProcessHeap();
  HeapFree(v14, 0, v10);
  return v3;
}
