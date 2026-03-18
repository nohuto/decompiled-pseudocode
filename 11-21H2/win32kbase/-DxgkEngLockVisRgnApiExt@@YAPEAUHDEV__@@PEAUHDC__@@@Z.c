/*
 * XREFs of ?DxgkEngLockVisRgnApiExt@@YAPEAUHDEV__@@PEAUHDC__@@@Z @ 0x1C01761D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngLockVisRgnApiExt(HDC a1)
{
  __int64 v1; // rbx

  v1 = 0LL;
  if ( qword_1C029ADF0 && (int)qword_1C029ADF0() >= 0 && qword_1C029ADF8 )
    return qword_1C029ADF8(a1);
  return v1;
}
