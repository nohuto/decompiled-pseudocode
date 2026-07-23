/*
 * XREFs of PoFxRegisterPrimaryDevice @ 0x14098CDC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1408236BC @ 0x1408236BC (sub_1408236BC.c)
 *     sub_1408245C4 @ 0x1408245C4 (sub_1408245C4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PoFxRegisterPrimaryDevice(PDEVICE_OBJECT DeviceObject, __int64 a2, _QWORD *a3)
{
  void *v6; // rsi
  int v7; // edi
  __int64 v8; // rax
  int v9; // r9d
  __int64 v11; // [rsp+20h] [rbp-78h]
  _QWORD v12[8]; // [rsp+40h] [rbp-58h] BYREF
  __int128 v13; // [rsp+80h] [rbp-18h]

  if ( DeviceObject && a2 && *(_DWORD *)a2 == 1 )
  {
    v6 = sub_1408245C4(a2 + 80, *(_DWORD *)(a2 + 4));
    if ( v6 )
    {
      v8 = *(_QWORD *)(a2 + 16);
      v9 = *(_DWORD *)(a2 + 4);
      v12[7] = 0LL;
      v12[0] = v8;
      v12[1] = *(_QWORD *)(a2 + 24);
      v12[2] = *(_QWORD *)(a2 + 32);
      v12[3] = *(_QWORD *)(a2 + 40);
      v12[4] = *(_QWORD *)(a2 + 48);
      v12[5] = *(_QWORD *)(a2 + 56);
      v12[6] = *(_QWORD *)(a2 + 64);
      v11 = *(_QWORD *)(a2 + 72);
      v13 = 0LL;
      v7 = sub_1408236BC(DeviceObject, (int)v12, (int)v6, v9, v11, 0LL, a3);
      if ( v7 >= 0 && byte_140C1F588 && (*(_DWORD *)(a2 + 8) & 1) != 0 )
        _InterlockedOr((volatile signed __int32 *)(*a3 + 824LL), 0x80u);
      ExFreePoolWithTag(v6, 0x4D584650u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v7;
}
