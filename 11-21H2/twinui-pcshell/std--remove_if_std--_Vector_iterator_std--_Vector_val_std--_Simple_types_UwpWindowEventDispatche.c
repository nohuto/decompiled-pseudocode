/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_UwpWindowEventDispatcher::PendingActivationResumeData_______lambda_1448efa524df9375437edfb695407616___ @ 0x1803E9EE4
 * Callers:
 *     ?AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal@@@Z @ 0x1803EB32C (-AddPendingActivationResumeWithLock@UwpWindowEventDispatcher@@AEAAXPEAUIUwpWindowWrapperInternal.c)
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180075C24 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ??4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z @ 0x1803EABE4 (--4PendingActivationResumeData@UwpWindowEventDispatcher@@QEAAAEAU01@$$QEAU01@@Z.c)
 */

struct IUnknown ***__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_UwpWindowEventDispatcher::PendingActivationResumeData_______lambda_1448efa524df9375437edfb695407616___(
        struct IUnknown ***a1,
        struct IUnknown **a2,
        struct IUnknown **a3,
        struct IUnknown **a4)
{
  struct IUnknown **i; // rsi
  struct IUnknown **j; // r14
  struct IUnknown ***result; // rax

  for ( i = a2; i != a3; i += 4 )
  {
    if ( (unsigned int)SHIsSameObject(*a4, *i) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 4; j != a3; j += 4 )
    {
      if ( !(unsigned int)SHIsSameObject(*a4, *j) )
      {
        UwpWindowEventDispatcher::PendingActivationResumeData::operator=(i, j);
        i += 4;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
