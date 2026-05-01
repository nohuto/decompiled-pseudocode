/*
 * XREFs of ??0UMSFreeThreadProxy@details@Concurrency@@QEAA@PEAUIThreadProxyFactory@12@PEAXI@Z @ 0x180003B68
 * Callers:
 *     sub_180003AD8 @ 0x180003AD8 (sub_180003AD8.c)
 * Callees:
 *     sub_180003BC8 @ 0x180003BC8 (sub_180003BC8.c)
 */

Concurrency::details::UMSFreeThreadProxy *__fastcall Concurrency::details::UMSFreeThreadProxy::UMSFreeThreadProxy(
        Concurrency::details::UMSFreeThreadProxy *this,
        struct Concurrency::details::IThreadProxyFactory *a2,
        void *a3)
{
  sub_180003BC8(this, a2, a3);
  *(_QWORD *)this = off_180020280;
  *((_QWORD *)this + 1) = off_1800202C0;
  *((_QWORD *)this + 5) = off_180020308;
  *((_QWORD *)this + 6) = off_180020240;
  *((_QWORD *)this + 7) = off_180020208;
  *((_QWORD *)this + 8) = off_1800201D0;
  return this;
}
