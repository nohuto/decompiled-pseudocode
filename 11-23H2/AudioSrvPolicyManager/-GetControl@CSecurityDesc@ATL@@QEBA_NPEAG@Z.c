/*
 * XREFs of ?GetControl@CSecurityDesc@ATL@@QEBA_NPEAG@Z @ 0x180015DE0
 * Callers:
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180043780 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ @ 0x1800447EC (-MakeAbsolute@CSecurityDesc@ATL@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ATL::CSecurityDesc::GetControl(ATL::CSecurityDesc *this, unsigned __int16 *a2)
{
  void *v2; // rcx
  bool result; // al
  DWORD dwRevision; // [rsp+38h] [rbp+10h] BYREF

  result = a2
        && (*a2 = 0, (v2 = (void *)*((_QWORD *)this + 1)) != 0LL)
        && GetSecurityDescriptorControl(v2, a2, &dwRevision);
  return result;
}
