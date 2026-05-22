/*
 * XREFs of ?SetTransformMatrix@ComponentTransform3D@Composition@UI@Windows@@QEAAJAEBUMatrix4x4@Numerics@Foundation@4@@Z @ 0x180152FE4
 * Callers:
 *     ?put_TransformMatrix@Partner@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJUMatrix4x4@Numerics@Foundation@6@@Z @ 0x180182430 (-put_TransformMatrix@Partner@CompositionSkyBoxBrush@Private@Composition@UI@Windows@@UEAAJUMatrix.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z @ 0x18004CEB0 (-ResourceSetBufferProperty@CDevice@DirectComposition@@QEAAXIIPEBX_K@Z.c)
 *     ?NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@V?$span@$$CBE$0?0@gsl@@IPEA_N@Z @ 0x18004EA60 (-NotifyPropertyChanged@ProxyObject@Composition@UI@Windows@@QEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1800F8D28 (-terminate@details@gsl@@YAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::ComponentTransform3D::SetTransformMatrix(
        Windows::UI::Composition::ComponentTransform3D *this,
        const struct Windows::Foundation::Numerics::Matrix4x4 *a2)
{
  gsl::details *v4; // rcx
  int v5; // eax
  unsigned int v6; // esi
  __int64 result; // rax
  __int128 v8; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  char v10; // [rsp+50h] [rbp+8h] BYREF

  DirectComposition::CDevice::ResourceSetBufferProperty(
    *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
    *((_DWORD *)this + 32),
    8,
    a2,
    0x40uLL);
  if ( !a2 )
  {
    gsl::details::terminate(v4);
    __debugbreak();
  }
  *(_QWORD *)&v8 = 64LL;
  *((_QWORD *)&v8 + 1) = a2;
  v5 = Windows::UI::Composition::ProxyObject::NotifyPropertyChanged(
         (__int64)this,
         8u,
         265,
         &v8,
         0xFFFFFFFF,
         (unsigned __int64)&v10);
  v6 = v5;
  if ( v5 >= 0 )
  {
    result = 0LL;
    *(_OWORD *)((char *)this + 136) = *(_OWORD *)a2;
    *(_OWORD *)((char *)this + 152) = *((_OWORD *)a2 + 1);
    *(_OWORD *)((char *)this + 168) = *((_OWORD *)a2 + 2);
    *(_OWORD *)((char *)this + 184) = *((_OWORD *)a2 + 3);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x12B,
      (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcomponenttransform3d.cpp",
      (const char *)(unsigned int)v5);
    return v6;
  }
  return result;
}
