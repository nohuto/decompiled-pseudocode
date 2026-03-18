/*
 * XREFs of UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x1C0001F74
 * Callers:
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x1C000254C (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     UsbDevice_HandleAddEndpointsState @ 0x1C0046A7C (UsbDevice_HandleAddEndpointsState.c)
 *     UsbDevice_HandleDropEndpointsState @ 0x1C0046C6C (UsbDevice_HandleDropEndpointsState.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     UsbDevice_InitializeInputContextForDropEndpoints @ 0x1C000448C (UsbDevice_InitializeInputContextForDropEndpoints.c)
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C00045DC (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_InitializeInputContextCommon @ 0x1C00047AC (UsbDevice_InitializeInputContextCommon.c)
 */

__int64 __fastcall UsbDevice_InitializeInputContextForAddDropEndpoints(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  int v7; // esi
  __int64 v8; // rax
  _DWORD *v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  int v12; // eax
  unsigned int v13; // r8d

  UsbDevice_InitializeInputContextCommon();
  v6 = 0;
  if ( (a3 & 0xFFFFFFFD) != 0 )
  {
    if ( a3 != 1 )
      return (unsigned int)-1073741595;
LABEL_4:
    v7 = UsbDevice_InitializeInputContextForDropEndpoints(a1, a2);
    if ( v7 < 0 )
      return (unsigned int)v7;
    goto LABEL_5;
  }
  v7 = UsbDevice_InitializeInputContextForAddEndpoints(a1, a2);
  if ( v7 < 0 )
    return (unsigned int)v7;
  if ( a3 <= 1 )
    goto LABEL_4;
LABEL_5:
  v8 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 8 : 0) + a1 + 640);
  if ( v8 )
    v9 = *(_DWORD **)(v8 + 16);
  else
    v9 = 0LL;
  v10 = -(__int64)((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) + 100LL) & 4) != 0);
  *(_DWORD *)(a1 + 152) &= ~*v9;
  v11 = v10 & 0x20;
  *(_DWORD *)(a1 + 152) |= v9[1];
  do
  {
    v12 = *(_DWORD *)(a1 + 152);
    if ( _bittest(&v12, v6) )
      *(_DWORD *)((char *)v9 + v11 + 32) = (v6 << 27) | *(_DWORD *)((char *)v9 + v11 + 32) & 0x7FFFFFF;
    ++v6;
  }
  while ( v6 < 0x20 );
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = *(_DWORD *)((char *)v9 + v11 + 32);
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      (_DWORD)v9,
      12,
      44,
      (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
      *(_BYTE *)(a1 + 135),
      v13 >> 27);
  }
  return (unsigned int)v7;
}
