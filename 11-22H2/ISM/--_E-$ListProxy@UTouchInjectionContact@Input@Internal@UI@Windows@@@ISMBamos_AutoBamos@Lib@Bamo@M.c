/*
 * XREFs of ??_E?$ListProxy@UTouchInjectionContact@Input@Internal@UI@Windows@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z @ 0x1801C30F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180015450 (--1-$com_ptr_t@VBamoInputAttemptedDeliveryClientProxyImpl@BamoImpl@@Uerr_returncode_policy@wil@@.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListProxy<Windows::UI::Internal::Input::TouchInjectionContact>::`vector deleting destructor'(
        __int64 *a1,
        char a2)
{
  void *v4; // rcx

  v4 = (void *)a1[6];
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (a1[8] - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF0uLL);
    a1[6] = 0LL;
    a1[7] = 0LL;
    a1[8] = 0LL;
  }
  wil::com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>::~com_ptr_t<BamoImpl::BamoInputAttemptedDeliveryClientProxyImpl,wil::err_returncode_policy>(a1 + 4);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
