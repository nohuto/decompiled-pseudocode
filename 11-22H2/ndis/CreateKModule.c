/*
 * XREFs of CreateKModule @ 0x1C0141180
 * Callers:
 *     ?ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z @ 0x1C0141900 (-ReferenceKModule@KLoader@@AEAAJU_GUID@@PEAPEAUKModule@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     ??1?$unique_ptr@VKnobCollection@@U?$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ @ 0x1C005D018 (--1-$unique_ptr@VKnobCollection@@U-$KFreePool@VKnobCollection@@@@@wistd@@QEAA@XZ.c)
 *     ??1?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAA@XZ @ 0x1C005D6D0 (--1-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAA@XZ.c)
 *     ??$make_unique_nothrow@UKModule@@AEAU_GUID@@V?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@wil@@YA?AV?$unique_ptr@UKModule@@U?$default_delete@UKModule@@@wistd@@@wistd@@AEAU_GUID@@$$QEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@2@@Z @ 0x1C00D0074 (--$make_unique_nothrow@UKModule@@AEAU_GUID@@V-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICO.c)
 *     ??1?$unique_ptr@UKModule@@U?$default_delete@UKModule@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00D0128 (--1-$unique_ptr@UKModule@@U-$default_delete@UKModule@@@wistd@@@wistd@@QEAA@XZ.c)
 *     BuildServicePath @ 0x1C0140FF0 (BuildServicePath.c)
 *     GetModuleServiceName @ 0x1C0141548 (GetModuleServiceName.c)
 */

__int64 __fastcall CreateKModule(__int64 a1, void **a2)
{
  unsigned int ModuleServiceName; // ebx
  unsigned int v6; // edi
  PVOID v7; // rcx
  PVOID v8; // [rsp+30h] [rbp-20h] BYREF
  PVOID P; // [rsp+38h] [rbp-18h] BYREF
  void *v10[2]; // [rsp+40h] [rbp-10h] BYREF

  v8 = 0LL;
  ModuleServiceName = GetModuleServiceName(a1);
  if ( ModuleServiceName )
  {
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::~unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>(&v8);
    return ModuleServiceName;
  }
  P = 0LL;
  v6 = BuildServicePath((PCUNICODE_STRING)v8, &P);
  if ( v6 )
    goto LABEL_8;
  wil::make_unique_nothrow<KModule,_GUID &,wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>>(
    (__int64 *)v10,
    a1,
    (__int64)&P);
  if ( !v10[0] )
  {
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x13u,
        (struct _GUID *)&WPP_9f41e74d39a236f7fb97fc9dca66f2cd_Traceguids);
    wistd::unique_ptr<KModule,wistd::default_delete<KModule>>::~unique_ptr<KModule,wistd::default_delete<KModule>>(v10);
    v6 = -1073741670;
LABEL_8:
    wistd::unique_ptr<KnobCollection,KFreePool<KnobCollection>>::~unique_ptr<KnobCollection,KFreePool<KnobCollection>>(&P);
    wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::~unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>(&v8);
    return v6;
  }
  v7 = P;
  *a2 = v10[0];
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return 0LL;
}
