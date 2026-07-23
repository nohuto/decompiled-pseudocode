/*
 * XREFs of IoWMIQuerySingleInstanceMultiple @ 0x1409DBB20
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1409DDA74 @ 0x1409DDA74 (sub_1409DDA74.c)
 */

NTSTATUS __stdcall IoWMIQuerySingleInstanceMultiple(
        PVOID *DataBlockObjectList,
        PUNICODE_STRING InstanceNames,
        ULONG ObjectCount,
        PULONG InOutBufferSize,
        PVOID OutBuffer)
{
  _OWORD *v5; // rbx
  ULONG v7; // r9d
  NTSTATUS v8; // edx
  ULONG v10; // [rsp+50h] [rbp-68h] BYREF
  _OWORD v11[3]; // [rsp+58h] [rbp-60h] BYREF
  __int64 v12; // [rsp+88h] [rbp-30h]

  v10 = 0;
  v5 = OutBuffer;
  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  if ( !DataBlockObjectList || !InstanceNames || !ObjectCount || !InOutBufferSize )
    return -1073741811;
  v7 = *InOutBufferSize;
  if ( !OutBuffer || v7 < 0x38 )
  {
    v5 = v11;
    v7 = 56;
  }
  v8 = sub_1409DDA74(
         0,
         0,
         (_DWORD)v5,
         v7,
         0LL,
         ObjectCount,
         (__int64)DataBlockObjectList,
         (__int64)InstanceNames,
         (__int64)&v10);
  if ( v8 >= 0 )
  {
    if ( (*((_DWORD *)v5 + 11) & 0x20) != 0 )
    {
      *InOutBufferSize = *((_DWORD *)v5 + 12);
    }
    else
    {
      *InOutBufferSize = v10;
      if ( v5 != v11 )
        return v8;
    }
    return -1073741789;
  }
  return v8;
}
