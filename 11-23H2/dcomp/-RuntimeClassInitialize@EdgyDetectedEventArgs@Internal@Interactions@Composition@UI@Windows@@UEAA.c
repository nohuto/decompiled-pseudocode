/*
 * XREFs of ?RuntimeClassInitialize@EdgyDetectedEventArgs@Internal@Interactions@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@PEBUEdgyDetectedParams@@@Z @ 0x1801314B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004434C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Interactions::Internal::EdgyDetectedEventArgs::RuntimeClassInitialize(
        HSTRING *this,
        HSTRING a2,
        const struct EdgyDetectedParams *a3)
{
  __int64 result; // rax
  HSTRING v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  Microsoft::WRL::Wrappers::HString::Set(this + 9, &v6);
  result = 0LL;
  *((_OWORD *)this + 5) = *(_OWORD *)a3;
  *((_OWORD *)this + 6) = *((_OWORD *)a3 + 1);
  *((_OWORD *)this + 7) = *((_OWORD *)a3 + 2);
  this[16] = (HSTRING)*((_QWORD *)a3 + 6);
  return result;
}
