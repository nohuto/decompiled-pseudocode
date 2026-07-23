/*
 * XREFs of IoMapTransfer @ 0x140390AC0
 * Callers:
 *     sub_140458340 @ 0x140458340 (sub_140458340.c)
 * Callees:
 *     sub_140390C08 @ 0x140390C08 (sub_140390C08.c)
 *     sub_140416F84 @ 0x140416F84 (sub_140416F84.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

PHYSICAL_ADDRESS __stdcall IoMapTransfer(
        PDMA_ADAPTER DmaAdapter,
        PMDL Mdl,
        PVOID MapRegisterBase,
        PVOID CurrentVa,
        PULONG Length,
        BOOLEAN WriteToDevice)
{
  bool v7; // zf
  ULONG v9; // eax
  PHYSICAL_ADDRESS result; // rax
  unsigned int v11; // ebp
  unsigned __int64 v12; // rdi
  int v13; // eax
  _QWORD *v14; // r8

  v7 = *(_DWORD *)&DmaAdapter[32].Version == 3;
  *((_BYTE *)&DmaAdapter[32].Size + 2) = 1;
  if ( v7 )
  {
    v9 = *(_DWORD *)(&DmaAdapter[15].Size + 1);
    if ( *Length > v9 )
      *Length = v9;
  }
  result.QuadPart = sub_140390C08(
                      (_DWORD)DmaAdapter,
                      (_DWORD)Mdl,
                      (_DWORD)MapRegisterBase,
                      (_DWORD)CurrentVa,
                      (__int64)Length,
                      WriteToDevice,
                      0);
  v11 = result.LowPart & 0xFFF;
  if ( *(_DWORD *)&DmaAdapter[32].Version == 3 )
  {
    v12 = ((result.LowPart & 0xFFF) + *Length + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    if ( *((_BYTE *)MapRegisterBase + 64) )
    {
      v13 = sub_140416F84();
      v14 = (_QWORD *)*((_QWORD *)MapRegisterBase + 3);
      if ( v13 )
      {
        result.QuadPart = *((_QWORD *)MapRegisterBase + 4) + v11 + *v14 + *((unsigned int *)MapRegisterBase + 4);
        *((_DWORD *)MapRegisterBase + 4) += v12;
      }
      else
      {
        return (PHYSICAL_ADDRESS)(*((_QWORD *)MapRegisterBase + 4) + v11 + *v14);
      }
    }
    else
    {
      sub_14042A5E0(*((_QWORD *)MapRegisterBase + 3), *((_QWORD *)MapRegisterBase + 5));
      *((_QWORD *)MapRegisterBase + 5) += v12;
      return (PHYSICAL_ADDRESS)(MEMORY[0] + v11);
    }
  }
  return result;
}
