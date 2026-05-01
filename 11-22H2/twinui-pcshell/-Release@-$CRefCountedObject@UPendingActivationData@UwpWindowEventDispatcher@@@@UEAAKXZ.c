/*
 * XREFs of ?Release@?$CRefCountedObject@UPendingActivationData@UwpWindowEventDispatcher@@@@UEAAKXZ @ 0x1804C8A10
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     ??1PendingActivationData@WindowEventDispatcher@@QEAA@XZ @ 0x1804BCB9C (--1PendingActivationData@WindowEventDispatcher@@QEAA@XZ.c)
 */

__int64 __fastcall CRefCountedObject<UwpWindowEventDispatcher::PendingActivationData>::Release(
        volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement(a1 + 10);
  if ( !v2 && a1 )
  {
    WindowEventDispatcher::PendingActivationData::~PendingActivationData((WindowEventDispatcher::PendingActivationData *)(a1 + 2));
    operator delete((void *)a1);
  }
  return v2;
}
