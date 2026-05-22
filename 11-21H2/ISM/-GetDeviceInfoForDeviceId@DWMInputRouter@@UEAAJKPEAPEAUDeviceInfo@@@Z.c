/*
 * XREFs of ?GetDeviceInfoForDeviceId@DWMInputRouter@@UEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180001CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::GetDeviceInfoForDeviceId(DWMInputRouter *this, int a2, struct DeviceInfo **a3)
{
  unsigned __int64 v5; // rax
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  __int64 v10; // rax
  int v12; // [rsp+10h] [rbp+10h]

  v12 = a2;
  v5 = 0LL;
  v6 = 0xCBF29CE484222325uLL;
  do
  {
    v7 = *((unsigned __int8 *)&v12 + v5++);
    v6 = 0x100000001B3LL * (v7 ^ v6);
  }
  while ( v5 < 4 );
  v8 = *((_QWORD *)this + 19);
  v9 = (_QWORD *)(*((_QWORD *)this + 21) + 16 * (v6 & *((_QWORD *)this + 24)));
  v10 = v9[1];
  if ( v10 == v8 )
    return 2147500037LL;
  while ( a2 != *(_DWORD *)(v10 + 16) )
  {
    if ( v10 == *v9 )
      return 2147500037LL;
    v10 = *(_QWORD *)(v10 + 8);
  }
  if ( !v10 || v10 == v8 )
    return 2147500037LL;
  *a3 = *(struct DeviceInfo **)(v10 + 24);
  return 0LL;
}
