/*
 * XREFs of sub_140A1D75C @ 0x140A1D75C
 * Callers:
 *     sub_14081210C @ 0x14081210C (sub_14081210C.c)
 * Callees:
 *     wcschr @ 0x1403E32C0 (wcschr.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_140813D88 @ 0x140813D88 (sub_140813D88.c)
 */

bool __fastcall sub_140A1D75C(const WCHAR *a1)
{
  HANDLE v1; // rbx
  bool v3; // di
  int v4; // eax
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF
  HANDLE v7; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0LL;
  Handle = 0LL;
  v3 = 0;
  v7 = 0LL;
  if ( !wcschr(a1, 0x5Cu) )
  {
    if ( (int)sub_140813D88(0LL, L"\\Registry\\Machine", 0x20019u, &Handle) >= 0 )
    {
      v4 = sub_140813D88(Handle, a1, 0x20019u, &v7);
      v1 = v7;
      v3 = v4 >= 0;
    }
    if ( Handle )
      ZwClose(Handle);
    if ( v1 )
      ZwClose(v1);
  }
  return v3;
}
