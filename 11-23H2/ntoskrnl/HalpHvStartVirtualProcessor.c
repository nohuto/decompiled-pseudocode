/*
 * XREFs of HalpHvStartVirtualProcessor @ 0x14050C690
 * Callers:
 *     HalpHvStartProcessor @ 0x14051B8B8 (HalpHvStartProcessor.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14028C170 (MmGetPhysicalAddress.c)
 *     HalpIsXboxNanovisorPresent @ 0x1403787BC (HalpIsXboxNanovisorPresent.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x140429EA0 (_alloca_probe.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpHvStartVirtualProcessor(unsigned int a1)
{
  _DWORD *v1; // rbp
  unsigned __int8 v2; // bl
  unsigned int v3; // r10d
  _OWORD *v4; // r11
  _OWORD *v5; // r11
  _DWORD v7[1024]; // [rsp+1020h] [rbp+0h] BYREF

  v1 = (_DWORD *)((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL);
  v2 = a1;
  if ( qword_140C62558 )
    return qword_140C62558(a1);
  *v1 = -1073741823;
  if ( HalpIsXboxNanovisorPresent() )
  {
    *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL) + 0x1000) = *v4;
    *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL) + 0x1010) = v4[1];
    *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL) + 0x1020) = v4[2];
    *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL) + 0x1030) = v4[3];
    *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL) + 0x1040) = v4[4];
    *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL) + 0x1050) = v4[5];
    *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL) + 0x1060) = v4[6];
    *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL) - 16 + 0x1080) = v4[7];
    v5 = v4 + 8;
    *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL) + 0x1080) = *v5;
    *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL) + 0x1090) = v5[1];
    *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL) + 0x10A0) = v5[2];
    *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL) + 0x10B0) = v5[3];
    *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL) + 0x10C0) = v5[4];
    *(_OWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL) + 0x10D0) = v5[5];
    *(_QWORD *)(((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL) + 0x10B8) |= 0x400uLL;
    __writemsr(0x40000074u, MmGetPhysicalAddress(v1 + 1024).QuadPart & 0xFFFFFFFFFFFFF000uLL | v2);
    v3 = 0;
    *v1 = 0;
  }
  return v3;
}
