/*
 * XREFs of ?OnInputSiteTransformChanged@VirtualTouchpadControllerProxy@@MEAAJAEBUtagINPUT_TRANSFORM@@@Z @ 0x180144AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ @ 0x180144DB0 (-OnSizeChanged@VirtualTouchpadControllerProxy@@MEAAJXZ.c)
 *     ?ServerTransformChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUtagINPUT_TRANSFORM@@@Z @ 0x180145BA8 (-ServerTransformChanged@VirtualTouchpad@InputTraceLogging@@SAXPEBXAEBUtagINPUT_TRANSFORM@@@Z.c)
 */

__int64 __fastcall VirtualTouchpadControllerProxy::OnInputSiteTransformChanged(
        VirtualTouchpadControllerProxy *this,
        const struct tagINPUT_TRANSFORM *a2)
{
  bool v4; // zf
  int v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  InputTraceLogging::VirtualTouchpad::ServerTransformChanged((char *)this - 128, a2);
  v4 = *((_BYTE *)this + 80) == 0;
  *((_OWORD *)this + 1) = *(_OWORD *)a2;
  *((_OWORD *)this + 2) = *((_OWORD *)a2 + 1);
  *((_OWORD *)this + 3) = *((_OWORD *)a2 + 2);
  *((_OWORD *)this + 4) = *((_OWORD *)a2 + 3);
  if ( v4 )
    *((_BYTE *)this + 80) = 1;
  v5 = VirtualTouchpadControllerProxy::OnSizeChanged((VirtualTouchpadControllerProxy *)((char *)this - 128));
  v6 = v5;
  if ( v5 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17D,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\components\\attachableinputobject\\system\\virtualtouchpadcontrol"
             "ler\\server\\virtualtouchpadcontrollerproxy.cpp",
    (const char *)(unsigned int)v5);
  return v6;
}
