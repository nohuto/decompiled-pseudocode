/*
 * XREFs of GetNameFromPath @ 0x1C004E0BC
 * Callers:
 *     FxLibraryCommonRegisterClient @ 0x1C002C2B8 (FxLibraryCommonRegisterClient.c)
 *     ?IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z @ 0x1C002CE74 (-IsCompanionRequiredForDevice@FxCompanionLibrary@@QEAAEPEAVFxDevice@@PEAPEBG@Z.c)
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C002D3FC (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 *     GetImageName @ 0x1C004D584 (GetImageName.c)
 * Callees:
 *     <none>
 */

void __fastcall GetNameFromPath(const _UNICODE_STRING *Path, _UNICODE_STRING *Name)
{
  __int64 Length; // rcx
  wchar_t *v4; // rax
  wchar_t *v5; // rax
  unsigned __int16 v6; // cx
  unsigned __int16 v7; // cx

  if ( Path->Length >= 2u )
  {
    Length = Path->Length;
    v4 = Path->Buffer - 1;
    Name->Length = 2;
    v5 = (wchar_t *)((char *)v4 + Length);
    Name->Buffer = v5;
    if ( v5 < Path->Buffer )
    {
      v6 = 2;
LABEL_11:
      v7 = v6 - 2;
      Name->Length = v7;
      Name->Buffer = v5 + 1;
    }
    else
    {
      v6 = 2;
      while ( *v5 != 92 )
      {
        --v5;
        v6 += 2;
        Name->Buffer = v5;
        Name->Length = v6;
        if ( v5 < Path->Buffer )
          goto LABEL_11;
      }
      v7 = v6 - 2;
      Name->Buffer = v5 + 1;
      Name->Length = v7;
      if ( !v7 )
      {
        Name->Buffer = 0LL;
        v7 = 0;
      }
    }
    Name->MaximumLength = v7;
  }
  else
  {
    *Name = 0LL;
  }
}
