/*
 * XREFs of HalAllocateCrashDumpRegisters @ 0x1405055F0
 * Callers:
 *     sub_140A84950 @ 0x140A84950 (sub_140A84950.c)
 * Callees:
 *     sub_140512C04 @ 0x140512C04 (sub_140512C04.c)
 */

PVOID __stdcall HalAllocateCrashDumpRegisters(PADAPTER_OBJECT AdapterObject, PULONG NumberOfMapRegisters)
{
  ULONG v2; // edi
  int v5; // edx
  __int64 v6; // rcx
  PVOID result; // rax
  struct _DMA_OPERATIONS *v8; // rax
  int v9; // edx
  __int64 v10; // rcx

  v2 = 0;
  if ( LOBYTE(AdapterObject[27].Version) || !*((_BYTE *)&AdapterObject[27].Size + 3) )
  {
    if ( dword_140C4E248 == 1 )
    {
      v5 = dword_140C4E260;
      v6 = 2LL * (unsigned int)dword_140C4E260;
      *NumberOfMapRegisters = *((_DWORD *)&unk_140C4E2A0 + 4 * (unsigned int)dword_140C4E260 + 2);
      result = (PVOID)*((_QWORD *)&unk_140C4E2A0 + v6);
      AdapterObject[14].DmaOperations = (PDMA_OPERATIONS)result;
      *(_DWORD *)&AdapterObject[15].Version = *NumberOfMapRegisters;
      dword_140C4E260 = v5 + 1;
      return result;
    }
    if ( *NumberOfMapRegisters > *(_DWORD *)&AdapterObject[14].Version )
    {
      *(_DWORD *)&AdapterObject[15].Version = 0;
      result = 0LL;
      *NumberOfMapRegisters = 0;
      return result;
    }
    v8 = (struct _DMA_OPERATIONS *)sub_140512C04(AdapterObject, NumberOfMapRegisters);
    AdapterObject[14].DmaOperations = v8;
    if ( v8 )
    {
      v9 = dword_140C4E264;
      if ( (unsigned int)dword_140C4E264 < 4 )
      {
        v10 = 2LL * (unsigned int)dword_140C4E264;
        *((_QWORD *)&unk_140C4E2A0 + v10) = v8;
        *((_DWORD *)&unk_140C4E2A0 + 2 * v10 + 2) = *NumberOfMapRegisters;
        dword_140C4E264 = v9 + 1;
      }
    }
    else
    {
      *NumberOfMapRegisters = 0;
    }
    v2 = *NumberOfMapRegisters;
  }
  else
  {
    AdapterObject[14].DmaOperations = 0LL;
  }
  *(_DWORD *)&AdapterObject[15].Version = v2;
  result = AdapterObject[14].DmaOperations;
  qword_140C4E240 = AdapterObject;
  return result;
}
