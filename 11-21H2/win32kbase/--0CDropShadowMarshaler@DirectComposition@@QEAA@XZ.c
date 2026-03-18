/*
 * XREFs of ??0CDropShadowMarshaler@DirectComposition@@QEAA@XZ @ 0x1C0213B68
 * Callers:
 *     ?CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2@@Z @ 0x1C001520C (-CreateInternalResource@CApplicationChannel@DirectComposition@@QEAAJIPEAPEAVCResourceMarshaler@2.c)
 * Callees:
 *     <none>
 */

DirectComposition::CDropShadowMarshaler *__fastcall DirectComposition::CDropShadowMarshaler::CDropShadowMarshaler(
        DirectComposition::CDropShadowMarshaler *this)
{
  DirectComposition::CDropShadowMarshaler *result; // rax

  *((_QWORD *)this + 3) = 1LL;
  *((_DWORD *)this + 12) = 52;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &DirectComposition::CDropShadowMarshaler::`vftable';
  *((_QWORD *)this + 15) = 1065353216LL;
  *((_DWORD *)this + 25) = 1065353216;
  result = this;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 26) = 1091567616;
  return result;
}
