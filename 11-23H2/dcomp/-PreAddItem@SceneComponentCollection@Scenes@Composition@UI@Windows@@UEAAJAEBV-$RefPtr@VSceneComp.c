/*
 * XREFs of ?PreAddItem@SceneComponentCollection@Scenes@Composition@UI@Windows@@UEAAJAEBV?$RefPtr@VSceneComponent@Scenes@Composition@UI@Windows@@@WRL2@Microsoft@@@Z @ 0x180192870
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z @ 0x180149ADC (-OriginateInvalidArgument@Composition@UI@Windows@@YAXW4ApiError@123@PEBG@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Scenes::SceneComponentCollection::PreAddItem(__int64 a1, _QWORD *a2)
{
  __int64 *v3; // rsi
  __int64 *v4; // rbp
  __int64 v5; // rdi
  int v6; // ebx
  __int64 v8; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *a2 )
  {
    v3 = *(__int64 **)(a1 + 8);
    v4 = *(__int64 **)(a1 + 16);
    while ( 1 )
    {
      if ( v3 == v4 )
        return 0LL;
      v5 = *v3;
      v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 304LL))(*a2);
      if ( v6 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 304LL))(v5) )
        break;
      ++v3;
    }
    Windows::UI::Composition::OriginateInvalidArgument(26, (__int64)L"value");
    v8 = 123LL;
  }
  else
  {
    Windows::UI::Composition::OriginateInvalidArgument(18, (__int64)L"value");
    v8 = 115LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtspatialcomponentcollection.cpp",
    (const char *)0x80070057LL);
  return 2147942487LL;
}
