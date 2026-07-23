/*
 * XREFs of sub_140B270C4 @ 0x140B270C4
 * Callers:
 *     sub_140B0348C @ 0x140B0348C (sub_140B0348C.c)
 * Callees:
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140732CC0 (ObReferenceObjectByHandleWithTag.c)
 *     sub_140858740 @ 0x140858740 (sub_140858740.c)
 *     sub_140858820 @ 0x140858820 (sub_140858820.c)
 *     sub_140B272B0 @ 0x140B272B0 (sub_140B272B0.c)
 */

__int64 sub_140B270C4()
{
  NTSTATUS v0; // ebx
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE ThreadHandle; // [rsp+80h] [rbp+10h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  ThreadHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  sub_140B272B0(3LL);
  sub_140858820((__int64)&stru_140C24040);
  if ( (dword_140C24070 & 3) != 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v0 = PsCreateSystemThread(
           &ThreadHandle,
           0,
           &ObjectAttributes,
           0LL,
           0LL,
           (PKSTART_ROUTINE)sub_140845880,
           &stru_140C24040);
    if ( v0 >= 0 )
    {
      v0 = ObReferenceObjectByHandleWithTag(
             ThreadHandle,
             0x1FFFFFu,
             (POBJECT_TYPE)PsThreadType,
             0,
             0x67446F50u,
             &qword_140C24050,
             0LL);
      ZwClose(ThreadHandle);
      if ( v0 >= 0 )
      {
        if ( (unsigned int)dword_140C0C634 >= 3 )
          dword_140C0C634 = 1;
        stru_140C24040.HandleAttributes |= 1u;
        v0 = 0;
      }
    }
  }
  else
  {
    v0 = -1073741637;
  }
  sub_140858740(v0);
  return (unsigned int)v0;
}
