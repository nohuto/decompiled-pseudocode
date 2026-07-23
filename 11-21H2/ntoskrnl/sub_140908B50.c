/*
 * XREFs of sub_140908B50 @ 0x140908B50
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeMapRegisters @ 0x140456A30 (IoFreeMapRegisters.c)
 *     sub_140456F16 @ 0x140456F16 (sub_140456F16.c)
 *     sub_1409094F8 @ 0x1409094F8 (sub_1409094F8.c)
 *     sub_1409095FC @ 0x1409095FC (sub_1409095FC.c)
 */

__int64 __fastcall sub_140908B50(PDMA_ADAPTER DmaAdapter, ULONG NumberOfMapRegisters, unsigned int a3, _QWORD *a4)
{
  _QWORD *v4; // r14
  PDMA_OPERATIONS DmaOperations; // r12
  ULONG v10; // eax
  unsigned int v11; // ebx
  __int64 *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax

  v4 = a4;
  DmaOperations = DmaAdapter[9].DmaOperations;
  if ( LODWORD(DmaAdapter[23].DmaOperations) != -1 )
    return 3221225488LL;
  if ( a3 * NumberOfMapRegisters && LOBYTE(DmaAdapter[27].Version) )
  {
    if ( a3 * NumberOfMapRegisters > 0x800 )
      return 3221225626LL;
    v10 = *(_DWORD *)&DmaAdapter[14].Version;
    if ( !v10 )
      return 3221225626LL;
    if ( NumberOfMapRegisters > v10 )
      return 3221225485LL;
    v11 = 0;
    if ( a3 )
    {
      v12 = a4;
      do
      {
        v13 = sub_140456F16((__int64)DmaAdapter, NumberOfMapRegisters);
        *v12 = v13;
        if ( !v13 )
        {
          v14 = (NumberOfMapRegisters + 16) << 12;
          if ( LOBYTE(DmaAdapter[27].Size) )
            sub_1409095FC(DmaOperations, v14);
          else
            sub_1409094F8(DmaOperations, v14);
          v15 = sub_140456F16((__int64)DmaAdapter, NumberOfMapRegisters);
          *v12 = v15;
          if ( !v15 )
            goto LABEL_20;
        }
        ++v11;
        v12 += 2;
      }
      while ( v11 < a3 );
    }
    if ( v11 != a3 )
    {
LABEL_20:
      while ( v11 )
        IoFreeMapRegisters(DmaAdapter, (PVOID)v4[2 * --v11], NumberOfMapRegisters);
      return 3221225626LL;
    }
  }
  else if ( a3 )
  {
    v16 = a3;
    do
    {
      *v4 = 0LL;
      v4 += 2;
      --v16;
    }
    while ( v16 );
  }
  return 0LL;
}
