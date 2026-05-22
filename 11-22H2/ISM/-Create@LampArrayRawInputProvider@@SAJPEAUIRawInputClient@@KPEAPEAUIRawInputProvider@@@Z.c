/*
 * XREFs of ?Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18004AED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x180019E50 (-Release@LampArrayRawInputProvider@@UEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180037D1C (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??0LampArrayRawInputProvider@@AEAA@XZ @ 0x18004AFB0 (--0LampArrayRawInputProvider@@AEAA@XZ.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18004B5A4 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z @ 0x18004B910 (-Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall LampArrayRawInputProvider::Create(
        struct IRawInputClient *a1,
        __int64 a2,
        struct IRawInputProvider **a3)
{
  LampArrayRawInputProvider *v5; // rax
  LampArrayRawInputProvider *v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  unsigned int v10; // ebx
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+30h] [rbp-48h] BYREF
  const char *v12; // [rsp+50h] [rbp-28h]
  int v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+5Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  if ( (unsigned int)dword_180275498 > 5 )
  {
    v12 = "Starting LampArray provider.  Either first time dwm.exe started or dwm.exe crashed and now restarting";
    v13 = 102;
    v14 = 0;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_180275498, (int)&dword_180232F32, 0, 0, 3u, &v11);
  }
  if ( !a3 )
  {
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x21,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)0x80070057LL);
    return v10;
  }
  v5 = (LampArrayRawInputProvider *)RefCountedObject::operator new(0x168uLL);
  if ( v5 )
    v6 = LampArrayRawInputProvider::LampArrayRawInputProvider(v5);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x25,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)0x8007000ELL);
    return v10;
  }
  v7 = LampArrayRawInputProvider::Initialize(v6, a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x27,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)(unsigned int)v7);
    LampArrayRawInputProvider::Release(v6);
    return v8;
  }
  else
  {
    *a3 = v6;
    return 0LL;
  }
}
