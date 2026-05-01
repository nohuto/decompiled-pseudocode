/*
 * XREFs of ?v_LayoutChildren@CScrollButtonContainer@@MEAAXXZ @ 0x18058BC50
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x1801C8376 (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CScrollButtonContainer::v_LayoutChildren(CScrollButtonContainer *this)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  int v4; // r8d
  int v5; // eax
  int v6; // esi
  bool v7; // zf
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int128 v11; // xmm6
  int v12; // r14d
  LANGID ThreadUILanguage_0; // ax
  _QWORD *v14; // rsi
  int v15; // r15d
  _QWORD *v16; // rbx
  int v17; // eax
  __int128 v18; // [rsp+30h] [rbp-30h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 11);
  v3 = *v2;
  v4 = *((_DWORD *)this + 15);
  LODWORD(v18) = *((_DWORD *)this + 14);
  DWORD2(v18) = v18 + 1;
  DWORD1(v18) = v4;
  HIDWORD(v18) = v4 + 1;
  (*(void (__fastcall **)(__int64 *, __int128 *, _QWORD, _QWORD))(v3 + 24))(v2, &v18, 0LL, 0LL);
  v5 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v6 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  *(_QWORD *)&v18 = 0LL;
  v7 = (*((_BYTE *)this + 232) & 1) == 0;
  *((_QWORD *)&v18 + 1) = __PAIR64__(v5, v6);
  if ( !v7 )
  {
    v8 = *((_QWORD *)this + 35);
    LODWORD(v18) = 0;
    DWORD2(v18) = v8;
    DWORD1(v18) = (v5 - HIDWORD(v8)) / 2;
    v9 = *((_QWORD *)this + 51);
    HIDWORD(v18) = HIDWORD(v8) + DWORD1(v18);
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9 + 104LL))(v9, &v18);
    v10 = *((_QWORD *)this + 52);
    DWORD2(v18) = v6;
    LODWORD(v18) = v6 - v8;
LABEL_8:
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v10 + 104LL))(v10, &v18);
    return;
  }
  v11 = v18;
  v12 = v6 / 2;
  DWORD2(v18) = v6 / 2 - (*((_DWORD *)this + 69) >> 1);
  ThreadUILanguage_0 = GetThreadUILanguage_0();
  v14 = (_QWORD *)((char *)this + 408);
  v15 = IsBiDiLocale(ThreadUILanguage_0);
  v16 = (_QWORD *)((char *)this + 416);
  if ( v15 )
    (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*v16 + 104LL))(*v16, &v18);
  else
    (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*v14 + 104LL))(*v14, &v18);
  v17 = v12 + (*((_DWORD *)this + 69) >> 1);
  v18 = v11;
  LODWORD(v18) = v17;
  if ( v15 )
  {
    v10 = *v14;
    goto LABEL_8;
  }
  (*(void (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*v16 + 104LL))(*v16, &v18);
}
