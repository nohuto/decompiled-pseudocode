/*
 * XREFs of ?Create@NonPointerProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180194B20
 * Callers:
 *     <none>
 * Callees:
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsPointerDevice@@YAHPEBUDeviceInfo@@@Z @ 0x18012604C (-IsPointerDevice@@YAHPEBUDeviceInfo@@@Z.c)
 */

__int64 __fastcall NonPointerProcessor::Create(const struct DeviceInfo **a1, struct IInputProcessor **a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  _QWORD *v7; // rax
  const struct DeviceInfo *v8; // rdx
  const struct DeviceInfo *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  LOBYTE(v4) = IsPointerDevice(*a1);
  if ( v4 )
  {
    v5 = -2147024809;
    v6 = 33LL;
  }
  else
  {
    v7 = RefCountedObject::operator new(0x48uLL);
    if ( v7 )
    {
      v8 = a1[1];
      v9 = *a1;
      v7[6] = 0LL;
      v7[7] = 0LL;
      v7[2] = &RefCountedObject::`vftable';
      *v7 = &NonPointerProcessor::`vftable'{for `IInputProcessor'};
      v7[1] = &NonPointerProcessor::`vftable'{for `IInputFocusListener'};
      v7[2] = &NonPointerProcessor::`vftable'{for `RefCountedObject'};
      *((_DWORD *)v7 + 6) = 1;
      *((_BYTE *)v7 + 64) = 0;
      v7[5] = v9;
      v7[4] = v8;
      *a2 = (struct IInputProcessor *)v7;
      return 0LL;
    }
    v5 = -2147024882;
    v6 = 40LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\generic\\nonpointer\\lib\\nonpointerprocessor.cpp",
    (const char *)v5);
  return v5;
}
