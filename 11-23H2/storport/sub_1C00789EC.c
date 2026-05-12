/*
 * XREFs of sub_1C00789EC @ 0x1C00789EC
 * Callers:
 *     sub_1C00352F0 @ 0x1C00352F0 (sub_1C00352F0.c)
 * Callees:
 *     sub_1C001E408 @ 0x1C001E408 (sub_1C001E408.c)
 *     sub_1C00214E8 @ 0x1C00214E8 (sub_1C00214E8.c)
 */

__int64 __fastcall sub_1C00789EC(void *a1, int a2, int a3, int a4, int a5, PWSTR *a6, HANDLE Handle, _QWORD *a8)
{
  __int64 result; // rax
  HANDLE v9; // rbx
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+60h] [rbp+18h] BYREF
  int v12; // [rsp+68h] [rbp+20h] BYREF

  v12 = a4;
  v11 = a3;
  v10 = 0;
  Handle = 0LL;
  result = sub_1C001E408(a1, 1u, &Handle, L"Scsi Port %d", a2);
  if ( (int)result >= 0 )
  {
    v9 = Handle;
    if ( v11 )
      sub_1C00214E8(Handle, L"Interrupt", 4u, (PWSTR)&v11, 4u);
    v12 = 1;
    sub_1C00214E8(v9, L"Dma64BitAddresses", 4u, (PWSTR)&v12, 4u);
    if ( a6 )
      sub_1C00214E8(v9, L"Driver", 1u, a6[1], *(unsigned __int16 *)a6 + 2);
    if ( a8 )
      *a8 = v9;
    else
      ZwClose(v9);
    return 0LL;
  }
  return result;
}
