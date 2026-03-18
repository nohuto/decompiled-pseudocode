/*
 * XREFs of ExpDeleteSiloState @ 0x140608F80
 * Callers:
 *     PspDeleteServerSiloGlobals @ 0x1409ACE90 (PspDeleteServerSiloGlobals.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     sub_1407AEAD8 @ 0x1407AEAD8 (sub_1407AEAD8.c)
 *     ?Free@SC_ENV@@SAXPEAX@Z @ 0x1407DEA50 (-Free@SC_ENV@@SAXPEAX@Z.c)
 *     MmUnmapViewInSystemSpace @ 0x1407E0410 (MmUnmapViewInSystemSpace.c)
 *     ExWaitForCallBacks @ 0x1409FB520 (ExWaitForCallBacks.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

void __fastcall ExpDeleteSiloState(PVOID P)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rcx
  PVOID *v6; // rax
  PVOID Pa; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(void **)P;
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x69534C53u);
    *(_QWORD *)P = 0LL;
  }
  v3 = (void *)*((_QWORD *)P + 2);
  if ( v3 )
  {
    ObfDereferenceObjectWithTag(v3, 0x746C6644u);
    *((_QWORD *)P + 2) = 0LL;
  }
  v4 = (void *)*((_QWORD *)P + 5854);
  if ( v4 )
  {
    MmUnmapViewInSystemSpace(v4);
    *((_QWORD *)P + 5854) = 0LL;
  }
  v5 = *((_QWORD *)P + 5856);
  if ( v5 )
  {
    ExWaitForCallBacks(v5);
    SC_ENV::Free(*((void **)P + 5856));
    *((_QWORD *)P + 5856) = 0LL;
  }
  v6 = (PVOID *)*((_QWORD *)P + 5877);
  if ( v6 )
  {
    Pa = *v6;
    if ( (int)sub_1407AEAD8(&Pa) >= 0 )
      ExFreePoolWithTag(Pa, 0x20534C53u);
    ExFreePoolWithTag(*((PVOID *)P + 5877), 0x20534C53u);
    *((_QWORD *)P + 5877) = 0LL;
  }
  ExFreePoolWithTag(P, 0x69534C53u);
}
