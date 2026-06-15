/*
 * XREFs of ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x18003F758
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003EB4C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18003E430 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z @ 0x180040C20 (-memcpy_s@Checked@ATL@@YAXPEAX_KPEBX1@Z.c)
 */

void __fastcall ATL::CSecurityDesc::Init(ATL::CSecurityDesc *this, struct _SECURITY_DESCRIPTOR *a2)
{
  void *v4; // rax
  signed int v5; // ebx
  signed int Error; // ebx
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
      v5 = ATL::AtlHresultFromLastError();
      free(*((void **)this + 1));
      *((_QWORD *)this + 1) = 0LL;
      ATL::AtlThrowImpl(v5);
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
