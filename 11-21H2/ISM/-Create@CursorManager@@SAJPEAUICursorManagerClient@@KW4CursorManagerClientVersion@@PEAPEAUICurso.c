/*
 * XREFs of ?Create@CursorManager@@SAJPEAUICursorManagerClient@@KW4CursorManagerClientVersion@@PEAPEAUICursorManager@@@Z @ 0x180156060
 * Callers:
 *     ?Initialize@SystemCursorService2@@QEAAJK@Z @ 0x1800ECBF4 (-Initialize@SystemCursorService2@@QEAAJK@Z.c)
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0CursorManager@@IEAA@PEAUICursorManagerClient@@KW4CursorManagerClientVersion@@@Z @ 0x180155E38 (--0CursorManager@@IEAA@PEAUICursorManagerClient@@KW4CursorManagerClientVersion@@@Z.c)
 *     ?Initialize@CursorManager@@IEAAJXZ @ 0x18015614C (-Initialize@CursorManager@@IEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CursorManager::Create(__int64 a1, __int64 a2, __int64 a3, CursorManager **a4)
{
  CursorManager *v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  void *v10; // rax
  CursorManager *v11; // rsi
  int v12; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = 0LL;
  if ( !a4 )
  {
    v7 = -2147024809;
    v8 = 2147942487LL;
    v9 = 116LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
      (const char *)v8);
    goto LABEL_12;
  }
  v10 = RefCountedObject::operator new(0x60uLL);
  if ( v10 )
    v11 = (CursorManager *)CursorManager::CursorManager((__int64)v10, a1);
  else
    v11 = 0LL;
  v6 = v11;
  if ( !v11 )
  {
    v7 = -2147024882;
    v8 = 2147942414LL;
    v9 = 119LL;
    goto LABEL_10;
  }
  v12 = CursorManager::Initialize(v11);
  v7 = v12;
  if ( v12 < 0 )
  {
    v8 = (unsigned int)v12;
    v9 = 121LL;
    goto LABEL_10;
  }
  v6 = 0LL;
  *a4 = v11;
  v7 = 0;
LABEL_12:
  if ( v6 )
    (*(void (__fastcall **)(CursorManager *))(*(_QWORD *)v6 + 16LL))(v6);
  return v7;
}
