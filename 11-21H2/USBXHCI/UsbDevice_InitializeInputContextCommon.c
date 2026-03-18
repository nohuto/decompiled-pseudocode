/*
 * XREFs of UsbDevice_InitializeInputContextCommon @ 0x1C00047AC
 * Callers:
 *     UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x1C0001F74 (UsbDevice_InitializeInputContextForAddDropEndpoints.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 */

__int64 __fastcall UsbDevice_InitializeInputContextCommon(__int64 a1)
{
  char v1; // r8
  __int64 v3; // rbx
  __int64 v4; // rax
  unsigned int v5; // edx
  _QWORD **v6; // rax
  _QWORD **v7; // rcx
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  char v10; // al
  __int64 v11; // rbx
  __int64 result; // rax
  __int64 v13; // rdx
  int v14; // ecx

  v1 = *(_BYTE *)(a1 + 657);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  v4 = *(_QWORD *)((v1 != 0 ? 648LL : 640LL) + a1);
  if ( v4 )
    v5 = *(_DWORD *)(v4 + 44);
  else
    v5 = 0;
  v6 = (_QWORD **)(a1 + 640);
  v7 = (_QWORD **)(a1 + 648);
  if ( !v1 )
    v7 = v6;
  v8 = *v7;
  if ( v8 )
    v8 = (_QWORD *)v8[2];
  memset(v8, 0, v5);
  v9 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
  if ( v9 )
    v9 = *(_QWORD *)(v9 + 16);
  v10 = -(*(_DWORD *)(v3 + 100) & 4);
  *(_DWORD *)(v9 + 4) |= 1u;
  v11 = v9 + (v10 != 0 ? 64LL : 32LL);
  if ( *(_BYTE *)(a1 + 136) )
  {
    v14 = *(_DWORD *)v11 | 0x4000000;
    *(_DWORD *)v11 = v14;
    *(_BYTE *)(v11 + 7) = *(_BYTE *)(a1 + 140);
    if ( *(_DWORD *)(a1 + 20) == 2 )
    {
      if ( *(_DWORD *)(a1 + 144) > 1u )
        *(_DWORD *)v11 = v14 | 0x2000000;
      *(_DWORD *)(v11 + 8) ^= (*(_DWORD *)(v11 + 8) ^ (*(_DWORD *)(a1 + 148) << 16)) & 0x30000;
    }
  }
  result = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL);
  if ( (result & 0x2000000000000000LL) != 0 && !*(_BYTE *)(a1 + 136) )
  {
    v13 = *(_QWORD *)(a1 + 24);
    if ( v13 )
    {
      if ( *(int *)(a1 + 20) < 2 )
      {
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                   WdfDriverGlobals,
                   v13,
                   off_1C00612C0);
        if ( *(_DWORD *)(result + 144) > 1u )
          *(_DWORD *)v11 |= 0x2000000u;
      }
    }
  }
  return result;
}
