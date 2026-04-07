/*
 * XREFs of ?CreateTextLayout@CDWriteText@@AEAAJXZ @ 0x180018750
 * Callers:
 *     ?ValidateVisual@CDWriteText@@UEAAJXZ @ 0x1800180F0 (-ValidateVisual@CDWriteText@@UEAAJXZ.c)
 * Callees:
 *     ?CreateTextFormat@CDWriteText@@AEAAJXZ @ 0x180018B74 (-CreateTextFormat@CDWriteText@@AEAAJXZ.c)
 *     ??1?$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180041C18 (--1-$com_ptr_t@UICompositor@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18006634C (memcmp_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D824 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CDWriteText::CreateTextLayout(CDWriteText *this)
{
  char *v2; // rbx
  char *v3; // rsi
  int TextFormat; // ebx
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 (__fastcall *v7)(__int64, char *, __int64, _QWORD); // rbp
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  char *v10; // rdx
  char *v11; // rax
  __int64 v12; // r8
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  float v19; // [rsp+20h] [rbp-68h]
  _QWORD v20[2]; // [rsp+40h] [rbp-48h] BYREF
  int v21; // [rsp+50h] [rbp-38h] BYREF
  __int64 v22; // [rsp+54h] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  v2 = (char *)this + 420;
  v3 = (char *)this + 328;
  if ( memcmp_0((char *)this + 328, (char *)this + 420, 0x5CuLL) )
  {
    *(_OWORD *)v2 = *(_OWORD *)v3;
    *((_OWORD *)v2 + 1) = *((_OWORD *)v3 + 1);
    *((_OWORD *)v2 + 2) = *((_OWORD *)v3 + 2);
    *((_OWORD *)v2 + 3) = *((_OWORD *)v3 + 3);
    *((_OWORD *)v2 + 4) = *((_OWORD *)v3 + 4);
    *((_QWORD *)v2 + 10) = *((_QWORD *)v3 + 10);
    *((_DWORD *)v2 + 22) = *((_DWORD *)v3 + 22);
    TextFormat = CDWriteText::CreateTextFormat(this);
    if ( TextFormat < 0 )
    {
      v17 = 316LL;
LABEL_22:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
        (const char *)(unsigned int)TextFormat,
        SLODWORD(v19));
      return (unsigned int)TextFormat;
    }
  }
  TextFormat = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 35) + 40LL))(
                 *((_QWORD *)this + 35),
                 1LL);
  if ( TextFormat < 0 )
  {
    v17 = 320LL;
    goto LABEL_22;
  }
  if ( *((_BYTE *)this + 528) )
  {
    TextFormat = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 35) + 48LL))(
                   *((_QWORD *)this + 35),
                   1LL);
    if ( TextFormat < 0 )
    {
      v17 = 325LL;
      goto LABEL_22;
    }
  }
  if ( *((_BYTE *)this + 529) )
  {
    TextFormat = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 35) + 24LL))(
                   *((_QWORD *)this + 35),
                   1LL);
    if ( TextFormat < 0 )
    {
      v17 = 330LL;
      goto LABEL_22;
    }
  }
  v5 = *((_QWORD *)this + 16);
  v20[1] = v5;
  v6 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 32);
  v7 = *(__int64 (__fastcall **)(__int64, char *, __int64, _QWORD))(*(_QWORD *)v6 + 144LL);
  v8 = (_QWORD *)((char *)this + 288);
  v9 = *((_QWORD *)this + 36);
  if ( v9 )
  {
    *v8 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  v10 = (char *)this + 296;
  v11 = (char *)this + 296;
  if ( *((_QWORD *)this + 40) >= 8uLL )
    v11 = *(char **)v10;
  v12 = -1LL;
  do
    ++v12;
  while ( *(_WORD *)&v11[2 * v12] );
  if ( *((_QWORD *)this + 40) >= 8uLL )
    v10 = *(char **)v10;
  v19 = (float)(int)v5;
  TextFormat = v7(v6, v10, v12, *((_QWORD *)this + 35));
  if ( TextFormat < 0 )
  {
    v17 = 342LL;
    goto LABEL_22;
  }
  v20[0] = 0LL;
  v13 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 32);
  v14 = *v13;
  v20[0] = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(v14 + 160))(v13, *((_QWORD *)this + 35), v20);
  TextFormat = v15;
  if ( v15 < 0 )
  {
    v18 = 346LL;
    goto LABEL_24;
  }
  v21 = 1;
  v22 = 0LL;
  v15 = (*(__int64 (__fastcall **)(_QWORD, int *, _QWORD))(*(_QWORD *)*v8 + 72LL))(*v8, &v21, v20[0]);
  TextFormat = v15;
  if ( v15 < 0 )
  {
    v18 = 348LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\dwritetext.cpp",
      (const char *)(unsigned int)v15,
      SLODWORD(v19));
    wil::com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositor,wil::err_returncode_policy>(v20);
    return (unsigned int)TextFormat;
  }
  if ( v20[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v20[0] + 16LL))(v20[0]);
  return 0LL;
}
