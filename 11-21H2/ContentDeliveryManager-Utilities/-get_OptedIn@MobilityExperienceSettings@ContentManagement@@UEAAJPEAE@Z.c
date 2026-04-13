/*
 * XREFs of ?get_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJPEAE@Z @ 0x180049F30
 * Callers:
 *     <none>
 * Callees:
 *     ?CloudExperienceHostCreateOOBEUserObject@@YAJAEBU_GUID@@0PEAPEAX@Z @ 0x180030AF0 (-CloudExperienceHostCreateOOBEUserObject@@YAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::MobilityExperienceSettings::get_OptedIn(
        const struct _GUID *this,
        const struct _GUID *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  void *v5; // rcx
  int v7; // eax
  void *v8; // rcx
  void *v9; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = 0LL;
  v3 = CloudExperienceHostCreateOOBEUserObject(this, a2, &v11);
  v4 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v3);
    v5 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
    }
    return v4;
  }
  v7 = (*(__int64 (__fastcall **)(void *, const struct _GUID *))(*(_QWORD *)v11 + 32LL))(v11, a2);
  v4 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v7);
    v8 = v11;
    if ( v11 )
    {
      v11 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return v4;
  }
  v9 = v11;
  if ( v11 )
  {
    v11 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  return 0LL;
}
