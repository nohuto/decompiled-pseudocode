/*
 * XREFs of ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x180044698
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180043E00 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012AF4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180015E20 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x1800452EC (-memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 */

void __fastcall ATL::CSecurityDesc::Init(ATL::CSecurityDesc *this, struct _SECURITY_DESCRIPTOR *a2)
{
  void *v4; // rax
  signed int Error; // ebx
  signed int v6; // ebx
  unsigned __int64 v7; // [rsp+20h] [rbp-8h]
  WORD pControl; // [rsp+30h] [rbp+8h] BYREF
  DWORD dwBufferLength; // [rsp+38h] [rbp+10h] BYREF
  DWORD dwRevision; // [rsp+40h] [rbp+18h] BYREF

  dwBufferLength = GetSecurityDescriptorLength(a2);
  v4 = malloc(dwBufferLength);
  *((_QWORD *)this + 1) = v4;
  if ( !v4 )
    ATL::AtlThrowImpl(-2147024882);
  if ( !GetSecurityDescriptorControl(a2, &pControl, &dwRevision) )
  {
    Error = ATL::AtlHresultFromLastError();
    free(*((void **)this + 1));
    *((_QWORD *)this + 1) = 0LL;
    ATL::AtlThrowImpl(Error);
  }
  if ( (pControl & 0x8000u) == 0 )
  {
    if ( !MakeSelfRelativeSD(a2, *((PSECURITY_DESCRIPTOR *)this + 1), &dwBufferLength) )
    {
      v6 = ATL::AtlHresultFromLastError();
      free(*((void **)this + 1));
      *((_QWORD *)this + 1) = 0LL;
      ATL::AtlThrowImpl(v6);
    }
  }
  else
  {
    ATL::Checked::memcpy_s(
      *((ATL::Checked **)this + 1),
      (void *)dwBufferLength,
      (unsigned __int64)a2,
      (const void *)dwBufferLength,
      v7);
  }
}
