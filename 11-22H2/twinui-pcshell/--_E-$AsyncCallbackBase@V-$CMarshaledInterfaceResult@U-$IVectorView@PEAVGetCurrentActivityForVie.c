/*
 * XREFs of ??_E?$AsyncCallbackBase@V?$CMarshaledInterfaceResult@U?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Internal@Windows@@@Internal@Windows@@UEAAPEAXI@Z @ 0x18049C340
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>>>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &Windows::Internal::AsyncCallbackBase<Windows::Internal::CMarshaledInterfaceResult<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *>>>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
