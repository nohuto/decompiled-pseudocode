/*
 * XREFs of TpCallbackIndependent @ 0x180069CF0
 * Callers:
 *     <none>
 * Callees:
 *     NtAlpcSetInformation @ 0x1800A5200 (NtAlpcSetInformation.c)
 *     NtSetInformationWorkerFactory @ 0x1800A75A0 (NtSetInformationWorkerFactory.c)
 *     TppRaiseInvalidParameter @ 0x180124388 (TppRaiseInvalidParameter.c)
 */

NTSTATUS __fastcall TpCallbackIndependent(__int64 a1, __int64 a2)
{
  int v2; // ebx
  __int64 v3; // rdi
  __int64 v4; // rdi
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v7; // rsi
  __int64 v8; // rax
  signed __int32 v9; // r9d
  int v10; // eax
  signed __int32 v11; // edx
  signed __int32 v12; // r8d
  int v14; // eax
  int v15; // ecx
  void *v16; // rcx
  int PortInformation; // [rsp+40h] [rbp+8h] BYREF
  int WorkerFactoryInformation; // [rsp+48h] [rbp+10h] BYREF
  signed __int64 v19; // [rsp+50h] [rbp+18h]

  v2 = 0;
  if ( !a1 || *(_DWORD *)(a1 + 72) )
  {
    TppRaiseInvalidParameter(a1, a2, a1);
LABEL_18:
    v14 = -1073741811;
    v15 = -1073741811;
    goto LABEL_19;
  }
  v3 = *(_QWORD *)(a1 + 184);
  if ( v3 )
    v4 = *(_QWORD *)(v3 + 144);
  else
    v4 = *(_QWORD *)(a1 + 128);
  if ( !v4 )
    goto LABEL_18;
  if ( TppPoolpSerializedPool != v4 )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 416));
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 420));
    _m_prefetchw((const void *)(v4 + 8));
    v5 = *(_QWORD *)(v4 + 8);
    v19 = v5;
    do
    {
      LODWORD(v19) = (unsigned __int16)(v19 ^ (v19 + 1)) ^ (unsigned int)v19;
      v6 = v5;
      v5 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 8), v19, v5);
      v19 = v5;
    }
    while ( v6 != v5 );
    *(_DWORD *)(a1 + 144) |= 0x10u;
    v7 = *(_QWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 72) = 2;
    if ( v7 && (*(_BYTE *)(v7 + 288) & 3) == 3 )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v7 + 216);
        v9 = *(_DWORD *)(v7 + 284);
        if ( !v8 || (v10 = *(_DWORD *)(v8 + 440)) == 0 )
          v10 = MEMORY[0x7FFE03C0];
        v11 = v10 + *(_DWORD *)(*(_QWORD *)(v7 + 216) + 420LL);
        v12 = v10 + v11;
        if ( v9 >= v11 && v9 <= v10 + v12 )
          break;
        if ( v9 == _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 284), v12, v9) )
        {
          v16 = *(void **)(v7 + 272);
          PortInformation = v10 + v11;
          NtAlpcSetInformation(v16, AlpcAdjustCompletionListConcurrencyCountInformation, &PortInformation, 4u);
        }
      }
    }
    WorkerFactoryInformation = 2;
    return NtSetInformationWorkerFactory(*(HANDLE *)(v4 + 56), WorkerFactoryCallbackType, &WorkerFactoryInformation, 4u);
  }
  v15 = -1073741637;
  v14 = -1073741637;
LABEL_19:
  if ( v15 != -1073741637 )
    return v14;
  return v2;
}
