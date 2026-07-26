/*
 * XREFs of CreateKModule @ 0x1C0135364
 * Callers:
 *     ?ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z @ 0x1C0135AB4 (-ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     ??$make_unique_nothrow@UKModule@@AEAU_GUID@@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA?AV?$unique_ptr@UKModule@@U?$default_delete@UKModule@@@wistd@@@wistd@@AEAU_GUID@@$$QEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@2@@Z @ 0x1C00CB3C4 (--$make_unique_nothrow@UKModule@@AEAU_GUID@@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICO.c)
 *     BuildServicePath @ 0x1C01351E0 (BuildServicePath.c)
 *     GetModuleServiceName @ 0x1C0135704 (GetModuleServiceName.c)
 */

__int64 __fastcall CreateKModule(__int64 a1, _QWORD *a2)
{
  unsigned int ModuleServiceName; // edi
  PVOID P; // [rsp+38h] [rbp-20h] BYREF
  __int64 v7[3]; // [rsp+40h] [rbp-18h] BYREF

  ModuleServiceName = GetModuleServiceName(a1);
  if ( !ModuleServiceName )
  {
    P = 0LL;
    ModuleServiceName = BuildServicePath(0LL, &P);
    if ( !ModuleServiceName )
    {
      wil::make_unique_nothrow<KModule,_GUID &,wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>(
        v7,
        a1,
        (__int64)&P);
      if ( v7[0] )
      {
        *a2 = v7[0];
        ModuleServiceName = 0;
      }
      else
      {
        if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            1u,
            0x13u,
            (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids);
        ModuleServiceName = -1073741670;
      }
    }
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return ModuleServiceName;
}
