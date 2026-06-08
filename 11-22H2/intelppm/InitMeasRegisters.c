/*
 * XREFs of InitMeasRegisters @ 0x1C002DC20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004250 (_guard_dispatch_icall_nop.c)
 *     QueryPPMForRegisterList @ 0x1C002DCF0 (QueryPPMForRegisterList.c)
 *     IsPackageThermStatusSupported @ 0x1C002DFB8 (IsPackageThermStatusSupported.c)
 */

__int64 __fastcall InitMeasRegisters(__int64 a1)
{
  __int64 v1; // rsi
  int v2; // edi
  char v4; // bp
  int PPMForRegisterList; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 (__fastcall *v8)(); // rax
  unsigned int v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  v1 = 0LL;
  v2 = 0;
  if ( !(_DWORD)qword_1C001F928 )
  {
    v4 = 1;
    v2 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1120), 45LL, &v10);
    if ( v2 >= 0 )
    {
      v6 = v10;
    }
    else
    {
      PPMForRegisterList = QueryPPMForRegisterList(0LL);
      v2 = PPMForRegisterList;
      if ( PPMForRegisterList >= 0 )
      {
        v6 = 1;
      }
      else
      {
        if ( PPMForRegisterList != -1073741637 )
          return (unsigned int)v2;
        v6 = 0;
      }
      v4 = 0;
    }
    if ( (unsigned __int8)IsPackageThermStatusSupported() )
      v6 |= 2u;
    for ( LODWORD(qword_1C001F928) = v6; v6; v6 >>= 1 )
    {
      if ( (v6 & 1) != 0 )
      {
        v8 = ProcInitRoutines[v1];
        if ( v8 )
        {
          LOBYTE(v7) = v4;
          v2 = ((__int64 (__fastcall *)(__int64, __int64))v8)(a1, v7);
          if ( v2 < 0 )
            break;
        }
      }
      v1 = (unsigned int)(v1 + 1);
    }
  }
  return (unsigned int)v2;
}
