/*
 * XREFs of sub_14090B4C0 @ 0x14090B4C0
 * Callers:
 *     sub_140948260 @ 0x140948260 (sub_140948260.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     IoGetDeviceProperty @ 0x140773C30 (IoGetDeviceProperty.c)
 *     RtlDeleteOwnersRanges @ 0x140839700 (RtlDeleteOwnersRanges.c)
 *     RtlFreeRangeList @ 0x1408397E0 (RtlFreeRangeList.c)
 *     sub_140839D70 @ 0x140839D70 (sub_140839D70.c)
 *     RtlCopyRangeList @ 0x14083A400 (RtlCopyRangeList.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14090B4C0(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  void *Pool2; // rsi
  __int64 v6; // r13
  __int64 v7; // r12
  __int64 *v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  struct _DEVICE_OBJECT *v11; // rcx
  NTSTATUS DeviceProperty; // eax
  int v13; // ecx
  NTSTATUS v14; // eax
  int v15; // ecx
  void *v16; // r12
  __int64 v17; // rax
  __int64 v18; // r13
  _QWORD *v20; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v21; // [rsp+38h] [rbp-C8h]
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h]
  _QWORD v24[10]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v25[12]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v26[8]; // [rsp+100h] [rbp+0h] BYREF

  memset(v25, 0, sizeof(v25));
  memset(v26, 0, sizeof(v26));
  v20 = 0LL;
  v4 = 0;
  ResultLength = 0;
  Pool2 = 0LL;
  LODWORD(v6) = 10;
  memset(v24, 0, sizeof(v24));
  v7 = *(_QWORD *)(a1 + 336);
  v8 = *(__int64 **)(a1 + 40);
  v21 = *(_QWORD *)(a1 + 328);
  *(_QWORD *)(a1 + 336) = ArbpQueryConflictCallback;
  v9 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 328) = &v20;
  v23 = v7;
  v10 = RtlCopyRangeList(v9, v8);
  if ( v10 < 0 )
    goto LABEL_18;
  v10 = sub_140839D70(a1, *(_QWORD *)(a2 + 8), v26);
  if ( v10 < 0 )
    goto LABEL_18;
  *(_QWORD *)((char *)&v24[8] + 2) = 0LL;
  *(_DWORD *)((char *)&v24[9] + 2) = 0;
  HIWORD(v24[9]) = 0;
  v24[1] = v26[1];
  v24[3] = v26[1];
  v24[5] = v26;
  v24[7] = v26;
  v24[4] = v25;
  v24[0] = v26[0];
  v24[2] = v26[0];
  v11 = *(struct _DEVICE_OBJECT **)a2;
  v24[6] = 1LL;
  LOWORD(v24[8]) = 4;
  LODWORD(v25[5]) = 4;
  v25[4] = v11;
  DeviceProperty = IoGetDeviceProperty(v11, DevicePropertyLegacyBusType, 4u, &v25[7], &ResultLength);
  v13 = v25[7];
  if ( DeviceProperty < 0 )
    v13 = 1;
  LODWORD(v25[7]) = v13;
  v14 = IoGetDeviceProperty(*(PDEVICE_OBJECT *)a2, DevicePropertyBusNumber, 4u, &v25[8], &ResultLength);
  v15 = v25[8];
  if ( v14 < 0 )
    v15 = 0;
  LODWORD(v25[8]) = v15;
  Pool2 = (void *)ExAllocatePool2(256LL, 240LL, 1130525249LL);
  if ( !Pool2 )
  {
    v10 = -1073741670;
LABEL_18:
    v18 = v21;
    goto LABEL_19;
  }
  v10 = sub_14042A5E0(a1, v24);
  if ( v10 < 0 )
    goto LABEL_18;
  RtlDeleteOwnersRanges(*(__int64 ***)(a1 + 48), *(_QWORD *)(v24[4] + 32LL));
  while ( 1 )
  {
    v24[2] = v24[0];
    v10 = 0;
    v24[3] = v24[1];
    v20 = 0LL;
    if ( (unsigned __int8)sub_14042A5E0(a1, v24) )
      break;
    if ( v4 == (_DWORD)v6 )
    {
      v6 = (unsigned int)(v6 + 5);
      v16 = Pool2;
      Pool2 = (void *)ExAllocatePool2(256LL, 24 * v6, 1130525249LL);
      if ( !Pool2 )
      {
        v10 = -1073741670;
        Pool2 = v16;
LABEL_17:
        v7 = v23;
        goto LABEL_18;
      }
      memmove(Pool2, v16, 24LL * v4);
      ExFreePoolWithTag(v16, 0);
    }
    v17 = v4++;
    if ( !v20 )
    {
      *((_QWORD *)Pool2 + 3 * v17 + 2) = -1LL;
      *((_QWORD *)Pool2 + 3 * v17) = 0LL;
      *((_QWORD *)Pool2 + 3 * v17 + 1) = 0LL;
      break;
    }
    *((_QWORD *)Pool2 + 3 * v17) = v20[3];
    *((_QWORD *)Pool2 + 3 * v17 + 1) = *v20;
    *((_QWORD *)Pool2 + 3 * v17 + 2) = v20[1];
    v10 = RtlDeleteOwnersRanges(*(__int64 ***)(a1 + 48), v20[3]);
    if ( v10 < 0 )
      goto LABEL_17;
  }
  RtlFreeRangeList(*(_QWORD *)(a1 + 48));
  v7 = v23;
  v18 = v21;
  *(_QWORD *)(a1 + 336) = v23;
  *(_QWORD *)(a1 + 328) = v18;
  **(_QWORD **)(a2 + 24) = Pool2;
  **(_DWORD **)(a2 + 16) = v4;
LABEL_19:
  if ( (v24[8] & 0x10) != 0 )
  {
    ExFreePoolWithTag((PVOID)v24[9], 0);
    LOWORD(v24[8]) &= ~0x10u;
  }
  if ( v10 < 0 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0);
    RtlFreeRangeList(*(_QWORD *)(a1 + 48));
    *(_QWORD *)(a1 + 336) = v7;
    *(_QWORD *)(a1 + 328) = v18;
    **(_QWORD **)(a2 + 24) = 0LL;
  }
  return (unsigned int)v10;
}
