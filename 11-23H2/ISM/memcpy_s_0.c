/*
 * XREFs of memcpy_s_0 @ 0x18009AD94
 * Callers:
 *     ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z @ 0x18009A0A0 (-create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEBGI@Z.c)
 *     ?InitPropVariantFromString@@YAJPEBGPEAUtagPROPVARIANT@@@Z @ 0x180189938 (-InitPropVariantFromString@@YAJPEBGPEAUtagPROPVARIANT@@@Z.c)
 *     ?OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x1801B1550 (-OnDeviceRemoval@KeyboardProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1801B1780 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18005655E (_invalid_parameter_noinfo.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     memcpy_0 @ 0x180065920 (memcpy_0.c)
 */

errno_t __cdecl memcpy_s_0(
        void *const Destination,
        const rsize_t DestinationSize,
        const void *const Source,
        const rsize_t SourceSize)
{
  errno_t *v8; // rax
  errno_t v9; // ebx

  if ( !SourceSize )
    return 0;
  if ( !Destination )
    goto LABEL_4;
  if ( Source && DestinationSize >= SourceSize )
  {
    memcpy_0(Destination, Source, SourceSize);
    return 0;
  }
  memset_0(Destination, 0, DestinationSize);
  if ( !Source )
  {
LABEL_4:
    v8 = (errno_t *)_o__errno(Destination, DestinationSize);
    v9 = 22;
LABEL_5:
    *v8 = v9;
    invalid_parameter_noinfo();
    return v9;
  }
  if ( DestinationSize < SourceSize )
  {
    v8 = (errno_t *)_o__errno(Destination, DestinationSize);
    v9 = 34;
    goto LABEL_5;
  }
  return 22;
}
