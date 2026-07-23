/*
 * XREFs of IoWMIQueryAllDataMultiple @ 0x1409DBA30
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409DD6BC @ 0x1409DD6BC (sub_1409DD6BC.c)
 */

NTSTATUS __stdcall IoWMIQueryAllDataMultiple(
        PVOID *DataBlockObjectList,
        ULONG ObjectCount,
        PULONG InOutBufferSize,
        PVOID OutBuffer)
{
  ULONG v8; // eax
  NTSTATUS v9; // edx
  __int64 v11; // [rsp+40h] [rbp-98h] BYREF
  _BYTE v12[80]; // [rsp+50h] [rbp-88h] BYREF

  memset(v12, 0, 0x48uLL);
  LODWORD(v11) = 0;
  if ( !DataBlockObjectList || !ObjectCount || !InOutBufferSize )
    return -1073741811;
  v8 = *InOutBufferSize;
  if ( !OutBuffer || v8 < 0x48 )
  {
    OutBuffer = v12;
    v8 = 72;
  }
  v9 = sub_1409DD6BC(ObjectCount, (int)DataBlockObjectList, 0, 0, OutBuffer, v8, 0LL, (__int64)&v11);
  if ( v9 >= 0 )
  {
    if ( (*((_DWORD *)OutBuffer + 11) & 0x20) != 0 )
    {
      *InOutBufferSize = *((_DWORD *)OutBuffer + 12);
    }
    else
    {
      *InOutBufferSize = v11;
      if ( OutBuffer != v12 )
        return v9;
    }
    return -1073741789;
  }
  return v9;
}
