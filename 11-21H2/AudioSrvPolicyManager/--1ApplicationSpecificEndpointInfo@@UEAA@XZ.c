/*
 * XREFs of ??1ApplicationSpecificEndpointInfo@@UEAA@XZ @ 0x180014E34
 * Callers:
 *     ??_GApplicationSpecificEndpointInfo@@UEAAPEAXI@Z @ 0x1800154B0 (--_GApplicationSpecificEndpointInfo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x1800025F0 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180008290 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ApplicationSpecificEndpointInfo::~ApplicationSpecificEndpointInfo(
        ApplicationSpecificEndpointInfo *this)
{
  void *v2; // rcx
  void *v3; // rcx
  char *v4; // rcx

  *(_QWORD *)this = &ApplicationSpecificEndpointInfo::`vftable';
  `eh vector destructor iterator'(
    (char *)this + 168,
    8LL,
    9LL,
    (void (*)(void *))wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>);
  `eh vector destructor iterator'(
    (char *)this + 96,
    8LL,
    9LL,
    (void (*)(void *))wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>);
  v2 = (void *)*((_QWORD *)this + 11);
  if ( v2 )
    CoTaskMemFree(v2);
  v3 = (void *)*((_QWORD *)this + 10);
  if ( v3 )
    CoTaskMemFree(v3);
  v4 = (char *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 9) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFFCuLL);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
}
