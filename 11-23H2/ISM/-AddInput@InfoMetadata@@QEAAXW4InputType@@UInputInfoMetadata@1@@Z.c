/*
 * XREFs of ?AddInput@InfoMetadata@@QEAAXW4InputType@@UInputInfoMetadata@1@@Z @ 0x1801C308C
 * Callers:
 *     ??0InfoMetadata@@QEAA@XZ @ 0x1801C2B08 (--0InfoMetadata@@QEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800581C4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@?$vector@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@V?$allocator@U?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@std@@@2@@std@@QEAAPEAU?$pair@W4InputType@@UInputInfoMetadata@InfoMetadata@@@1@QEAU21@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@Z @ 0x1801C2694 (--$_Emplace_reallocate@AEAW4InputType@@AEAUInputInfoMetadata@InfoMetadata@@@-$vector@U-$pair@W4I.c)
 *     ??0InputInfoMetadata@InfoMetadata@@QEAA@AEBU01@@Z @ 0x1801C2EAC (--0InputInfoMetadata@InfoMetadata@@QEAA@AEBU01@@Z.c)
 *     ??1InputInfoMetadata@InfoMetadata@@QEAA@XZ @ 0x1801C3034 (--1InputInfoMetadata@InfoMetadata@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall InfoMetadata::AddInput(
        __int64 *a1,
        int a2,
        const struct InfoMetadata::InputInfoMetadata *a3,
        const char *a4)
{
  _DWORD *i; // rax
  _DWORD *v8; // rdx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v11 = a2;
  for ( i = (_DWORD *)*a1; i != (_DWORD *)a1[1]; i += 98 )
  {
    if ( (a2 & *i) != 0 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x3E,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\metadata\\infometadata.cpp",
        a4);
  }
  v8 = (_DWORD *)a1[1];
  if ( v8 == (_DWORD *)a1[2] )
  {
    std::vector<std::pair<enum InputType,InfoMetadata::InputInfoMetadata>>::_Emplace_reallocate<enum InputType &,InfoMetadata::InputInfoMetadata &>(
      a1,
      (__int64)v8,
      &v11,
      a3);
  }
  else
  {
    *v8 = a2;
    InfoMetadata::InputInfoMetadata::InputInfoMetadata((InfoMetadata::InputInfoMetadata *)(v8 + 2), a3);
    a1[1] += 392LL;
  }
  InfoMetadata::InputInfoMetadata::~InputInfoMetadata(a3, v9);
}
