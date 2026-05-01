/*
 * XREFs of ?IsSearchBoxOnTaskbarMode@SearchBoxOnTaskbarSearchAppPositioner@@UEAA_NAEBUtagRECT@@@Z @ 0x1801A6180
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall SearchBoxOnTaskbarSearchAppPositioner::IsSearchBoxOnTaskbarMode(
        SearchBoxOnTaskbarSearchAppPositioner *this,
        const struct tagRECT *a2)
{
  _BYTE v3[80]; // [rsp+20h] [rbp-78h] BYREF
  int v4; // [rsp+70h] [rbp-28h]

  (*(void (__fastcall **)(_QWORD, _BYTE *, const struct tagRECT *))(**((_QWORD **)this + 1) + 8LL))(
    *((_QWORD *)this + 1),
    v3,
    a2);
  return v4 == 2;
}
