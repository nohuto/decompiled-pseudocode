/*
 * XREFs of ?GetMaxTextureSize@Api@InteropCompositor@Composition@UI@Windows@@UEAAIXZ @ 0x18007F130
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::UI::Composition::InteropCompositor::Api::GetMaxTextureSize(
        Windows::UI::Composition::InteropCompositor::Api *this)
{
  __int64 v1; // rcx

  v1 = (*((_QWORD *)this - 95) + 16LL) & -(__int64)(*((_QWORD *)this - 95) != 0LL);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 480LL))(v1);
}
