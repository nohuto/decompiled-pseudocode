/*
 * XREFs of ?GetResizeAreaClient@BamoInputSiteElementProxy@@UEAAPEAVBamoResizeAreaClientProxy@@XZ @ 0x18000DB60
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

struct BamoResizeAreaClientProxy *__fastcall BamoInputSiteElementProxy::GetResizeAreaClient(
        BamoInputSiteElementProxy *this)
{
  __int64 v2; // rdi
  DWORD CurrentThreadId; // ebx
  const char *v4; // r9
  int v5; // eax
  int v7; // eax
  const char *v8; // r9
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 24LL) + 32LL);
  if ( *(_QWORD *)(v2 + 64) )
  {
    CurrentThreadId = GetCurrentThreadId();
    if ( *(_DWORD *)(v2 + 184) != CurrentThreadId )
    {
      v5 = *(_DWORD *)(v2 + 24);
      if ( v5 )
      {
        if ( v5 != CurrentThreadId )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x885,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            v4);
      }
      else
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, int *))(**(_QWORD **)(v2 + 56) + 88LL))(*(_QWORD *)(v2 + 56), &v11);
        if ( v7 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x88F,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            (const char *)(unsigned int)v7,
            v9);
        if ( CurrentThreadId != v11 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            (void *)0x891,
            (unsigned int)"d:\\os\\tools\\BamoCodegen\\Inc\\BamoConnection.inl",
            v8);
      }
    }
  }
  return (struct BamoResizeAreaClientProxy *)*((_QWORD *)this + 31);
}
