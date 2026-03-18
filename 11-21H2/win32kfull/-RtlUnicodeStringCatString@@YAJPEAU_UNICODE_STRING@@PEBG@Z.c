/*
 * XREFs of ?RtlUnicodeStringCatString@@YAJPEAU_UNICODE_STRING@@PEBG@Z @ 0x1C00A1014
 * Callers:
 *     ?OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z @ 0x1C00A0C7C (-OpenDeviceCfgKey@@YAJKPEAGKPEAPEAXH@Z.c)
 *     GetLocalMachineRegistryDWORDValues @ 0x1C00A0DF8 (GetLocalMachineRegistryDWORDValues.c)
 *     ?CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C0112E5C (-CreatePredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ?GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z @ 0x1C0112FC8 (-GetPredictionSettings@@YAJPEAUtagDEVICECONFIG_SETTING@@KPEAGK@Z.c)
 *     ReadTiltCalibrationData @ 0x1C01CBCFC (ReadTiltCalibrationData.c)
 *     WriteTiltCalibrationData @ 0x1C01CC254 (WriteTiltCalibrationData.c)
 *     ?WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z @ 0x1C0211054 (-WritePredictionSettings@@YAHPEAUtagDEVICECONFIG_SETTING@@KPEBGK@Z.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker @ 0x1C00A10C8 (RtlUnicodeStringValidateWorker.c)
 */

__int64 __fastcall RtlUnicodeStringCatString(struct _UNICODE_STRING *a1, const unsigned __int16 *a2, ULONG a3)
{
  unsigned __int16 *v3; // rcx
  NTSTATUS v4; // r10d
  _WORD *v5; // r11
  __int64 v6; // r9
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rax
  _WORD *v9; // rbx
  __int16 v10; // r9
  __int64 v11; // rdx
  unsigned __int64 v12; // r8

  v4 = RtlUnicodeStringValidateWorker(a1, (const size_t)a2, a3);
  if ( v4 >= 0 && v3 )
  {
    v6 = *((_QWORD *)v3 + 1);
    v7 = (unsigned __int64)v3[1] >> 1;
    v8 = (unsigned __int64)*v3 >> 1;
  }
  else
  {
    v6 = 0LL;
    v7 = 0LL;
    v8 = 0LL;
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
  v9 = (_WORD *)(v6 + 2 * v8);
  v10 = 0;
  v11 = 0x7FFFLL;
  v4 = 0;
  v12 = v7 - v8;
  if ( v12 )
  {
    while ( v11 )
    {
      if ( *v5 )
      {
        *v9++ = *v5++;
        --v11;
        ++v10;
        if ( --v12 )
          continue;
      }
      if ( v12 || !v11 )
        break;
      goto LABEL_14;
    }
  }
  else
  {
LABEL_14:
    if ( *v5 )
      v4 = -2147483643;
  }
  *v3 = 2 * (v10 + v8);
  return (unsigned int)v4;
}
