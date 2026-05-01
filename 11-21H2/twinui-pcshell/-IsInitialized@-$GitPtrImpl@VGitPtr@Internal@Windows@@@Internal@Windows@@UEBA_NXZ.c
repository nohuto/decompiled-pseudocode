/*
 * XREFs of ?IsInitialized@?$GitPtrImpl@VGitPtr@Internal@Windows@@@Internal@Windows@@UEBA_NXZ @ 0x18030E8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall Windows::Internal::GitPtrImpl<Windows::Internal::GitPtr>::IsInitialized(__int64 a1)
{
  return *(_DWORD *)(a1 + 8) != 0;
}
