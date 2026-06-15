/*
 * XREFs of ?SetAudioFormat@CAudioMediaType@@IEAAJPEBUtWAVEFORMATEX@@IH@Z @ 0x180061460
 * Callers:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z @ 0x180060E14 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@MH@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800084A0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180008710 (--2@YAPEAX_K@Z.c)
 *     ?ValidateWaveFormat@@YAHPEBUtWAVEFORMATEX@@@Z @ 0x1800615A4 (-ValidateWaveFormat@@YAHPEBUtWAVEFORMATEX@@@Z.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 */

__int64 __fastcall CAudioMediaType::SetAudioFormat(
        void **this,
        const struct tWAVEFORMATEX *a2,
        unsigned int a3,
        int a4)
{
  unsigned int v4; // ebx
  unsigned int cbSize; // eax
  SIZE_T v10; // rbp
  void *v11; // rax
  _QWORD *v12; // rcx

  v4 = 0;
  if ( !a2 )
    return 2147942487LL;
  if ( a4 || (unsigned int)ValidateWaveFormat(a2) )
  {
    cbSize = a2->cbSize;
    if ( cbSize + 18 < cbSize )
      return (unsigned int)-2147024362;
    if ( cbSize + 18 <= a3 )
    {
      operator delete(this[2]);
      v10 = 18LL;
      this[2] = 0LL;
      if ( a2->wFormatTag != 1 )
        v10 = a2->cbSize + 18LL;
      v11 = operator new(v10);
      this[2] = v11;
      if ( v11 )
      {
        memcpy_0(v11, a2, v10);
        if ( a2->wFormatTag == 1 )
          *((_WORD *)this[2] + 8) = 0;
        v12 = this[2];
        if ( *(_WORD *)v12 )
          *((_DWORD *)this + 3) = ((*(_WORD *)v12 - 1) & 0xFFFD) != 0
                               && (*(_WORD *)v12 != 0xFFFE
                                || (*(_QWORD *)&GUID_00000001_0000_0010_8000_00aa00389b71.Data1 != v12[3]
                                 || *(_QWORD *)GUID_00000001_0000_0010_8000_00aa00389b71.Data4 != v12[4])
                                && (*(_QWORD *)&GUID_00000003_0000_0010_8000_00aa00389b71.Data1 != v12[3]
                                 || *(_QWORD *)GUID_00000003_0000_0010_8000_00aa00389b71.Data4 != v12[4]));
      }
      else
      {
        return (unsigned int)-2147024882;
      }
      return v4;
    }
  }
  return (unsigned int)-2147024809;
}
