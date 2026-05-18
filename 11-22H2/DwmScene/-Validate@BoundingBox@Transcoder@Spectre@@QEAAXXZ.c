/*
 * XREFs of ?Validate@BoundingBox@Transcoder@Spectre@@QEAAXXZ @ 0x1800E3760
 * Callers:
 *     ??0BoundingBox@Transcoder@Spectre@@QEAA@MMMMMM@Z @ 0x1800E3714 (--0BoundingBox@Transcoder@Spectre@@QEAA@MMMMMM@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Spectre::Transcoder::BoundingBox::Validate(Spectre::Transcoder::BoundingBox *this)
{
  __int64 v1; // rdx
  float *v2; // rax

  v1 = 0LL;
  v2 = (float *)((char *)this + 4);
  while ( v1 < 3 )
  {
    if ( v2[3] < *v2 )
    {
      *(_BYTE *)this = 0;
      *((_DWORD *)this + 1) = 2139095039;
      *((_DWORD *)this + 2) = 2139095039;
      *((_DWORD *)this + 3) = 2139095039;
      *((_DWORD *)this + 4) = -8388609;
      *((_DWORD *)this + 5) = -8388609;
      *((_DWORD *)this + 6) = -8388609;
      return;
    }
    ++v1;
    ++v2;
  }
}
