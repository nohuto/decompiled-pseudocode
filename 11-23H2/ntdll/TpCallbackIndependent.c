/*
 * XREFs of TpCallbackIndependent @ 0x18004F1A0
 * Callers:
 *     <none>
 * Callees:
 *     TppFastAlpcAdjustConcurrencyCount @ 0x18004F484 (TppFastAlpcAdjustConcurrencyCount.c)
 *     NtSetInformationWorkerFactory @ 0x1800A4460 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x180127248 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __fastcall TpCallbackIndependent(__int64 a1, __int64 a2)
{
  int v2; // edi
  __int64 v4; // rbx
  __int64 v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  __int64 v8; // rcx
  int v10; // ecx
  int v11; // eax
  int WorkerFactoryInformation; // [rsp+30h] [rbp+8h] BYREF
  signed __int64 v13; // [rsp+38h] [rbp+10h]

  v2 = 0;
  if ( !a1 || *(_DWORD *)(a1 + 72) )
  {
    TppRaiseInvalidParameter(a1, a2, a1);
LABEL_15:
    v11 = -1073741811;
    v10 = -1073741811;
    goto LABEL_16;
  }
  v4 = *(_QWORD *)(a1 + 184);
  if ( v4 )
    v5 = *(_QWORD *)(v4 + 144);
  else
    v5 = *(_QWORD *)(a1 + 128);
  if ( !v5 )
    goto LABEL_15;
  if ( TppPoolpSerializedPool != v5 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v5 + 416));
    _InterlockedIncrement((volatile signed __int32 *)(v5 + 420));
    _m_prefetchw((const void *)(v5 + 8));
    v6 = *(_QWORD *)(v5 + 8);
    v13 = v6;
    do
    {
      LODWORD(v13) = (unsigned __int16)(v13 ^ (v13 + 1)) ^ (unsigned int)v13;
      v7 = v6;
      v6 = _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 8), v13, v6);
      v13 = v6;
    }
    while ( v7 != v6 );
    *(_DWORD *)(a1 + 144) |= 0x10u;
    v8 = *(_QWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 72) = 2;
    if ( v8 )
      TppFastAlpcAdjustConcurrencyCount();
    WorkerFactoryInformation = 2;
    return NtSetInformationWorkerFactory(*(HANDLE *)(v5 + 56), WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
  }
  v10 = -1073741637;
  v11 = -1073741637;
LABEL_16:
  if ( v10 != -1073741637 )
    return v11;
  return v2;
}
