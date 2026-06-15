/*
 * XREFs of ??1CSid@ATL@@UEAA@XZ @ 0x18003DE98
 * Callers:
 *     ??1CAccessAce@CDacl@ATL@@UEAA@XZ @ 0x18003DD94 (--1CAccessAce@CDacl@ATL@@UEAA@XZ.c)
 *     ??_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x18003E050 (--_ECAccessAce@CDacl@ATL@@UEAAPEAXI@Z.c)
 *     ??_ECAccessObjectAce@CDacl@ATL@@UEAAPEAXI@Z @ 0x18003E0B0 (--_ECAccessObjectAce@CDacl@ATL@@UEAAPEAXI@Z.c)
 *     ??_GCAce@CAcl@ATL@@UEAAPEAXI@Z @ 0x18003E140 (--_GCAce@CAcl@ATL@@UEAAPEAXI@Z.c)
 *     ??_GCSid@ATL@@UEAAPEAXI@Z @ 0x18003E290 (--_GCSid@ATL@@UEAAPEAXI@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18003E614 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18003EB4C (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     _ATL::CDacl::Copy_::_1_::dtor$0 @ 0x18004696E (_ATL--CDacl--Copy_--_1_--dtor$0.c)
 *     _DetermineLowRightsKeySecurityDescriptor_::_1_::dtor$3 @ 0x180046A34 (_DetermineLowRightsKeySecurityDescriptor_--_1_--dtor$3.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ATL::CSid::~CSid(ATL::CSid *this)
{
  volatile signed __int32 *v1; // rdx
  volatile signed __int32 *v3; // rdx
  volatile signed __int32 *v4; // rdx
  volatile signed __int32 *v5; // rdx

  v1 = (volatile signed __int32 *)(*((_QWORD *)this + 14) - 24LL);
  *(_QWORD *)this = &ATL::CSid::`vftable';
  if ( _InterlockedDecrement(v1 + 4) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v1 + 8LL))(*(_QWORD *)v1);
  v3 = (volatile signed __int32 *)(*((_QWORD *)this + 13) - 24LL);
  if ( _InterlockedDecrement(v3 + 4) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 8LL))(*(_QWORD *)v3);
  v4 = (volatile signed __int32 *)(*((_QWORD *)this + 12) - 24LL);
  if ( _InterlockedDecrement(v4 + 4) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v4 + 8LL))(*(_QWORD *)v4);
  v5 = (volatile signed __int32 *)(*((_QWORD *)this + 11) - 24LL);
  if ( _InterlockedDecrement(v5 + 4) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v5 + 8LL))(*(_QWORD *)v5);
}
