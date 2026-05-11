/*
 * XREFs of USBCntrlGetDescriptor @ 0x1C0036290
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C001AC80 (memmove.c)
 *     USBHwSyncGetStringDescriptor @ 0x1C0033770 (USBHwSyncGetStringDescriptor.c)
 */

__int64 __fastcall USBCntrlGetDescriptor(IRP *a1, __int64 a2, _WORD *a3)
{
  PKSFILTER FilterFromIrp; // rax
  unsigned int StringDescriptor; // ebx
  unsigned __int64 Length; // rsi
  PKSDEVICE Device; // rax
  __int64 v10; // r13
  __int64 v11; // r8
  unsigned __int8 *Pool2; // rdi
  USHORT v13; // r8
  UCHAR v14; // dl
  size_t v15; // r8
  unsigned __int16 *v16; // rdx
  __int64 v17; // rax
  __int64 v19; // [rsp+20h] [rbp-38h]
  int v20; // [rsp+60h] [rbp+8h] BYREF

  FilterFromIrp = KsGetFilterFromIrp(a1);
  StringDescriptor = -1073741811;
  Length = a1->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  a1->IoStatus.Information = 0LL;
  if ( !FilterFromIrp )
    return StringDescriptor;
  Device = KsGetDevice(FilterFromIrp);
  v10 = (__int64)Device;
  if ( !Device )
    return StringDescriptor;
  v11 = *((_QWORD *)Device->Context + 9);
  switch ( *(_DWORD *)(a2 + 24) )
  {
    case 1:
      a1->IoStatus.Information = 18LL;
      if ( (_DWORD)Length )
      {
        if ( (unsigned int)Length >= 0x12 )
        {
          v17 = *(_QWORD *)(v11 + 32);
          *(_OWORD *)a3 = *(_OWORD *)v17;
          a3[8] = *(_WORD *)(v17 + 16);
          return 0;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-2147483643;
    case 2:
      a1->IoStatus.Information = *(unsigned __int16 *)(*(_QWORD *)(v11 + 40) + 2LL);
      if ( (_DWORD)Length )
      {
        v16 = *(unsigned __int16 **)(v11 + 40);
        if ( (unsigned int)Length >= v16[1] )
        {
          memmove(a3, v16, v16[1]);
          return 0;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-2147483643;
    case 3:
      Pool2 = (unsigned __int8 *)ExAllocatePool2(64LL, 255LL, 1096972357LL);
      StringDescriptor = -1073741670;
      if ( Pool2 )
      {
        v13 = *(_WORD *)(a2 + 32);
        v14 = *(_BYTE *)(a2 + 28);
        v20 = 0;
        StringDescriptor = USBHwSyncGetStringDescriptor(v10, v14, v13, Pool2, v19, &v20);
        if ( (StringDescriptor & 0x80000000) == 0 )
        {
          a1->IoStatus.Information = *Pool2 + 2LL;
          if ( (_DWORD)Length )
          {
            v15 = *Pool2;
            if ( Length >= v15 + 2 )
              memmove(a3, Pool2 + 2, v15);
            else
              StringDescriptor = -1073741789;
          }
          else
          {
            StringDescriptor = -2147483643;
          }
        }
        ExFreePool(Pool2);
      }
      break;
  }
  return StringDescriptor;
}
