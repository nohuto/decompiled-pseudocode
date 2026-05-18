/*
 * XREFs of sub_180097F04 @ 0x180097F04
 * Callers:
 *     sub_180097E90 @ 0x180097E90 (sub_180097E90.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_18009796C @ 0x18009796C (sub_18009796C.c)
 *     sub_18009A1B4 @ 0x18009A1B4 (sub_18009A1B4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_180097F04(__int64 a1, int a2)
{
  _DWORD *v2; // rdx
  int v4; // eax
  __int64 *result; // rax
  __int64 v6; // rdx
  __int64 (__fastcall ***v7)(_QWORD, __int64); // rcx
  void *v8; // rbx
  int v9; // [rsp+40h] [rbp-18h] BYREF
  int v10; // [rsp+44h] [rbp-14h] BYREF
  LPVOID lpMem[2]; // [rsp+48h] [rbp-10h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF
  int v14; // [rsp+80h] [rbp+28h] BYREF
  int v15; // [rsp+88h] [rbp+30h] BYREF

  v13 = a2;
  v2 = *(_DWORD **)(a1 + 96);
  if ( v2 )
  {
    v12 = v2[6];
    v14 = v2[5];
    v15 = v2[4];
    v9 = v2[3];
    v4 = v2[2];
  }
  else
  {
    v12 = 0;
    v14 = 0;
    v15 = 0;
    v9 = 0;
    v4 = 0;
  }
  v10 = v4;
  result = sub_18009796C((__int64 *)lpMem, &v10, &v9, &v15, &v14, &v12, &v13);
  v6 = *result;
  *result = 0LL;
  v7 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a1 + 96);
  *(_QWORD *)(a1 + 96) = v6;
  if ( v7 )
    result = (__int64 *)(**v7)(v7, 1LL);
  v8 = lpMem[0];
  if ( lpMem[0] )
  {
    sub_18009A1B4(lpMem[0]);
    return (__int64 *)sub_18000B998(v8);
  }
  return result;
}
