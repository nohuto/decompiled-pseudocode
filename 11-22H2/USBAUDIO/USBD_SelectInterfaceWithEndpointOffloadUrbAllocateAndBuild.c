/*
 * XREFs of USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild @ 0x1C0018CC0
 * Callers:
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C0032A24 (USBHwSelectStreamingAudioInterfaceSideband.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AF80 (memset.c)
 */

__int64 __fastcall USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild(
        PVOID P,
        __int64 a2,
        _QWORD *a3,
        unsigned int a4,
        char **a5)
{
  __int64 v5; // rbp
  int v9; // ebx
  char **v10; // r15
  __int64 (__fastcall *v11)(_QWORD, __int64, _QWORD *, _QWORD, char **); // rax
  __int64 v12; // rsi
  SIZE_T v13; // rbx
  char *PoolWithTag; // rax
  char *v15; // r12
  __int64 v16; // rcx
  _WORD *v17; // rdx
  _DWORD *v18; // rax
  __int64 v19; // rcx
  char *v20; // rcx
  __int64 v21; // rax
  void (__fastcall *v22)(_QWORD); // rax
  __int16 v24; // [rsp+30h] [rbp-38h]
  int v25; // [rsp+34h] [rbp-34h]

  v5 = a4;
  if ( !P )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "USBDHandle cant be NULL\n");
    goto LABEL_10;
  }
  if ( !a2 )
  {
    if ( g_EnableDbgPrints )
      DbgPrintEx(0x4Du, 0, "ConfigurationHandle cant be NULL\n");
    goto LABEL_10;
  }
  if ( a3 )
  {
    v10 = a5;
    if ( !a5 )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "Urb cant be NULL\n");
      return (unsigned int)-1073741811;
    }
    if ( !a4 )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "NumberOfEndpointsToOffload cant be ZERO\n");
      v9 = -1073741811;
      goto LABEL_58;
    }
    if ( *((_BYTE *)P + 225) )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete is set, UsbdHandleInfo 0x%p\n", P);
LABEL_26:
      v9 = -1073741436;
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "USBDInternal_ReferenceHandle failed %x\n", -1073741436);
      goto LABEL_58;
    }
    if ( *((int *)P + 55) < 1 )
    {
      if ( g_EnableDbgPrints )
        DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->ReferenceCount must be 1 or higher 0x%p\n", P);
      goto LABEL_26;
    }
    _InterlockedIncrement((volatile signed __int32 *)P + 55);
    v11 = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD *, _QWORD, char **))*((_QWORD *)P + 22);
    if ( v11 )
    {
      v9 = v11(*((_QWORD *)P + 6), a2, a3, a4, a5);
      goto LABEL_50;
    }
    v12 = *(unsigned __int8 *)(*a3 + 4LL);
    if ( (unsigned int)v12 <= 0x20 )
    {
      if ( a4 <= (unsigned int)v12 )
      {
        v25 = (unsigned __int16)(24 * v12 + 56);
        v24 = v25 + 82 * a4 + 96;
        v13 = v25 + 82 * a4 + 96;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, v13, *((_DWORD *)P + 16));
        v15 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v13);
          v16 = *a3;
          v17 = v15 + 48;
          v9 = 0;
          v15[50] = *(_BYTE *)(*a3 + 2LL);
          v15[51] = *(_BYTE *)(v16 + 3);
          *((_DWORD *)v15 + 16) = v12;
          if ( (_DWORD)v12 )
          {
            v18 = v15 + 92;
            v19 = v12;
            do
            {
              *(v18 - 1) = -1;
              *v18 = 0;
              v18 += 6;
              --v19;
            }
            while ( v19 );
          }
          *v17 = 24 * v12 + 24;
          v20 = &v15[(unsigned __int16)v25 + 48];
          a3[1] = v17;
          *(_WORD *)v15 = v24;
          *((_WORD *)v15 + 1) = 59;
          *((_QWORD *)v15 + 3) = a2;
          *((_DWORD *)v15 + 8) = v5;
          *((_QWORD *)v15 + 5) = v20;
          if ( (_DWORD)v5 )
          {
            v21 = v5;
            do
            {
              *(_DWORD *)v20 = 82;
              v20 += 82;
              --v21;
            }
            while ( v21 );
          }
          if ( g_EnableDbgPrints )
            DbgPrintEx(0x4Du, 3u, "SelectInterface Urb = 0x%p\n", v15);
          *a5 = v15;
        }
        else
        {
          if ( g_EnableDbgPrints )
            DbgPrintEx(0x4Du, 0, "Insufficient Memory to allocate URB\n");
          v9 = -1073741670;
        }
LABEL_50:
        if ( v9 < 0 )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)P + 55, 0xFFFFFFFF) <= 1 )
          {
            if ( *((_BYTE *)P + 225) )
            {
              v22 = (void (__fastcall *)(_QWORD))*((_QWORD *)P + 14);
              if ( v22 )
                v22(*((_QWORD *)P + 6));
              ExFreePoolWithTag(P, *((_DWORD *)P + 16));
            }
            else if ( g_EnableDbgPrints )
            {
              DbgPrintEx(0x4Du, 0, "UsbdHandleInfo->PendingDelete should be set here UsbdHandleInfo 0x%p\n", P);
            }
          }
          goto LABEL_58;
        }
        return (unsigned int)v9;
      }
      if ( g_EnableDbgPrints )
        DbgPrintEx(
          0x4Du,
          0,
          "NumberOfEndpointsToOffload(%d) cannot be greated than the number of endpoints in the interface(%d), InterfaceL"
          "istEntry(0x%p)\n",
          a4,
          v12,
          a3);
    }
    else if ( g_EnableDbgPrints )
    {
      DbgPrintEx(0x4Du, 0, "Too Many Pipes(%d), InterfaceListEntry(0x%p)\n", v12, a3);
    }
    v9 = -1073741811;
    goto LABEL_50;
  }
  if ( g_EnableDbgPrints )
    DbgPrintEx(0x4Du, 0, "InterfaceListEntry cant be NULL\n");
LABEL_10:
  v9 = -1073741811;
  v10 = a5;
  if ( a5 )
LABEL_58:
    *v10 = 0LL;
  return (unsigned int)v9;
}
