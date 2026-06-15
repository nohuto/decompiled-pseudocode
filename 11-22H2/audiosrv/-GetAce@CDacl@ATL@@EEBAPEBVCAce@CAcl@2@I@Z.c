/*
 * XREFs of ?GetAce@CDacl@ATL@@EEBAPEBVCAce@CAcl@2@I@Z @ 0x1800631C0
 * Callers:
 *     <none>
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE814 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

const struct ATL::CAcl::CAce *__fastcall ATL::CDacl::GetAce(ATL::CDacl *this, unsigned int a2)
{
  if ( (unsigned __int64)a2 >= *((_QWORD *)this + 4) )
    ATL::AtlThrowImpl(-2147024809);
  return *(const struct ATL::CAcl::CAce **)(*((_QWORD *)this + 3) + 8LL * a2);
}
