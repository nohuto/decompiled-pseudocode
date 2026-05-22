/*
 * XREFs of ?Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800E5110
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x1800D5174 (-Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 */

__int64 __fastcall HIDDeviceCollection::Initialize(HIDDeviceCollection *this, char a2, unsigned int a3, void **a4)
{
  int v4; // ebx
  __int64 v5; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( (a2 & 0x1C) == 0 )
  {
    v4 = -2147024809;
    v5 = 48LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\hiddevicecollection.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  v4 = RIMDeviceCollection::Initialize(this, a2, a3, a4);
  if ( v4 < 0 )
  {
    v5 = 54LL;
    goto LABEL_3;
  }
  return 0LL;
}
