/*
 * XREFs of USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild @ 0x1C0017700
 * Callers:
 *     USBHwSelectStreamingAudioInterfaceSideband @ 0x1C0034D38 (USBHwSelectStreamingAudioInterfaceSideband.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018A40 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019940 (memset.c)
 */

__int64 __fastcall USBD_SelectInterfaceWithEndpointOffloadUrbAllocateAndBuild(
        PVOID P,
        __int64 a2,
        _QWORD *a3,
        unsigned int a4,
        char **a5)
{
  __int64 v5; // r14
  char **v8; // r12
  int v9; // ebx
  __int64 (__fastcall *v10)(_QWORD, __int64, _QWORD *, _QWORD, char **); // rax
  __int64 v11; // rbp
  SIZE_T v12; // rbx
  char *PoolWithTag; // rax
  char *v14; // r13
  __int64 v15; // rcx
  _WORD *v16; // rdx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  char *v19; // rcx
  __int64 v20; // rax
  void (__fastcall *v21)(_QWORD); // rax
  __int16 v23; // [rsp+30h] [rbp-38h]
  int v24; // [rsp+34h] [rbp-34h]

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
    v8 = a5;
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
    v10 = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD *, _QWORD, char **))*((_QWORD *)P + 22);
    if ( v10 )
    {
      v9 = v10(*((_QWORD *)P + 6), a2, a3, a4, a5);
      goto LABEL_50;
    }
    v11 = *(unsigned __int8 *)(*a3 + 4LL);
    if ( (unsigned int)v11 <= 0x20 )
    {
      if ( a4 <= (unsigned int)v11 )
      {
        v24 = (unsigned __int16)(24 * v11 + 56);
        v23 = v24 + 82 * a4 + 96;
        v12 = v24 + 82 * a4 + 96;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PoolType, v12, *((_DWORD *)P + 16));
        v14 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, v12);
          v15 = *a3;
          v16 = v14 + 48;
          v9 = 0;
          v14[50] = *(_BYTE *)(*a3 + 2LL);
          v14[51] = *(_BYTE *)(v15 + 3);
          *((_DWORD *)v14 + 16) = v11;
          if ( (_DWORD)v11 )
          {
            v17 = v14 + 92;
            v18 = v11;
            do
            {
              *(v17 - 1) = -1;
              *v17 = 0;
              v17 += 6;
              --v18;
            }
            while ( v18 );
          }
          *v16 = 24 * v11 + 24;
          v19 = &v14[(unsigned __int16)v24 + 48];
          a3[1] = v16;
          *(_WORD *)v14 = v23;
          *((_WORD *)v14 + 1) = 59;
          *((_QWORD *)v14 + 3) = a2;
          *((_DWORD *)v14 + 8) = v5;
          *((_QWORD *)v14 + 5) = v19;
          if ( (_DWORD)v5 )
          {
            v20 = v5;
            do
            {
              *(_DWORD *)v19 = 82;
              v19 += 82;
              --v20;
            }
            while ( v20 );
          }
          if ( g_EnableDbgPrints )
            DbgPrintEx(0x4Du, 3u, "SelectInterface Urb = 0x%p\n", v14);
          *a5 = v14;
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
              v21 = (void (__fastcall *)(_QWORD))*((_QWORD *)P + 14);
              if ( v21 )
                v21(*((_QWORD *)P + 6));
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
          v11,
          a3);
    }
    else if ( g_EnableDbgPrints )
    {
      DbgPrintEx(0x4Du, 0, "Too Many Pipes(%d), InterfaceListEntry(0x%p)\n", v11, a3);
    }
    v9 = -1073741811;
    goto LABEL_50;
  }
  if ( g_EnableDbgPrints )
    DbgPrintEx(0x4Du, 0, "InterfaceListEntry cant be NULL\n");
LABEL_10:
  v8 = a5;
  v9 = -1073741811;
  if ( a5 )
LABEL_58:
    *v8 = 0LL;
  return (unsigned int)v9;
}
