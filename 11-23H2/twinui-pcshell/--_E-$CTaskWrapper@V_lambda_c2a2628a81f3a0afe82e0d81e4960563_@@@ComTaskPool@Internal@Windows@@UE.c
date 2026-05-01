/*
 * XREFs of ??_E?$CTaskWrapper@V_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180580770
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@QEAA@XZ @ 0x180580680 (--1_lambda_c2a2628a81f3a0afe82e0d81e4960563_@@QEAA@XZ.c)
 */

_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_c2a2628a81f3a0afe82e0d81e4960563_>::`vector deleting destructor'(
        _DWORD *a1,
        char a2)
{
  _lambda_c2a2628a81f3a0afe82e0d81e4960563_::~_lambda_c2a2628a81f3a0afe82e0d81e4960563_((_lambda_c2a2628a81f3a0afe82e0d81e4960563_ *)(a1 + 4));
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
