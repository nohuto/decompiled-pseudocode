/*
 * XREFs of ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x18003DE28
 * Callers:
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18003DCEC (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 * Callees:
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180020AB8 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?IsValid@CSid@ATL@@QEBA_NXZ @ 0x18003E210 (-IsValid@CSid@ATL@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x180117DFC (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=5
ATL::CSid *__fastcall ATL::CSid::CSid(ATL::CSid *this, const struct ATL::CSid *a2)
{
  DWORD LengthSid; // eax
  int Error; // eax

  *(_QWORD *)this = &ATL::CSid::`vftable';
  *((_BYTE *)this + 76) = *((_BYTE *)a2 + 76);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  *((_QWORD *)this + 11) = ATL::CSimpleStringT<unsigned short,0>::CloneData((volatile signed __int32 *)(*((_QWORD *)a2 + 11) - 24LL))
                         + 6;
  *((_QWORD *)this + 12) = ATL::CSimpleStringT<unsigned short,0>::CloneData((volatile signed __int32 *)(*((_QWORD *)a2 + 12) - 24LL))
                         + 6;
  *((_QWORD *)this + 13) = ATL::CSimpleStringT<unsigned short,0>::CloneData((volatile signed __int32 *)(*((_QWORD *)a2 + 13) - 24LL))
                         + 6;
  *((_QWORD *)this + 14) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  if ( *((_BYTE *)a2 + 76) )
  {
    if ( !ATL::CSid::IsValid(a2) )
      ATL::AtlThrowImpl(-2147024809);
    LengthSid = GetLengthSid((char *)a2 + 8);
    if ( !CopySid(LengthSid, (char *)this + 8, (char *)a2 + 8) )
    {
      Error = ATL::AtlHresultFromLastError();
      ATL::AtlThrowImpl(Error);
    }
  }
  return this;
}
