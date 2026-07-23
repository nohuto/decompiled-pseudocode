/*
 * XREFs of WheaRemoveErrorSource @ 0x140A08880
 * Callers:
 *     WheaRemoveErrorSourceDeviceDriver @ 0x140A08A50 (WheaRemoveErrorSourceDeviceDriver.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     sub_1403D2BC0 @ 0x1403D2BC0 (sub_1403D2BC0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140643F2C @ 0x140643F2C (sub_140643F2C.c)
 *     sub_1406456B8 @ 0x1406456B8 (sub_1406456B8.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall WheaRemoveErrorSource(unsigned int a1)
{
  __int64 *v1; // rax
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rcx
  char *v5; // rdx
  __int128 v6; // xmm1
  int v7; // eax
  void *v8; // rcx
  int v9; // edi
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD Src[8]; // [rsp+30h] [rbp-D0h] BYREF
  char v13; // [rsp+50h] [rbp-B0h] BYREF
  int v14; // [rsp+41Ch] [rbp+31Ch]
  char v15; // [rsp+420h] [rbp+320h]

  v1 = sub_140643F2C((__int64)&unk_140CE1A98, a1);
  v2 = (__int64)v1;
  if ( v1 )
  {
    LOBYTE(v1) = sub_1403D2BC0(*((_DWORD *)v1 + 26));
    if ( (_BYTE)v1 )
    {
      if ( (unsigned int)(*(_DWORD *)(v2 + 108) - 3) > 1 )
      {
        v3 = 7LL;
        Interval.QuadPart = -1000LL;
        v4 = v2 + 96;
        v5 = &v13;
        do
        {
          *(_OWORD *)v5 = *(_OWORD *)v4;
          *((_OWORD *)v5 + 1) = *(_OWORD *)(v4 + 16);
          *((_OWORD *)v5 + 2) = *(_OWORD *)(v4 + 32);
          *((_OWORD *)v5 + 3) = *(_OWORD *)(v4 + 48);
          *((_OWORD *)v5 + 4) = *(_OWORD *)(v4 + 64);
          *((_OWORD *)v5 + 5) = *(_OWORD *)(v4 + 80);
          *((_OWORD *)v5 + 6) = *(_OWORD *)(v4 + 96);
          v5 += 128;
          v6 = *(_OWORD *)(v4 + 112);
          v4 += 128LL;
          *((_OWORD *)v5 - 1) = v6;
          --v3;
        }
        while ( v3 );
        *(_OWORD *)v5 = *(_OWORD *)v4;
        *((_OWORD *)v5 + 1) = *(_OWORD *)(v4 + 16);
        *((_OWORD *)v5 + 2) = *(_OWORD *)(v4 + 32);
        *((_OWORD *)v5 + 3) = *(_OWORD *)(v4 + 48);
        *((_QWORD *)v5 + 8) = *(_QWORD *)(v4 + 64);
        *((_DWORD *)v5 + 18) = *(_DWORD *)(v4 + 72);
        *(_DWORD *)(v2 + 108) = 4;
        while ( _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 92), -1, 0) > 0 )
          KeDelayExecutionThread(0, 0, &Interval);
        v7 = sub_1406456B8(v2);
        v8 = *(void **)(v2 + 48);
        v9 = v7;
        *(_DWORD *)(v2 + 108) = 3;
        if ( v8 )
        {
          ExFreePoolWithTag(v8, 0x61656857u);
          *(_QWORD *)(v2 + 48) = 0LL;
        }
        Src[3] = 0;
        Src[0] = 1733060695;
        Src[1] = 1;
        Src[2] = 1009;
        Src[5] = -2147483636;
        Src[4] = 1280201291;
        Src[6] = 2;
        Src[7] = 977;
        v14 = v9;
        v15 = 1;
        LOBYTE(v1) = WheaLogInternalEvent(Src);
      }
    }
  }
  return (char)v1;
}
