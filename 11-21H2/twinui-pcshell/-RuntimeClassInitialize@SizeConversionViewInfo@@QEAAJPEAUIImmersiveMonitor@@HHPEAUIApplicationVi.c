/*
 * XREFs of ?RuntimeClassInitialize@SizeConversionViewInfo@@QEAAJPEAUIImmersiveMonitor@@HHPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18012CC44
 * Callers:
 *     ??$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAHAEAPEAUIApplicationViewTitlebarConfiguration@@@Details@WRL@Microsoft@@YAJPEAPEAVSizeConversionViewInfo@@AEAPEAUIImmersiveMonitor@@AEAH2AEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18012CB64 (--$MakeAndInitialize@VSizeConversionViewInfo@@V1@AEAPEAUIImmersiveMonitor@@AEAHAEAHAEAPEAUIAppli.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SizeConversionViewInfo::RuntimeClassInitialize(
        SizeConversionViewInfo *this,
        struct IImmersiveMonitor *a2,
        int a3,
        int a4,
        struct IApplicationViewTitlebarConfiguration *a5)
{
  struct IImmersiveMonitor *v9; // rax
  struct IApplicationViewTitlebarConfiguration *v10; // rax
  struct IApplicationViewTitlebarConfiguration *v11; // rdi
  int ScaleFactorForMonitor; // edi
  __int64 v14; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IImmersiveMonitor *v16; // [rsp+40h] [rbp+8h] BYREF
  __int64 v17; // [rsp+48h] [rbp+10h] BYREF
  int v18; // [rsp+50h] [rbp+18h] BYREF

  v9 = (struct IImmersiveMonitor *)*((_QWORD *)this + 2);
  if ( v9 != a2 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(struct IImmersiveMonitor *))(*(_QWORD *)a2 + 8LL))(a2);
      v9 = (struct IImmersiveMonitor *)*((_QWORD *)this + 2);
    }
    v16 = v9;
    *((_QWORD *)this + 2) = a2;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  }
  v10 = (struct IApplicationViewTitlebarConfiguration *)*((_QWORD *)this + 4);
  v11 = a5;
  if ( v10 != a5 )
  {
    if ( a5 )
    {
      (*(void (__fastcall **)(struct IApplicationViewTitlebarConfiguration *))(*(_QWORD *)a5 + 8LL))(a5);
      v10 = (struct IApplicationViewTitlebarConfiguration *)*((_QWORD *)this + 4);
    }
    a5 = v10;
    *((_QWORD *)this + 4) = v11;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&a5);
  }
  if ( a4 )
    *((_DWORD *)this + 6) |= 1u;
  if ( a3 )
    *((_DWORD *)this + 6) |= 2u;
  ScaleFactorForMonitor = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 2) + 40LL))(
                            *((_QWORD *)this + 2),
                            &v17);
  if ( ScaleFactorForMonitor < 0 )
  {
    v14 = 60LL;
  }
  else
  {
    ScaleFactorForMonitor = GetScaleFactorForMonitor(v17, &v18);
    if ( ScaleFactorForMonitor >= 0 )
    {
      *((_DWORD *)this + 10) = v18;
      return 0LL;
    }
    v14 = 63LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v14,
    (__int64)"pcshell\\twinui\\shellpositioners\\lib\\windowsizeconverter.cpp",
    (const char *)(unsigned int)ScaleFactorForMonitor);
  return (unsigned int)ScaleFactorForMonitor;
}
