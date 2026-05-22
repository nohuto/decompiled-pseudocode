/*
 * XREFs of ??$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@PEAPEAUHSTRING__@@@Z @ 0x1800BCDD0
 * Callers:
 *     ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x1800BE5C0 (--0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800044C8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     ?GetDriverProperty@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@KPEAEPEAK@Z @ 0x1800BFCC4 (-GetDriverProperty@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@KPEAEPEAK@Z.c)
 *     ?_Tidy@?$vector@GV?$allocator@G@std@@@std@@AEAAXXZ @ 0x1800C39E4 (-_Tidy@-$vector@GV-$allocator@G@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(
        DevicePropertyHelpers::DevicePropertyHelper *this,
        struct _DEVPROPKEY *a2,
        HSTRING *string)
{
  __int64 result; // rax
  unsigned int v7; // r8d
  size_t v8; // rsi
  unsigned __int8 *v9; // rdi
  int DriverProperty; // eax
  unsigned int v11; // ebx
  __int128 v12; // [rsp+30h] [rbp-20h] BYREF
  size_t v13; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  ULONG v15; // [rsp+98h] [rbp+48h] BYREF

  v15 = 0;
  result = DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty(this, a2, (unsigned int)string, 0LL, &v15);
  if ( (_DWORD)result == -2147024774 && v15 )
  {
    v13 = 0LL;
    v12 = 0LL;
    if ( v15 < 2uLL )
    {
      v9 = (unsigned __int8 *)v12;
    }
    else
    {
      v8 = v15 & 0xFFFFFFFE;
      *(_QWORD *)&v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(v8);
      v9 = (unsigned __int8 *)v12;
      v13 = v8 + v12;
      memset_0((void *)v12, 0, v8);
      *((_QWORD *)&v12 + 1) = v8 + v12;
    }
    DriverProperty = DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty(this, a2, v7, v9, &v15);
    v11 = DriverProperty;
    if ( DriverProperty >= 0 )
      v11 = WindowsCreateString((PCNZWCH)v9, v15 >> 1, string);
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x88,
        (int)"onecoreuap\\internal\\analog\\inc\\input\\common\\DevicePropertyHelpers.h",
        (const char *)(unsigned int)DriverProperty);
    std::vector<unsigned short>::_Tidy(&v12);
    return v11;
  }
  return result;
}
