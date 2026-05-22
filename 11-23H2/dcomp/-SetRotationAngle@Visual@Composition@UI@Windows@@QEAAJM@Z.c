/*
 * XREFs of ?SetRotationAngle@Visual@Composition@UI@Windows@@QEAAJM@Z @ 0x18010BFD8
 * Callers:
 *     ?put_RotationAngle@Api@Visual@Composition@UI@Windows@@UEAAJM@Z @ 0x18010D720 (-put_RotationAngle@Api@Visual@Composition@UI@Windows@@UEAAJM@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$SetAnimatablePropertyWorker@V?$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@234@@ProxyObject@Composition@UI@Windows@@IEAAJAEAV?$PropertyUpdater@M@123@AEBVPropertyUpdateInfo@123@@Z @ 0x18004D300 (--$SetAnimatablePropertyWorker@V-$PropertyUpdater@M@Composition@UI@Windows@@VPropertyUpdateInfo@.c)
 *     ?EnsureComponentTransform@Visual@Composition@UI@Windows@@AEAAJXZ @ 0x18005B258 (-EnsureComponentTransform@Visual@Composition@UI@Windows@@AEAAJXZ.c)
 *     ?GetReference@CSparseStorage@@QEBAPEAXI@Z @ 0x18007CDA8 (-GetReference@CSparseStorage@@QEBAPEAXI@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::SetRotationAngle(Windows::UI::Composition::Visual *this, float a2)
{
  CSparseStorage *v2; // rdi
  __int64 *Reference; // rcx
  Windows::UI::Composition::Visual *v4; // r9
  int updated; // ebx
  __int64 v6; // rdx
  _QWORD v8[4]; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  float v10; // [rsp+60h] [rbp+8h] BYREF
  void **v11; // [rsp+70h] [rbp+18h] BYREF

  v2 = (Windows::UI::Composition::Visual *)((char *)this + 112);
  Reference = (__int64 *)CSparseStorage::GetReference((Windows::UI::Composition::Visual *)((char *)this + 112), 8);
  if ( !Reference )
  {
    if ( a2 == 0.0 )
      return 0LL;
    updated = Windows::UI::Composition::Visual::EnsureComponentTransform(v4);
    if ( updated < 0 )
    {
      v6 = 839LL;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v6,
        (int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
    Reference = (__int64 *)CSparseStorage::GetReference(v2, 8);
  }
  v10 = a2;
  v8[0] = Reference + 34;
  v8[1] = &v10;
  v8[2] = &v10;
  v11 = (void **)&Windows::UI::Composition::ComponentTransform3D::sc_RotationAngle;
  updated = Windows::UI::Composition::ProxyObject::SetAnimatablePropertyWorker<Windows::UI::Composition::PropertyUpdater<float>,Windows::UI::Composition::PropertyUpdateInfo>(
              Reference,
              (__int64)v8,
              &v11);
  if ( updated < 0 )
  {
    v6 = 843LL;
    goto LABEL_5;
  }
  return 0LL;
}
