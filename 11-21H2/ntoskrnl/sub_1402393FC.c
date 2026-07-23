/*
 * XREFs of sub_1402393FC @ 0x1402393FC
 * Callers:
 *     sub_14024DC34 @ 0x14024DC34 (sub_14024DC34.c)
 *     sub_14027B820 @ 0x14027B820 (sub_14027B820.c)
 *     sub_1402EACBC @ 0x1402EACBC (sub_1402EACBC.c)
 *     sub_140314BA0 @ 0x140314BA0 (sub_140314BA0.c)
 *     sub_140374958 @ 0x140374958 (sub_140374958.c)
 *     sub_140580DB8 @ 0x140580DB8 (sub_140580DB8.c)
 *     sub_140580FA4 @ 0x140580FA4 (sub_140580FA4.c)
 *     sub_140581158 @ 0x140581158 (sub_140581158.c)
 *     sub_140581748 @ 0x140581748 (sub_140581748.c)
 *     sub_140A4B5A0 @ 0x140A4B5A0 (sub_140A4B5A0.c)
 * Callees:
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 */

__int64 __fastcall sub_1402393FC(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r8
  ULONG_PTR v5; // rcx

  if ( !a2 )
  {
    CurrentThread = KeGetCurrentThread();
    v5 = *((unsigned __int8 *)CurrentThread + 586);
    if ( (_BYTE)v5 )
      KeBugCheckEx(5u, BugCheckParameter1, *((_QWORD *)CurrentThread + 23), v5, 0LL);
  }
  return sub_14030D5C0(BugCheckParameter1);
}
