/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800D3548
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1?HidD_FreePreparsedData@@YAE0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800D353C (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_HIDP_PREPARSED_DATA@@P6AEPEAU1@@Z$1-.c)
 *     ??1ConsumerControlNexusDevice@@EEAA@XZ @ 0x1800D3570 (--1ConsumerControlNexusDevice@@EEAA@XZ.c)
 *     ?Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800D743C (-Initialize@HidLampArrayDevice@@AEAAJPEAVPnpDevice@@@Z.c)
 *     ??1PenInterface@@UEAA@XZ @ 0x1801888E0 (--1PenInterface@@UEAA@XZ.c)
 *     ??1HapticInterface@@UEAA@XZ @ 0x18018B148 (--1HapticInterface@@UEAA@XZ.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall wil::details::unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_HIDP_PREPARSED_DATA *,unsigned char (*)(_HIDP_PREPARSED_DATA *),&unsigned char HidD_FreePreparsedData(_HIDP_PREPARSED_DATA *),wistd::integral_constant<unsigned __int64,0>,_HIDP_PREPARSED_DATA *,_HIDP_PREPARSED_DATA *,0,std::nullptr_t>>(
        struct _HIDP_PREPARSED_DATA **a1)
{
  struct _HIDP_PREPARSED_DATA *v1; // rcx
  BOOLEAN result; // al

  v1 = *a1;
  if ( v1 )
    return HidD_FreePreparsedData(v1);
  return result;
}
