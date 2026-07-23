/*
 * XREFs of sub_140695854 @ 0x140695854
 * Callers:
 *     sub_140695570 @ 0x140695570 (sub_140695570.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_1406958D0 @ 0x1406958D0 (sub_1406958D0.c)
 *     sub_1406959BC @ 0x1406959BC (sub_1406959BC.c)
 */

__int64 __fastcall sub_140695854(__int64 a1, __int64 a2, void *a3)
{
  int v4; // ebx
  HANDLE Handle; // [rsp+40h] [rbp+8h] BYREF

  Handle = 0LL;
  v4 = sub_1406959BC(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa", 0x201u, &Handle);
  if ( v4 >= 0 )
  {
    v4 = sub_1406958D0(Handle, a3);
    ZwClose(Handle);
  }
  return (unsigned int)v4;
}
