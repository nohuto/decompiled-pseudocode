/*
 * XREFs of sub_1800D06A4 @ 0x1800D06A4
 * Callers:
 *     sub_1800D01E0 @ 0x1800D01E0 (sub_1800D01E0.c)
 * Callees:
 *     sub_18000E72C @ 0x18000E72C (sub_18000E72C.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011C50 @ 0x180011C50 (sub_180011C50.c)
 *     sub_1800393DC @ 0x1800393DC (sub_1800393DC.c)
 *     sub_1800C589C @ 0x1800C589C (sub_1800C589C.c)
 *     sub_1800C7750 @ 0x1800C7750 (sub_1800C7750.c)
 *     sub_1800CF7CC @ 0x1800CF7CC (sub_1800CF7CC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800D06A4(_QWORD **a1)
{
  _QWORD *v2; // rax
  __int64 v3; // rdi
  int (__fastcall *v4)(__int64, int *, __int64 *); // rbx
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp-20h] BYREF
  __int64 v8; // [rsp+38h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp-10h] BYREF
  __int64 v10; // [rsp+48h] [rbp-8h]
  __int64 v11; // [rsp+70h] [rbp+20h] BYREF
  __int64 v12; // [rsp+78h] [rbp+28h] BYREF
  int v13; // [rsp+80h] [rbp+30h] BYREF
  int v14; // [rsp+84h] [rbp+34h]

  v13 = 0;
  v14 = 0;
  v12 = 0LL;
  sub_180011C50((__int64)(a1 + 9), &v9);
  sub_1800CF7CC(&v7, &v9);
  if ( v10 )
    sub_180010530(v10);
  v2 = sub_1800C589C(v7, &v11);
  v3 = *v2;
  v4 = *(int (__fastcall **)(__int64, int *, __int64 *))(*(_QWORD *)*v2 + 192LL);
  sub_18000E72C(&v12);
  LOBYTE(v4) = v4(v3, &v13, &v12) >= 0;
  sub_18000E72C(&v11);
  if ( (_BYTE)v4 )
  {
    (*(void (__fastcall **)(_QWORD *, __int64))(*a1[18] + 224LL))(a1[18], v12);
    sub_1800393DC(a1);
    LODWORD(v11) = 0;
    do
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64 *, __int64, _DWORD))(*a1[18] + 232LL))(
             a1[18],
             v12,
             &v11,
             4LL,
             0);
      if ( v5 )
      {
        if ( v5 != 1 )
        {
          sub_1800C7750(v7, v5);
          break;
        }
        Thrd_yield();
      }
    }
    while ( !(_DWORD)v11 );
  }
  if ( v8 )
    sub_180010530(v8);
  return sub_18000E72C(&v12);
}
