/*
 * XREFs of ?_PaintDividerForDWM@CAppTransitionManager@@AEAAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagBITMAPINFO@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x1804E0C84
 * Callers:
 *     ?_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1804E14D4 (-_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x180188D28 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801896C0 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x18052CF9C (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 */

__int64 __fastcall CAppTransitionManager::_PaintDividerForDWM(
        CAppTransitionManager *this,
        HDC a2,
        HBITMAP a3,
        struct tagBITMAPINFO *a4,
        enum DEVICE_SCALE_FACTOR a5)
{
  HGDIOBJ v8; // rax
  LONG biWidth; // ecx
  void *v10; // r14
  signed __int64 v11; // rbx
  size_t v12; // rax
  _BYTE *lpvBits; // rax
  _BYTE *v14; // rdi
  unsigned int LastError; // ebx
  int DIBits; // eax
  int v17; // r9d
  int v18; // edx
  signed __int64 i; // rax
  struct HDC__ v21; // [rsp+50h] [rbp-20h] BYREF
  int v22; // [rsp+54h] [rbp-1Ch]
  LONG v23; // [rsp+58h] [rbp-18h]
  char *v24; // [rsp+5Ch] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v8 = SelectObject(a2, a3);
  biWidth = a4->bmiHeader.biWidth;
  v21.unused = 0;
  v10 = v8;
  v22 = 0;
  v23 = biWidth;
  LODWORD(v24) = -a4->bmiHeader.biHeight;
  JointDivider_Paint(a2, &v21, (const struct Geometry::CRect *)&v21, a5, 0LL);
  v11 = (v23 - v21.unused) * ((int)v24 - v22);
  v12 = 4 * v11;
  if ( !is_mul_ok(v11, 4uLL) )
    v12 = -1LL;
  lpvBits = operator new[](v12, (const struct std::nothrow_t *)&std::nothrow);
  v14 = lpvBits;
  if ( lpvBits )
  {
    DIBits = GetDIBits(a2, a3, 0, (_DWORD)v24 - v22, lpvBits, a4, 0);
    v17 = (int)v24;
    v18 = v22;
    if ( DIBits == (_DWORD)v24 - v22 )
    {
      if ( v11 > 0 )
      {
        for ( i = 0LL; i < v11; ++i )
          v14[4 * i + 3] = 0;
        v17 = (int)v24;
        v18 = v22;
      }
      SetDIBits(a2, a3, 0, v17 - v18, v14, a4, 0);
      LastError = 0;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x2EC,
                    (int)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
                    (const char *)(unsigned int)v24);
    }
    operator delete(v14);
  }
  else
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2DF,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)0x8007000ELL);
  }
  if ( v10 )
    SelectObject(a2, v10);
  return LastError;
}
