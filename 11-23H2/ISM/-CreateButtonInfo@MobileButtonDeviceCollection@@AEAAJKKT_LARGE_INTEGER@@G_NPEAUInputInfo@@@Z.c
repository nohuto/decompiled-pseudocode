/*
 * XREFs of ?CreateButtonInfo@MobileButtonDeviceCollection@@AEAAJKKT_LARGE_INTEGER@@G_NPEAUInputInfo@@@Z @ 0x1800DD808
 * Callers:
 *     ?OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z @ 0x1800DDD70 (-OnDeviceRemoval@MobileButtonDeviceCollection@@MEAAJK@Z.c)
 *     ?OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z @ 0x1800DDFF0 (-OnInputReport@MobileButtonDeviceCollection@@MEAAJKPEAXK@Z.c)
 *     ?OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z @ 0x1800DE400 (-OnInvalidateInput@MobileButtonDeviceCollection@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C9C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HIDUsageToButtonMapping@MobileButtonDeviceCollection@@AEAAJGPEAK@Z @ 0x1800DD92C (-HIDUsageToButtonMapping@MobileButtonDeviceCollection@@AEAAJGPEAK@Z.c)
 */

__int64 __fastcall MobileButtonDeviceCollection::CreateButtonInfo(
        MobileButtonDeviceCollection *this,
        int a2,
        int a3,
        union _LARGE_INTEGER a4,
        unsigned __int16 a5,
        bool a6,
        struct InputInfo *a7)
{
  int v10; // eax
  unsigned int v11; // edi
  __int64 result; // rax
  struct InputInfo *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  MobileButtonDeviceCollection *v15; // [rsp+30h] [rbp+8h] BYREF

  v15 = this;
  v10 = MobileButtonDeviceCollection::HIDUsageToButtonMapping(this, a5, (unsigned int *)&v15);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v13 = a7;
    *((_DWORD *)a7 + 16) = (_DWORD)v15;
    *((_BYTE *)v13 + 68) = a6;
    result = 0LL;
    *((_DWORD *)v13 + 1) = a2;
    *(_DWORD *)v13 = 128;
    *((_DWORD *)v13 + 2) = a3;
    *((union _LARGE_INTEGER *)v13 + 2) = a4;
    *((_BYTE *)v13 + 49) = 1;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\mobilebuttondevicecollection.cpp",
      (const char *)(unsigned int)v10);
    return v11;
  }
  return result;
}
