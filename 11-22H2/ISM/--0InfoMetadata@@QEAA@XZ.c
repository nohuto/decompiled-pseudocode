/*
 * XREFs of ??0InfoMetadata@@QEAA@XZ @ 0x1801D0378
 * Callers:
 *     std::call_once__lambda_ebc94a938681f7b1550f88ebc61e0745___ @ 0x1801D0150 (std--call_once__lambda_ebc94a938681f7b1550f88ebc61e0745___.c)
 * Callees:
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ??0InputInfoMetadata@InfoMetadata@@QEAA@$$QEAU01@@Z @ 0x1801D050C (--0InputInfoMetadata@InfoMetadata@@QEAA@$$QEAU01@@Z.c)
 *     ??1InputInfoMetadata@InfoMetadata@@QEAA@XZ @ 0x1801D08A4 (--1InputInfoMetadata@InfoMetadata@@QEAA@XZ.c)
 *     ?AddInput@InfoMetadata@@QEAAXW4InputType@@UInputInfoMetadata@1@@Z @ 0x1801D08FC (-AddInput@InfoMetadata@@QEAAXW4InputType@@UInputInfoMetadata@1@@Z.c)
 */

// Hidden C++ exception states: #wind=2
InfoMetadata *__fastcall InfoMetadata::InfoMetadata(InfoMetadata *this)
{
  __int64 v2; // rax
  _BYTE v4[384]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v5[8]; // [rsp+1B0h] [rbp+B0h] BYREF
  _QWORD v6[8]; // [rsp+1F0h] [rbp+F0h] BYREF
  _QWORD v7[8]; // [rsp+230h] [rbp+130h] BYREF
  _QWORD v8[8]; // [rsp+270h] [rbp+170h] BYREF
  _QWORD v9[8]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _QWORD v10[8]; // [rsp+2F0h] [rbp+1F0h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  v5[0] = &std::_Func_impl_no_alloc<void (*)(InputInfo *,std::unordered_set<unsigned long> &,InputInfo *),void,InputInfo *,std::unordered_set<unsigned long> &,InputInfo *>::`vftable';
  v5[1] = PointerMetadata::Split;
  v5[7] = v5;
  v6[0] = &std::_Func_impl_no_alloc<void (*)(InputInfo *,std::unordered_set<unsigned long> &,InputInfo *),void,InputInfo *,std::unordered_set<unsigned long> &,InputInfo *>::`vftable';
  v6[1] = PointerMetadata::Copy;
  v6[7] = v6;
  v7[0] = &std::_Func_impl_no_alloc<void (*)(InputInfo *,unsigned long *),void,InputInfo *,unsigned long *>::`vftable';
  v7[1] = PointerMetadata::Count;
  v7[7] = v7;
  v8[0] = &std::_Func_impl_no_alloc<void (*)(InputInfo *,std::unordered_set<unsigned long> &),void,InputInfo *,std::unordered_set<unsigned long> &>::`vftable';
  v8[1] = PointerMetadata::List;
  v8[7] = v8;
  v9[0] = &std::_Func_impl_no_alloc<void (*)(InputInfo *,std::unordered_set<unsigned long> &),void,InputInfo *,std::unordered_set<unsigned long> &>::`vftable';
  v9[1] = PointerMetadata::Make;
  v9[7] = v9;
  v10[0] = &std::_Func_impl_no_alloc<void (*)(InputInfo *,std::unordered_set<unsigned long> &),void,InputInfo *,std::unordered_set<unsigned long> &>::`vftable';
  v10[1] = PointerMetadata::Break;
  v10[7] = v10;
  v2 = InfoMetadata::InputInfoMetadata::InputInfoMetadata(v4, v5);
  InfoMetadata::AddInput(this, 27LL, v2);
  InfoMetadata::InputInfoMetadata::~InputInfoMetadata((InfoMetadata::InputInfoMetadata *)v5);
  return this;
}
