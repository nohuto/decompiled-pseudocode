/*
 * XREFs of sub_1800242D0 @ 0x1800242D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001528 @ 0x180001528 (sub_180001528.c)
 *     sub_180001A08 @ 0x180001A08 (sub_180001A08.c)
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180021D04 @ 0x180021D04 (sub_180021D04.c)
 *     sub_180021EB4 @ 0x180021EB4 (sub_180021EB4.c)
 *     sub_180023260 @ 0x180023260 (sub_180023260.c)
 */

char __fastcall sub_1800242D0(__int64 a1, int a2, void *a3, void *a4)
{
  char result; // al
  __int64 v9; // rax
  volatile signed __int64 *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // [rsp+50h] [rbp-B0h] BYREF
  int v15; // [rsp+54h] [rbp-ACh] BYREF
  void *v16; // [rsp+58h] [rbp-A8h] BYREF
  void *v17; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h] BYREF
  _BYTE *v19; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v20[144]; // [rsp+80h] [rbp-80h] BYREF

  result = sub_180023260(*(_QWORD *)(a1 + 112), a1 + 120, (__int64)a3);
  if ( (unsigned int)dword_1801C81C0 > 5 )
  {
    result = sub_180001528((__int64)&dword_1801C81C0, 0x400000000000LL);
    if ( result )
    {
      v16 = a4;
      v17 = a3;
      v14 = a2;
      v9 = sub_180021EB4(a1 + 16);
      v10 = *(volatile signed __int64 **)(a1 + 112);
      v18 = v9;
      v15 = 1;
      v19 = sub_180021D04(v20, v10);
      return sub_180001A08(v11, byte_1801AB56D, v12, v13, (void **)&v19, (__int64)&v15, &v18, (__int64)&v14, &v17, &v16);
    }
  }
  return result;
}
