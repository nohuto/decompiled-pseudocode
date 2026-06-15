/*
 * XREFs of ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x1800441E8
 * Callers:
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180044D20 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000CCF0 (--2@YAPEAX_K@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012B04 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180016E18 (--3@YAXPEAX_K@Z.c)
 *     ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x180044178 (--0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z.c)
 */

// Hidden C++ exception states: #wind=1
ATL::CDacl::CAccessObjectAce *__fastcall ATL::CDacl::CAccessObjectAce::CAccessObjectAce(
        ATL::CDacl::CAccessObjectAce *this,
        const struct ATL::CSid *a2,
        int a3,
        char a4,
        bool a5,
        const struct _GUID *a6,
        const struct _GUID *a7)
{
  void **v8; // rbx
  struct _GUID **v9; // rdi
  struct _GUID *v10; // rax
  struct _GUID *v11; // rax

  ATL::CDacl::CAccessAce::CAccessAce(this, a2, a3, a4, a5);
  *(_QWORD *)this = &ATL::CDacl::CAccessObjectAce::`vftable';
  v8 = (void **)((char *)this + 152);
  *((_QWORD *)this + 19) = 0LL;
  v9 = (struct _GUID **)((char *)this + 160);
  *((_QWORD *)this + 20) = 0LL;
  if ( a6 )
  {
    v10 = (struct _GUID *)operator new(0x10uLL);
    if ( v10 )
      *v10 = *a6;
    *v8 = v10;
    if ( !*v8 )
      ATL::AtlThrowImpl(-2147024882);
  }
  if ( a7 )
  {
    v11 = (struct _GUID *)operator new(0x10uLL);
    if ( v11 )
      *v11 = *a7;
    *v9 = v11;
    if ( !*v9 )
    {
      operator delete(*v8);
      *v8 = 0LL;
      ATL::AtlThrowImpl(-2147024882);
    }
  }
  return this;
}
