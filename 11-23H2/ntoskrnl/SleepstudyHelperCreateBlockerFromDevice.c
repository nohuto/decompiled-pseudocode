/*
 * XREFs of SleepstudyHelperCreateBlockerFromDevice @ 0x1408440B0
 * Callers:
 *     SleepstudyHelper_RegisterPdoWithParentPdo @ 0x140844000 (SleepstudyHelper_RegisterPdoWithParentPdo.c)
 *     SleepstudyHelper_RegisterPdoWithParentGuid @ 0x1409A24B0 (SleepstudyHelper_RegisterPdoWithParentGuid.c)
 *     SleepstudyHelper_RegisterPdoWithParentHandle @ 0x1409A2570 (SleepstudyHelper_RegisterPdoWithParentHandle.c)
 * Callees:
 *     SleepstudyHelperDestroyBlockerBuilder @ 0x1407A8480 (SleepstudyHelperDestroyBlockerBuilder.c)
 *     SshpGenerateDeviceFriendlyName @ 0x140844194 (SshpGenerateDeviceFriendlyName.c)
 *     SshpGenerateDeviceVerboseDescription @ 0x14084438C (SshpGenerateDeviceVerboseDescription.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall SleepstudyHelperCreateBlockerFromDevice(
        __int64 a1,
        __int128 *a2,
        struct _DEVICE_OBJECT *a3,
        _QWORD *a4)
{
  __int64 Pool2; // rax
  _QWORD *v9; // rdi
  __int128 v10; // xmm0
  int DeviceFriendlyName; // ebx

  if ( a1 && a2 && a3 && a4 )
  {
    Pool2 = ExAllocatePool2(256LL, 96LL, *(unsigned int *)(a1 + 24));
    v9 = (_QWORD *)Pool2;
    if ( Pool2 )
    {
      *(_DWORD *)(Pool2 + 8) = 0;
      *(_QWORD *)Pool2 = a1;
      v10 = *a2;
      *(_QWORD *)(Pool2 + 32) = a3;
      *(_BYTE *)(Pool2 + 88) = 1;
      *(_OWORD *)(Pool2 + 16) = v10;
      DeviceFriendlyName = SshpGenerateDeviceFriendlyName(a3);
      if ( DeviceFriendlyName < 0
        || (DeviceFriendlyName = SshpGenerateDeviceVerboseDescription(a3), DeviceFriendlyName < 0) )
      {
        SleepstudyHelperDestroyBlockerBuilder(v9);
      }
      else
      {
        *a4 = v9;
        return 0;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)DeviceFriendlyName;
}
