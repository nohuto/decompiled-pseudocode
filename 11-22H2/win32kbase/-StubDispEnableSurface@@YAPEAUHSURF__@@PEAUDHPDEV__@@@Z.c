/*
 * XREFs of ?StubDispEnableSurface@@YAPEAUHSURF__@@PEAUDHPDEV__@@@Z @ 0x1C00B0970
 * Callers:
 *     <none>
 * Callees:
 *     EngCreateDeviceSurface @ 0x1C0062240 (EngCreateDeviceSurface.c)
 *     bDeleteSurface @ 0x1C0062930 (bDeleteSurface.c)
 *     EngAssociateSurface @ 0x1C00B09D0 (EngAssociateSurface.c)
 */

__int64 __fastcall StubDispEnableSurface(struct DHPDEV__ *a1)
{
  HSURF DeviceSurface; // rax
  __int64 v3; // rbx

  DeviceSurface = EngCreateDeviceSurface(0LL, *(SIZEL *)(a1 + 4), 6u);
  v3 = (__int64)DeviceSurface;
  if ( DeviceSurface )
  {
    if ( EngAssociateSurface(DeviceSurface, *(HDEV *)a1, 0x479u) )
    {
      *((_QWORD *)a1 + 1) = v3;
      return v3;
    }
    bDeleteSurface(v3);
  }
  return 0LL;
}
