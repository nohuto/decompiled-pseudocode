/*
 * XREFs of ?StringCchCopyNW@@YAJPEA_W_KPEB_W1@Z @ 0x1802F0D60
 * Callers:
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1802FB4F4 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x18035DB30 (-_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellEx.c)
 *     ?_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x18038B7A8 (-_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_W_K@Z @ 0x180444FB8 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@_W@Internal@Windows@@@Internal@Windows@@AEAAJPEB_.c)
 *     ?callback@?$folder_change_reader_t@V?$unique_storage@U?$resource_policy@PEAUfolder_change_reader_state@details@wil@@P6AXPEAU123@@Z$1?delete_folder_change_reader_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@PEAU123@$0A@$$T@details@wil@@@details@wil@@Uerr_exception_policy@3@@wil@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAX1K_KPEAU_TP_IO@@@Z @ 0x180582120 (-callback@-$folder_change_reader_t@V-$unique_storage@U-$resource_policy@PEAUfolder_change_reader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchCopyNW(wchar_t *a1, __int64 a2, const wchar_t *a3, unsigned __int64 a4)
{
  __int64 v4; // r10
  __int64 result; // rax
  __int64 v6; // r9
  signed __int64 v7; // r8
  wchar_t v8; // ax
  wchar_t *v9; // rax

  v4 = a2;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 2147942487LL;
    if ( !a2 )
      return result;
    goto LABEL_12;
  }
  if ( a4 > 0x7FFFFFFE )
  {
    result = 2147942487LL;
LABEL_12:
    *a1 = 0;
    return result;
  }
  v6 = a4 - a2;
  v7 = (char *)a3 - (char *)a1;
  do
  {
    if ( !(v6 + v4) )
      break;
    v8 = *(wchar_t *)((char *)a1 + v7);
    if ( !v8 )
      break;
    *a1++ = v8;
    --v4;
  }
  while ( v4 );
  v9 = a1 - 1;
  if ( v4 )
    v9 = a1;
  *v9 = 0;
  return v4 == 0 ? 0x8007007A : 0;
}
