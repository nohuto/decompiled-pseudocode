/*
 * XREFs of ??_G?$ListPrincipal@UDisplayOcclusionRect@@@ISMBamos_AutoBamos@Lib@Bamo@Microsoft@@UEAAPEAXI@Z @ 0x180131D40
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x180003620 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18004ABE0 (--3@YAXPEAX_K@Z.c)
 *     ?_Tidy@?$vector@UDisplayOcclusionRect@@V?$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ @ 0x1800FA300 (-_Tidy@-$vector@UDisplayOcclusionRect@@V-$allocator@UDisplayOcclusionRect@@@std@@@std@@AEAAXXZ.c)
 */

_QWORD *__fastcall Microsoft::Bamo::Lib::ISMBamos_AutoBamos::ListPrincipal<DisplayOcclusionRect>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  const char *v6; // r9
  Microsoft::BamoImpl::BamoImplObject *v7; // rcx

  std::vector<DisplayOcclusionRect>::_Tidy((__int64)(a1 + 7));
  v7 = (Microsoft::BamoImpl::BamoImplObject *)a1[4];
  if ( v7 )
    Microsoft::BamoImpl::BamoImplObject::Release(v7, v4, v5, v6);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
