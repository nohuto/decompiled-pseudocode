/*
 * XREFs of ??1AnimationDataProvider@@UEAA@XZ @ 0x18011C440
 * Callers:
 *     ??_GAnimationDataProvider@@UEAAPEAXI@Z @ 0x18011C5D0 (--_GAnimationDataProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x180033D64 (-Release@BaseBamoConnection@Bamo@Microsoft@@QEAAKXZ.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18004D390 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800559C8 (-InternalRelease@-$ComPtr@VDataProviderRegistrarProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B9CDC (-InternalRelease@-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AnimationDataProvider::~AnimationDataProvider(
        AnimationDataProvider *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  char *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rbp
  Microsoft::Bamo::BaseBamoConnection *v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *(_QWORD *)this = &AnimationDataProvider::`vftable';
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      a4);
  v5 = (char *)this + 16;
  if ( !*(_BYTE *)ISMTestMode::s_instance )
    *(_QWORD *)(*(_QWORD *)v5 + 248LL) = 0LL;
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
  {
    v7 = *((_QWORD *)this + 6);
    while ( v6 != v7 )
    {
      std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(v6, a2);
      v6 += 64LL;
    }
    std::_Deallocate<16,0>(
      *((void **)this + 5),
      (*((_QWORD *)this + 7) - *((_QWORD *)this + 5)) & 0xFFFFFFFFFFFFFFC0uLL);
    *((_QWORD *)this + 5) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
  }
  Microsoft::WRL::ComPtr<DataSourcePrincipal>::InternalRelease((__int64 *)this + 4);
  Microsoft::WRL::ComPtr<DataProviderRegistrarProxy>::InternalRelease((__int64 *)this + 3);
  v8 = *(Microsoft::Bamo::BaseBamoConnection **)v5;
  if ( *(_QWORD *)v5 )
  {
    *(_QWORD *)v5 = 0LL;
    Microsoft::Bamo::BaseBamoConnection::Release(v8);
  }
  *((_DWORD *)this + 3) = -1073741823;
}
