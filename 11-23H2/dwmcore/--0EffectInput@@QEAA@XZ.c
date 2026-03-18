/*
 * XREFs of ??0EffectInput@@QEAA@XZ @ 0x1800DEB98
 * Callers:
 *     ??0EffectStage@@QEAA@XZ @ 0x1800A9340 (--0EffectStage@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

EffectInput *__fastcall EffectInput::EffectInput(EffectInput *this)
{
  EffectInput *result; // rax

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_BYTE *)this + 16) = 0;
  result = this;
  *((_OWORD *)this + 3) = 0LL;
  return result;
}
