/*
 * XREFs of ??0_lambda_5e28e056b5a6ba1a3048485051bc0472_@@QEAA@QEAVAppManager@ContentManagement@@AEAPEAUHSTRING__@@111AEAE21@Z @ 0x18007D0FC
 * Callers:
 *     ?StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z @ 0x180084460 (-StartProductInstallWithOverrides@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@EE0000@Z.c)
 * Callees:
 *     <none>
 */

_lambda_5e28e056b5a6ba1a3048485051bc0472_ *__fastcall _lambda_5e28e056b5a6ba1a3048485051bc0472_::_lambda_5e28e056b5a6ba1a3048485051bc0472_(
        _lambda_5e28e056b5a6ba1a3048485051bc0472_ *this,
        struct ContentManagement::AppManager *const a2,
        HSTRING *a3,
        HSTRING *a4,
        HSTRING *a5,
        HSTRING *a6,
        unsigned __int8 *a7,
        unsigned __int8 *a8,
        HSTRING *a9)
{
  _lambda_5e28e056b5a6ba1a3048485051bc0472_ *result; // rax

  *((_QWORD *)this + 3) = a5;
  *((_QWORD *)this + 4) = a6;
  *((_QWORD *)this + 5) = a7;
  *((_QWORD *)this + 6) = a8;
  *((_QWORD *)this + 7) = a9;
  result = this;
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = a3;
  *((_QWORD *)this + 2) = a4;
  return result;
}
