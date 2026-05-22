/*
 * XREFs of ?Get@EdgyConnection@@SAPEAV1@XZ @ 0x18003B2E8
 * Callers:
 *     ??0EdgyControllerServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x180048008 (--0EdgyControllerServer@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??0EdgyControllerClientProxy@@QEAA@AEBV?$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z @ 0x18014BEE4 (--0EdgyControllerClientProxy@@QEAA@AEBV-$ComPtr@VEdgyControllerServer@@@WRL@Microsoft@@@Z.c)
 *     ??0EdgyLegacyProcessor@@QEAA@XZ @ 0x1801A9DBC (--0EdgyLegacyProcessor@@QEAA@XZ.c)
 * Callees:
 *     ??4?$ComPtr@VEdgyConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVEdgyConnection@@@Z @ 0x18003B370 (--4-$ComPtr@VEdgyConnection@@@WRL@Microsoft@@QEAAAEAV012@PEAVEdgyConnection@@@Z.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x18003B3D0 (--2RefCountedObject@@SAPEAX_K@Z.c)
 */

struct EdgyConnection *EdgyConnection::Get(void)
{
  struct EdgyConnection *result; // rax
  _QWORD *v1; // rax
  void **v2; // rcx

  result = (struct EdgyConnection *)EdgyConnection::s_spThis;
  if ( !EdgyConnection::s_spThis )
  {
    v1 = RefCountedObject::operator new(0x60uLL);
    if ( v1 )
    {
      v1[2] = 0LL;
      v1[3] = 0LL;
      v1[4] = 0LL;
      v1[5] = 0LL;
      v1[6] = 0LL;
      v1[7] = 0LL;
      v1[8] = 0LL;
      *v1 = &RefCountedObject::`vftable';
      v2 = &EdgyConnection::`vftable';
      *v1 = &EdgyConnection::`vftable';
      *((_DWORD *)v1 + 2) = 1;
      v1[9] = 0LL;
      v1[10] = 0LL;
      v1[11] = 0LL;
    }
    Microsoft::WRL::ComPtr<EdgyConnection>::operator=(v2, v1);
    return (struct EdgyConnection *)EdgyConnection::s_spThis;
  }
  return result;
}
