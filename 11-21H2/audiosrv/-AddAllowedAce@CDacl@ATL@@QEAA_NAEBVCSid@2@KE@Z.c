/*
 * XREFs of ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18003DCEC
 * Callers:
 *     ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18003DAEC (-GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z.c)
 * Callees:
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x18003DE28 (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 *     ?IsValid@CSid@ATL@@QEBA_NXZ @ 0x18003E210 (-IsValid@CSid@ATL@@QEBA_NXZ.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18003E240 (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x18003FBB0 (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall ATL::CDacl::AddAllowedAce(ATL::CDacl *this, const struct ATL::CSid *a2, int a3)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v7; // rbx
  unsigned __int64 v8; // r15
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( !ATL::CSid::IsValid(a2) )
    return 0;
  if ( *((_BYTE *)this + 16) )
  {
    (*(void (__fastcall **)(ATL::CDacl *))(*(_QWORD *)this + 16LL))(this);
    *((_BYTE *)this + 16) = 0;
  }
  v11[0] = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = HeapAlloc(ProcessHeap, 0, 0x98uLL);
  v11[1] = v7;
  if ( v7 )
  {
    *(_QWORD *)v7 = &ATL::CAcl::CAce::`vftable';
    ATL::CSid::CSid((ATL::CSid *)(v7 + 2), a2);
    v7[32] = a3;
    *((_BYTE *)v7 + 132) = 0;
    *((_QWORD *)v7 + 17) = 0LL;
    *(_QWORD *)v7 = &ATL::CDacl::CAccessAce::`vftable';
    *((_BYTE *)v7 + 144) = 1;
  }
  else
  {
    v7 = 0LL;
  }
  v11[0] = v7;
  if ( !v7
    || (v8 = *((_QWORD *)this + 4), v8 >= *((_QWORD *)this + 5))
    && !(unsigned __int8)ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
                           (char *)this + 24,
                           v8 + 1) )
  {
    ATL::AtlThrowImpl(-2147024882);
  }
  v9 = *((_QWORD *)this + 3);
  v11[0] = 0LL;
  *(_QWORD *)(v9 + 8 * v8) = v7;
  ++*((_QWORD *)this + 4);
  free(*((void **)this + 1));
  *((_QWORD *)this + 1) = 0LL;
  ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(v11);
  return 1;
}
