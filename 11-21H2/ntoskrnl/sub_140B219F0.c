/*
 * XREFs of sub_140B219F0 @ 0x140B219F0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     IoCreateFile @ 0x1406CAD00 (IoCreateFile.c)
 *     NtClose @ 0x140731D50 (NtClose.c)
 *     sub_14084BE78 @ 0x14084BE78 (sub_14084BE78.c)
 */

__int64 __fastcall sub_140B219F0(__int64 a1, __int64 a2, const WCHAR *a3, int a4, __int64 a5, _BYTE *a6)
{
  _BYTE *v6; // rbx
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-9h] BYREF
  UNICODE_STRING v10; // [rsp+90h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+F0h] [rbp+67h] BYREF

  FileHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v6 = a6;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  if ( a6 )
  {
    if ( !*a6 )
    {
      if ( a3 )
      {
        if ( a4 )
        {
          if ( a5 )
          {
            if ( RtlInitUnicodeStringEx(&DestinationString, a3) >= 0 )
            {
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Length = 48;
              ObjectAttributes.Attributes = 64;
              ObjectAttributes.ObjectName = &DestinationString;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( IoCreateFile(
                     &FileHandle,
                     0xC0100000,
                     &ObjectAttributes,
                     &IoStatusBlock,
                     0LL,
                     6u,
                     2u,
                     1u,
                     0x8008u,
                     0LL,
                     0,
                     CreateFileTypeNone,
                     0LL,
                     0x112u) >= 0 )
              {
                ExAcquireResourceExclusiveLite(&stru_140C48520, 1u);
                v10 = DestinationString;
                if ( sub_14084BE78((__int64)FileHandle, (__int128 *)&v10) )
                  *v6 = 1;
                ExReleaseResourceLite(&stru_140C48520);
                NtClose(FileHandle);
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}
