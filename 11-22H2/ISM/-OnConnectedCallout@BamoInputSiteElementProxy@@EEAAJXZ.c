/*
 * XREFs of ?OnConnectedCallout@BamoInputSiteElementProxy@@EEAAJXZ @ 0x18000C760
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall BamoInputSiteElementProxy::OnConnectedCallout(BamoInputSiteElementProxy *this)
{
  __int64 v2; // rbp
  char *v3; // rbx
  char v4; // si
  __int64 v5; // rdi
  const char *v6; // r9
  int v7; // eax
  unsigned int v8; // ebp
  int v9; // eax
  int v11; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 4) + 24LL) + 32LL);
  v3 = (char *)this + 16;
  v4 = 3;
  if ( this == (BamoInputSiteElementProxy *)-16LL )
    v4 = 0;
  else
    (**(void (__fastcall ***)(char *))v3)((char *)this + 16);
  v5 = 0LL;
  v11 = 0;
  if ( !*(_DWORD *)(v2 + 188) )
  {
    v5 = v2;
    v11 = v2;
    if ( *(_DWORD *)(v2 + 184) != GetCurrentThreadId() )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x93F,
        (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
        v6);
    *(_DWORD *)(v2 + 184) = 0;
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 16) + 32LL))(*(_QWORD *)(v2 + 16));
  }
  if ( v3 )
  {
    if ( (v4 & 1) != 0 )
    {
      v7 = (*(__int64 (__fastcall **)(BamoInputSiteElementProxy *))(*(_QWORD *)this + 88LL))(this);
      if ( v7 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x76,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v7,
          v11);
    }
  }
  v8 = (*(__int64 (__fastcall **)(BamoInputSiteElementProxy *))(*(_QWORD *)this + 32LL))(this);
  if ( v3 )
  {
    if ( (v4 & 2) != 0 )
    {
      v9 = (*(__int64 (__fastcall **)(BamoInputSiteElementProxy *))(*(_QWORD *)this + 96LL))(this);
      if ( v9 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x87,
          (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
          (const char *)(unsigned int)v9,
          v11);
    }
  }
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v5 + 16) + 24LL))(*(_QWORD *)(v5 + 16));
    *(_DWORD *)(v5 + 184) = GetCurrentThreadId();
  }
  if ( v3 )
    (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 8LL))(v3);
  return v8;
}
