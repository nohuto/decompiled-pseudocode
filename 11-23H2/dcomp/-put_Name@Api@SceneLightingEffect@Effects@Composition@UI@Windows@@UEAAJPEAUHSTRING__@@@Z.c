/*
 * XREFs of ?put_Name@Api@SceneLightingEffect@Effects@Composition@UI@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x180131C70
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18004434C (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Effects::SceneLightingEffect::Api::put_Name(HSTRING *this, HSTRING a2)
{
  HSTRING v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a2;
  return Microsoft::WRL::Wrappers::HString::Set(this + 9, &v3);
}
