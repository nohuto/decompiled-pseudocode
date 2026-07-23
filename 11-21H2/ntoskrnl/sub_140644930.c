/*
 * XREFs of sub_140644930 @ 0x140644930
 * Callers:
 *     WheaCreateHwErrorReportDeviceDriver @ 0x140644220 (WheaCreateHwErrorReportDeviceDriver.c)
 * Callees:
 *     sub_14024F6E4 @ 0x14024F6E4 (sub_14024F6E4.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140643F2C @ 0x140643F2C (sub_140643F2C.c)
 *     sub_1406447D0 @ 0x1406447D0 (sub_1406447D0.c)
 *     sub_140644878 @ 0x140644878 (sub_140644878.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140644930(unsigned int a1, ULONG_PTR *a2)
{
  char v4; // bl
  unsigned int v5; // edi
  __int64 *v6; // rax
  __int64 v7; // rsi
  signed __int32 v8; // eax
  int v9; // edx
  signed __int32 v10; // r8d
  __int64 v11; // r13
  __int64 v12; // r14
  ULONG_PTR Pool2; // r15
  void *v14; // rax
  _DWORD Src[16]; // [rsp+30h] [rbp-50h] BYREF

  memset(Src, 0, sizeof(Src));
  v4 = 0;
  *a2 = 0LL;
  v5 = 0;
  v6 = sub_140643F2C((__int64)&unk_140CE1A98, a1);
  v7 = (unsigned __int64)(v6 + 12) & -(__int64)(v6 != 0LL);
  if ( sub_1406447D0(v7) )
  {
    v8 = *(_DWORD *)(v7 + 152);
    if ( v8 != -1 )
    {
      v9 = 0;
      while ( 1 )
      {
        v10 = v8;
        if ( v8 == -1 )
          goto LABEL_19;
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 152), v8 + 1, v8);
        if ( v10 == v8 )
          break;
        if ( (unsigned int)++v9 >= 0xA )
        {
          Src[5] = -2147483604;
          goto LABEL_18;
        }
      }
      v11 = *(unsigned int *)(v7 + 16);
      if ( KeGetCurrentIrql() >= 2u )
      {
        Pool2 = (ULONG_PTR)sub_140644878(a1);
        if ( !Pool2 )
          goto LABEL_13;
        v14 = (void *)*a2;
        v4 = 1;
        v12 = v11;
      }
      else
      {
        v12 = (unsigned int)v11;
        Pool2 = ExAllocatePool2(66LL, (unsigned int)v11, 1095059543LL);
        if ( !Pool2 || (v14 = (void *)ExAllocatePool2(66LL, 104LL, 1095059543LL), (*a2 = (ULONG_PTR)v14) == 0) )
        {
LABEL_13:
          v5 = -1073741670;
          _InterlockedDecrement((volatile signed __int32 *)(v7 + 152));
          if ( Pool2 )
            sub_140348B40(Pool2);
          goto LABEL_20;
        }
      }
      memset(v14, 0, 0x68uLL);
      *(_DWORD *)*a2 = 1095059543;
      *(_DWORD *)(*a2 + 12) = a1;
      *(_DWORD *)(*a2 + 52) = 2;
      *(_BYTE *)(*a2 + 48) = v4;
      *(_QWORD *)(*a2 + 40) = Pool2 + 8;
      *(_QWORD *)(*a2 + 32) = Pool2;
      memset((void *)(Pool2 + 8), 0, v12 - 8);
      *(_DWORD *)(Pool2 + 8) = 1095059543;
      *(_DWORD *)(Pool2 + 12) = 3;
      *(_DWORD *)(Pool2 + 16) = v11 - 112;
      *(_DWORD *)(Pool2 + 76) = v11 - 192;
      *(_DWORD *)(Pool2 + 24) = 6;
      *(_DWORD *)(Pool2 + 28) = -2147483646;
      *(_DWORD *)(Pool2 + 32) = a1;
      *(_DWORD *)(Pool2 + 36) = 12;
      *(_OWORD *)(Pool2 + 40) = xmmword_14003A670;
      *(_DWORD *)(Pool2 + 64) = 7;
      *(_DWORD *)(Pool2 + 72) = 80;
      *(_QWORD *)(*a2 + 16) = Pool2 + 88;
      *(_DWORD *)(Pool2 + 88) &= 0xFFFFC00F;
      *(_DWORD *)(Pool2 + 104) = 2;
      *(_DWORD *)(Pool2 + 100) = *(_DWORD *)(Pool2 + 16) - 100;
      *(_QWORD *)(*a2 + 24) = Pool2 + 108;
      *(_DWORD *)(*a2 + 8) += 100;
      return v5;
    }
  }
  Src[5] = -2147483605;
LABEL_18:
  Src[0] = 1733060695;
  Src[7] = 32;
  Src[1] = 1;
  Src[2] = 64;
  Src[3] = 1;
  Src[4] = 1280201291;
  Src[6] = 2;
  sub_14024F6E4(&Src[8], 32LL, (__int64)"InitErrorReportDeviceDriver");
  WheaLogInternalEvent(Src);
LABEL_19:
  v5 = -1073741811;
LABEL_20:
  if ( *a2 )
    sub_140348B40(*a2);
  return v5;
}
