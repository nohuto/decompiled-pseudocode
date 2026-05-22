/*
 * XREFs of memcpy_s_3 @ 0x18016F1FC
 * Callers:
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?FreeProcessHeap@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18016A220 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18009690A (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_3(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9

  if ( !SourceSize )
    return 0;
  if ( Destination )
  {
    if ( DestinationSize >= SourceSize )
    {
      memcpy_0(Destination, L"Microsoft.DiagCallbackConversation", SourceSize);
      return 0;
    }
    memset_0(Destination, 0, DestinationSize);
    *(_DWORD *)_o__errno(v6, v5, v7, v8) = 34;
    invalid_parameter_noinfo();
    return 34;
  }
  else
  {
    *(_DWORD *)_o__errno(0LL, DestinationSize, Source, SourceSize) = 22;
    invalid_parameter_noinfo();
    return 22;
  }
}
