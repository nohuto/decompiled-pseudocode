/*
 * XREFs of ?Create@LampArrayRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x180033030
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@LampArrayRawInputProvider@@UEAAKXZ @ 0x180011100 (-Release@LampArrayRawInputProvider@@UEAAKXZ.c)
 *     ?Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z @ 0x180033174 (-Initialize@LampArrayRawInputProvider@@AEAAJPEAUIRawInputClient@@@Z.c)
 *     ??0LampArrayRawInputProvider@@AEAA@XZ @ 0x180033274 (--0LampArrayRawInputProvider@@AEAA@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
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
  unsigned int v8; // edi
  unsigned int v10; // ebx
  ULONG UserDataCount; // [rsp+20h] [rbp-60h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  void *v14; // [rsp+58h] [rbp-28h]
  int v15; // [rsp+60h] [rbp-20h]
  int v16; // [rsp+64h] [rbp-1Ch]
  const char *v17; // [rsp+68h] [rbp-18h]
  int v18; // [rsp+70h] [rbp-10h]
  int v19; // [rsp+74h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( (unsigned int)dword_180240410 > 5 )
  {
    v17 = "Starting LampArray provider.  Either first time dwm.exe started or dwm.exe crashed and now restarting";
    v18 = 102;
    v19 = 0;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    *(_DWORD *)&EventDescriptor.Level = 5;
    EventDescriptor.Keyword = 0LL;
    UserData.Ptr = (ULONGLONG)off_180240418;
    UserData.Size = *(unsigned __int16 *)off_180240418;
    UserData.Reserved = 2;
    v14 = &unk_1802028F7;
    v15 = 50;
    v16 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 3u, &UserData);
  }
  if ( !a3 )
  {
    v10 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)0x80070057LL,
      UserDataCount);
    return v10;
  }
  v5 = (LampArrayRawInputProvider *)RefCountedObject::operator new(0x100uLL);
  if ( v5 )
    v6 = LampArrayRawInputProvider::LampArrayRawInputProvider(v5);
  else
    v6 = 0LL;
  if ( !v6 )
  {
    v10 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x26,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)0x8007000ELL,
      UserDataCount);
    return v10;
  }
  v7 = LampArrayRawInputProvider::Initialize(v6, a1);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x28,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparrayrawinputprovider.cpp",
      (const char *)(unsigned int)v7,
      UserDataCount);
    LampArrayRawInputProvider::Release(v6);
    return v8;
  }
  else
  {
    *a3 = v6;
    return 0LL;
  }
}
