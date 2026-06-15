/*
 * XREFs of ??0ResultException@wil@@QEAA@AEBV01@@Z @ 0x1800CC38C
 * Callers:
 *     <none>
 * Callees:
 *     _o___std_exception_copy_0 @ 0x180067912 (_o___std_exception_copy_0.c)
 *     ?assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z @ 0x1800CDB00 (-assign@shared_buffer@details@wil@@AEAAXPEAJ_K@Z.c)
 */

wil::ResultException *__fastcall wil::ResultException::ResultException(
        wil::ResultException *this,
        const struct wil::ResultException *a2)
{
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  *(_OWORD *)((char *)this + 8) = 0LL;
  o___std_exception_copy_0();
  *(_QWORD *)this = &wil::ResultException::`vftable';
  *(_OWORD *)((char *)this + 24) = *(_OWORD *)((char *)a2 + 24);
  *(_OWORD *)((char *)this + 40) = *(_OWORD *)((char *)a2 + 40);
  *(_OWORD *)((char *)this + 56) = *(_OWORD *)((char *)a2 + 56);
  *(_OWORD *)((char *)this + 72) = *(_OWORD *)((char *)a2 + 72);
  *(_OWORD *)((char *)this + 88) = *(_OWORD *)((char *)a2 + 88);
  *(_OWORD *)((char *)this + 104) = *(_OWORD *)((char *)a2 + 104);
  *(_OWORD *)((char *)this + 120) = *(_OWORD *)((char *)a2 + 120);
  *(_OWORD *)((char *)this + 136) = *(_OWORD *)((char *)a2 + 136);
  *(_OWORD *)((char *)this + 152) = *(_OWORD *)((char *)a2 + 152);
  *((_QWORD *)this + 21) = *((_QWORD *)a2 + 21);
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  wil::details::shared_buffer::assign(
    (wil::ResultException *)((char *)this + 176),
    *((int **)a2 + 22),
    *((_QWORD *)a2 + 23));
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  wil::details::shared_buffer::assign(
    (wil::ResultException *)((char *)this + 192),
    *((int **)a2 + 24),
    *((_QWORD *)a2 + 25));
  return this;
}
