/*
 * XREFs of ?_ClearDeadzoneAreas@RIMDeadzone@@AEAAXXZ @ 0x1C01A2AF0
 * Callers:
 *     ?Initialize@RIMDeadzone@@QEAAJXZ @ 0x1C01A23E4 (-Initialize@RIMDeadzone@@QEAAJXZ.c)
 *     ?IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS@@@Z @ 0x1C01A243C (-IsInDeadzone@RIMDeadzone@@QEAAHAEBUDEVICE_OUTPUT_CONFIG@@AEBUtagPOINTER_INFO@@01W4tagHANDEDNESS.c)
 *     ?Release@RIMDeadzone@@QEAAXXZ @ 0x1C01A293C (-Release@RIMDeadzone@@QEAAXXZ.c)
 * Callees:
 *     ?Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z @ 0x1C00891DC (-Free@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAX@Z.c)
 */

void __fastcall RIMDeadzone::_ClearDeadzoneAreas(RIMDeadzone *this)
{
  bool v2; // zf
  char *v3; // rdx
  __int64 v4; // rdi
  char *v5; // r8

  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)((char *)this + 44) = 0LL;
  v2 = *((_DWORD *)this + 4) == 2;
  *(_DWORD *)this = 1;
  if ( v2 )
  {
    v3 = (char *)*((_QWORD *)this + 3);
    if ( v3 )
    {
      v4 = 0LL;
      if ( !*((_DWORD *)this + 8) )
        goto LABEL_9;
      v5 = (char *)*((_QWORD *)this + 3);
      do
      {
        if ( *(_QWORD *)&v3[24 * v4 + 8] )
        {
          NSInstrumentation::CLeakTrackingAllocator::Free(
            (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
            *(char **)&v3[24 * v4 + 8]);
          v3 = (char *)*((_QWORD *)this + 3);
          v5 = v3;
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *((_DWORD *)this + 8) );
      v3 = v5;
      if ( v5 )
LABEL_9:
        NSInstrumentation::CLeakTrackingAllocator::Free(
          (NSInstrumentation::CLeakTrackingAllocator *)gpLeakTrackingAllocator,
          v3);
    }
  }
  *((_OWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
}
