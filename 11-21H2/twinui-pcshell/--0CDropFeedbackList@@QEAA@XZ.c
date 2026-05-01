/*
 * XREFs of ??0CDropFeedbackList@@QEAA@XZ @ 0x18052D600
 * Callers:
 *     ??$MakeAndInitialize@VCDropFeedbackList@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCDropFeedbackList@@@Z @ 0x18052D2C0 (--$MakeAndInitialize@VCDropFeedbackList@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCDropFeedbackLi.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppLayoutOperationItem@@@Details@WRL@Microsoft@@IEAA@XZ @ 0x1802384D0 (--0-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAppLayoutOperationIte.c)
 */

CDropFeedbackList *__fastcall CDropFeedbackList::CDropFeedbackList(CDropFeedbackList *this)
{
  CDropFeedbackList *result; // rax

  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAppLayoutOperationItem>::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAppLayoutOperationItem>(this);
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IDropFeedbackArray>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)this = &CDropFeedbackList::`vftable';
  result = this;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  return result;
}
