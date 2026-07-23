/*
 * XREFs of HalpGetSetCmosData @ 0x1403A55EC
 * Callers:
 *     HalSetBusDataByOffset @ 0x140396AE0 (HalSetBusDataByOffset.c)
 *     HalGetBusDataByOffset @ 0x140396CB0 (HalGetBusDataByOffset.c)
 *     HalpGetCmosData @ 0x1403A55D0 (HalpGetCmosData.c)
 *     HalpSetCmosData @ 0x1403A56B0 (HalpSetCmosData.c)
 * Callees:
 *     HalpAcquireCmosSpinLock @ 0x14033BE9C (HalpAcquireCmosSpinLock.c)
 *     HalpCmosReadByte @ 0x140372220 (HalpCmosReadByte.c)
 *     HalpCmosWriteByte @ 0x140372240 (HalpCmosWriteByte.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpGetSetCmosData(__int64 a1, __int64 a2, __int64 a3, int a4, char a5)
{
  _BYTE *v5; // rdi
  int v6; // esi
  unsigned int v7; // ebx
  __int64 v8; // r14
  unsigned int v9; // ebp
  __int64 v10; // rdx

  v5 = (_BYTE *)a3;
  v6 = a2;
  if ( (unsigned int)a1 >= 2 )
    return 0LL;
  v7 = a2;
  v8 = 3LL * (unsigned int)a1;
  v9 = *((_DWORD *)&HalpCmosBusParameterTable + 6 * (unsigned int)a1);
  if ( (int)a2 + a4 - 1 <= v9 )
    v9 = a2 + a4 - 1;
  HalpAcquireCmosSpinLock(a1, a2, a3);
  if ( v7 <= v9 )
  {
    if ( a5 )
    {
      do
      {
        LOBYTE(v10) = *v5;
        ((void (__fastcall *)(_QWORD, __int64))funcs_1403A5692[v8])(v7, v10);
        ++v5;
        ++v7;
      }
      while ( v7 <= v9 );
    }
    else
    {
      do
        *v5++ = ((__int64 (__fastcall *)(_QWORD))funcs_1403A5647[v8])(v7++);
      while ( v7 <= v9 );
    }
  }
  _InterlockedExchange(&HalpSystemHardwareLock, -1);
  if ( HalpSystemHardwareLockInterruptsEnabled )
    _enable();
  return v7 - v6;
}
