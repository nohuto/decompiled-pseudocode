/*
 * XREFs of ?CanScroll@CVirtualDesktopContainerElement@@UEAA_NXZ @ 0x1804D9A80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CVirtualDesktopContainerElement::CanScroll(CVirtualDesktopContainerElement *this)
{
  __int64 v1; // rbx
  int *v3; // rax
  int v4; // esi
  int v5; // edi
  _DWORD *v6; // rax
  __int64 v8; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v9[16]; // [rsp+30h] [rbp-28h] BYREF

  v1 = *(_QWORD *)this;
  v3 = (int *)(*(__int64 (__fastcall **)(CVirtualDesktopContainerElement *, __int64 *))(*(_QWORD *)this + 32LL))(
                this,
                &v8);
  v4 = v3[2];
  v5 = *v3;
  v6 = (_DWORD *)(*(__int64 (__fastcall **)(CVirtualDesktopContainerElement *, _BYTE *))(v1 + 40))(this, v9);
  return v6[2] - *v6 > v4 - v5;
}
