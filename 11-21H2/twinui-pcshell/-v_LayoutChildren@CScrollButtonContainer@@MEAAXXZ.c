/*
 * XREFs of ?v_LayoutChildren@CScrollButtonContainer@@MEAAXXZ @ 0x1804D4230
 * Callers:
 *     <none>
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180073E70 (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x18018A13C (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
  int v12; // ebx
  LANGID ThreadUILanguage_0; // ax
  int v14; // esi
  int v15; // eax
  __int128 v16; // [rsp+30h] [rbp-30h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 11);
  v3 = *v2;
  v4 = *((_DWORD *)this + 15);
  LODWORD(v16) = *((_DWORD *)this + 14);
  DWORD2(v16) = v16 + 1;
  DWORD1(v16) = v4;
  HIDWORD(v16) = v4 + 1;
  (*(void (__fastcall **)(__int64 *, __int128 *, _QWORD, _QWORD))(v3 + 24))(v2, &v16, 0LL, 0LL);
  v5 = *((_DWORD *)this + 17) - *((_DWORD *)this + 15);
  v6 = *((_DWORD *)this + 16) - *((_DWORD *)this + 14);
  *(_QWORD *)&v16 = 0LL;
  v7 = (*((_BYTE *)this + 232) & 1) == 0;
  *((_QWORD *)&v16 + 1) = __PAIR64__(v5, v6);
  if ( !v7 )
  {
    v8 = *((_QWORD *)this + 35);
    LODWORD(v16) = 0;
    DWORD2(v16) = v8;
    DWORD1(v16) = (v5 - HIDWORD(v8)) / 2;
    v9 = *((_QWORD *)this + 51);
    HIDWORD(v16) = HIDWORD(v8) + DWORD1(v16);
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9 + 104LL))(v9, &v16);
    v10 = *((_QWORD *)this + 52);
    DWORD2(v16) = v6;
    LODWORD(v16) = v6 - v8;
LABEL_8:
    (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v10 + 104LL))(v10, &v16);
    return;
  }
  v11 = v16;
  v12 = v6 / 2;
  DWORD2(v16) = v6 / 2 - (*((_DWORD *)this + 69) >> 1);
  ThreadUILanguage_0 = GetThreadUILanguage_0();
  v14 = IsBiDiLocale(ThreadUILanguage_0);
  if ( v14 )
    (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 52) + 104LL))(*((_QWORD *)this + 52), &v16);
  else
    (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 51) + 104LL))(*((_QWORD *)this + 51), &v16);
  v15 = v12 + (*((_DWORD *)this + 69) >> 1);
  v16 = v11;
  LODWORD(v16) = v15;
  if ( v14 )
  {
    v10 = *((_QWORD *)this + 51);
    goto LABEL_8;
  }
  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 52) + 104LL))(*((_QWORD *)this + 52), &v16);
}
