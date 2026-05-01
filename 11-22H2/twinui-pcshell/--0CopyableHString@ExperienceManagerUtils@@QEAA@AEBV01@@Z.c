/*
 * XREFs of ??0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z @ 0x18001B6B8
 * Callers:
 *     _lambda_b534361c50cb4958853f48f5e7b1e06a_::_lambda_b534361c50cb4958853f48f5e7b1e06a_ @ 0x18001B278 (_lambda_b534361c50cb4958853f48f5e7b1e06a_--_lambda_b534361c50cb4958853f48f5e7b1e06a_.c)
 *     _lambda_b77313e954014d84b78f3886c1783ac6_::_lambda_b77313e954014d84b78f3886c1783ac6_ @ 0x180285848 (_lambda_b77313e954014d84b78f3886c1783ac6_--_lambda_b77313e954014d84b78f3886c1783ac6_.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18009742C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 */

ExperienceManagerUtils::CopyableHString *__fastcall ExperienceManagerUtils::CopyableHString::CopyableHString(
        ExperienceManagerUtils::CopyableHString *this,
        const struct ExperienceManagerUtils::CopyableHString *a2)
{
  int v3; // eax
  HSTRING v5; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = 0LL;
  v3 = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 2) = v3;
  if ( v3 >= 0 )
  {
    v5 = *(HSTRING *)a2;
    *((_DWORD *)this + 2) = Microsoft::WRL::Wrappers::HString::Set((HSTRING *)this, &v5);
  }
  return this;
}
