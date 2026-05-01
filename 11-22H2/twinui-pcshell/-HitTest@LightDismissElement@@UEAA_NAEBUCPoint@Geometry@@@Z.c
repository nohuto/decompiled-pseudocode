/*
 * XREFs of ?HitTest@LightDismissElement@@UEAA_NAEBUCPoint@Geometry@@@Z @ 0x18058DF10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall LightDismissElement::HitTest(LightDismissElement *this, const struct Geometry::CPoint *a2)
{
  __int64 v2; // rsi
  __int64 (__fastcall *v4)(__int64, __int64 *); // rdi
  int *v5; // rax
  int v6; // edx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  char v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = *((_QWORD *)this + 29);
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL);
  v5 = (int *)(*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 10) + 120LL))(
                *((_QWORD *)this + 10),
                &v9);
  v8 = *(_QWORD *)a2;
  v6 = *v5;
  HIDWORD(v8) -= v5[1];
  LODWORD(v8) = v8 - v6;
  return v4(v2, &v8);
}
