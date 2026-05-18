/*
 * XREFs of ?Reset@CKstBase@@QEAAJPEBG@Z @ 0x180008EE8
 * Callers:
 *     DwmpStartWinlogonMouseThread @ 0x180007080 (DwmpStartWinlogonMouseThread.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005DE8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?8V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@YA_NAEBV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@0@$$T@Z @ 0x1800086FC (--$-8V-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?Start@CKstBase@@AEAAJPEBG@Z @ 0x18000912C (-Start@CKstBase@@AEAAJPEBG@Z.c)
 */

__int64 __fastcall CKstBase::Reset(CKstBase *this, const unsigned __int16 *a2)
{
  CKstBase *v2; // rdx
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !wil::operator==<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>((_QWORD *)this + 2) )
    return 0LL;
  v3 = CKstBase::Start(v2, (const unsigned __int16 *)v2);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x25,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
