/*
 * XREFs of sub_140831BF4 @ 0x140831BF4
 * Callers:
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     sub_14025E928 @ 0x14025E928 (sub_14025E928.c)
 *     ExInitializeLookasideListEx @ 0x1402A0360 (ExInitializeLookasideListEx.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1403C7488 @ 0x1403C7488 (sub_1403C7488.c)
 *     MmAdjustWorkingSetSize @ 0x1403C7500 (MmAdjustWorkingSetSize.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x14041BAE0 (ZwSetInformationProcess.c)
 *     ObOpenObjectByPointer @ 0x1407277A0 (ObOpenObjectByPointer.c)
 *     sub_1408315A4 @ 0x1408315A4 (sub_1408315A4.c)
 *     sub_140831810 @ 0x140831810 (sub_140831810.c)
 *     sub_1408339FC @ 0x1408339FC (sub_1408339FC.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 sub_140831BF4()
{
  HANDLE v0; // rdi
  int v1; // ebx
  __int64 v2; // rcx
  __int64 v3; // rdx
  PVOID Object; // [rsp+58h] [rbp-9h] BYREF
  HANDLE ProcessHandle; // [rsp+60h] [rbp-1h] BYREF
  HANDLE v7; // [rsp+68h] [rbp+7h] BYREF
  HANDLE ProcessInformation[2]; // [rsp+70h] [rbp+Fh] BYREF
  _OWORD v9[3]; // [rsp+80h] [rbp+1Fh] BYREF

  memset(v9, 0, sizeof(v9));
  Object = 0LL;
  v0 = 0LL;
  ProcessHandle = 0LL;
  v7 = 0LL;
  *(_OWORD *)ProcessInformation = 0LL;
  sub_14025E928();
  v1 = sub_1408315A4(&Object);
  if ( v1 >= 0 )
  {
    v1 = sub_140831810(
           PsInitialSystemProcess,
           (__int64)&stru_140D3D288,
           0LL,
           *((_BYTE *)PsInitialSystemProcess + 2170),
           0LL,
           0,
           0,
           0LL,
           0LL,
           &ProcessHandle);
    if ( v1 < 0
      || (v1 = ObOpenObjectByPointer(Object, 0x200u, 0LL, 1u, (POBJECT_TYPE)SeTokenObjectType, 0, ProcessInformation),
          v1 < 0) )
    {
      v0 = ProcessHandle;
    }
    else
    {
      v0 = ProcessHandle;
      v1 = ZwSetInformationProcess(ProcessHandle, ProcessAccessToken, ProcessInformation, 0x10u);
      if ( v1 >= 0 )
      {
        v1 = sub_1403C7488(v2, v0);
        if ( v1 >= 0 )
        {
          v0 = 0LL;
          sub_140AB4550(v9);
          MmAdjustWorkingSetSize(0x4000000uLL, 0x4000000uLL, 0, 1);
          sub_140AB4580(v9);
          KeInitializeEvent(&stru_140C490C0, SynchronizationEvent, 0);
          v1 = sub_1408339FC(&v7, v3, sub_140864AC0, 0LL);
          if ( v1 >= 0 )
          {
            v1 = ExInitializeLookasideListEx(
                   (PLOOKASIDE_LIST_EX)&Lookaside,
                   (PALLOCATE_FUNCTION_EX)Allocate,
                   (PFREE_FUNCTION_EX)SeFreePrivileges,
                   PagedPool,
                   0,
                   0x1000uLL,
                   0x42424D43u,
                   0);
            if ( v1 >= 0 )
              v1 = 0;
          }
        }
      }
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( ProcessInformation[0] )
    ZwClose(ProcessInformation[0]);
  if ( v7 )
    ZwClose(v7);
  if ( v0 )
    ZwClose(v0);
  return (unsigned int)v1;
}
