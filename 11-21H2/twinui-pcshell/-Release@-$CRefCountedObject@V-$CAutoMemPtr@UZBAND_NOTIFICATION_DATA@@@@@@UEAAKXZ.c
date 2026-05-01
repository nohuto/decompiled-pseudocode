/*
 * XREFs of ?Release@?$CRefCountedObject@V?$CAutoMemPtr@UZBAND_NOTIFICATION_DATA@@@@@@UEAAKXZ @ 0x180027780
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801887BC (--3@YAXPEAX_K@Z.c)
 */

__int64 __fastcall CRefCountedObject<CAutoMemPtr<ZBAND_NOTIFICATION_DATA>>::Release(volatile signed __int32 *a1)
{
  unsigned __int32 v2; // edi
  char *v3; // rsi

  v2 = _InterlockedDecrement(a1 + 4);
  if ( !v2 && a1 )
  {
    v3 = (char *)*((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 1) = 0LL;
    if ( v3 )
    {
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v3 + 8);
      operator delete(v3, 0x10uLL);
    }
    operator delete((void *)a1, 0x18uLL);
  }
  return v2;
}
