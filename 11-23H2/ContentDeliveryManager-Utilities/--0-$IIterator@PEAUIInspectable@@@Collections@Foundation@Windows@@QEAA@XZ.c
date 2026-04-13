/*
 * XREFs of ??0?$IIterator@PEAUIInspectable@@@Collections@Foundation@Windows@@QEAA@XZ @ 0x1800C6AA8
 * Callers:
 *     ??0?$SimpleVectorIterator@PEAUIInspectable@@V?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@QEAA@PEAV?$Vector@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUIInspectable@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUIInspectable@@@3456@U?$VectorOptions@PEAUIInspectable@@$0A@$00$0A@@3456@@1234@Upermission@01234@@Z @ 0x1800C6B5C (--0-$SimpleVectorIterator@PEAUIInspectable@@V-$Vector@PEAUIInspectable@@U-$DefaultEqualityPredic.c)
 * Callees:
 *     ??0?$IIterator_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@QEAA@XZ @ 0x1800C6ACC (--0-$IIterator_impl@PEAUIInspectable@@$00@Collections@Foundation@Windows@@QEAA@XZ.c)
 */

_QWORD *Windows::Foundation::Collections::IIterator<IInspectable *>::IIterator<IInspectable *>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Windows::Foundation::Collections::IIterator_impl<IInspectable *,1>::IIterator_impl<IInspectable *,1>();
  result = v0;
  *v0 = &Windows::Foundation::Collections::IIterator<IInspectable *>::`vftable';
  return result;
}
