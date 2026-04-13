/*
 * XREFs of ?put_OptedIn@MobilityExperienceSettings@ContentManagement@@UEAAJE@Z @ 0x18004ADE0
 * Callers:
 *     <none>
 * Callees:
 *     ?CloudExperienceHostCreateOOBEUserObject@@YAJAEBU_GUID@@0PEAPEAX@Z @ 0x180030AF0 (-CloudExperienceHostCreateOOBEUserObject@@YAJAEBU_GUID@@0PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ContentManagement::MobilityExperienceSettings::put_OptedIn(
        const struct _GUID *this,
        const struct _GUID *a2)
{
  char v2; // di
  int v3; // eax
  __int64 v4; // rdx
  unsigned int v5; // ebx
  void *v6; // rcx
  int v8; // eax
  void *v9; // rcx
  void *v10; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v12; // [rsp+40h] [rbp+18h] BYREF

  v2 = (char)a2;
  v12 = 0LL;
  v3 = CloudExperienceHostCreateOOBEUserObject(this, a2, &v12);
  v5 = v3;
  if ( v3 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x295,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v3);
    v6 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return v5;
  }
  LOBYTE(v4) = v2;
  v8 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v12 + 24LL))(v12, v4);
  v5 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x296,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
      (const char *)(unsigned int)v8);
    v9 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v9 + 16LL))(v9);
    }
    return v5;
  }
  v10 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return 0LL;
}
