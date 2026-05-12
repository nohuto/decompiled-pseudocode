/*
 * XREFs of sub_1C0078B00 @ 0x1C0078B00
 * Callers:
 *     sub_1C00352F0 @ 0x1C00352F0 (sub_1C00352F0.c)
 * Callees:
 *     sub_1C001E408 @ 0x1C001E408 (sub_1C001E408.c)
 */

__int64 __fastcall sub_1C0078B00(void *a1, int a2, int a3, _QWORD *a4)
{
  __int64 result; // rax
  HANDLE v7; // rbx
  __int64 v8; // [rsp+20h] [rbp-28h]
  HANDLE Handle; // [rsp+30h] [rbp-18h] BYREF

  Handle = 0LL;
  result = sub_1C001E408(a1, 1u, &Handle, L"Scsi Bus %d", a2);
  if ( (int)result >= 0 )
  {
    LODWORD(v8) = a3;
    v7 = Handle;
    sub_1C001E408(Handle, 1u, 0LL, L"Initiator Id %d", v8);
    if ( a4 )
      *a4 = v7;
    else
      ZwClose(v7);
    return 0LL;
  }
  return result;
}
