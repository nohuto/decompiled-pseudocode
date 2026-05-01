/*
 * XREFs of ??0Exception@cereal@@QEAA@AEBU01@@Z @ 0x1803E2D78
 * Callers:
 *     <none>
 * Callees:
 *     ??0exception@std@@QEAA@AEBV01@@Z @ 0x18038CD08 (--0exception@std@@QEAA@AEBV01@@Z.c)
 */

cereal::Exception *__fastcall cereal::Exception::Exception(cereal::Exception *this, const struct cereal::Exception *a2)
{
  std::exception::exception(this, a2);
  *(_QWORD *)this = &cereal::Exception::`vftable';
  return this;
}
