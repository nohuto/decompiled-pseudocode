/*
 * XREFs of SmProcessProcessStoreInfoRequest @ 0x1409D7334
 * Callers:
 *     SmQueryStoreInformation @ 0x14084134C (SmQueryStoreInformation.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     SmStoreExistsForProcess @ 0x140344D24 (SmStoreExistsForProcess.c)
 *     ObReferenceObjectByHandle @ 0x1406E62F0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessProcessStoreInfoRequest(unsigned __int64 a1, int a2, KPROCESSOR_MODE a3)
{
  PVOID v4; // rdi
  NTSTATUS v5; // ebx
  __int64 v6; // rcx
  HANDLE Handle[2]; // [rsp+30h] [rbp-28h]
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0LL;
  Object = 0LL;
  if ( a2 == 24 )
  {
    if ( a3 )
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      v6 = 0x7FFFFFFF0000LL;
      if ( a1 < 0x7FFFFFFF0000LL )
        v6 = a1;
      *(_BYTE *)v6 = *(_BYTE *)v6;
      *(_BYTE *)(v6 + 23) = *(_BYTE *)(v6 + 23);
    }
    *(_OWORD *)Handle = *(_OWORD *)a1;
    if ( (unsigned __int8)*(_OWORD *)a1 != 1 || ((__int64)Handle[0] & 0xFFFFFF00) != 0 )
    {
      v5 = -1073741811;
    }
    else
    {
      Object = 0LL;
      v5 = ObReferenceObjectByHandle(Handle[1], 0x1000u, (POBJECT_TYPE)PsProcessType, a3, &Object, 0LL);
      v4 = Object;
      if ( v5 >= 0 )
      {
        *(_DWORD *)(a1 + 16) = SmStoreExistsForProcess((__int64)Object);
        v5 = 0;
      }
    }
  }
  else
  {
    v5 = -1073741306;
  }
  if ( v4 )
    ObfDereferenceObject(v4);
  return (unsigned int)v5;
}
