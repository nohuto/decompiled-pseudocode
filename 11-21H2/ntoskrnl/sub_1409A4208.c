/*
 * XREFs of sub_1409A4208 @ 0x1409A4208
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessSessionIdEx @ 0x1402445B0 (PsGetProcessSessionIdEx.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     PoRegisterPowerSettingCallback @ 0x140762500 (PoRegisterPowerSettingCallback.c)
 *     sub_1409A2F78 @ 0x1409A2F78 (sub_1409A2F78.c)
 *     sub_1409A50A0 @ 0x1409A50A0 (sub_1409A50A0.c)
 *     sub_1409A8628 @ 0x1409A8628 (sub_1409A8628.c)
 *     sub_1409A8A34 @ 0x1409A8A34 (sub_1409A8A34.c)
 *     sub_1409A8ADC @ 0x1409A8ADC (sub_1409A8ADC.c)
 *     sub_1409A9644 @ 0x1409A9644 (sub_1409A9644.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_1409A4208()
{
  int ProcessSessionId; // eax
  struct _KTHREAD *CurrentThread; // rcx
  int v2; // edi
  unsigned int v3; // edi
  __int64 v4; // rdx
  _DWORD *Pool2; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  _QWORD *v8; // rax
  int v9; // eax
  char v11; // [rsp+40h] [rbp+8h] BYREF

  sub_1409A8A34();
  ProcessSessionId = PsGetProcessSessionIdEx(*((_QWORD *)KeGetCurrentThread() + 23));
  CurrentThread = KeGetCurrentThread();
  v2 = ProcessSessionId;
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C1C020, 1u);
  if ( qword_140D3CB08 )
  {
    v3 = -1073741637;
    v4 = 1208LL;
LABEL_3:
    sub_1409A8628("TtmInitCurrentSession", v4, 0xFFFFFFFFLL, v3);
    goto LABEL_13;
  }
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, 288LL, 1399682132LL);
  v7 = (__int64)Pool2;
  if ( !Pool2 )
  {
    v3 = -1073741670;
    v4 = 1217LL;
    goto LABEL_3;
  }
  Pool2[2] = 1;
  LOBYTE(v6) = 1;
  *Pool2 = v2;
  v8 = Pool2 + 10;
  v8[1] = v8;
  *v8 = v8;
  *(_QWORD *)(v7 + 88) = v7 + 80;
  *(_QWORD *)(v7 + 80) = v7 + 80;
  *(_QWORD *)(v7 + 64) = v7 + 72;
  *(_DWORD *)(v7 + 56) = 32;
  *(_DWORD *)(v7 + 112) = 0;
  *(_DWORD *)(v7 + 116) = 0;
  *(_QWORD *)(v7 + 104) = v7 + 96;
  *(_QWORD *)(v7 + 96) = v7 + 96;
  *(_QWORD *)(v7 + 136) = v7 + 128;
  *(_QWORD *)(v7 + 128) = v7 + 128;
  *(_QWORD *)(v7 + 152) = v7 + 144;
  *(_QWORD *)(v7 + 144) = v7 + 144;
  *(_QWORD *)(v7 + 168) = v7 + 160;
  *(_QWORD *)(v7 + 160) = v7 + 160;
  *(_QWORD *)(v7 + 184) = v7 + 176;
  *(_QWORD *)(v7 + 176) = v7 + 176;
  *(_DWORD *)(v7 + 4) |= 0x800u;
  *(_DWORD *)(v7 + 120) = 1;
  sub_1409A9644(v6);
  *(_DWORD *)(v7 + 224) = 0;
  *(_QWORD *)(v7 + 192) = 0LL;
  *(_QWORD *)(v7 + 208) = sub_1409A5C10;
  *(_QWORD *)(v7 + 216) = v7;
  *(_DWORD *)(v7 + 4) |= 8u;
  *(_DWORD *)(v7 + 76) = 1;
  v9 = sub_1409A2F78(v7, 0x1F0003u, 0, (HANDLE *)(v7 + 24), &v11, (_QWORD *)(v7 + 32));
  v3 = v9;
  if ( v9 >= 0 )
  {
    sub_1409A50A0(v7, 0LL, 0LL);
    *(_BYTE *)(v7 + 240) = 1;
    if ( PoRegisterPowerSettingCallback(0LL, &stru_140013120, sub_1409A5F60, (PVOID)v7, (PVOID *)(v7 + 248)) >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    if ( PoRegisterPowerSettingCallback(0LL, &stru_1400110E8, sub_1409A5F60, (PVOID)v7, (PVOID *)(v7 + 256)) >= 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    *(_DWORD *)(v7 + 272) = 0;
    *(_QWORD *)(v7 + 280) = 0LL;
    *(_DWORD *)(v7 + 276) = 0;
    v3 = 0;
    qword_140D3CB08 = v7;
  }
  else
  {
    sub_1409A8628("TtmInitCurrentSession", 1290LL, (unsigned int)v9, (unsigned int)v9);
    ExFreePoolWithTag((PVOID)v7, 0x536D7454u);
  }
LABEL_13:
  ExReleaseResourceLite(&stru_140C1C020);
  KeLeaveCriticalRegion();
  sub_1409A8ADC(v3);
  return v3;
}
