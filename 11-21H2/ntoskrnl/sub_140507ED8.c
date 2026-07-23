/*
 * XREFs of sub_140507ED8 @ 0x140507ED8
 * Callers:
 *     sub_14050E930 @ 0x14050E930 (sub_14050E930.c)
 *     sub_14051BE58 @ 0x14051BE58 (sub_14051BE58.c)
 *     sub_14052A52C @ 0x14052A52C (sub_14052A52C.c)
 * Callees:
 *     sub_140252258 @ 0x140252258 (sub_140252258.c)
 *     sub_140252380 @ 0x140252380 (sub_140252380.c)
 *     sub_1403D57DC @ 0x1403D57DC (sub_1403D57DC.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14050918C @ 0x14050918C (sub_14050918C.c)
 *     IoSetDevicePropertyData @ 0x14080D9D0 (IoSetDevicePropertyData.c)
 *     IoConnectInterruptEx @ 0x140816FD0 (IoConnectInterruptEx.c)
 */

int __fastcall sub_140507ED8(
        __int128 *a1,
        unsigned int a2,
        ULONG a3,
        KIRQL a4,
        unsigned int a5,
        KINTERRUPT_MODE a6,
        unsigned __int64 a7,
        unsigned __int64 a8,
        KSPIN_LOCK *a9,
        KIRQL a10,
        int a11,
        PKINTERRUPT *a12)
{
  __int128 v16; // xmm0
  int result; // eax
  _QWORD v18[2]; // [rsp+40h] [rbp-C0h] BYREF
  PKINTERRUPT *v19; // [rsp+50h] [rbp-B0h]
  KSPIN_LOCK *v20; // [rsp+58h] [rbp-A8h]
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD Data[6]; // [rsp+B0h] [rbp-50h] BYREF

  v20 = a9;
  v19 = a12;
  memset(Data, 0, sizeof(Data));
  v16 = *a1;
  DWORD2(Data[0]) = 0;
  v18[0] = 0LL;
  LODWORD(Data[3]) = a11 & 0x3FFFFFFF | Data[3] & 0xC0000000 | 0x40000000;
  LODWORD(Data[0]) = 1;
  HIDWORD(Data[0]) = a3;
  LOBYTE(Data[1]) = a4;
  Data[2] = v16;
  *(_QWORD *)((char *)&Data[1] + 4) = __PAIR64__(a6, a5);
  result = sub_140252380(a2, v18);
  if ( result >= 0 )
  {
    sub_140252258(v18, (_DWORD *)&Data[1] + 1, (_DWORD *)&Data[1] + 2);
    result = sub_14050918C(v18, &Data[4]);
    if ( result >= 0 )
    {
      memset(v18, 0, 12);
      result = sub_1403D57DC(0, 0LL, (int)v18, 0, (unsigned int *)Data + 2, 1u);
      if ( result >= 0 )
      {
        IoSetDevicePropertyData(Pdo, &stru_14000FEA0, 0, 0, 0x1003u, 0x60u, Data);
        memset(&Parameters, 0, sizeof(Parameters));
        Parameters.FullySpecified.PhysicalDeviceObject = Pdo;
        Parameters.FullySpecified.InterruptObject = v19;
        Parameters.FullySpecified.SpinLock = v20;
        Parameters.FullySpecified.SynchronizeIrql = a10;
        Parameters.FullySpecified.ProcessorEnableMask = *(_QWORD *)a1;
        Parameters.FullySpecified.Group = *((_WORD *)a1 + 4);
        Parameters.Version = 4;
        *(_OWORD *)&Parameters.MessageBased.MessageServiceRoutine = __PAIR128__(a8, a7);
        *(_WORD *)&Parameters.MessageBased.FloatingSave = 256;
        Parameters.FullySpecified.Vector = a3;
        Parameters.FullySpecified.Irql = a4;
        Parameters.FullySpecified.InterruptMode = a6;
        result = IoConnectInterruptEx(&Parameters);
        if ( result >= 0 )
          return 0;
      }
    }
  }
  return result;
}
