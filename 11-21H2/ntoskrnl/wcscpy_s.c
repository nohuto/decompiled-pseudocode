/*
 * XREFs of wcscpy_s @ 0x1403E76C0
 * Callers:
 *     HalGetEnvironmentVariableEx @ 0x1403DAAF0 (HalGetEnvironmentVariableEx.c)
 *     HalSetEnvironmentVariableEx @ 0x140508800 (HalSetEnvironmentVariableEx.c)
 *     sub_14050B88C @ 0x14050B88C (sub_14050B88C.c)
 *     RtlConvertSidToUnicodeString @ 0x140669DD0 (RtlConvertSidToUnicodeString.c)
 *     sub_140676314 @ 0x140676314 (sub_140676314.c)
 *     sub_1406768BC @ 0x1406768BC (sub_1406768BC.c)
 *     sub_140676AC0 @ 0x140676AC0 (sub_140676AC0.c)
 *     sub_140676B80 @ 0x140676B80 (sub_140676B80.c)
 *     sub_140802A64 @ 0x140802A64 (sub_140802A64.c)
 *     sub_1408038B4 @ 0x1408038B4 (sub_1408038B4.c)
 *     sub_14080D370 @ 0x14080D370 (sub_14080D370.c)
 *     sub_140812698 @ 0x140812698 (sub_140812698.c)
 *     sub_14091D7D0 @ 0x14091D7D0 (sub_14091D7D0.c)
 *     sub_14091E3D0 @ 0x14091E3D0 (sub_14091E3D0.c)
 *     sub_140952178 @ 0x140952178 (sub_140952178.c)
 *     sub_1409F8680 @ 0x1409F8680 (sub_1409F8680.c)
 *     sub_1409FB95C @ 0x1409FB95C (sub_1409FB95C.c)
 *     sub_1409FBD64 @ 0x1409FBD64 (sub_1409FBD64.c)
 *     sub_1409FC038 @ 0x1409FC038 (sub_1409FC038.c)
 *     sub_1409FC108 @ 0x1409FC108 (sub_1409FC108.c)
 *     sub_1409FC2D0 @ 0x1409FC2D0 (sub_1409FC2D0.c)
 *     sub_1409FCDF8 @ 0x1409FCDF8 (sub_1409FCDF8.c)
 *     sub_1409FE5F4 @ 0x1409FE5F4 (sub_1409FE5F4.c)
 *     sub_140A15C98 @ 0x140A15C98 (sub_140A15C98.c)
 *     sub_140A1DB40 @ 0x140A1DB40 (sub_140A1DB40.c)
 *     sub_140A70DE0 @ 0x140A70DE0 (sub_140A70DE0.c)
 *     sub_140A710B8 @ 0x140A710B8 (sub_140A710B8.c)
 *     sub_140AA9A28 @ 0x140AA9A28 (sub_140AA9A28.c)
 *     sub_140AAD490 @ 0x140AAD490 (sub_140AAD490.c)
 *     sub_140B1CC84 @ 0x140B1CC84 (sub_140B1CC84.c)
 * Callees:
 *     __misaligned_access @ 0x1403A7020 (__misaligned_access.c)
 */

errno_t __cdecl wcscpy_s(wchar_t *Dst, rsize_t SizeInWords, const wchar_t *Src)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  wchar_t v6; // ax

  if ( Dst && SizeInWords )
  {
    if ( Src )
    {
      v5 = (char *)Dst - (char *)Src;
      while ( 1 )
      {
        v6 = *Src;
        *(const wchar_t *)((char *)Src + v5) = *Src;
        ++Src;
        if ( !v6 )
          return 0;
        if ( !--SizeInWords )
        {
          v4 = 34;
          goto LABEL_9;
        }
      }
    }
    else
    {
      v4 = 22;
LABEL_9:
      *Dst = 0;
      _misaligned_access();
      return v4;
    }
  }
  else
  {
    _misaligned_access();
    return 22;
  }
}
