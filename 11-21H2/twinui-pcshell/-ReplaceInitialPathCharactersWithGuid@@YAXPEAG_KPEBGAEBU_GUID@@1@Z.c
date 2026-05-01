/*
 * XREFs of ?ReplaceInitialPathCharactersWithGuid@@YAXPEAG_KPEBGAEBU_GUID@@1@Z @ 0x1803C8FE0
 * Callers:
 *     ?EncodeRelativePath@@YAXPEAG_KPEBU_GUID@@IPEBG@Z @ 0x1803C89DC (-EncodeRelativePath@@YAXPEAG_KPEBU_GUID@@IPEBG@Z.c)
 *     EncodeRelativePath @ 0x1805F37E4 (EncodeRelativePath.c)
 * Callees:
 *     <none>
 */

void __fastcall ReplaceInitialPathCharactersWithGuid(
        unsigned __int16 *a1,
        __int64 a2,
        const unsigned __int16 *a3,
        const struct _GUID *a4,
        unsigned __int64 a5)
{
  StringFromGUID2(a4, a1, a2);
  StringCchCatW(a1, a2, (char *)&a3[a5]);
}
