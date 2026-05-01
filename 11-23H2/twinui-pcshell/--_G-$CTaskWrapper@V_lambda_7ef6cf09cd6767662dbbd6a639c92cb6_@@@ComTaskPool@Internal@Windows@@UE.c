/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801BAE60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1801C7278 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_7ef6cf09cd6767662dbbd6a639c92cb6_>::`scalar deleting destructor'(
        _DWORD *a1,
        char a2)
{
  a1[3] = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
