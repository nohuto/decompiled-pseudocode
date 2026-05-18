/*
 * XREFs of sub_1800115D8 @ 0x1800115D8
 * Callers:
 *     sub_180018220 @ 0x180018220 (sub_180018220.c)
 *     sub_180018FC0 @ 0x180018FC0 (sub_180018FC0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010574 @ 0x180010574 (sub_180010574.c)
 *     sub_180010F54 @ 0x180010F54 (sub_180010F54.c)
 *     sub_180010FD0 @ 0x180010FD0 (sub_180010FD0.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_18002A0C4 @ 0x18002A0C4 (sub_18002A0C4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800115D8(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int v8; // ecx
  unsigned int v9; // edi
  unsigned int v10; // ebx
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v14; // [rsp+48h] [rbp-A0h]
  _BYTE v15[8]; // [rsp+50h] [rbp-98h] BYREF
  volatile signed __int32 *v16; // [rsp+58h] [rbp-90h]
  _BYTE v17[16]; // [rsp+60h] [rbp-88h] BYREF
  _DWORD v18[12]; // [rsp+70h] [rbp-78h] BYREF

  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 280LL))(a1) )
  {
    if ( a3 < *(_DWORD *)(a1 + 1704) )
      a3 = *(_DWORD *)(a1 + 1704);
    if ( a4 < *(_DWORD *)(a1 + 1708) )
      a4 = *(_DWORD *)(a1 + 1708);
    v8 = *(_DWORD *)(a1 + 1712);
    v9 = a3 + v8 - 1 - (a3 + v8 - 1) % v8;
    v10 = a4 + v8 - 1 - (a4 + v8 - 1) % v8;
    a3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
    if ( a3 < v9 )
      a3 = v9;
    a4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
    if ( a4 < v10 )
      a4 = v10;
    if ( a4 * a3 - v10 * v9 >= (int)(float)((float)(int)(a4 * a3) * *(float *)(a1 + 1716)) )
    {
      a3 = v9;
      a4 = v10;
    }
  }
  else if ( a2 )
  {
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a2 + 80LL))(a2, v18);
    a3 = v18[0];
    a4 = v18[1];
  }
  if ( *(_QWORD *)(a1 + 1696) != a2
    || a3 != (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1)
    || (result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1), a4 != (_DWORD)result) )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a1 + 376LL))(a1, v15);
    result = sub_180011C50(v12, &v13);
    if ( v16 )
      result = sub_180010574(v16);
    if ( v13 )
    {
      sub_18002A0C4(v13 + 24, v17);
      sub_180010FD0((__int64 *)(a1 + 1696), a2);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 144LL))(v13, 0LL);
      result = sub_180010F54((__int64)v17);
    }
    if ( v14 )
      return sub_180010530(v14);
  }
  return result;
}
