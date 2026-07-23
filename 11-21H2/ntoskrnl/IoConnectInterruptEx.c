/*
 * XREFs of IoConnectInterruptEx @ 0x140816FD0
 * Callers:
 *     sub_140507ED8 @ 0x140507ED8 (sub_140507ED8.c)
 *     sub_14060D690 @ 0x14060D690 (sub_14060D690.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140816798 @ 0x140816798 (sub_140816798.c)
 *     sub_140816C88 @ 0x140816C88 (sub_140816C88.c)
 *     sub_140817258 @ 0x140817258 (sub_140817258.c)
 *     sub_140817A24 @ 0x140817A24 (sub_140817A24.c)
 *     sub_1408590B0 @ 0x1408590B0 (sub_1408590B0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoConnectInterruptEx(PIO_CONNECT_INTERRUPT_PARAMETERS Parameters)
{
  ULONG Version; // ecx
  NTSTATUS result; // eax
  NTSTATUS v4; // esi
  KIRQL SynchronizeIrql; // al
  KIRQL Irql; // dl
  char v7; // di
  USHORT Group; // si
  unsigned int v9; // edx
  KIRQL v10; // al
  __int128 v11; // xmm1
  __m128i v12; // xmm2
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  PVOID ServiceContext; // r9
  PKSERVICE_ROUTINE ServiceRoutine; // r8
  PDEVICE_OBJECT PhysicalDeviceObject; // rdx
  PKINTERRUPT *InterruptObject; // rcx
  PKSPIN_LOCK SpinLock; // [rsp+20h] [rbp-69h]
  ULONG Vector; // [rsp+28h] [rbp-61h]
  KIRQL v22; // [rsp+30h] [rbp-59h]
  KIRQL v23; // [rsp+38h] [rbp-51h]
  KINTERRUPT_MODE InterruptMode; // [rsp+40h] [rbp-49h]
  BOOLEAN ShareVector; // [rsp+48h] [rbp-41h]
  __int128 ProcessorEnableMask; // [rsp+60h] [rbp-29h] BYREF
  int v27; // [rsp+70h] [rbp-19h]
  _DWORD v28[23]; // [rsp+74h] [rbp-15h] BYREF
  __int64 v29; // [rsp+100h] [rbp+77h] BYREF

  v29 = 0LL;
  if ( KeGetCurrentIrql() )
    KeBugCheckEx(0x121u, 1uLL, KeGetCurrentIrql(), 0LL, 0LL);
  Version = Parameters->Version;
  switch ( Version )
  {
    case 1u:
      goto LABEL_49;
    case 2u:
      return sub_140816798(
               Parameters->FullySpecified.PhysicalDeviceObject,
               Parameters->FullySpecified.InterruptObject,
               (__int64)Parameters->FullySpecified.ServiceRoutine);
    case 3u:
      goto LABEL_5;
    case 4u:
LABEL_49:
      if ( !Parameters->FullySpecified.PhysicalDeviceObject )
        return -1073741811;
      if ( !Parameters->FullySpecified.ServiceRoutine )
        return -1073741811;
      SynchronizeIrql = Parameters->FullySpecified.SynchronizeIrql;
      Irql = Parameters->FullySpecified.Irql;
      if ( SynchronizeIrql < Irql )
        return -1073741811;
      if ( SynchronizeIrql || Irql )
      {
        v7 = 0;
      }
      else
      {
        v7 = 1;
        if ( Parameters->FullySpecified.SpinLock )
          return -1073741811;
      }
      if ( Version == 4 )
        Group = Parameters->FullySpecified.Group;
      else
        Group = 0;
      if ( (int)sub_140817A24(Parameters->FullySpecified.PhysicalDeviceObject) >= 0 )
      {
        memset(v28, 0, sizeof(v28));
        v9 = 0;
        v27 = 0;
        if ( MEMORY[0] )
        {
          while ( 1 )
          {
            if ( *(_DWORD *)(88LL * v9 + 0xC) == Parameters->FullySpecified.Vector )
            {
              v10 = Parameters->FullySpecified.Irql;
              if ( (*(_BYTE *)(88LL * v9 + 0x10) == v10 || !v10)
                && *(_DWORD *)(88LL * v9 + 0x18) == Parameters->FullySpecified.InterruptMode
                && *(_WORD *)(88LL * v9 + 0x28) == Group
                && *(_QWORD *)(88LL * v9 + 0x20) == Parameters->FullySpecified.ProcessorEnableMask )
              {
                break;
              }
            }
            if ( ++v9 >= MEMORY[0] )
              goto LABEL_42;
          }
          v27 = 1;
          v11 = *(_OWORD *)(88LL * v9 + 0x28);
          v12 = *(__m128i *)(88LL * v9 + 8);
          *(_OWORD *)&v28[5] = *(_OWORD *)(88LL * v9 + 0x18);
          v13 = *(_OWORD *)(88LL * v9 + 0x38);
          *(_OWORD *)&v28[9] = v11;
          v14 = *(_OWORD *)(88LL * v9 + 0x48);
          *(_OWORD *)&v28[13] = v13;
          *(_QWORD *)&v13 = *(_QWORD *)(88LL * v9 + 0x58);
          *(__m128i *)&v28[1] = v12;
          *(_QWORD *)&v28[21] = v13;
          *(_OWORD *)&v28[17] = v14;
          if ( !_mm_cvtsi128_si32(v12) && (v28[16] & 1) != 0 )
            Parameters->FullySpecified.ShareVector = 1;
          v4 = sub_140817258(
                 &v29,
                 Parameters->FullySpecified.PhysicalDeviceObject,
                 Parameters->FullySpecified.ServiceRoutine,
                 0LL,
                 Parameters->FullySpecified.ServiceContext,
                 0,
                 Parameters->FullySpecified.SpinLock,
                 Parameters->FullySpecified.SynchronizeIrql,
                 Parameters->FullySpecified.ShareVector);
          if ( v4 >= 0 )
            *Parameters->FullySpecified.InterruptObject = (PKINTERRUPT)(v29 + 112);
          ExFreePoolWithTag(0LL, 0);
          return v4;
        }
LABEL_42:
        ExFreePoolWithTag(0LL, 0);
        return -1073741637;
      }
      if ( v7 )
        return -1073741637;
      ServiceContext = Parameters->FullySpecified.ServiceContext;
      ServiceRoutine = Parameters->FullySpecified.ServiceRoutine;
      PhysicalDeviceObject = Parameters->FullySpecified.PhysicalDeviceObject;
      InterruptObject = Parameters->FullySpecified.InterruptObject;
      ProcessorEnableMask = Parameters->FullySpecified.ProcessorEnableMask;
      ShareVector = Parameters->FullySpecified.ShareVector;
      InterruptMode = Parameters->FullySpecified.InterruptMode;
      v23 = Parameters->FullySpecified.SynchronizeIrql;
      v22 = Parameters->FullySpecified.Irql;
      Vector = Parameters->FullySpecified.Vector;
      SpinLock = Parameters->FullySpecified.SpinLock;
      WORD4(ProcessorEnableMask) = Group;
      return sub_1408590B0(
               (_DWORD)InterruptObject,
               (_DWORD)PhysicalDeviceObject,
               (_DWORD)ServiceRoutine,
               (_DWORD)ServiceContext,
               (__int64)SpinLock,
               Vector,
               v22,
               v23,
               InterruptMode,
               ShareVector,
               (__int64)&ProcessorEnableMask);
  }
  if ( Version != 5 )
  {
    Parameters->Version = 3;
    return -1073741637;
  }
LABEL_5:
  result = sub_140816C88(
             Version,
             Parameters->FullySpecified.PhysicalDeviceObject,
             Parameters->FullySpecified.InterruptObject,
             (__int64)Parameters->FullySpecified.ServiceRoutine,
             (__int64)Parameters->FullySpecified.ServiceContext,
             (__int64)Parameters->FullySpecified.SpinLock,
             Parameters->FullySpecified.SynchronizeIrql);
  if ( result >= 0 )
    return result;
  if ( !Parameters->MessageBased.FallBackServiceRoutine )
    return -1073741637;
  v4 = sub_140816798(
         Parameters->FullySpecified.PhysicalDeviceObject,
         Parameters->FullySpecified.InterruptObject,
         (__int64)Parameters->MessageBased.FallBackServiceRoutine);
  Parameters->Version = 2;
  return v4;
}
