/*
 * XREFs of ?GetCompressedBytes@CCompressedSourceBitmap@@UEAAJPEAPEAXPEAK@Z @ 0x180108B60
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800045F8 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CCompressedSourceBitmap::GetCompressedBytes(
        CCompressedSourceBitmap *this,
        void **a2,
        unsigned int *a3)
{
  void *v3; // rax
  unsigned int v4; // ebx

  v3 = (void *)*((_QWORD *)this + 4);
  v4 = 0;
  if ( v3 )
  {
    *a2 = v3;
    *a3 = *((_DWORD *)this + 10);
  }
  else
  {
    v4 = -2003292412;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2003292412, 0xDDu);
  }
  return v4;
}
