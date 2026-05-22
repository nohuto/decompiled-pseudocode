/*
 * XREFs of ??$As@UIVisualIDMapCom@@@?$ComPtr@UIVisualIDBroker@WindowManagement@ApplicationModel@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIVisualIDMapCom@@@WRL@Microsoft@@@Details@12@@Z @ 0x18010DD30
 * Callers:
 *     _lambda_21b91f8ed7e4c7f4d9826ebf89a77415_::operator() @ 0x1800A2088 (_lambda_21b91f8ed7e4c7f4d9826ebf89a77415_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::ApplicationModel::WindowManagement::IVisualIDBroker>::As<IVisualIDMapCom>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, __int64 *); // rsi
  __int64 (__fastcall *v4)(_QWORD, GUID *, __int64 *); // rdi

  v2 = *a1;
  v4 = ***a1;
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease(a2);
  return v4(v2, &GUID_d469873c_721e_4b11_912f_4a85342f49c4, a2);
}
