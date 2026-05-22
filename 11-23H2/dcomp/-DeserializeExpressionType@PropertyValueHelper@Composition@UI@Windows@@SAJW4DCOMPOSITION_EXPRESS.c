/*
 * XREFs of ?DeserializeExpressionType@PropertyValueHelper@Composition@UI@Windows@@SAJW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@PEAPEAUIPropertyValue@Foundation@4@@Z @ 0x18018B810
 * Callers:
 *     ?AnimationEnded@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4AnimationEndedReasonType@@W4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019CF70 (-AnimationEnded@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4AnimationEndedReasonType@@W4DCOMPOSIT.c)
 *     ?AnimationStarted@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019D1A0 (-AnimationStarted@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V-$sp.c)
 *     ?DebuggingStarted@CompObjectDiagnosticsPrincipal@@QEAAJ_KIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019D400 (-DebuggingStarted@CompObjectDiagnosticsPrincipal@@QEAAJ_KIW4DCOMPOSITION_EXPRESSION_TYPE@@V-$spa.c)
 *     ?NotifyDirectSet@CompObjectDiagnosticsPrincipal@@QEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019D92C (-NotifyDirectSet@CompObjectDiagnosticsPrincipal@@QEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@V-$span@$.c)
 *     ?PropertyChanged@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x18019DCD0 (-PropertyChanged@CompObjectDiagnosticsPrincipal@@QEAAJ_KIIW4DCOMPOSITION_EXPRESSION_TYPE@@V-$spa.c)
 * Callees:
 *     ??$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJMPEAPEAUIInspectable@@@ZM@PropertyValueHelper@Composition@UI@Windows@@CAJP8IPropertyValueStatics@Foundation@3@EAAJMPEAPEAUIInspectable@@@ZPEAPEAUIPropertyValue@53@M@Z @ 0x18000B644 (--$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJMPEAPEAUIInspectable@@@ZM.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??1?$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@Microsoft@@QEAA@XZ @ 0x1800A203C (--1-$RefPtr@VInteractionTrackerInertiaNaturalMotion@Interactions@Composition@UI@Windows@@@WRL2@M.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x1801097EC (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?CreateCompositionPathFromData@CompositionPath@Composition@UI@Windows@@SAJV?$span@$$CBE$0?0@gsl@@PEAPEAV1234@@Z @ 0x18012FAD0 (-CreateCompositionPathFromData@CompositionPath@Composition@UI@Windows@@SAJV-$span@$$CBE$0-0@gsl@.c)
 *     ??$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJIPEBMPEAPEAUIInspectable@@@ZHPEBM@PropertyValueHelper@Composition@UI@Windows@@CAJP8IPropertyValueStatics@Foundation@3@EAAJIPEBMPEAPEAUIInspectable@@@ZPEAPEAUIPropertyValue@53@H0@Z @ 0x180145FC4 (--$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJIPEBMPEAPEAUIInspectable@.c)
 *     ??$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJEPEAPEAUIInspectable@@@Z_N@PropertyValueHelper@Composition@UI@Windows@@CAJP8IPropertyValueStatics@Foundation@3@EAAJEPEAPEAUIInspectable@@@ZPEAPEAUIPropertyValue@53@_N@Z @ 0x18018B60C (--$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJEPEAPEAUIInspectable@@@Z_.c)
 *     ??$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJPEAUIInspectable@@PEAPEAU4@@ZPEAU4@@PropertyValueHelper@Composition@UI@Windows@@CAJP8IPropertyValueStatics@Foundation@3@EAAJPEAUIInspectable@@PEAPEAU6@@ZPEAPEAUIPropertyValue@53@0@Z @ 0x18018B6B8 (--$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJPEAUIInspectable@@PEAPEAU.c)
 *     ??$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJUTimeSpan@23@PEAPEAUIInspectable@@@ZU423@@PropertyValueHelper@Composition@UI@Windows@@CAJP8IPropertyValueStatics@Foundation@3@EAAJUTimeSpan@53@PEAPEAUIInspectable@@@ZPEAPEAUIPropertyValue@53@0@Z @ 0x18018B764 (--$CreatePropertyValue@P8IPropertyValueStatics@Foundation@Windows@@EAAJUTimeSpan@23@PEAPEAUIInsp.c)
 */

