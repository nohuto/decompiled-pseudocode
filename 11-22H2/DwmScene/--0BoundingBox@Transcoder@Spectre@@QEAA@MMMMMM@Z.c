/*
 * XREFs of ??0BoundingBox@Transcoder@Spectre@@QEAA@MMMMMM@Z @ 0x1800E3714
 * Callers:
 *     _dynamic_initializer_for__Spectre::Transcoder::BoundingBox::Uninitialized__ @ 0x18000AB30 (_dynamic_initializer_for__Spectre--Transcoder--BoundingBox--Uninitialized__.c)
 *     _dynamic_initializer_for__Spectre::Transcoder::BoundingBox::Zero__ @ 0x18000AB80 (_dynamic_initializer_for__Spectre--Transcoder--BoundingBox--Zero__.c)
 * Callees:
 *     ?Validate@BoundingBox@Transcoder@Spectre@@QEAAXXZ @ 0x1800E3760 (-Validate@BoundingBox@Transcoder@Spectre@@QEAAXXZ.c)
 */

__int64 __fastcall Spectre::Transcoder::BoundingBox::BoundingBox(
        Spectre::Transcoder::BoundingBox *this,
        float a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7)
{
  __int64 v7; // rcx

  *((float *)this + 3) = a6;
  *((float *)this + 1) = a2;
  *((float *)this + 6) = a7;
  *((float *)this + 2) = a4;
  *((float *)this + 4) = a3;
  *((float *)this + 5) = a5;
  *(_BYTE *)this = 1;
  Spectre::Transcoder::BoundingBox::Validate(this);
  return v7;
}
