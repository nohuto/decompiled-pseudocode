/*
 * XREFs of sub_180097A30 @ 0x180097A30
 * Callers:
 *     sub_18004DB0C @ 0x18004DB0C (sub_18004DB0C.c)
 * Callees:
 *     sub_18000B998 @ 0x18000B998 (sub_18000B998.c)
 *     sub_1800969E4 @ 0x1800969E4 (sub_1800969E4.c)
 *     sub_1800978DC @ 0x1800978DC (sub_1800978DC.c)
 *     sub_18009A1B4 @ 0x18009A1B4 (sub_18009A1B4.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_180097A30(__int64 *a1, int a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  void (__fastcall ***v5)(_QWORD, __int64); // rcx
  void *v6; // rbx
  int v8; // [rsp+40h] [rbp-10h] BYREF
  int v9; // [rsp+44h] [rbp-Ch] BYREF
  LPVOID lpMem; // [rsp+48h] [rbp-8h] BYREF
  __int64 *v11; // [rsp+70h] [rbp+20h] BYREF
  int v12; // [rsp+78h] [rbp+28h] BYREF
  int v13; // [rsp+80h] [rbp+30h] BYREF
  int v14; // [rsp+88h] [rbp+38h] BYREF

  v12 = a2;
  v11 = a1;
  sub_1800969E4(a1, 11, 5);
  LODWORD(v11) = 0;
  v13 = 0;
  v14 = 0;
  v8 = 0;
  v9 = 0;
  *a1 = (__int64)&Spectre::Engine::VertexBuffer::`vftable';
  v3 = sub_1800978DC((__int64 *)&lpMem, &v9, &v8, &v14, &v13, &v11, &v12);
  v4 = *v3;
  *v3 = 0LL;
  v5 = (void (__fastcall ***)(_QWORD, __int64))a1[14];
  a1[14] = v4;
  if ( v5 )
    (**v5)(v5, 1LL);
  v6 = lpMem;
  if ( lpMem )
  {
    sub_18009A1B4(lpMem);
    sub_18000B998(v6);
  }
  return a1;
}
