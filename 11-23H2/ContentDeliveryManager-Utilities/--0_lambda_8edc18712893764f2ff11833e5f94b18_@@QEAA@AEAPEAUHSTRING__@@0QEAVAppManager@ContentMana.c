/*
 * XREFs of ??0_lambda_8edc18712893764f2ff11833e5f94b18_@@QEAA@AEAPEAUHSTRING__@@0QEAVAppManager@ContentManagement@@AEAE200@Z @ 0x18007D0F0
 * Callers:
 *     ?StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z @ 0x180084290 (-StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z.c)
 * Callees:
 *     <none>
 */

_lambda_8edc18712893764f2ff11833e5f94b18_ *__fastcall _lambda_8edc18712893764f2ff11833e5f94b18_::_lambda_8edc18712893764f2ff11833e5f94b18_(
        _lambda_8edc18712893764f2ff11833e5f94b18_ *this,
        HSTRING *a2,
        HSTRING *a3,
        struct ContentManagement::AppManager *const a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        HSTRING *a7,
        HSTRING *a8)
{
  _lambda_8edc18712893764f2ff11833e5f94b18_ *result; // rax

  *((_QWORD *)this + 3) = a5;
  *((_QWORD *)this + 4) = a6;
  *((_QWORD *)this + 5) = a7;
  *((_QWORD *)this + 6) = a8;
  result = this;
  *(_QWORD *)this = a2;
  *((_QWORD *)this + 1) = a3;
  *((_QWORD *)this + 2) = a4;
  return result;
}
