/*
 * XREFs of ??_E?$ListPrincipal@I@dataprovider_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z @ 0x18011C570
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000F950 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180056318 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180057770 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall Microsoft::Bamo::Lib::dataprovider_AutoBamos::ListPrincipal<unsigned int>::`vector deleting destructor'(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  Microsoft::BamoImpl::BamoImplObject *v7; // rcx

  std::vector<Windows::UI::Color>::_Tidy((__int64)(a1 + 7));
  v7 = (Microsoft::BamoImpl::BamoImplObject *)a1[4];
  if ( v7 )
    Microsoft::BamoImpl::BamoImplObject::Release(v7, v4, v5, v6);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
