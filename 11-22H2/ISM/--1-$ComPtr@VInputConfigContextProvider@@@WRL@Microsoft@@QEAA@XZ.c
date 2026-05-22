/*
 * XREFs of ??1?$ComPtr@VInputConfigContextProvider@@@WRL@Microsoft@@QEAA@XZ @ 0x1800729D0
 * Callers:
 *     _GestureServices::GestureServices_::_1_::dtor$6 @ 0x180080B28 (_GestureServices--GestureServices_--_1_--dtor$6.c)
 *     ??1GestureServices@@UEAA@XZ @ 0x180161090 (--1GestureServices@@UEAA@XZ.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004C900 (-Release@RefCountedObject@@UEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Microsoft::WRL::ComPtr<InputConfigContextProvider>::~ComPtr<InputConfigContextProvider>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return RefCountedObject::Release((RefCountedObject *)(result + 8));
  }
  return result;
}
