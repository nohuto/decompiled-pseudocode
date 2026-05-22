/*
 * XREFs of ?HashData@CommentHasher@Composition@UI@Windows@@AEAA?AU_GUID@@PEBE_K@Z @ 0x180024414
 * Callers:
 *     ?MaybeHashComment@AnimationLoggingManager@Composition@UI@Windows@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18002293C (-MaybeHashComment@AnimationLoggingManager@Composition@UI@Windows@@AEAA-AV-$basic_string@GU-$char.c)
 * Callees:
 *     ?EnsureInitialized@CommentHasher@Composition@UI@Windows@@AEAAXXZ @ 0x1800221F4 (-EnsureInitialized@CommentHasher@Composition@UI@Windows@@AEAAXXZ.c)
 *     ?HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z @ 0x1800244CC (-HRESULTFromNTSTATUS@CDevice@DirectComposition@@SAJJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

struct _GUID *__fastcall Windows::UI::Composition::CommentHasher::HashData(
        BCRYPT_HASH_HANDLE *this,
        struct _GUID *__return_ptr retstr,
        UCHAR *a3,
        ULONG a4)
{
  BCRYPT_HASH_HANDLE v8; // rcx
  NTSTATUS v9; // eax
  int v10; // eax
  NTSTATUS v11; // eax
  int v12; // eax
  struct _GUID *result; // rax
  UCHAR pbOutput[16]; // [rsp+20h] [rbp-28h] BYREF
  __m128i v15; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  Windows::UI::Composition::CommentHasher::EnsureInitialized((Windows::UI::Composition::CommentHasher *)this);
  v8 = this[1];
  *(_OWORD *)pbOutput = 0LL;
  v15 = 0LL;
  v9 = BCryptHashData(v8, a3, a4, 0);
  v10 = DirectComposition::CDevice::HRESULTFromNTSTATUS(v9);
  if ( v10 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x91,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\commenthasher.cpp",
      (const char *)(unsigned int)v10,
      *(int *)pbOutput);
  v11 = BCryptFinishHash(this[1], pbOutput, 0x20u, 0);
  v12 = DirectComposition::CDevice::HRESULTFromNTSTATUS(v11);
  if ( v12 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x9A,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\commenthasher.cpp",
      (const char *)(unsigned int)v12,
      *(int *)pbOutput);
  result = retstr;
  *(__m128i *)retstr = _mm_xor_si128(_mm_loadu_si128((const __m128i *)pbOutput), _mm_loadu_si128(&v15));
  return result;
}
