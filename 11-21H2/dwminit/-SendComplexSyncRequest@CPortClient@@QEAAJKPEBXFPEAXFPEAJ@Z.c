/*
 * XREFs of ?SendComplexSyncRequest@CPortClient@@QEAAJKPEBXFPEAXFPEAJ@Z @ 0x180008574
 * Callers:
 *     ?SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z @ 0x180007FA8 (-SendRequest@CApiPortClient@@QEAAJPEBXFPEAJPEAXF@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800076CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x18000825C (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 */

__int64 __fastcall CPortClient::SendComplexSyncRequest(
        HANDLE *this,
        int a2,
        _DWORD *a3,
        __int64 a4,
        void *a5,
        __int16 a6,
        int *a7)
{
  unsigned int v7; // ebx
  _DWORD *v11; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rdi
  HANDLE v14; // rcx
  unsigned int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v19; // [rsp+60h] [rbp+8h] BYREF

  v7 = 0;
  v11 = HeapAlloc(this[6], 8u, 0x34uLL);
  v13 = v11;
  if ( v11 )
  {
    v11[10] = a2;
    *v11 = 3407884;
    v11[12] = *a3;
    v14 = this[2];
    v19 = 52LL;
    v15 = NtAlpcSendWaitReceivePort(v14, 0x20000LL, v11, 0LL, v11, &v19, 0LL, 0LL);
    v16 = CPortClient::CheckStatus((CPortClient *)this, v15);
    if ( v16 >= 0 )
    {
      *a7 = v13[11];
    }
    else
    {
      v7 = v16 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(
        v17,
        &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
        9LL,
        v16 | 0x10000000,
        0x216u);
    }
    HeapFree(this[6], 0, v13);
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v12, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 9LL, -2147024882, 0x204u);
  }
  return v7;
}
