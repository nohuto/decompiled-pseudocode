/*
 * XREFs of ?GetView@CDropFeedbackItem@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1805F3160
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyTo@?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z @ 0x1801177C8 (-CopyTo@-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDropFeedbackItem::GetView(CDropFeedbackItem *this, const struct _GUID *a2, void **a3)
{
  _QWORD *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a3 = 0LL;
  v3 = (_QWORD *)((char *)this + 40);
  if ( !*v3 )
    return 2147943568LL;
  v4 = Microsoft::WRL::ComPtr<IObjectCollection>::CopyTo(v3);
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD4,
    (int)"pcshell\\twinui\\windowarrangementvisuals\\lib\\dropfeedbackitem.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
