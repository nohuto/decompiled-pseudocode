/*
 * XREFs of ?LayoutRow@GridRow@@QEAAXAEBUCRect@Geometry@@@Z @ 0x180588804
 * Callers:
 *     ?LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z @ 0x1805889D8 (-LayoutRows@GridLayout@@QEAAXAEBUCRect@Geometry@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180186D9C (-IsBiDiLocale@@YAHK@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     GetThreadUILanguage_0 @ 0x1801C8376 (GetThreadUILanguage_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall GridRow::LayoutRow(GridRow *this, const struct Geometry::CRect *a2)
{
  int v4; // r15d
  int v5; // ebx
  _QWORD *v6; // rdi
  _QWORD *v7; // r14
  int v8; // eax
  int v9; // ebx
  int v10; // ecx
  int v11; // r8d
  int v12; // r15d
  int v13; // eax
  LANGID ThreadUILanguage_0; // ax
  int v15; // eax
  _QWORD *v16; // r14
  _QWORD *v17; // r13
  __int64 v18; // r12
  unsigned int v19; // r15d
  void (__fastcall ***v20)(_QWORD, GUID *, __int64 *); // rdi
  void (__fastcall *v21)(_QWORD, GUID *, __int64 *); // rbx
  int v22; // eax
  int v23; // eax
  __int64 v24[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v25; // [rsp+30h] [rbp-30h]
  __int128 v26; // [rsp+40h] [rbp-20h] BYREF

  v4 = *((_DWORD *)this + 1);
  v5 = 0;
  v6 = (_QWORD *)*((_QWORD *)this + 3);
  v7 = &v6[*((_QWORD *)this + 4)];
  v8 = 0;
  while ( v6 != v7 )
  {
    if ( v5 )
      v5 += *(_DWORD *)this;
    v5 += (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v6 + 72LL))(*v6, *((unsigned int *)this + 1));
    v8 = v5;
    ++v6;
  }
  v9 = *((_DWORD *)a2 + 1);
  v10 = *(_DWORD *)a2;
  DWORD1(v25) = v9;
  v11 = v10 + v8;
  v12 = v9 + v4;
  HIDWORD(v25) = v12;
  v13 = (*((_DWORD *)a2 + 2) - (v10 + v8)) / 2;
  LODWORD(v25) = v13 + v10;
  DWORD2(v25) = v13 + v11;
  *((_DWORD *)this + 2) = v13 + v10;
  *((_DWORD *)this + 3) = v9;
  *((_DWORD *)this + 4) = v13 + v11;
  *((_DWORD *)this + 5) = v12;
  ThreadUILanguage_0 = GetThreadUILanguage_0();
  v15 = IsBiDiLocale(ThreadUILanguage_0);
  v16 = (_QWORD *)*((_QWORD *)this + 3);
  v17 = &v16[*((_QWORD *)this + 4)];
  if ( v16 != v17 )
  {
    v18 = v15;
    v19 = v12 - v9;
    do
    {
      v24[0] = 0LL;
      v20 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v16;
      v21 = **(void (__fastcall ***)(_QWORD, GUID *, __int64 *))*v16;
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v24);
      v21(v20, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, v24);
      v26 = v25;
      v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v16 + 72LL))(*v16, v19);
      DWORD2(v26) = v22 + v26;
      LODWORD(v25) = v22 + v26 + *(_DWORD *)this;
      if ( v18 )
      {
        v23 = *((_DWORD *)this + 4) + *((_DWORD *)this + 2) - (v22 + v26);
        DWORD2(v26) = *((_DWORD *)this + 4) + *((_DWORD *)this + 2) - v26;
        LODWORD(v26) = v23;
      }
      (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v24[0] + 104LL))(v24[0], &v26);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v24);
      ++v16;
    }
    while ( v16 != v17 );
  }
}
