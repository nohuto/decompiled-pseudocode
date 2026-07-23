/*
 * XREFs of sub_14082902C @ 0x14082902C
 * Callers:
 *     sub_140828AC4 @ 0x140828AC4 (sub_140828AC4.c)
 * Callees:
 *     RtlGetPersistedStateLocation @ 0x140782DD0 (RtlGetPersistedStateLocation.c)
 *     sub_14082910C @ 0x14082910C (sub_14082910C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 sub_14082902C()
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
        qword_140C23730 = TargetPath;
        v4 = &off_140C06AB8;
        do
        {
          sub_14082910C(v0++, *v4);
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
