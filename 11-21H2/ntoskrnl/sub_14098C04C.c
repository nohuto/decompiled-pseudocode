/*
 * XREFs of sub_14098C04C @ 0x14098C04C
 * Callers:
 *     sub_1409977F0 @ 0x1409977F0 (sub_1409977F0.c)
 *     sub_14099F3A0 @ 0x14099F3A0 (sub_14099F3A0.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     sub_1402D30A0 @ 0x1402D30A0 (sub_1402D30A0.c)
 */

bool __fastcall sub_14098C04C(__int64 a1)
{
  struct _DEVICE_OBJECT *v1; // rbx
  PDEVICE_OBJECT v2; // rax
  bool v3; // bl

  v1 = *(struct _DEVICE_OBJECT **)(a1 + 32);
  v2 = sub_1402D30A0(v1, 0x78466F50u);
  v3 = v1 == v2 && v1->DriverObject == DriverObject;
  ObfDereferenceObject(v2);
  return v3;
}
