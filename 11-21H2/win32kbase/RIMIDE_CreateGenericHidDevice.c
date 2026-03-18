/*
 * XREFs of RIMIDE_CreateGenericHidDevice @ 0x1C019FC14
 * Callers:
 *     NtUserInitializeGenericHidInjection @ 0x1C015B1B0 (NtUserInitializeGenericHidInjection.c)
 *     ?CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z @ 0x1C01F3340 (-CreateRimDevice@VirtualTouchpadProcessor@@AEAAJPEAVVPTPTouchpad@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     rimHidP_GetUsageValue @ 0x1C00E63A2 (rimHidP_GetUsageValue.c)
 *     RIMIDECreatePseudoHIDDevice @ 0x1C019C4FC (RIMIDECreatePseudoHIDDevice.c)
 */

__int64 __fastcall RIMIDE_CreateGenericHidDevice(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax
  char *v7; // rcx
  __int16 v8; // dx
  __int16 v9; // cx
  __int64 v10; // [rsp+48h] [rbp-61h]
  unsigned int v11[4]; // [rsp+60h] [rbp-49h] BYREF
  __int128 v12[4]; // [rsp+70h] [rbp-39h] BYREF
  _OWORD v13[4]; // [rsp+B0h] [rbp+7h] BYREF

  memset(v13, 0, sizeof(v13));
  v4 = *(unsigned __int16 *)(a1 + 40);
  v5 = *(_QWORD *)(a1 + 32);
  v11[0] = 1;
  if ( !gpfnHidP_GetCollectionDescription )
    return 3221225659LL;
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _OWORD *))gpfnHidP_GetCollectionDescription)(
             v5,
             v4,
             1LL,
             v13);
  if ( (int)result >= 0 )
  {
    v7 = *(char **)(a1 + 48);
    if ( v7 )
      rimHidP_GetUsageValue(
        HidP_Feature,
        0xDu,
        0,
        0x55u,
        v11,
        *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)&v13[0] + 32LL),
        v7,
        *(unsigned __int16 *)(a1 + 56));
    v10 = *(_QWORD *)(a1 + 24);
    v12[1] = v13[1];
    v8 = *(_WORD *)(*(_QWORD *)&v13[0] + 2LL);
    v9 = **(_WORD **)&v13[0];
    v12[0] = v13[0];
    v12[2] = v13[2];
    v12[3] = v13[3];
    return RIMIDECreatePseudoHIDDevice(v9, v8, v11[0], 1u, 0LL, v12, 1, 0, 0, v10, a2);
  }
  return result;
}
