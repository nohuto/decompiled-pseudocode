/*
 * XREFs of IoGetRequestorProcessId @ 0x140223290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall IoGetRequestorProcessId(PIRP Irp)
{
  PETHREAD Thread; // rdx
  CCHAR ApcEnvironment; // al
  unsigned __int64 v3; // rax

  Thread = Irp->Tail.Overlay.Thread;
  if ( (Irp->Flags & 0x2000) != 0 )
  {
    v3 = Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL;
  }
  else
  {
    if ( !Thread )
      return 0;
    ApcEnvironment = Irp->ApcEnvironment;
    if ( ApcEnvironment )
    {
      if ( ApcEnvironment != 1 )
        return 0;
      v3 = *((_QWORD *)Thread + 23);
    }
    else
    {
      v3 = *((_QWORD *)Thread + 68);
    }
  }
  if ( v3 )
    return *(_DWORD *)(v3 + 1088);
  return 0;
}
