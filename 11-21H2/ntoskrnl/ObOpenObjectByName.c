/*
 * XREFs of ObOpenObjectByName @ 0x14067C970
 * Callers:
 *     sub_14067AE50 @ 0x14067AE50 (sub_14067AE50.c)
 *     sub_14067BCBC @ 0x14067BCBC (sub_14067BCBC.c)
 *     sub_14067C690 @ 0x14067C690 (sub_14067C690.c)
 *     sub_14067C760 @ 0x14067C760 (sub_14067C760.c)
 *     sub_14067C810 @ 0x14067C810 (sub_14067C810.c)
 *     sub_14067C8E0 @ 0x14067C8E0 (sub_14067C8E0.c)
 *     sub_14067C9E8 @ 0x14067C9E8 (sub_14067C9E8.c)
 *     ExCreateCallback @ 0x1406E0E40 (ExCreateCallback.c)
 *     sub_1406E4870 @ 0x1406E4870 (sub_1406E4870.c)
 *     sub_14074A178 @ 0x14074A178 (sub_14074A178.c)
 *     sub_14083451C @ 0x14083451C (sub_14083451C.c)
 *     sub_140856DC0 @ 0x140856DC0 (sub_140856DC0.c)
 *     sub_1408617D0 @ 0x1408617D0 (sub_1408617D0.c)
 *     sub_14090E880 @ 0x14090E880 (sub_14090E880.c)
 *     sub_140925ED0 @ 0x140925ED0 (sub_140925ED0.c)
 *     sub_140936D60 @ 0x140936D60 (sub_140936D60.c)
 *     sub_1409FB550 @ 0x1409FB550 (sub_1409FB550.c)
 *     sub_140A06EF0 @ 0x140A06EF0 (sub_140A06EF0.c)
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     PsGetCurrentSilo @ 0x140347D50 (PsGetCurrentSilo.c)
 *     ObOpenObjectByNameEx @ 0x1407CAF90 (ObOpenObjectByNameEx.c)
 */

__int64 __fastcall ObOpenObjectByName(__int64 a1, __int64 a2, char a3, __int64 a4, int a5, __int64 a6, __int64 a7)
{
  __int64 CurrentSilo; // rax
  __int64 v12; // r8

  CurrentSilo = PsGetCurrentSilo();
  LOBYTE(v12) = a3;
  return ObOpenObjectByNameEx(a1, a2, v12, a4, a5, a6, CurrentSilo, a7);
}
