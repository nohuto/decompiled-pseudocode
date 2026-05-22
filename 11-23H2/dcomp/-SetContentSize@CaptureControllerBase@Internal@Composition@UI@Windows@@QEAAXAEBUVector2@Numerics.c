/*
 * XREFs of ?SetContentSize@CaptureControllerBase@Internal@Composition@UI@Windows@@QEAAXAEBUVector2@Numerics@Foundation@5@@Z @ 0x18018A3C8
 * Callers:
 *     ?put_ContentSize@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJUVector2@Numerics@Foundation@6@@Z @ 0x18017FD20 (-put_ContentSize@Partner@CaptureController@Internal@Composition@UI@Windows@@UEAAJUVector2@Numeri.c)
 * Callees:
 *     ??9Numerics@Foundation@Windows@@YA_NAEBUfloat2@012@0@Z @ 0x18006B2A8 (--9Numerics@Foundation@Windows@@YA_NAEBUfloat2@012@0@Z.c)
 *     ?ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z @ 0x1800719B4 (-ResourceSetFloatProperty@CDevice@DirectComposition@@QEAAXIIM@Z.c)
 */

void __fastcall Windows::UI::Composition::Internal::CaptureControllerBase::SetContentSize(
        Windows::UI::Composition::Internal::CaptureControllerBase *this,
        const struct Windows::Foundation::Numerics::Vector2 *a2)
{
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v4 = *(_QWORD *)a2;
  v5 = *((_QWORD *)this + 20);
  if ( Windows::Foundation::Numerics::operator!=((float *)&v5, (float *)&v4) )
  {
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      2,
      *(float *)a2);
    DirectComposition::CDevice::ResourceSetFloatProperty(
      *(DirectComposition::CDevice **)(*((_QWORD *)this + 3) + 456LL),
      *((_DWORD *)this + 32),
      3,
      *((float *)a2 + 1));
    *((_QWORD *)this + 20) = *(_QWORD *)a2;
  }
}
