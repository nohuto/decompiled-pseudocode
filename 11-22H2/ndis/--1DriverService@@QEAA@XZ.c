/*
 * XREFs of ??1DriverService@@QEAA@XZ @ 0x1C0140FA8
 * Callers:
 *     ??_GKModule@@QEAAPEAXI@Z @ 0x1C00D0184 (--_GKModule@@QEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DriverService::~DriverService(DriverService *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 4);
  if ( v2 )
    ObfDereferenceObject(v2);
  v3 = *(void **)this;
  *(_QWORD *)this = 0LL;
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
