/*
 * XREFs of PoCreatePowerRequest @ 0x140369E10
 * Callers:
 *     <none>
 * Callees:
 *     sub_14036A698 @ 0x14036A698 (sub_14036A698.c)
 *     sub_14036B090 @ 0x14036B090 (sub_14036B090.c)
 *     sub_14036B98C @ 0x14036B98C (sub_14036B98C.c)
 */

NTSTATUS __stdcall PoCreatePowerRequest(
        PVOID *PowerRequest,
        PDEVICE_OBJECT DeviceObject,
        PCOUNTED_REASON_CONTEXT Context)
{
  NTSTATUS v4; // ebx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF
  void *v7; // [rsp+48h] [rbp+10h] BYREF

  v7 = 0LL;
  P = 0LL;
  *PowerRequest = 0LL;
  if ( !DeviceObject )
    return -1073741811;
  v4 = sub_14036B98C((_DWORD)Context, 0, (_DWORD)DeviceObject, 1, 0LL, (__int64)&P);
  if ( v4 < 0 || (v4 = sub_14036A698(P, 0LL, &v7), v4 < 0) )
  {
    if ( P )
      sub_14036B090(P);
  }
  else
  {
    *PowerRequest = v7;
  }
  return v4;
}
