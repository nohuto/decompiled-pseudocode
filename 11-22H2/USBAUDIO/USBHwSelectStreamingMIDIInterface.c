/*
 * XREFs of USBHwSelectStreamingMIDIInterface @ 0x1C003318C
 * Callers:
 *     USBDeviceSetPowerState @ 0x1C0031C20 (USBDeviceSetPowerState.c)
 *     USBParseGetMIDIStreamingDatarange @ 0x1C0034EB0 (USBParseGetMIDIStreamingDatarange.c)
 * Callees:
 *     memmove @ 0x1C001AC80 (memmove.c)
 *     USBMidiInPipePrimer @ 0x1C00370E8 (USBMidiInPipePrimer.c)
 *     USBHwSubmitUrbToUsbdSynch @ 0x1C0038A60 (USBHwSubmitUrbToUsbdSynch.c)
 *     USBHwAllocateAndBag @ 0x1C00397EC (USBHwAllocateAndBag.c)
 */

__int64 __fastcall USBHwSelectStreamingMIDIInterface(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  _QWORD *v6; // r13
  __int64 v8; // rax
  __int64 v9; // rsi
  USHORT v10; // bp
  struct _URB *v11; // r15
  int i; // ebx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // rdx
  USBD_CONFIGURATION_HANDLE *p_ConfigurationHandle; // r14
  __int64 v18; // rdx
  ULONG *p_MaximumTransferSize; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // r9
  ULONG NumberOfPipes; // eax
  unsigned int v25; // esi
  __int64 v26; // rcx
  __int64 v27; // r8
  _QWORD *v28; // rcx
  struct _URB *Pool2; // [rsp+78h] [rbp+20h]

  v3 = *(_QWORD *)(a1 + 16);
  v6 = *(_QWORD **)(v3 + 72);
  if ( *(_BYTE *)(v3 + 64) )
    return 3221226166LL;
  if ( *(_BYTE *)(a2 + 16) )
    return 0LL;
  v8 = *(_QWORD *)(a2 + 24);
  v9 = *(unsigned __int8 *)(v8 + 4);
  if ( !*(_BYTE *)(v8 + 4) )
    return 3221225858LL;
  v10 = 24 * (v9 + 1);
  Pool2 = (struct _URB *)ExAllocatePool2(64LL, (unsigned int)(24 * v9 + 56), 1096972357LL);
  v11 = Pool2;
  i = -1073741670;
  if ( Pool2 )
  {
    v13 = v6[5];
    v14 = 0LL;
    for ( i = -1073741808; (unsigned int)v14 < *(unsigned __int8 *)(v13 + 4); v14 = (unsigned int)(v14 + 1) )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v6[2] + 16LL * (unsigned int)v14) + 2LL) == *(_BYTE *)(*(_QWORD *)(a2 + 24) + 2LL) )
        break;
    }
    v15 = v6[2];
    v16 = 2 * v14;
    if ( *(_BYTE *)(*(_QWORD *)(v15 + 8 * v16) + 2LL) != *(_BYTE *)(*(_QWORD *)(a2 + 24) + 2LL) )
      goto LABEL_29;
    p_ConfigurationHandle = &Pool2->UrbSelectConfiguration.ConfigurationHandle;
    memmove(&Pool2->UrbOSFeatureDescriptorRequest.Reserved0, *(const void **)(v15 + 8 * v16 + 8), v10);
    Pool2->UrbSelectInterface.Interface.Length = v10;
    Pool2->UrbSelectInterface.Interface.AlternateSetting = *(_BYTE *)(*(_QWORD *)(a2 + 24) + 3LL);
    if ( (_DWORD)v9 )
    {
      v18 = 0LL;
      p_MaximumTransferSize = &Pool2->UrbSelectInterface.Interface.Pipes[0].MaximumTransferSize;
      v20 = v9;
      do
      {
        v21 = *(_QWORD *)(v18 + *(_QWORD *)(a2 + 48));
        v18 += 8LL;
        *p_MaximumTransferSize = *(unsigned __int16 *)(v21 + 4);
        p_MaximumTransferSize += 6;
        --v20;
      }
      while ( v20 );
    }
    Pool2->UrbHeader.Length = 24 * v9 + 56;
    Pool2->UrbHeader.Function = 1;
    Pool2->UrbSelectInterface.ConfigurationHandle = (USBD_CONFIGURATION_HANDLE)v6[3];
    v22 = USBHwSubmitUrbToUsbdSynch(*(PDEVICE_OBJECT *)(a1 + 40), Pool2, 0LL);
    i = v22;
    if ( Pool2->UrbHeader.Status >= 0 )
    {
      if ( v22 < 0 )
      {
LABEL_29:
        ExFreePool(v11);
        return (unsigned int)i;
      }
      if ( Pool2->UrbSelectInterface.Interface.NumberOfPipes <= (unsigned int)v9 )
      {
        *(_BYTE *)(a2 + 16) = 1;
        NumberOfPipes = Pool2->UrbSelectInterface.Interface.NumberOfPipes;
        if ( a3 )
        {
          *(_DWORD *)(a2 + 32) = NumberOfPipes;
          i = USBHwAllocateAndBag(a2 + 40, 168 * NumberOfPipes, 64LL, *(_QWORD *)(a1 + 8));
          if ( i < 0 )
            goto LABEL_29;
        }
        else if ( *(_DWORD *)(a2 + 32) != NumberOfPipes )
        {
          i = -1073741438;
          goto LABEL_29;
        }
        v25 = 0;
        if ( *(_DWORD *)(a2 + 32) )
        {
          do
          {
            if ( i < 0 )
              break;
            v26 = *(_QWORD *)(a2 + 40);
            v27 = 168LL * v25;
            *(_OWORD *)(v27 + v26) = *(_OWORD *)&p_ConfigurationHandle[3 * v25 + 3];
            *(_QWORD *)(v27 + v26 + 16) = p_ConfigurationHandle[3 * v25 + 5];
            if ( a3 )
            {
              v28 = (_QWORD *)(v27 + *(_QWORD *)(a2 + 40) + 48LL);
              v28[1] = v28;
              *v28 = v28;
            }
            if ( *(char *)(*(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL * v25) + 2LL) < 0 )
            {
              LOBYTE(v23) = a3;
              i = USBMidiInPipePrimer(a1, a2, v25, v23);
            }
            ++v25;
          }
          while ( v25 < *(_DWORD *)(a2 + 32) );
          v11 = Pool2;
        }
        goto LABEL_29;
      }
    }
    i = -1073741668;
    goto LABEL_29;
  }
  return (unsigned int)i;
}
