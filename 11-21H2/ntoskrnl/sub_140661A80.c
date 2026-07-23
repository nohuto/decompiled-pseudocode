/*
 * XREFs of sub_140661A80 @ 0x140661A80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IoCreateFile @ 0x1406CAD00 (IoCreateFile.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall sub_140661A80(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        OBJECT_ATTRIBUTES *a3,
        struct _IO_STATUS_BLOCK *a4,
        ULONG CreateOptions,
        unsigned int a6,
        unsigned int a7,
        __int64 a8)
{
  __int128 InternalParameters; // [rsp+70h] [rbp-28h] BYREF
  __int64 v10; // [rsp+80h] [rbp-18h]

  InternalParameters = 0LL;
  v10 = 0LL;
  if ( a8 )
  {
    LOBYTE(v10) = 1;
    if ( *((_BYTE *)KeGetCurrentThread() + 562) )
    {
      if ( (a8 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      *((_QWORD *)&InternalParameters + 1) = *(_QWORD *)a8;
    }
    else
    {
      *((_QWORD *)&InternalParameters + 1) = *(_QWORD *)a8;
    }
  }
  *(_QWORD *)&InternalParameters = __PAIR64__(a7, a6);
  return IoCreateFile(
           FileHandle,
           DesiredAccess,
           a3,
           a4,
           0LL,
           0,
           3u,
           2u,
           CreateOptions,
           0LL,
           0,
           CreateFileTypeMailslot,
           &InternalParameters,
           0);
}
