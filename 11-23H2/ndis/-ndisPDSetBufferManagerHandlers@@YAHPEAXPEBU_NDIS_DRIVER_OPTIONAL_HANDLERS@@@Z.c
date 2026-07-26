/*
 * XREFs of ?ndisPDSetBufferManagerHandlers@@YAHPEAXPEBU_NDIS_DRIVER_OPTIONAL_HANDLERS@@@Z @ 0x1C0134BBC
 * Callers:
 *     NdisSetOptionalHandlers @ 0x1C0022320 (NdisSetOptionalHandlers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisPDSetBufferManagerHandlers(_QWORD *a1, const struct _NDIS_DRIVER_OPTIONAL_HANDLERS *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax

  v2 = 0;
  if ( *(_BYTE *)a1 == 2 )
  {
    if ( a2->Header.Revision == 1
      && a2->Header.Size >= 0x38u
      && !*(_DWORD *)&a2[1]
      && (v3 = *(_QWORD *)&a2[2].Header.Type) != 0
      && *(_QWORD *)&a2[4].Header.Type
      && *(_QWORD *)&a2[6].Header.Type
      && *(_QWORD *)&a2[8].Header.Type
      && *(_QWORD *)&a2[10].Header.Type
      && *(_QWORD *)&a2[12].Header.Type )
    {
      a1[142] = v3;
      a1[143] = *(_QWORD *)&a2[4].Header.Type;
      a1[144] = *(_QWORD *)&a2[6].Header.Type;
      a1[145] = *(_QWORD *)&a2[8].Header.Type;
      a1[146] = *(_QWORD *)&a2[10].Header.Type;
      a1[147] = *(_QWORD *)&a2[12].Header.Type;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v2;
}
