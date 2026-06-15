/*
 * XREFs of ??1CPickerHostContext@@QEAA@XZ @ 0x180030188
 * Callers:
 *     ??_GCPickerHostContext@@QEAAPEAXI@Z @ 0x180030200 (--_GCPickerHostContext@@QEAAPEAXI@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180012AF4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??_GCHostedAppInteractivity@@QEAAPEAXI@Z @ 0x18001312C (--_GCHostedAppInteractivity@@QEAAPEAXI@Z.c)
 *     ?FreeNode@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x180014FCC (-FreeNode@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@.c)
 */

void __fastcall CPickerHostContext::~CPickerHostContext(__int64 **this)
{
  __int64 *v2; // rdx
  void **v3; // rdi
  __int64 v4; // rax

  while ( this[2] )
  {
    v2 = *this;
    if ( !*this )
      ATL::AtlThrowImpl(-2147467259);
    v3 = (void **)v2[2];
    v4 = *v2;
    *this = (__int64 *)*v2;
    if ( v4 )
      *(_QWORD *)(v4 + 8) = 0LL;
    else
      this[1] = 0LL;
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::FreeNode((__int64)this, v2);
    if ( v3 )
      CHostedAppInteractivity::`scalar deleting destructor'(v3);
  }
  ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::RemoveAll((__int64 *)this);
}
