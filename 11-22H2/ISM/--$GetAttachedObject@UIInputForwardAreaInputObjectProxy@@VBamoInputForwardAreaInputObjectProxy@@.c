/*
 * XREFs of ??$GetAttachedObject@UIInputForwardAreaInputObjectProxy@@VBamoInputForwardAreaInputObjectProxy@@@InputSite@@QEAA?AV?$ComPtr@VBamoInputForwardAreaInputObjectProxy@@@WRL@Microsoft@@XZ @ 0x1801D430C
 * Callers:
 *     ?GetInputForwardInputSite@InputForwardProcessor@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputType@@PEAUHitTestResult@@@Z @ 0x1801D48D0 (-GetInputForwardInputSite@InputForwardProcessor@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4I.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIInputForwardAreaInputObjectProxy@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInputForwardAreaInputObjectProxy@@@WRL@Microsoft@@@Details@12@@Z @ 0x18014DCEC (--$As@UIInputForwardAreaInputObjectProxy@@@-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEBAJV-$ComPtrRef.c)
 */

_QWORD *__fastcall InputSite::GetAttachedObject<IInputForwardAreaInputObjectProxy,BamoInputForwardAreaInputObjectProxy>(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rbp
  void (__fastcall ***v6)(_QWORD); // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0LL;
  v8 = 0LL;
  v4 = *(_QWORD *)(a1 + 488);
  v5 = *(_QWORD *)(a1 + 496);
  if ( v4 != v5 )
  {
    do
    {
      if ( (int)Microsoft::WRL::ComPtr<IUnknown>::As<IInputForwardAreaInputObjectProxy>(
                  (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v4 + 8),
                  &v8) >= 0 )
        break;
      v4 += 16LL;
    }
    while ( v4 != v5 );
    v3 = v8;
  }
  v6 = (void (__fastcall ***)(_QWORD))((v3 - 8) & -(__int64)(v3 != 0));
  *a2 = v6;
  if ( v6 )
    (**v6)(v6);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(&v8);
  return a2;
}
