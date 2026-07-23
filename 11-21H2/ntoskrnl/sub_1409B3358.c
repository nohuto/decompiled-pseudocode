/*
 * XREFs of sub_1409B3358 @ 0x1409B3358
 * Callers:
 *     sub_14085BD34 @ 0x14085BD34 (sub_14085BD34.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x14074F6A0 (ObCloseHandle.c)
 *     sub_140831810 @ 0x140831810 (sub_140831810.c)
 */

__int64 __fastcall sub_1409B3358(PVOID *a1, _QWORD *a2)
{
  char v4; // r9
  int v5; // eax
  PVOID v6; // rbx
  NTSTATUS v7; // edi
  __int64 result; // rax
  _QWORD v9[2]; // [rsp+50h] [rbp-10h] BYREF
  PVOID Handle; // [rsp+90h] [rbp+30h] BYREF

  Handle = 0LL;
  v9[1] = L"PartitionSystm";
  v4 = *((_BYTE *)PsInitialSystemProcess + 2170);
  v9[0] = 1966108LL;
  v5 = sub_140831810(PsInitialSystemProcess, (__int64)v9, 0LL, v4, 0LL, 0, 1, 0LL, 0LL, &Handle);
  v6 = Handle;
  v7 = v5;
  if ( v5 >= 0 )
  {
    Handle = 0LL;
    v7 = ObReferenceObjectByHandle(v6, 0, (POBJECT_TYPE)PsProcessType, 0, &Handle, 0LL);
    if ( v7 >= 0 )
    {
      *a1 = Handle;
      result = 0LL;
      *a2 = v6;
      return result;
    }
    if ( Handle )
      ObfDereferenceObject(Handle);
  }
  if ( v6 )
    ObCloseHandle(v6, 0);
  return (unsigned int)v7;
}
