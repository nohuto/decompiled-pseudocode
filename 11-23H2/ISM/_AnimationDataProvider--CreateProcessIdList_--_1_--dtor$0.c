/*
 * XREFs of _AnimationDataProvider::CreateProcessIdList_::_1_::dtor$0 @ 0x180110438
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VInputSiteManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800CA998 (--1-$ComPtr@VInputSiteManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *__fastcall AnimationDataProvider::CreateProcessIdList_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax

  result = (_QWORD *)(*(_DWORD *)(a2 + 32) & 1);
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    return Microsoft::WRL::ComPtr<InputSiteManager>::~ComPtr<InputSiteManager>(*(_QWORD **)(a2 + 72));
  }
  return result;
}
