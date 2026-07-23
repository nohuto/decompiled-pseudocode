/*
 * XREFs of PopInitHiberPersistedRegValues @ 0x1408226A0
 * Callers:
 *     PopInitializeHibernateGlobals @ 0x1408017B4 (PopInitializeHibernateGlobals.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x1406C5400 (RtlGetPersistedStateLocation.c)
 *     PopQueryHiberPersistedRegValue @ 0x140822780 (PopQueryHiberPersistedRegValue.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 PopInitHiberPersistedRegValues()
{
  unsigned int v0; // ebx
  ULONG BufferLengthIn; // edi
  WCHAR *TargetPath; // rsi
  NTSTATUS PersistedStateLocation; // edi
  int **v4; // rsi
  ULONG BufferLengthOut; // [rsp+50h] [rbp+8h] BYREF

  v0 = 0;
  BufferLengthOut = 0;
  if ( RtlGetPersistedStateLocation(
         L"Power",
         0LL,
         L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\POWER",
         LocationTypeRegistry,
         0LL,
         0,
         &BufferLengthOut) == -2147483643 )
  {
    BufferLengthIn = BufferLengthOut;
    TargetPath = (WCHAR *)ExAllocatePool2(256LL, BufferLengthOut, 1919052136LL);
    if ( TargetPath )
    {
      PersistedStateLocation = RtlGetPersistedStateLocation(
                                 L"Power",
                                 0LL,
                                 L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\POWER",
                                 LocationTypeRegistry,
                                 TargetPath,
                                 BufferLengthIn,
                                 &BufferLengthOut);
      if ( PersistedStateLocation < 0 )
      {
        ExFreePoolWithTag(TargetPath, 0x72626968u);
      }
      else
      {
        PopHibernatePersistedRegLocation = TargetPath;
        v4 = &off_140C07318;
        do
        {
          PopQueryHiberPersistedRegValue(v0++, *v4);
          v4 += 3;
        }
        while ( v0 < 4 );
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)PersistedStateLocation;
}
