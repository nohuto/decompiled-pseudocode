/*
 * XREFs of Simulator_RemoveNode @ 0x1C00654A0
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0064B90 (Simulator_CallbackWorker.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     FreeNameSpaceObjects @ 0x1C00186E0 (FreeNameSpaceObjects.c)
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C0019AC8 (GetNameSpaceObject.c)
 */

__int64 __fastcall Simulator_RemoveNode(__int64 a1)
{
  const UNICODE_STRING *v1; // rdx
  int NameSpaceObject; // ebx
  unsigned __int64 v3; // rbx
  struct _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(const UNICODE_STRING **)(a1 + 16);
  v6 = 0LL;
  DestinationString = 0LL;
  if ( RtlUnicodeStringToAnsiString(&DestinationString, v1, 1u) )
    return 3221225473LL;
  NameSpaceObject = GetNameSpaceObject(DestinationString.Buffer, 0LL, (__int64 *)&v6, 0);
  RtlFreeAnsiString(&DestinationString);
  if ( NameSpaceObject )
    return 3221225473LL;
  v3 = v6;
  if ( !v6 )
    return 3221225473LL;
  DereferenceObjectEx(v6);
  if ( (gdwfAMLI & 4) != 0 )
    AMLIDereferenceHandleEx((volatile signed __int32 *)(v3 + 120));
  else
    FreeNameSpaceObjects(v3);
  return 0LL;
}
