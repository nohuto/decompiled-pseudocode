/*
 * XREFs of Simulator_NotifyNode @ 0x1C0065048
 * Callers:
 *     Simulator_CallbackWorker @ 0x1C0064B90 (Simulator_CallbackWorker.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C00189F4 (DereferenceObjectEx.c)
 *     GetNameSpaceObject @ 0x1C0019AC8 (GetNameSpaceObject.c)
 *     _guard_dispatch_icall_nop @ 0x1C002FD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Simulator_NotifyNode(__int64 a1)
{
  int NameSpaceObject; // eax
  unsigned __int64 v3; // rdi
  unsigned int v4; // ebx
  unsigned __int64 v6; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  NameSpaceObject = GetNameSpaceObject(*(_BYTE **)(a1 + 16), 0LL, (__int64 *)&v6, 0);
  v3 = v6;
  v4 = NameSpaceObject;
  if ( NameSpaceObject >= 0 )
  {
    if ( ghNotify )
      v4 = ghNotify(2LL, *(unsigned int *)(a1 + 24), v6 + 120, qword_1C0082848, 0LL, *(_QWORD *)(a1 + 16));
    else
      v4 = -1073741224;
  }
  DereferenceObjectEx(v3);
  return v4;
}
