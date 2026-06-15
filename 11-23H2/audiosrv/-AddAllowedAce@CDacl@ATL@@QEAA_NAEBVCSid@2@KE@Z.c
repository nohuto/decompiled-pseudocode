/*
 * XREFs of ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18005EB90
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18005E954 (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180026620 (--2@YAPEAX_K@Z.c)
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x18005EE5C (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 *     ?IsValid@CSid@ATL@@QEBA_NXZ @ 0x18005EF90 (-IsValid@CSid@ATL@@QEBA_NXZ.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18005F038 (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x180063334 (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall ATL::CDacl::AddAllowedAce(ATL::CDacl *this, const struct ATL::CSid *a2, int a3)
{
  _DWORD *v6; // rbx
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !ATL::CSid::IsValid(a2) )
    return 0;
  if ( *((_BYTE *)this + 16) )
  {
    (*(void (__fastcall **)(ATL::CDacl *))(*(_QWORD *)this + 16LL))(this);
    *((_BYTE *)this + 16) = 0;
  }
  v10[0] = 0LL;
  v6 = operator new(0x98uLL);
  v10[1] = v6;
  if ( v6 )
  {
    *(_QWORD *)v6 = &ATL::CAcl::CAce::`vftable';
    ATL::CSid::CSid((ATL::CSid *)(v6 + 2), a2);
    v6[32] = a3;
    *((_BYTE *)v6 + 132) = 0;
    *((_QWORD *)v6 + 17) = 0LL;
    *(_QWORD *)v6 = &ATL::CDacl::CAccessAce::`vftable';
    *((_BYTE *)v6 + 144) = 1;
  }
  else
  {
    v6 = 0LL;
  }
  v10[0] = v6;
  if ( !v6
    || (v7 = *((_QWORD *)this + 4), v7 >= *((_QWORD *)this + 5))
    && !(unsigned __int8)ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
                           (char *)this + 24,
                           v7 + 1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  v8 = *((_QWORD *)this + 3);
  v10[0] = 0LL;
  *(_QWORD *)(v8 + 8 * v7) = v6;
  ++*((_QWORD *)this + 4);
  free(*((void **)this + 1));
  *((_QWORD *)this + 1) = 0LL;
  ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(v10);
  return 1;
}
