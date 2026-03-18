/*
 * XREFs of ?IsEmptyDrawing@CBrush@@UEBA_NXZ @ 0x1800DB5D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CBrush::IsEmptyDrawing(CBrush *this)
{
  __int64 v1; // rax
  char v2; // bl
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)this;
  v2 = 0;
  v4 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(CBrush *, _QWORD, char *))(v1 + 288))(this, 0LL, &v4) || v4 )
    return 1;
  return v2;
}
