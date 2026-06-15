/*
 * XREFs of ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18003E304
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003EB4C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x18003D8B8 (--0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18003F5FC (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall ATL::CDacl::AddAllowedAce(ATL::CDacl *this, const struct ATL::CSid *a2)
{
  ATL::CDacl *v3; // rsi
  HANDLE ProcessHeap; // rax
  ATL::CDacl::CAccessAce *v5; // rax
  ATL::CDacl::CAccessAce *v6; // rbx
  unsigned __int64 v7; // r15
  ATL::CDacl::CAccessAce *v10; // [rsp+68h] [rbp+10h]

  v3 = this;
  if ( !*((_BYTE *)a2 + 76) || !IsValidSid((char *)a2 + 8) )
    return 0;
  if ( *((_BYTE *)v3 + 16) )
  {
    (*(void (__fastcall **)(ATL::CDacl *))(*(_QWORD *)v3 + 16LL))(v3);
    *((_BYTE *)v3 + 16) = 0;
  }
  ProcessHeap = GetProcessHeap();
  v5 = (ATL::CDacl::CAccessAce *)HeapAlloc(ProcessHeap, 0, 0x98uLL);
  try
  {
    if ( v5 )
      v6 = ATL::CDacl::CAccessAce::CAccessAce(v5, a2, 0x10000000, 0, 1);
    else
      v6 = 0LL;
    v10 = v6;
  }
  catch ( ... )
  {
    v3 = this;
    v6 = v10;
  }
  if ( !v6
    || (v7 = *((_QWORD *)v3 + 4), v7 >= *((_QWORD *)v3 + 5))
    && !(unsigned __int8)ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
                           (char *)v3 + 24,
                           v7 + 1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  *(_QWORD *)(*((_QWORD *)v3 + 3) + 8 * v7) = v6;
  ++*((_QWORD *)v3 + 4);
  free(*((void **)v3 + 1));
  *((_QWORD *)v3 + 1) = 0LL;
  return 1;
}
