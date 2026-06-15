/*
 * XREFs of ??1CPickerHostContext@@QEAA@XZ @ 0x180025CEC
 * Callers:
 *     ?OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z @ 0x180026620 (-OnHostedAppStateChanged@PickerHostContextManager@@YAJPEBG_KKW4HOSTED_APP_CHANGED@@PEAPEAX@Z.c)
 *     ?HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z @ 0x180027960 (-HHOSTEDAPPMANAGERCONTEXTRundown@@YAXPEAX@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000958C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?RemoveAll@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAXXZ @ 0x180026964 (-RemoveAll@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity.c)
 */

void __fastcall CPickerHostContext::~CPickerHostContext(CPickerHostContext *this)
{
  bool i; // zf
  __int64 *v3; // rcx
  LPVOID *v4; // rdi
  __int64 v5; // rax

  for ( i = *((_QWORD *)this + 2) == 0LL; !i; i = *((_QWORD *)this + 2) == 0LL )
  {
    v3 = *(__int64 **)this;
    if ( !*(_QWORD *)this )
      ATL::AtlThrowImpl(-2147467259);
    v4 = (LPVOID *)v3[2];
    v5 = *v3;
    *(_QWORD *)this = *v3;
    if ( v5 )
      *(_QWORD *)(v5 + 8) = 0LL;
    else
      *((_QWORD *)this + 1) = 0LL;
    *v3 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = v3;
    i = (*((_QWORD *)this + 2))-- == 1LL;
    if ( i )
      ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::RemoveAll(this);
    if ( v4 )
    {
      if ( *v4 )
      {
        CoTaskMemFree(*v4);
        *v4 = 0LL;
      }
      operator delete(v4);
    }
  }
  ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::RemoveAll(this);
}
