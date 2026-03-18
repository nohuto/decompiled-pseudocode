/*
 * XREFs of ?Initialize@CKst@@EEAAJXZ @ 0x1800F8AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024060 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CKstBase@@MEAAJXZ @ 0x1800263D0 (-Initialize@CKstBase@@MEAAJXZ.c)
 *     ?InitializeMmcssTask@CKst@@AEAAJXZ @ 0x18002A558 (-InitializeMmcssTask@CKst@@AEAAJXZ.c)
 */

__int64 __fastcall CKst::Initialize(CKst *this)
{
  int v2; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CKstBase::Initialize(this);
  if ( v2 < 0 )
  {
    v4 = 47LL;
  }
  else
  {
    v2 = CKst::InitializeMmcssTask(this);
    if ( v2 >= 0 )
      return 0LL;
    v4 = 50LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
    (const char *)(unsigned int)v2);
  return (unsigned int)v2;
}
