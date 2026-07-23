/*
 * XREFs of sub_140B0E478 @ 0x140B0E478
 * Callers:
 *     sub_140B0E1A8 @ 0x140B0E1A8 (sub_140B0E1A8.c)
 *     sub_140B0E310 @ 0x140B0E310 (sub_140B0E310.c)
 * Callees:
 *     IoGetDeviceInterfaces @ 0x1407896A0 (IoGetDeviceInterfaces.c)
 */

__int64 __fastcall sub_140B0E478(
        PZZWSTR *SymbolicLinkList,
        GUID *InterfaceClassGuid,
        unsigned int a3,
        unsigned int *a4)
{
  PZZWSTR v4; // rdi
  unsigned int v8; // ebx
  PZZWSTR v9; // rcx
  __int64 result; // rax
  __int64 v11; // rax
  WCHAR *v12; // rcx

  v4 = *SymbolicLinkList;
  v8 = 0;
  if ( IoGetDeviceInterfaces(InterfaceClassGuid, 0LL, 0, SymbolicLinkList) < 0 )
  {
    if ( v4 )
      *v4 = 0;
    return 3221225473LL;
  }
  v9 = *SymbolicLinkList;
  result = -1LL;
  do
    ++result;
  while ( v9[result] );
  while ( (_DWORD)result )
  {
    ++v8;
    v11 = -1LL;
    do
      ++v11;
    while ( v9[v11] );
    v12 = &v9[v11];
    result = -1LL;
    v9 = v12 + 1;
    do
      ++result;
    while ( v9[result] );
  }
  *a4 = v8;
  if ( v8 < a3 )
    return 3221225473LL;
  return result;
}
