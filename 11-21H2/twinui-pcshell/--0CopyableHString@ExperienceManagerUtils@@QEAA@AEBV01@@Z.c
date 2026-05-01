/*
 * XREFs of ??0CopyableHString@ExperienceManagerUtils@@QEAA@AEBV01@@Z @ 0x1800A3714
 * Callers:
 *     _lambda_b534361c50cb4958853f48f5e7b1e06a_::_lambda_b534361c50cb4958853f48f5e7b1e06a_ @ 0x18004C608 (_lambda_b534361c50cb4958853f48f5e7b1e06a_--_lambda_b534361c50cb4958853f48f5e7b1e06a_.c)
 *     _lambda_e93b07e05eb73953e8a67c4fda015070_::_lambda_e93b07e05eb73953e8a67c4fda015070_ @ 0x1800A32C8 (_lambda_e93b07e05eb73953e8a67c4fda015070_--_lambda_e93b07e05eb73953e8a67c4fda015070_.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800A3750 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
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