__int64 __fastcall Windows::UI::Composition::PropertyValueHelper::DeserializeExpressionType(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  int v4; // r9d
  __int64 v5; // rdx
  int v7; // r9d
  int v8; // r9d
  int v9; // r9d
  int v10; // r9d
  __int128 v11; // xmm0
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  Microsoft::WRL2::NestableRuntimeClass *v15; // rbx
  unsigned int v16; // edi
  int v17; // r9d
  int v18; // r9d
  int v19; // r9d
  int v20; // r9d
  const char *v21; // [rsp+28h] [rbp-20h]
  __int128 v22; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  Microsoft::WRL2::NestableRuntimeClass *v24; // [rsp+60h] [rbp+18h] BYREF

  *a3 = 0LL;
  v4 = a1;
  if ( (int)a1 >> 4 )
  {
    if ( (_DWORD)a1 == 17 )
    {
      if ( *a2 != 1LL && *a2 != 4LL )
      {
        v5 = 41LL;
LABEL_6:
        wil::details::in1diag3::Return_HrMsg(
          retaddr,
          (void *)v5,
          (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\propertyvaluehelper.cpp",
          (const char *)0x80070057LL,
          (int)"Invalid number of bytes",
          v21);
        return 2147942487LL;
      }
      return Windows::UI::Composition::PropertyValueHelper::CreatePropertyValue<long (Windows::Foundation::IPropertyValueStatics::*)(unsigned char,IInspectable * *),bool>(
               a1,
               a3);
    }
    a1 = (unsigned int)(4 * ((int)a1 >> 4));
    if ( a1 != *a2 )
    {
      v5 = 50LL;
      goto LABEL_6;
    }
  }
  if ( v4 > 52 )
  {
    v17 = v4 - 69;
    if ( v17 )
    {
      v18 = v17 - 1;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          v20 = v19 - 33;
          if ( v20 )
          {
            if ( v20 != 161 )
              return 2147942487LL;
          }
        }
      }
    }
    return Windows::UI::Composition::PropertyValueHelper::CreatePropertyValue<long (Windows::Foundation::IPropertyValueStatics::*)(unsigned int,float const *,IInspectable * *),int,float const *>(
             a1,
             a3);
  }
  if ( v4 == 52 )
    return Windows::UI::Composition::PropertyValueHelper::CreatePropertyValue<long (Windows::Foundation::IPropertyValueStatics::*)(unsigned int,float const *,IInspectable * *),int,float const *>(
             a1,
             a3);
  v7 = v4 - 11;
  if ( !v7 )
  {
    v11 = *(_OWORD *)a2;
    v24 = 0LL;
    v22 = v11;
    v12 = Windows::UI::Composition::CompositionPath::CreateCompositionPathFromData(&v22, &v24);
    v14 = v12;
    if ( v12 >= 0 )
    {
      v15 = v24;
      v16 = Windows::UI::Composition::PropertyValueHelper::CreatePropertyValue<long (Windows::Foundation::IPropertyValueStatics::*)(IInspectable *,IInspectable * *),IInspectable *>(
              v13,
              a3);
      if ( v15 )
        Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v15);
      return v16;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x56,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\propertyvaluehelper.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL2::RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>::~RefPtr<Windows::UI::Composition::Interactions::InteractionTrackerInertiaNaturalMotion>(&v24);
      return v14;
    }
  }
  v8 = v7 - 6;
  if ( !v8 )
    return Windows::UI::Composition::PropertyValueHelper::CreatePropertyValue<long (Windows::Foundation::IPropertyValueStatics::*)(unsigned char,IInspectable * *),bool>(
             a1,
             a3);
  v9 = v8 - 1;
  if ( !v9 )
    return Windows::UI::Composition::PropertyValueHelper::CreatePropertyValue<long (Windows::Foundation::IPropertyValueStatics::*)(float,IInspectable * *),float>(
             a1,
             a3);
  v10 = v9 - 17;
  if ( !v10 )
    return Windows::UI::Composition::PropertyValueHelper::CreatePropertyValue<long (Windows::Foundation::IPropertyValueStatics::*)(unsigned int,float const *,IInspectable * *),int,float const *>(
             a1,
             a3);
  if ( v10 != 7 )
    return 2147942487LL;
  return Windows::UI::Composition::PropertyValueHelper::CreatePropertyValue<long (Windows::Foundation::IPropertyValueStatics::*)(Windows::Foundation::TimeSpan,IInspectable * *),Windows::Foundation::TimeSpan>(
           a1,
           a3);
}
