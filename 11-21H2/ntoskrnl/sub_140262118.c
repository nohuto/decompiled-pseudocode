/*
 * XREFs of sub_140262118 @ 0x140262118
 * Callers:
 *     sub_140261CF8 @ 0x140261CF8 (sub_140261CF8.c)
 * Callees:
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 */

__int64 __fastcall sub_140262118(PVOID *a1, void *a2)
{
  NTSTATUS v3; // ebx
  NTSTATUS v4; // eax
  HANDLE v5; // rcx
  HANDLE Handle; // [rsp+60h] [rbp+18h] BYREF
  PVOID Object; // [rsp+68h] [rbp+20h] BYREF

  Handle = 0LL;
  v3 = PsCreateSystemThread(&Handle, 0x1FFFFFu, 0LL, a2, 0LL, (PKSTART_ROUTINE)sub_140253900, a1);
  if ( v3 >= 0 )
  {
    Object = 0LL;
    v4 = ObReferenceObjectByHandle(Handle, 0x1FFFFFu, 0LL, 0, &Object, 0LL);
    v5 = Handle;
    v3 = v4;
    *a1 = Object;
    ObCloseHandle(v5, 0);
  }
  return (unsigned int)v3;
}
