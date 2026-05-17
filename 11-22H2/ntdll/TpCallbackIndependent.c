/*
 * XREFs of TpCallbackIndependent @ 0x18004F300
 * Callers:
 *     <none>
 * Callees:
 *     TppFastAlpcAdjustConcurrencyCount @ 0x18004F5E4 (TppFastAlpcAdjustConcurrencyCount.c)
 *     NtSetInformationWorkerFactory @ 0x1800A23A0 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x180125DC8 (TppRaiseInvalidParameter.c)
 */

__int64 __fastcall TpCallbackIndependent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  __int64 v6; // rbx
  __int64 v7; // rbx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  __int64 v10; // rcx
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // [rsp+30h] [rbp+8h] BYREF
  signed __int64 v15; // [rsp+38h] [rbp+10h]

  v4 = 0;
  if ( !a1 || *(_DWORD *)(a1 + 72) )
  {
    TppRaiseInvalidParameter(a1, a2, a1, a4);
LABEL_15:
    v13 = -1073741811;
    v12 = -1073741811;
    goto LABEL_16;
  }
  v6 = *(_QWORD *)(a1 + 184);
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 144);
  else
    v7 = *(_QWORD *)(a1 + 128);
  if ( !v7 )
    goto LABEL_15;
  if ( TppPoolpSerializedPool != v7 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v7 + 416));
    _InterlockedIncrement((volatile signed __int32 *)(v7 + 420));
    _m_prefetchw((const void *)(v7 + 8));
    v8 = *(_QWORD *)(v7 + 8);
    v15 = v8;
    do
    {
      LODWORD(v15) = (unsigned __int16)(v15 ^ (v15 + 1)) ^ (unsigned int)v15;
      v9 = v8;
      v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v7 + 8), v15, v8);
      v15 = v8;
    }
    while ( v9 != v8 );
    *(_DWORD *)(a1 + 144) |= 0x10u;
    v10 = *(_QWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 72) = 2;
    if ( v10 )
      TppFastAlpcAdjustConcurrencyCount();
    v14 = 2;
    return NtSetInformationWorkerFactory(*(_QWORD *)(v7 + 56), 9LL, &v14);
  }
  v12 = -1073741637;
  v13 = -1073741637;
LABEL_16:
  if ( v12 != -1073741637 )
    return v13;
  return v4;
}
