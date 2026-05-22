/*
 * XREFs of ?GetResizeAreaClient@BamoInputSiteElementProxy@@UEAAPEAVBamoResizeAreaClientProxy@@XZ @ 0x180011350
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

struct BamoResizeAreaClientProxy *__fastcall BamoInputSiteElementProxy::GetResizeAreaClient(
        BamoInputSiteElementProxy *this)
{
  __int64 v2; // rbx
  DWORD CurrentThreadId; // eax
  const char *v4; // r9
  DWORD v5; // edi
  int v6; // edx
  int v8; // eax
  const char *v9; // r9
  int v10; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v12; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL);
  if ( *(_QWORD *)(v2 + 64) )
  {
    CurrentThreadId = GetCurrentThreadId();
    v5 = CurrentThreadId;
    if ( *(_DWORD *)(v2 + 184) != CurrentThreadId )
    {
      v6 = *(_DWORD *)(v2 + 24);
      if ( v6 )
      {
        if ( v6 != CurrentThreadId )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x8F5,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            v4);
      }
      else
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(v2 + 56) + 88LL))(*(_QWORD *)(v2 + 56), &v12);
        if ( v8 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x8FF,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            (const char *)(unsigned int)v8,
            v10);
        if ( v5 != v12 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x901,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            v9);
      }
    }
  }
  return (struct BamoResizeAreaClientProxy *)*((_QWORD *)this + 33);
}
