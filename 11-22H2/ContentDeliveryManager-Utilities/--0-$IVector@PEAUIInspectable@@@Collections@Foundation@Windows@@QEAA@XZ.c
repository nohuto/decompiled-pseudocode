/*
 * XREFs of ??0?$IVector@PEAUIInspectable@@@Collections@Foundation@Windows@@QEAA@XZ @ 0x1800C6B34
 * Callers:
 *     ??0?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@QEAA@AEBU?$DefaultEqualityPredicate@PEAUIInspectable@@@1234@Upermission@01234@@Z @ 0x1800C6D7C (--0-$Vector@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collection.c)
 * Callees:
 *     ??0?$IVector_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@QEAA@XZ @ 0x1800C6B94 (--0-$IVector_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@QEAA@XZ.c)
 */

_QWORD *Windows::Foundation::Collections::IVector<IInspectable *>::IVector<IInspectable *>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Windows::Foundation::Collections::IVector_impl<IInspectable *,1>::IVector_impl<IInspectable *,1>();
  result = v0;
  *v0 = &Windows::Foundation::Collections::IVector<IInspectable *>::`vftable';
  return result;
}
