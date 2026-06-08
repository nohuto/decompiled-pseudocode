/*
 * XREFs of HwDebugUpdateProcessorData @ 0x1C0001620
 * Callers:
 *     <none>
 * Callees:
 *     HwDebugUpdateRegister @ 0x1C000ACA8 (HwDebugUpdateRegister.c)
 *     _guard_dispatch_icall_nop @ 0x1C000C510 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HwDebugUpdateProcessorData(__int64 a1, __int64 a2)
{
  __int64 *v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned int i; // r15d
  __int64 result; // rax

  v3 = (__int64 *)(a1 + 8);
  v4 = 2LL;
  do
  {
    v5 = 2LL;
    do
    {
      v6 = *v3;
      if ( *v3 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2528))(
          WdfDriverGlobals,
          *(_QWORD *)(v6 + 280));
        if ( *(_QWORD *)(v6 + 296) != a2 )
        {
          for ( i = 0; i < *(unsigned __int8 *)(v6 + 308); HwDebugUpdateRegister(v6 + 24 * (i++ + 13LL), a2) )
            ;
        }
        result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2536))(
                   WdfDriverGlobals,
                   *(_QWORD *)(v6 + 280));
      }
      ++v3;
      --v5;
    }
    while ( v5 );
    --v4;
  }
  while ( v4 );
  return result;
}
