/*
 * XREFs of memcmp_0 @ 0x14002A5C3
 * Callers:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x14001990C (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?IsEqual@CAudioMediaType@@UEAAJPEAUIAudioMediaType@@PEAK@Z @ 0x140029CD0 (-IsEqual@CAudioMediaType@@UEAAJPEAUIAudioMediaType@@PEAK@Z.c)
 *     ?Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z @ 0x140082D94 (-Compare@UsageIndexProperty@details_abi@wil@@QEBAHPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
int __cdecl memcmp_0(const void *Buf1, const void *Buf2, size_t Size)
{
  return memcmp(Buf1, Buf2, Size);
}
