/*
 * XREFs of sub_1C00A99CC @ 0x1C00A99CC
 * Callers:
 *     sub_1C003FE70 @ 0x1C003FE70 (sub_1C003FE70.c)
 *     StorPortInitialize @ 0x1C00428F0 (StorPortInitialize.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00249D0 (_guard_dispatch_icall_nop.c)
 */

void sub_1C00A99CC()
{
  PDEVICE_OBJECT v0; // rbx

  v0 = off_1C0093070;
  if ( off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070 )
  {
    if ( dword_1C0093C20 == 4 )
    {
      while ( v0 )
      {
        if ( v0->Vpb )
        {
          ((void (*)(void))qword_1C0093C40)();
          v0->Vpb = 0LL;
        }
        v0 = v0->NextDevice;
      }
    }
    else if ( dword_1C0093C20 == 2 )
    {
      IoWMIRegistrationControl(off_1C0093070, 0x80000002);
    }
    off_1C0093070 = (PDEVICE_OBJECT)&off_1C0093070;
  }
}
