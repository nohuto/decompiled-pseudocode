/*
 * XREFs of sub_1C00A9CB8 @ 0x1C00A9CB8
 * Callers:
 *     StorPortInitialize @ 0x1C00428F0 (StorPortInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

void sub_1C00A9CB8()
{
  struct _DEVICE_OBJECT *v0; // rbx
  void (__fastcall *v1)(struct _DRIVER_OBJECT *, _QWORD, void (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, PVPB *); // rax

  v0 = &stru_1C0093880;
  if ( off_1C0093070 != &stru_1C0093880 )
  {
    off_1C0093070 = &stru_1C0093880;
    if ( dword_1C0093C20 == 4 )
    {
      do
      {
        v1 = (void (__fastcall *)(struct _DRIVER_OBJECT *, _QWORD, void (__fastcall *)(__int64, unsigned __int8, __int64 *, __int64), struct _DEVICE_OBJECT *, PVPB *))qword_1C0093C00;
        v0->Vpb = 0LL;
        v1(v0->DriverObject, 0LL, sub_1C00435D0, v0, &v0->Vpb);
        v0 = v0->NextDevice;
      }
      while ( v0 );
    }
    else if ( dword_1C0093C20 == 2 )
    {
      *(_QWORD *)&stru_1C0093880.Type = &sub_1C00A9E90;
      IoWMIRegistrationControl(&stru_1C0093880, 0x80010001);
    }
  }
}
