/*
 * XREFs of ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x18004677C
 * Callers:
 *     ?GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ @ 0x180045730 (-GetACE@CAccessAce@CDacl@ATL@@UEBAPEAXXZ.c)
 *     ?GetACE@CAccessObjectAce@CDacl@ATL@@UEBAPEAXXZ @ 0x180045820 (-GetACE@CAccessObjectAce@CDacl@ATL@@UEBAPEAXXZ.c)
 *     ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x180045B28 (-Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180046344 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x180017782 (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x180017838 (memset_0.c)
 *     memcpy_0 @ 0x180048B1C (memcpy_0.c)
 */

void __fastcall ATL::Checked::memcpy_s(ATL::Checked *this, void *a2, const void *a3, void *a4)
{
  unsigned int v4; // ebx

  v4 = 0;
  if ( a4 )
  {
    if ( !this )
      goto LABEL_3;
    if ( a3 && a2 >= a4 )
    {
      memcpy_0(this, a3, (size_t)a4);
      goto LABEL_5;
    }
    memset_0(this, 0, (size_t)a2);
    if ( a3 )
    {
      if ( a2 < a4 )
      {
        v4 = 34;
        *(_DWORD *)_o__errno(this) = 34;
        invalid_parameter_noinfo();
        goto LABEL_5;
      }
    }
    else
    {
LABEL_3:
      *(_DWORD *)_o__errno(this) = 22;
      invalid_parameter_noinfo();
    }
    v4 = 22;
  }
LABEL_5:
  ATL::AtlCrtErrorCheck(v4);
}
