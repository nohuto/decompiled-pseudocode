/*
 * XREFs of ?_LayoutBackground@CVirtualDesktopBarElement@@IEAAXXZ @ 0x1804C73CC
 * Callers:
 *     _lambda_2481c7aedd1faa0c0b80517e0ae6abbe_::operator() @ 0x1804C684C (_lambda_2481c7aedd1faa0c0b80517e0ae6abbe_--operator().c)
 *     ?v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ @ 0x1804C7660 (-v_LayoutChildren@CVirtualDesktopBarElement@@MEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??B?$HighContrastAwareOpacity@M@@QEBAMXZ @ 0x1804C19A4 (--B-$HighContrastAwareOpacity@M@@QEBAMXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVirtualDesktopBarElement::_LayoutBackground(CVirtualDesktopBarElement *this)
{
  int v2; // edx
  int v3; // eax
  _QWORD *v4; // rax
  bool v5; // bl
  _BYTE *v6; // rax
  __int64 v7; // rsi
  void (__fastcall *v8)(__int64, __int64, _QWORD, _QWORD); // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _BYTE v11[4]; // [rsp+30h] [rbp-40h] BYREF
  int v12; // [rsp+34h] [rbp-3Ch]
  __int128 v13; // [rsp+40h] [rbp-30h] BYREF
  __int128 v14; // [rsp+50h] [rbp-20h] BYREF

  v12 = 0;
  v2 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v3 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  *(_QWORD *)&v14 = 0LL;
  *((_QWORD *)&v14 + 1) = __PAIR64__(v2, v3);
  v4 = (_QWORD *)(*(__int64 (__fastcall **)(CVirtualDesktopBarElement *, __int128 *))(*(_QWORD *)this + 384LL))(
                   this,
                   &v13);
  v5 = 1;
  v12 = 1;
  if ( (*(int (__fastcall **)(_QWORD, __int64, CVirtualDesktopBarElement *, __int128 *, _BYTE *))(*(_QWORD *)*v4 + 56LL))(
         *v4,
         7LL,
         this,
         &v14,
         v11) >= 0 )
    v5 = v11[0] != 0;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v13);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD, __int128 *, _QWORD, _QWORD))(**((_QWORD **)this + 96) + 24LL))(
      *((_QWORD *)this + 96),
      &v14,
      0LL,
      0LL);
  v6 = (_BYTE *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 92) + 40LL))(*((_QWORD *)this + 92));
  v7 = *((_QWORD *)this + 96);
  v8 = *(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v7 + 32LL);
  if ( *v6 )
    HighContrastAwareOpacity<float>::operator float((float *)this + 58);
  else
    HighContrastAwareOpacity<float>::operator float((float *)this + 60);
  v8(v7, v9, 0LL, 0LL);
  v10 = *((_QWORD *)this + 97);
  if ( v10 )
  {
    v13 = v14;
    HIDWORD(v13) = DWORD1(v14);
    DWORD1(v13) = DWORD1(v14) - *((_DWORD *)this + 89);
    (*(void (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD))(*(_QWORD *)v10 + 24LL))(v10, &v13, 0LL, 0LL);
  }
}
