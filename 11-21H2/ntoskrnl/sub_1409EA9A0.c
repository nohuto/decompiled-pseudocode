/*
 * XREFs of sub_1409EA9A0 @ 0x1409EA9A0
 * Callers:
 *     sub_140814660 @ 0x140814660 (sub_140814660.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     PsGetProcessId @ 0x140361530 (PsGetProcessId.c)
 *     ExEnumHandleTable @ 0x14066A8E0 (ExEnumHandleTable.c)
 *     sub_14066B3D8 @ 0x14066B3D8 (sub_14066B3D8.c)
 */

void __fastcall sub_1409EA9A0(struct _EX_RUNDOWN_REF *Process, __int64 a2)
{
  ULONG_PTR v4; // rdi

  v4 = sub_14066B3D8(Process);
  if ( v4 )
  {
    *(_DWORD *)(a2 + 44) = (unsigned int)PsGetProcessId((PEPROCESS)Process);
    *(_BYTE *)(a2 + 68) = (HIDWORD(Process[271].Ptr) & 0x1000) != 0;
    ExEnumHandleTable(v4, (__int64)sub_1409EA760, a2, 0LL);
    sub_1402AD030(Process + 139);
  }
}
