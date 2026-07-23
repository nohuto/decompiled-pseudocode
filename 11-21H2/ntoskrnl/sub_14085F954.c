/*
 * XREFs of sub_14085F954 @ 0x14085F954
 * Callers:
 *     sub_1408454C0 @ 0x1408454C0 (sub_1408454C0.c)
 * Callees:
 *     ZwPowerInformation @ 0x14041C340 (ZwPowerInformation.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1409C5678 @ 0x1409C5678 (sub_1409C5678.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14085F954(
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
  void *v12; // rsi
  _DWORD *v13; // rax
  void *v14; // rdi
  NTSTATUS v15; // ebx
  _QWORD v17[100]; // [rsp+30h] [rbp-328h] BYREF

  *a9 = 0LL;
  Pool2 = ExAllocatePool2(256LL, 1768LL, 1348691024LL);
  v12 = (void *)Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *(_QWORD *)(Pool2 + 8) = 0LL;
  *(_QWORD *)(Pool2 + 1744) = a3;
  *(_DWORD *)Pool2 = 1348691024;
  *(_DWORD *)(Pool2 + 20) = 4;
  *(_DWORD *)(Pool2 + 16) = 68;
  *(_QWORD *)(Pool2 + 1752) = *a4;
  memset(v17, 0, sizeof(v17));
  v17[1] = 0LL;
  v17[2] = 0LL;
  HIDWORD(v17[5]) = 5;
  v17[7] = 0x400000044LL;
  v17[0] = 52429560LL;
  v13 = (_DWORD *)ExAllocatePool2(256LL, 216LL, 1348691024LL);
  v14 = v13;
  if ( !v13 )
  {
    v15 = -1073741801;
LABEL_7:
    sub_1409C5678(v12);
    if ( !v14 )
      return (unsigned int)v15;
    goto LABEL_5;
  }
  *v13 = 1;
  *((_QWORD *)v13 + 2) = v12;
  *((_QWORD *)v13 + 1) = v17;
  v15 = ZwPowerInformation(PdcInvocation, v13, 0xD8u, 0LL, 0);
  if ( v15 < 0 )
    goto LABEL_7;
  *a9 = v12;
  v15 = 0;
LABEL_5:
  ExFreePoolWithTag(v14, 0);
  return (unsigned int)v15;
}
