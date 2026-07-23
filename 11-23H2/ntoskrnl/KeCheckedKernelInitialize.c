/*
 * XREFs of KeCheckedKernelInitialize @ 0x140B17B50
 * Callers:
 *     PipInitializeCoreDriversAndElam @ 0x140B3C670 (PipInitializeCoreDriversAndElam.c)
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x1403D6AC0 (KeExpandKernelStackAndCallout.c)
 *     KdDisableDebugger @ 0x140567BD0 (KdDisableDebugger.c)
 *     KdEnableDebugger @ 0x140567E00 (KdEnableDebugger.c)
 *     sub_140B34828 @ 0x140B34828 (sub_140B34828.c)
 *     KiSwInterruptPresent @ 0x140B679C0 (KiSwInterruptPresent.c)
 *     KiAreCodePatchesAllowed @ 0x140B958F0 (KiAreCodePatchesAllowed.c)
 */

int KeCheckedKernelInitialize()
{
  int result; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  int v5; // edi
  NTSTATUS v6; // ebx
  _DWORD Parameter[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]
  int v9; // [rsp+38h] [rbp-10h]
  char v10; // [rsp+3Ch] [rbp-Ch]

  result = KiSwInterruptPresent();
  if ( result >= 0 && !*(_QWORD *)&MaxDataSize )
  {
    result = KiAreCodePatchesAllowed(v2, v1, v3, v4);
    if ( result )
    {
      result = sub_140B34828();
      if ( result )
      {
        v5 = 0;
        if ( !KdPitchDebugger && !(_BYTE)KdDebuggerNotPresent )
          v5 = 16;
        Parameter[0] = 0;
        v8 = 0LL;
        Parameter[1] = 7;
        v6 = KdDisableDebugger();
        Parameter[2] = 1;
        v9 = v5;
        v10 = 0;
        result = KeExpandKernelStackAndCallout(sub_140B34090, Parameter, 0xC000uLL);
        if ( v6 >= 0 )
          return KdEnableDebugger();
      }
    }
  }
  return result;
}
