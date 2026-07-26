/*
 * XREFs of PdcPortOpenCommon @ 0x1C0137FA4
 * Callers:
 *     PdcTaskClientRegister @ 0x1C0137CEC (PdcTaskClientRegister.c)
 * Callees:
 *     memset @ 0x1C0036340 (memset.c)
 *     PdcpPortReleaseResources @ 0x1C013811C (PdcpPortReleaseResources.c)
 */

__int64 __fastcall PdcPortOpenCommon(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9)
{
  __int64 Pool2; // rax
  _QWORD *v12; // rsi
  NTSTATUS v13; // ebx
  _DWORD *v14; // rax
  void *v15; // rdi
  _QWORD v17[100]; // [rsp+30h] [rbp-328h] BYREF

  *a9 = 0LL;
  Pool2 = ExAllocatePool2(256LL, 1768LL, 1348691024);
  v12 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 1744) = a3;
    *(_DWORD *)Pool2 = 1348691024;
    *(_DWORD *)(Pool2 + 20) = 4;
    *(_DWORD *)(Pool2 + 16) = 95;
    ExInitializeRundownProtection((PEX_RUNDOWN_REF)(Pool2 + 8));
    v12[219] = *a4;
    memset(v17, 0, sizeof(v17));
    v17[1] = 0LL;
    v17[2] = 0LL;
    HIDWORD(v17[5]) = 5;
    v17[7] = 0x40000005FLL;
    v17[0] = 52429560LL;
    v14 = (_DWORD *)ExAllocatePool2(256LL, 216LL, 1348691024);
    v15 = v14;
    if ( v14 )
    {
      *v14 = 1;
      *((_QWORD *)v14 + 2) = v12;
      *((_QWORD *)v14 + 1) = v17;
      v13 = ZwPowerInformation(PdcInvocation, v14, 0xD8u, 0LL, 0);
      if ( v13 >= 0 )
      {
        *a9 = v12;
        v13 = 0;
        goto LABEL_6;
      }
    }
    else
    {
      v13 = -1073741801;
    }
    PdcpPortReleaseResources(v12);
    if ( !v15 )
      return (unsigned int)v13;
LABEL_6:
    ExFreePoolWithTag(v15, 0);
    return (unsigned int)v13;
  }
  return (unsigned int)-1073741801;
}
