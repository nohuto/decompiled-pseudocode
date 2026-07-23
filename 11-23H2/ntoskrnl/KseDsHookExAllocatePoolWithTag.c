/*
 * XREFs of KseDsHookExAllocatePoolWithTag @ 0x140581820
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     KsepDsEventPoolAllocate @ 0x1405824D0 (KsepDsEventPoolAllocate.c)
 */

__int64 __fastcall KseDsHookExAllocatePoolWithTag(int a1, int a2, char a3)
{
  __int64 v6; // rbx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v6 = ((__int64 (*)(void))qword_140C06F78)();
  KsepDsEventPoolAllocate(v6, (_DWORD)retaddr, a1, a2, a3);
  return v6;
}
