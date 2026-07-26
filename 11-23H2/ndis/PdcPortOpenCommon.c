/*
 * XREFs of PdcPortOpenCommon @ 0x1C0143E5C
 * Callers:
 *     PdcTaskClientRegister @ 0x1C0143BA8 (PdcTaskClientRegister.c)
 * Callees:
 *     memset @ 0x1C0038700 (memset.c)
 *     PdcpPortReleaseResources @ 0x1C0143FD8 (PdcpPortReleaseResources.c)
 */

__int64 __fastcall PdcPortOpenCommon(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9)
{
  void *v11; // rdi
  __int64 Pool2; // rax
  _QWORD *v13; // rsi
  NTSTATUS v14; // ebx
  __int64 v16; // rax
  _DWORD *v17; // rax
  _QWORD v18[100]; // [rsp+30h] [rbp-338h] BYREF

  memset(v18, 0, sizeof(v18));
  v11 = 0LL;
  *a9 = 0LL;
  Pool2 = ExAllocatePool2(256LL, 1768LL, 1348691024);
  v13 = (_QWORD *)Pool2;
  if ( !Pool2 )
    goto LABEL_2;
  *(_QWORD *)(Pool2 + 1744) = a3;
  *(_DWORD *)Pool2 = 1348691024;
  *(_DWORD *)(Pool2 + 16) = 95;
  *(_DWORD *)(Pool2 + 20) = 4;
  ExInitializeRundownProtection((PEX_RUNDOWN_REF)(Pool2 + 8));
  v16 = *a4;
  HIDWORD(v18[0]) = 0;
  v18[1] = 0LL;
  v18[2] = 0LL;
  v13[219] = v16;
  HIDWORD(v18[5]) = 5;
  v18[7] = 0x40000005FLL;
  LODWORD(v18[0]) = 52429560;
  v17 = (_DWORD *)ExAllocatePool2(256LL, 216LL, 1348691024);
  v11 = v17;
  if ( v17 )
  {
    *v17 = 1;
    *((_QWORD *)v17 + 2) = v13;
    *((_QWORD *)v17 + 1) = v18;
    v14 = ZwPowerInformation(PdcInvocation, v17, 0xD8u, 0LL, 0);
    if ( v14 >= 0 )
    {
      *a9 = v13;
      v14 = 0;
LABEL_6:
      ExFreePoolWithTag(v11, 0);
      return (unsigned int)v14;
    }
  }
  else
  {
LABEL_2:
    v14 = -1073741801;
  }
  if ( v13 )
    PdcpPortReleaseResources(v13);
  if ( v11 )
    goto LABEL_6;
  return (unsigned int)v14;
}
